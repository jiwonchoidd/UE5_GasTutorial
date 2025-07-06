// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GWAbilitySystemComponent.generated.h"


UCLASS()
class GASTUTORIAL_API UGWAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

	
#if WITH_EDITOR
protected:
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
};
