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
	UE_LOG(LogTemp, Warning, TEXT("Grabb pressed"));

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
	UE_LOG(LogTemp, Warning, TEXT("Grabb release"));
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

	FVector playerViewPointLocation;
	FRotator playerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT playerViewPointLocation,
		OUT playerViewPointRotation
	);

	FVector lineTraceEnd = playerViewPointLocation + playerViewPointRotation.Vector() * reach;
	if (physicsHandle->GrabbedComponent)
	{
		physicsHandle->SetTargetLocation(lineTraceEnd);
	}
	
}

void UGrabber::FindPhysicsHandleComponent()
{
	physicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (physicsHandle)
	{

	}
	else
	{
		AActor* owner = GetOwner();
		UE_LOG(LogTemp, Error, TEXT("%s missing physics handle component"), *owner->GetName());
	}
}

void UGrabber::setUpInputComponent()
{
	inputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
	if (physicsHandle)
	{
		UE_LOG(LogTemp, Warning, TEXT("input component found"));
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
	FVector playerViewPointLocation;
	FRotator playerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT playerViewPointLocation,
		OUT playerViewPointRotation
	);

	/*UE_LOG(LogTemp, Warning, TEXT("Location: %s , Rotation: %s"),
	*playerViewPointLocation.ToString(),
	*playerViewPointRotation.ToString()
	);*/

	FVector lineTraceEnd = playerViewPointLocation + playerViewPointRotation.Vector() * reach;

	/*DrawDebugLine(
	GetWorld(),
	playerViewPointLocation,
	lineTraceEnd,
	FColor(0, 255, 0),
	false,
	0.f,
	0.f,
	10.f
	);*/

	//Query parametres
	FCollisionQueryParams traceParameters = FCollisionQueryParams(FName(TEXT("")), false, GetOwner());

	//RayCast
	FHitResult hit;
	GetWorld()->LineTraceSingleByObjectType(
		OUT hit,
		playerViewPointLocation,
		lineTraceEnd,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		traceParameters
	);

	AActor* actorHit = hit.GetActor();
	if (actorHit)
		UE_LOG(LogTemp, Warning, TEXT("Raycast vise :  %s"), *(actorHit)->GetName());

	return hit;

}

