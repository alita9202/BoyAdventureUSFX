// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoEspinaCactus.h"

AObstaculoEspinaCactus::AObstaculoEspinaCactus() : AObstaculoEspina()
{
    // Constructor logic specific to AObstaculoPared can be added here
    Estilo = "No definido";
    Material = "Material no definido";

    // Cargar el material
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Ground_Grass.M_Ground_Grass'"));

    if (MaterialAsset.Succeeded())
    {
        MallaObstaculo->SetMaterial(0, MaterialAsset.Object); // El índice 0 es el primer slot de material
    }
}

void AObstaculoEspinaCactus::BeginPlay()
{
}

void AObstaculoEspinaCactus::Tick(float DeltaTime)
{
}