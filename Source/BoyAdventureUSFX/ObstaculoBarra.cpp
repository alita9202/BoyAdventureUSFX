// Fill out your copyright notice in the Description page of Project Settings.

#include "ObstaculoBarra.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"

AObstaculoBarra::AObstaculoBarra() : AObstaculo()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear malla del obstáculo
    MallaObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaObstaculo"));
    RootComponent = MallaObstaculo;

    // Cargar la malla desde el contenido
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaObstaculo(
        TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'")
    );

    if (ObjetoMallaObstaculo.Succeeded())
    {
        MallaObstaculo->SetStaticMesh(ObjetoMallaObstaculo.Object);
    }

    // Variables de estado del obstáculo
    Estilo = "Barra vertical";
    Material = "Material no definido";
    Activo = true;
    AbiertoCompletamente = false;
    DesplazamientoPuerta = 0.0f;
    LimiteDesplazamientoPuerta = 150.0f; // Altura máxima que se desplaza

    DireccionMovimiento = -1.0f; // -1 hacia abajo, +1 hacia arriba


    // Cargar el material
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(
        TEXT("Material'/Game/StarterContent/Materials/M_Metal_Copper.M_Metal_Copper'")
    );

    if (MaterialAsset.Succeeded())
    {
        MallaObstaculo->SetMaterial(0, MaterialAsset.Object);
    }
}

void AObstaculoBarra::Activarse()
{
    if (!Activo) return;

    FVector PosicionActual = GetActorLocation();
    float NuevoZ = PosicionActual.Z + (DireccionMovimiento * 3.0f);
    DesplazamientoPuerta += 3.0f;

    if (DesplazamientoPuerta >= LimiteDesplazamientoPuerta)
    {
        DireccionMovimiento *= -1;   // Cambia dirección (subir/bajar)
        DesplazamientoPuerta = 0.0f; // Reinicia desplazamiento
    }

    FVector NuevaPosicion(PosicionActual.X, PosicionActual.Y, NuevoZ);
    SetActorLocation(NuevaPosicion);
}

void AObstaculoBarra::BeginPlay()
{
    Super::BeginPlay();
}

void AObstaculoBarra::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    Activarse();

    FRotator RotacionActual = GetActorRotation();
    RotacionActual.Yaw += 90.0f * DeltaTime; // 90 grados por segundo
    SetActorRotation(RotacionActual);
}




