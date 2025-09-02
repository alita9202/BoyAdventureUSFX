#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BoyAdventureUSFXGameMode.generated.h"


class AObstaculo;
class AObstaculoPared;
class AParedMetal;
class ATrampaSierra;
class AObstaculoEspina;
class AObstaculoPiso;
class APlataforma;


UCLASS(minimalapi)
class ABoyAdventureUSFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABoyAdventureUSFXGameMode();

	// Función para mover los actores
	void MoverActorAleatoriamente();
	TArray<AObstaculo*> aObstaculos;

public:
	virtual void BeginPlay() override;
	void CrearObstaculos();
	void CrearGradas(FVector PuntoInicial, int32 CantidadEscalones, float Espaciado, float AlturaEscalon);

private:
	AObstaculoPared* Obstaculo;
	AParedMetal* ParedMetal01;
	AObstaculo* ObstaculoEspina;

	ATrampaSierra* ts01;
	ATrampaSierra* ts02;

	APlataforma* Plataforma01;
private:
	// Timer para movimiento
	FTimerHandle MovimientoTimer;
	FTimerHandle EliminarComponentePlataformaTimer;

	// Configuración de movimiento
	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float Intervalo = 4.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	FVector RangoMovimiento = FVector(500.0f, 500.0f, 0.0f); 

public:
	void EliminarComponentePlataforma();

};




