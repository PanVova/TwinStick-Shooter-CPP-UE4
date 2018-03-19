// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class MYPROJECT4_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	//health
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MyCharacter")
		float health = 100;
	//isdead
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MyCharacter")
		bool isDead = false;
	//calculate death
	virtual void CalculateDead();
	//calculate health
	UFUNCTION(BlueprintCallable, Category = "MyCharacter")
		virtual void CalculateHealth(float delta);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
override;
#endif
	
public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
