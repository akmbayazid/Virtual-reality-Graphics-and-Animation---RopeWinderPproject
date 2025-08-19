// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"






UCLASS()
class ROPEWINDERPROJECT_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()

	

	virtual bool Initialize();


 UPROPERTY(meta = (BindWidget))
 class UButton* Reverse;
	
 UFUNCTION()
 void ReverseButtonClicked();

 UPROPERTY(meta = (BindWidget))
 class UButton* StartGame;

 UFUNCTION()
 void StartButtonClicked();

 UPROPERTY(meta = (BindWidget))
 class UButton* Decrease;

 UFUNCTION()
 void DecreaseButtonClicked();

 UPROPERTY(meta = (BindWidget))
 class UButton* Stop;

 UFUNCTION()
 void StopButtonClicked();


 UPROPERTY(meta = (BindWidget))
 class UButton* Increase;

 UFUNCTION()
 void IncreaseButtonClicked();
private:
	// Reference to the owning actor
	UPROPERTY()
	class ARopeWinderMechanism* rope;

 

};
