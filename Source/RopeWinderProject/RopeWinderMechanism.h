// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RopeWinderMechanism.generated.h"

UCLASS()
class ROPEWINDERPROJECT_API ARopeWinderMechanism : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARopeWinderMechanism();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
   

	


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
	TSubclassOf<class UMyUserWidget> TextWidgetClass;

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float rotationspeed;


	
	

	

	UFUNCTION(BlueprintCallable, Category = "Variables")
	void IncreaseSpeed();
	


	UFUNCTION(BlueprintCallable, Category = "Variables")
	void DecreaseSpeed();

	UFUNCTION(BlueprintCallable, Category = "Variables")
	void ReverseSpeed();

	UFUNCTION(BlueprintCallable, Category = "Variables")
	void StopSpeed();

	UFUNCTION(BlueprintCallable, Category = "Variables")
	void StartSPeed();
	

	UPROPERTY(VisibleAnywhere)
	USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* GearMesh1;


	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* GearMesh2;


	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* GearMesh3;



	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* HookMesh1;


	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* HookMesh2;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* HookMesh3;




	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AnnulusMesh;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* KnobMesh;


	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ShuttleMesh;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AnchorMesh1;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AnchorMesh2;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AnchorMesh3;
};
