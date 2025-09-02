// Copyright Epic Games, Inc. All Rights Reserved.

#include "BoyAdventureUSFXGameMode.h"
#include "BoyAdventureUSFXCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "ObstaculoPared.h"
#include "ObstaculoEspina.h"
#include "ParedMetal.h"
#include "Obstaculo.h"
#include "ObstaculoPiso.h"
#include "Plataforma.h"

ABoyAdventureUSFXGameMode::ABoyAdventureUSFXGameMode()
{
    //PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABoyAdventureUSFXGameMode::BeginPlay()
{

    // Verifica que el mundo esté disponible
    UWorld* Mundo = GetWorld();
    if (Mundo)
    {
        CrearObstaculos();

        Plataforma01 = Mundo->SpawnActor<APlataforma>(APlataforma::StaticClass());
        if (Plataforma01)
        {
            Plataforma01->setNumeroPisos(4);
            Plataforma01->setNumeroComponentesPorPiso(10);
            Plataforma01->setAlturaEntrePisos(150.f);
            Plataforma01->setAlturaComponente(20.f);
            Plataforma01->setAnchoComponente(200.f);
            Plataforma01->setProfundidadComponente(100.f);
            Plataforma01->setSeparacionComponentes(50.f);
            Plataforma01->setPosicionInicial(FVector(-700.f, -300.f, 350.f));
            Plataforma01->generarPlataforma();
        }

        // Define la ubicación y rotación del obstáculo
        FVector Ubicacion(0.0f, 0.0f, 400.0f); // Ajusta según tu escena
        FRotator Rotacion(0.0f, 0.0f, 0.0f);

        // Crear gradas en la posición que yo elija
        FVector PuntoDeInicio(-560.f, 840.f, 140.f);
        CrearGradas(PuntoDeInicio, 10, 110.f, 60.f);


        // Spawnea el actor
        FActorSpawnParameters ParametrosSpawn;
        ParametrosSpawn.Owner = this;
        ParametrosSpawn.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

        Obstaculo = Mundo->SpawnActor<AObstaculoPared>(AObstaculoPared::StaticClass(), Ubicacion, Rotacion, ParametrosSpawn);


        // Define la ubicación y rotación del obstáculo
        FVector Ubicacion01(200.0f, -300.0f, 400.0f); // Ajusta según tu escena
        FRotator Rotacion02(0.0f, 0.0f, 0.0f);

        ParedMetal01 = Mundo->SpawnActor<AParedMetal>(AParedMetal::StaticClass(), Ubicacion, Rotacion);
    }

    GetWorld()->GetTimerManager().SetTimer(
    MovimientoTimer,
    this,
    &ABoyAdventureUSFXGameMode::MoverActorAleatoriamente,
    Intervalo,
    true
    );

    for (int32 i = 25; i < aObstaculos.Num(); ++i)
    {
        if (aObstaculos[i])
        {
            aObstaculos[i]->Desactivarse();
        }
    }

    aObstaculos[17]->Desactivarse();
}

void ABoyAdventureUSFXGameMode::CrearObstaculos()
{
    FVector PosicionInicial(-200.f, 200.f, 300.f); // Altura inicial
    float Espaciado = 150.f;

    // Obstáculos en X
    for (int32 i = 0; i < 10; ++i)
    {
        FVector SpawnLocation = PosicionInicial + FVector(i * Espaciado, 0.f, 0.f);
        FRotator SpawnRotation = FRotator::ZeroRotator;

        AObstaculo* NuevoObstaculo = GetWorld()->SpawnActor<AObstaculo>(
            AObstaculo::StaticClass(),
            SpawnLocation,
            SpawnRotation
        );
        if (NuevoObstaculo)
        {
            aObstaculos.Add(NuevoObstaculo);
        }
    }

    PosicionInicial = FVector(-200.f, -600.f, 300.f); // Altura inicial
    for (int32 i = 0; i < 25; ++i)
    {
        FVector SpawnLocation = PosicionInicial + FVector(0.f, i * Espaciado, 0.f);
        FRotator SpawnRotation = FRotator::ZeroRotator;

        AObstaculo* NuevaParedMetal = GetWorld()->SpawnActor<AParedMetal>(AParedMetal::StaticClass(), SpawnLocation, SpawnRotation);
        if (NuevaParedMetal)
        {
            aObstaculos.Add(NuevaParedMetal);
        }
    }

}

void ABoyAdventureUSFXGameMode::CrearGradas(FVector PuntoInicial, int32 CantidadEscalones, float Espaciado, float AlturaEscalon)
{
    for (int32 i = 0; i < CantidadEscalones; ++i)
    {
        FVector SpawnLocation = PuntoInicial + FVector(i * Espaciado, 0.f, i * AlturaEscalon);
        FRotator SpawnRotation = FRotator::ZeroRotator;

        AObstaculoPiso* NuevoEscalon = GetWorld()->SpawnActor<AObstaculoPiso>(
            AObstaculoPiso::StaticClass(),
            SpawnLocation,
            SpawnRotation
        );

        if (NuevoEscalon)
        {
            aObstaculos.Add(NuevoEscalon);

            // --- Personalizar movimientos ---
            if (i == 3) // 4to escalón sube y baja
            {
                NuevoEscalon->bMoverEnZ = true;
                NuevoEscalon->Amplitud = 150.f;
                NuevoEscalon->Velocidad = 2.f;
            }
            else if (i == 6) // 7mo escalón se mueve izquierda/derecha
            {
                NuevoEscalon->bMoverEnY = true;
                NuevoEscalon->Amplitud = 200.f;
                NuevoEscalon->Velocidad = 1.5f;
            }
        }
    }
}

void ABoyAdventureUSFXGameMode::EliminarComponentePlataforma()
{
    if (Plataforma01)
    {
        Plataforma01->EliminarComponenteAleatorio();
    }
}




void ABoyAdventureUSFXGameMode::MoverActorAleatoriamente()  
{  
    FVector PosicionActual = Obstaculo->GetActorLocation();

    float NuevoX = FMath::RandRange(-RangoMovimiento.X, RangoMovimiento.X);
    float NuevoY = FMath::RandRange(-RangoMovimiento.Y, RangoMovimiento.Y);
    

    FVector NuevaPosicion = FVector(NuevoX, NuevoY, PosicionActual.Z);

    Obstaculo->SetActorLocation(NuevaPosicion);

    if (ObstaculoEspina)
    {
        FVector PosicionActualEspina = ObstaculoEspina->GetActorLocation();

        float NuevoXEspina = FMath::RandRange(-RangoMovimiento.X, RangoMovimiento.X);
        float NuevoYEspina = FMath::RandRange(-RangoMovimiento.Y, RangoMovimiento.Y);

        FVector NuevaPosicionEspina = FVector(NuevoXEspina, NuevoYEspina, PosicionActualEspina.Z);
        ObstaculoEspina->SetActorLocation(NuevaPosicionEspina);
    }

   // Obtén el actor principal del mundo  
   /*AActor* OwnerActor = Cast<AActor>(GetOwner());  
   if (OwnerActor)  
   {  
       FVector PosicionActual = OwnerActor->GetActorLocation();  

       float NuevoX = FMath::RandRange(-RangoMovimiento.X, RangoMovimiento.X);  
       float NuevoY = FMath::RandRange(-RangoMovimiento.Y, RangoMovimiento.Y);  

       FVector NuevaPosicion = FVector(NuevoX, NuevoY, PosicionActual.Z);  

       OwnerActor->SetActorLocation(NuevaPosicion);  
   }  */
}

