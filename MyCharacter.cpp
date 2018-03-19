// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCharacter.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//calculate health
void AMyCharacter::CalculateHealth(float delta) {
	health += delta;
	CalculateDead();
}

//calculate dead
void AMyCharacter::CalculateDead() {
	if (health <= 0) { isDead = true; }
	else { isDead = false; }
}
//PostEditChangeProperty
#if WITH_EDITOR
void AMyCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) {
	isDead = false;
	health = 100;
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif
