// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoPiso.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AObstaculoPiso::AObstaculoPiso()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaObstaculoTrampa(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (ObjetoMallaObstaculoTrampa.Succeeded())
	{
		MallaObstaculo->SetStaticMesh(ObjetoMallaObstaculoTrampa.Object);
	}

	if (ObjetoMallaObstaculoTrampa.Succeeded())
	{
		MallaObstaculo->SetStaticMesh(ObjetoMallaObstaculoTrampa.Object);
		MallaObstaculo->SetWorldScale3D(FVector(1.5f, 1.0f, 0.5f));
		// X = ancho, Y = largo, Z = altura (achatado)
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Rock_Sandstone.M_Rock_Sandstone'"));

	if (MaterialAsset.Succeeded())
	{
		MallaObstaculo->SetMaterial(0, MaterialAsset.Object); // El índice 0 es el primer slot de material
	}
}

void AObstaculoPiso::OnOverlapsBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void AObstaculoPiso::Activarse()
{
}

void AObstaculoPiso::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

void AObstaculoPiso::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NuevaPos = PosicionInicial;
	float Tiempo = GetWorld()->GetTimeSeconds();

	// Movimiento vertical (sube y baja)
	if (bMoverEnZ)
	{
		NuevaPos.Z += FMath::Sin(Tiempo * Velocidad) * Amplitud;
	}

	// Movimiento horizontal (izquierda a derecha)
	if (bMoverEnY)
	{
		NuevaPos.Y += FMath::Sin(Tiempo * Velocidad) * Amplitud;
	}

	SetActorLocation(NuevaPos);
}
