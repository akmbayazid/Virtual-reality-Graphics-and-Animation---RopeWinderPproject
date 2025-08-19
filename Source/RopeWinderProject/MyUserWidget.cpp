// Fill out your copyright notice in the Description page of Project Settings.
#include "MyUserWidget.h"
#include "RopeWinderMechanism.h"
#include "Components/Button.h"


bool UMyUserWidget::Initialize()
{
	Super::Initialize();
    rope = NewObject<ARopeWinderMechanism>();
	

	StartGame->OnClicked.AddDynamic(this, &UMyUserWidget::StartButtonClicked);
	Increase->OnClicked.AddDynamic(this, &UMyUserWidget::IncreaseButtonClicked);
	Decrease->OnClicked.AddDynamic(this, &UMyUserWidget::DecreaseButtonClicked);
	Reverse->OnClicked.AddDynamic(this, &UMyUserWidget::ReverseButtonClicked);
	Stop->OnClicked.AddDynamic(this, &UMyUserWidget::StopButtonClicked);
	return true;
}

void UMyUserWidget::ReverseButtonClicked()
{
	
	
	 rope->ReverseSpeed();
	
	

}

void UMyUserWidget::StartButtonClicked()
{

	rope->StartSPeed();
	
}

void UMyUserWidget::DecreaseButtonClicked()
{
	
	rope->DecreaseSpeed();
	
}

void UMyUserWidget::StopButtonClicked()
{
	rope->StopSpeed();
}

void UMyUserWidget::IncreaseButtonClicked()
{
	rope->IncreaseSpeed();
}

