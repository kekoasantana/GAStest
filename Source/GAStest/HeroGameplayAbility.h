// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GAStest.h"
#include "GAStest.h"
#include "Abilities/GameplayAbility.h"
#include "HeroGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class GASTEST_API UHeroGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:

	UHeroGameplayAbility();

	// Abilities with this set will automatically activate when the input is pressed
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	EGASAbilityInputID AbilityInputID = EGASAbilityInputID::None;
	
};