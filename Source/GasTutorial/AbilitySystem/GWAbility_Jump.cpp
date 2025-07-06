// Fill out your copyright notice in the Description page of Project Settings.


#include "GWAbility_Jump.h"

#include "GameFramework/Character.h"

void UGWAbility_Jump::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	if (!ActorInfo->AvatarActor.IsValid())
		return;

	ACharacter* Character = Cast<ACharacter>(ActorInfo->AvatarActor.Get());
	if (nullptr == Character)
		return;

#if WITH_EDITOR
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, TEXT("UGWAbility_Jump::ActivateAbility"));
#endif
	Character->Jump();

	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}

