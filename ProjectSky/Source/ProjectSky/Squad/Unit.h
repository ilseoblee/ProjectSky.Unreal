// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "GameFramework/Character.h"
#include "Unit.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSKY_API AUnit : public ACharacter
{
	GENERATED_BODY()
	
		//fields
protected:
	
public:
	//DECLARE_DYNAMIC_DELEGATE(FUnitAction);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUnitAction);

	// members
	UPROPERTY(BlueprintAssignable, Category = "Unit")
		FUnitAction UnitMoveFinihed;
protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, AdvancedDisplay, Category = "Unit")
		AActor* m_curSquadActor;

	//methods
	UFUNCTION(BlueprintCallable, Category = "Unit")
		void onUnitMoveFinished();
public:
	UFUNCTION(BlueprintCallable, Category = "Unit")
		AActor* getSquadActor();

	UFUNCTION(BlueprintCallable, Category = "Unit")
		void setSquadActor(AActor* squadActor);
	
};
