// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ESCAPEGAME_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void OpenDoor();
	void CloseDoor();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private :
	UPROPERTY(EditAnywhere)
	float openAngle = 90.0f;
	UPROPERTY(EditAnywhere)
	ATriggerVolume* pressurePlate;
	AActor* owner;
	UPROPERTY(EditAnywhere)
	float doorCloseDelay = 1.0f;
	float lastDoorOpenTime;
	float GetTotalMassOfActorsOnPlate();
	
		
	
};
