// Fill out your copyright notice in the Description page of Project Settings.


#include "Front.h"

// Sets default values
AFront::AFront()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));

	MeshComponent = MeshComponent;

}

// Called when the game starts or when spawned
void AFront::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFront::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

