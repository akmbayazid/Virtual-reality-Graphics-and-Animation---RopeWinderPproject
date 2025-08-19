// Fill out your copyright notice in the Description page of Project Settings.


#include "RopeWinderProject/RopeWinderMechanism.h"
#include "Components/Button.h"
#include "MyUserWidget.h"
#include "Blueprint/UserWidget.h"



// Sets default values
ARopeWinderMechanism::ARopeWinderMechanism()
{
	
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;






	















	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	SetRootComponent(RootScene);


	AnnulusMesh = CreateOptionalDefaultSubobject<UStaticMeshComponent>(TEXT("AnnulusMesh"));
	AnnulusMesh->SetupAttachment(RootScene);


	GearMesh1 = CreateOptionalDefaultSubobject<UStaticMeshComponent>(TEXT("GearMesh1"));
	GearMesh1->SetupAttachment(RootScene);

	GearMesh2 = CreateOptionalDefaultSubobject<UStaticMeshComponent>(TEXT("GearMesh2"));
	GearMesh2->SetupAttachment(RootScene);

	GearMesh3 = CreateOptionalDefaultSubobject<UStaticMeshComponent>(TEXT("GearMesh3"));
	GearMesh3->SetupAttachment(RootScene);

	HookMesh1 = CreateOptionalDefaultSubobject<UStaticMeshComponent>(TEXT("HookMesh1"));
	HookMesh1->SetupAttachment(RootScene);

	HookMesh2 = CreateOptionalDefaultSubobject<UStaticMeshComponent>(TEXT("HookMesh2"));
	HookMesh2->SetupAttachment(RootScene);

	HookMesh3 = CreateOptionalDefaultSubobject<UStaticMeshComponent>(TEXT("HookMesh3"));
	HookMesh3->SetupAttachment(RootScene);

	AnchorMesh1 = CreateOptionalDefaultSubobject<UStaticMeshComponent>(TEXT("AnchorMesh1"));
	AnchorMesh1->SetupAttachment(RootScene);

	AnchorMesh2 = CreateOptionalDefaultSubobject<UStaticMeshComponent>(TEXT("AnchorMesh2"));
	AnchorMesh2->SetupAttachment(RootScene);

	AnchorMesh3 = CreateOptionalDefaultSubobject<UStaticMeshComponent>(TEXT("AnchorMesh3"));
	AnchorMesh3->SetupAttachment(RootScene);

	KnobMesh = CreateOptionalDefaultSubobject<UStaticMeshComponent>(TEXT("KnobMesh"));
	KnobMesh->SetupAttachment(RootScene);


	ShuttleMesh = CreateOptionalDefaultSubobject<UStaticMeshComponent>(TEXT("ShuttleMesh"));
	ShuttleMesh->SetupAttachment(RootScene);


	

	
}

// Called when the game starts or when spawned
void ARopeWinderMechanism::BeginPlay()
{
	Super::BeginPlay();


	
	
}

void ARopeWinderMechanism::DecreaseSpeed()
{
	if (rotationspeed > 0) {
		if (rotationspeed < 10) {

			rotationspeed = 0;

		}
		else {
			rotationspeed -= 10;
		}

	}
	else {
		if (rotationspeed > -10) {

			rotationspeed = 0;

		}
		else {
			rotationspeed += 10;
		}
	}
	

}

void ARopeWinderMechanism::IncreaseSpeed()

{

	if (rotationspeed < 0) {
		
			rotationspeed -= 10;
		

	}
	else if( rotationspeed 
	> 0){
		rotationspeed += 10;
	}
	
}

void ARopeWinderMechanism::ReverseSpeed()
{
	rotationspeed = rotationspeed * -1;
}


void ARopeWinderMechanism::StopSpeed()
{
	if (rotationspeed != 0) {
		rotationspeed = 0;
	}
	
}

void ARopeWinderMechanism::StartSPeed()
{

	if (rotationspeed == 0) {
		rotationspeed += 40;
	}

}



// Called every frame
void ARopeWinderMechanism::Tick(float DeltaTime)
{
	float upadtevalue = rotationspeed;
	Super::Tick(DeltaTime);
	
	FTransform Force = KnobMesh->GetComponentTransform();

	KnobMesh->SetRelativeLocation(KnobMesh->GetRelativeLocation().RotateAngleAxis(DeltaTime * upadtevalue, FVector(0, 0, 1)));


}





