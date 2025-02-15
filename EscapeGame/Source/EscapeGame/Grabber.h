// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/InputComponent.h"
#include "Grabber.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ESCAPEGAME_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	//Distance � laquelle on peut atteindre un objet
	float reach = 100.0f;

	UPhysicsHandleComponent* physicsHandle = nullptr;
	UInputComponent* inputComponent = nullptr;

	void Grab();
	void Release();
	void FindPhysicsHandleComponent();
	void setUpInputComponent();
	FHitResult getFirstPhysicsBodyReach();
	FVector getReachLineStart();
	FVector getReachLineEnd();
	
	
};
