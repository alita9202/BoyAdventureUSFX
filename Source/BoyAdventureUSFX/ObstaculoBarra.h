// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoBarra.generated.h"

/**
 * 
 */
UCLASS()
class BOYADVENTUREUSFX_API AObstaculoBarra : public AObstaculo
{
	GENERATED_BODY()
	

private:
	bool Activo;
	bool AbiertoCompletamente;
	float DesplazamientoPuerta;
	float LimiteDesplazamientoPuerta;
	float DireccionMovimiento;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	AObstaculoBarra();

public:
	FString Estilo;
	FString Material;

	virtual void Activarse() override;

};
