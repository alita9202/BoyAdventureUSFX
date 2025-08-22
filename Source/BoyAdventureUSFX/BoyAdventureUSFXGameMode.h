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

	// Función para mover los actores
	void MoverActorAleatoriamente();

public:
	virtual void BeginPlay() override;

private:
	// Actores de obstáculos
	AObstaculoPared* Obstaculo;
	AParedMetal* ParedMetal01;
	AObstaculoEspina* ObstaculoEspina;  

private:
	// Timer para movimiento
	FTimerHandle MovimientoTimer;

	// Configuración de movimiento
	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float Intervalo = 4.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	FVector RangoMovimiento = FVector(500.0f, 500.0f, 0.0f); 
};




