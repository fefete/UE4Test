// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "Struct_Secundarias.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct ANIMACREATOR_API FStruct_Secundarias
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Secundarias")
		int32 Atletismo;

};


class ANIMACREATOR_API Secundarias_Tabla
{
public:
	Secundarias_Tabla();
	~Secundarias_Tabla();
};

