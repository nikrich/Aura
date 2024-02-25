// Copyright Hungry Ghost


#include "Character/AuraEnemy.h"



AAuraEnemy::AAuraEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AAuraEnemy::HighlightActor()
{
	bIsHighlighted = true;
}

void AAuraEnemy::UnhighlightActor()
{
	bIsHighlighted = false;
}

void AAuraEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsHighlighted)
	{
		DrawDebugSphere(GetWorld(), GetActorLocation(), 100.0f, 12, FColor::Red, false,0, 0, 1.0f);
	}
}
