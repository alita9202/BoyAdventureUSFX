// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoEspina.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AObstaculoEspina::AObstaculoEspina()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Initialize properties
	MallaObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	RootComponent = MallaObstaculo;
	MallaObstaculo->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaObstaculo(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));

	if (ObjetoMallaObstaculo.Succeeded())
	{
		MallaObstaculo->SetStaticMesh(ObjetoMallaObstaculo.Object);

		//MallaBloque->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
}

// Called when the game starts or when spawned
void AObstaculoEspina::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObstaculoEspina::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

