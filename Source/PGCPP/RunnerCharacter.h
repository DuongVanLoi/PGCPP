// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RunnerCharacter.generated.h"

UCLASS()
class PGCPP_API ARunnerCharacter : public ACharacter
{
	GENERATED_BODY()

		UPROPERTY(VisibleAnyWhere)
		class UCameraComponent* SideViewCamera;

public:
	// Sets default values for this character's properties
	ARunnerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	void MoveRight(float value);

public:
	class UCameraComponent* GetSideViewCameraComponent() const {
		return SideViewCamera;
	}

	void RestartLevel();

	UFUNCTION()
		void OnOverlapBegin(UprimitiveComponent* OnOverlappedComp, 
			AActor* OtherActor, UprimitiveComponent* OtherComp, 
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
	float zPosition;
	FVector temPos = Fvector();

	bool CanMove; 
		int i;

};
