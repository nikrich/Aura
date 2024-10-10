// Copyright Hungry Ghost


#include "UI/HUD/AuraHUD.h"

void AAuraHUD::BeginPlay()
{
	Super::BeginPlay();

	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
	OverlayWidget->AddToViewport();
}
