#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BoyAdventureUSFXGameMode.generated.h"


class AObstaculoPared;
class AParedMetal;
class AObstaculoEspina;  

UCLASS(minimalapi)
class ABoyAdventureUSFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABoyAdventureUSFXGameMode();

	// Funci�n para mover los actores
	void MoverActorAleatoriamente();

public:
	virtual void BeginPlay() override;

private:
	// Actores de obst�culos
	AObstaculoPared* Obstaculo;
	AParedMetal* ParedMetal01;
	AObstaculoEspina* ObstaculoEspina;  

private:
	// Timer para movimiento
	FTimerHandle MovimientoTimer;

	// Configuraci�n de movimiento
	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float Intervalo = 4.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	FVector RangoMovimiento = FVector(500.0f, 500.0f, 0.0f); 
};




