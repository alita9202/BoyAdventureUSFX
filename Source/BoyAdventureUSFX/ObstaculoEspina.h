// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObstaculoEspina.generated.h"

UCLASS()
class BOYADVENTUREUSFX_API AObstaculoEspina : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObstaculoEspina();

public:
	FString color;
	FString textura;

	//void Mover();

protected:
	//float DimensionesCocina;
	FString TipoObstaculo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//class UStaticMeshComponent* MallaObstaculo;
	UStaticMeshComponent* MallaObstaculo;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
