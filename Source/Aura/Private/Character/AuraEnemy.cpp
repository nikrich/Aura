// Copyright Hungry Ghost


#include "Character/AuraEnemy.h"



AAuraEnemy::AAuraEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
	GetMesh()->CustomDepthStencilValue = 250;
	Weapon->CustomDepthStencilValue = 250;
}

void AAuraEnemy::HighlightActor()
{
	// Set the custom depth stencil value to 1
	// This will make the actor render with the custom depth stencil value
	GetMesh()->SetRenderCustomDepth(true);
	Weapon->SetRenderCustomDepth(true);

	bIsHighlighted = true;
}

void AAuraEnemy::UnhighlightActor()
{
	// Set the custom depth stencil value to 0
	// This will make the actor render normally
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
	bIsHighlighted = false;
}

void AAuraEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
