// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "Secundarias_Tabla.generated.h"
/**
 * 
 */
USTRUCT(BlueprintType)
struct FLevelUpData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	/** XP to get to the given level from the previous level */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LevelUp)
		int32 Atletismo;

	/** Extra HitPoints gained at this level */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LevelUp)
		int32 Saltar;
};

/*class ANIMACREATOR_API Secundarias_Tabla
{
public:
	Secundarias_Tabla();
	~Secundarias_Tabla();
};*/
