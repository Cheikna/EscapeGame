// Fill out your copyright notice in the Description page of Project Settings.

#include "Grabber.h"
#include "Engine/World.h"
#include "Engine.h"
#include "DrawDebugHelpers.h"

#define OUT

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UGrabber::Grab()
{
	auto hitResult = getFirstPhysicsBodyReach();
	auto componentToGrab = hitResult.GetComponent();
	auto actorHit = hitResult.GetActor();

	if (actorHit)
	{
		physicsHandle->GrabComponent(
			componentToGrab,
			NAME_None,
			componentToGrab->GetOwner()->GetActorLocation(),
			true
		);
	}
}

void UGrabber::Release()
{
	physicsHandle->ReleaseComponent();

}

// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	//Physics Component
	FindPhysicsHandleComponent();

	//Input Component
	setUpInputComponent();
	// ...
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	

	if (physicsHandle->GrabbedComponent)
	{
		physicsHandle->SetTargetLocation(getReachLineEnd());
	}
	
}

void UGrabber::FindPhysicsHandleComponent()
{
	physicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (physicsHandle == nullptr)
	{
		AActor* owner = GetOwner();
		UE_LOG(LogTemp, Error, TEXT("%s missing physics handle component"), *owner->GetName());
	}
	else
	{
		
	}
}

void UGrabber::setUpInputComponent()
{
	inputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
	if (physicsHandle)
	{
		inputComponent->BindAction("Grab", IE_Pressed, this, &UGrabber::Grab);
		inputComponent->BindAction("Grab", IE_Released, this, &UGrabber::Release);
	}
	else
	{
		AActor* owner = GetOwner();
		UE_LOG(LogTemp, Error, TEXT("%s missing input component"), *owner->GetName());
	}
}

FHitResult UGrabber::getFirstPhysicsBodyReach()
{
	
	//Query parametres
	FCollisionQueryParams traceParameters = FCollisionQueryParams(FName(TEXT("")), false, GetOwner());
	//RayCast
	FHitResult hit;
	GetWorld()->LineTraceSingleByObjectType(
		OUT hit,
		getReachLineStart(),
		getReachLineEnd(),
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		traceParameters
	);


	return hit;

}

FVector UGrabber::getReachLineStart()
{
	FVector playerViewPointLocation;
	FRotator playerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT playerViewPointLocation,
		OUT playerViewPointRotation
	);

	return playerViewPointLocation;
}



FVector UGrabber::getReachLineEnd()
{
	FVector playerViewPointLocation;
	FRotator playerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT playerViewPointLocation,
		OUT playerViewPointRotation
	);

	return playerViewPointLocation + playerViewPointRotation.Vector() * reach;
}

