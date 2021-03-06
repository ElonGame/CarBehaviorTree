// Fill out your copyright notice in the Description page of Project Settings.

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Components/SplineComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/Actor.h"
#include "WayPoint.generated.h"

UCLASS()
class CARBEHAVIORTREE_API AWayPoint : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWayPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UPROPERTY(EditAnywhere)
	//ADummyCar* CarRef;


	UPROPERTY(EditAnywhere)
	USplineComponent *SP;

	UPROPERTY(EditAnywhere)
	TArray<AWayPoint*> ConnectedSpline;

	void SetActorHeight(float Height);

	UPROPERTY(EditAnywhere)
	int ID = 0;

	UPROPERTY(EditAnywhere)
	int SpeedLimit = 0;

	float TotalDistance = 0.0;

};
