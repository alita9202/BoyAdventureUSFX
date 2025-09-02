// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoPared.h"


AObstaculoPared::AObstaculoPared() : AObstaculo()
{
    PrimaryActorTick.bCanEverTick = true;

    MallaObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaObstaculo"));
    RootComponent = MallaObstaculo;

    // Cargar malla
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaObstaculo(TEXT("StaticMesh'/Game/StarterContent/Architecture/Wall_400x200.Wall_400x200'"));
    if (ObjetoMallaObstaculo.Succeeded())
    {
        MallaObstaculo->SetStaticMesh(ObjetoMallaObstaculo.Object);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No se pudo cargar la malla de AObstaculoPared!"));
    }

    // Cargar material
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Ground_Gravel.M_Ground_Gravel'"));
    if (MaterialAsset.Succeeded())
    {
        MallaObstaculo->SetMaterial(0, MaterialAsset.Object);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No se pudo cargar el material de AObstaculoPared!"));
    }

    // Inicializar variables
    Estilo = "Pared no definido";
    Material = "Material no definido";
    Activo = true;
    AbiertoCompletamente = false;
    DesplazamientoPuerta = 0.0f;
    LimiteDesplazamientoPuerta = 150.0f;
}


void AObstaculoPared::Activarse() 
{
    if (DesplazamientoPuerta >= LimiteDesplazamientoPuerta)
    {
        AbiertoCompletamente = true;
        Activo = false; // Desactiva el obstáculo si se ha abierto completamente
        UE_LOG(LogTemp, Warning, TEXT("Obstáculo abierto completamente"));
    }
    else if (Activo) {

        FVector PosicionActual = GetActorLocation();
        float NuevoX = PosicionActual.X + 0.8f;
        DesplazamientoPuerta += 0.8f; // Incrementa el desplazamiento de la puerta
        FVector NuevaPosicion = FVector(NuevoX, PosicionActual.Y, PosicionActual.Z);
        SetActorLocation(NuevaPosicion);
    }
}

void AObstaculoPared::Desactivarse() 
{
	Activo = false;
}

void AObstaculoPared::BeginPlay()
{
    Super::BeginPlay();
}

void AObstaculoPared::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    Activarse();
}


