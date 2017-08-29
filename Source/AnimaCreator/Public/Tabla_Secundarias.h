// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "engine.h"
#include "UObject/NoExportTypes.h"
#include "Tabla_Secundarias.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FSecundarias_Tabla : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Acrobacias;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Atletismo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Montar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Nadar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Trepar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Saltar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Frialdad;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 ProezasdeFuerza;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 ResistirelDolor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Advertir;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Buscar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Rastrear;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Animales;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Ciencia;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Herbolaria;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Historia;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Medicina;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Memorizar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Navegacion;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Ocultismo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Tasacion;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 ValoracionMagica;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Estilo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Intimidar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Liderazgo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Persuasion;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Cerrajeria;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Disfraz;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Ocultarse;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Robo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Sigilo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Tramperia;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Venenos;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Arte;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Baile;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Forja;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 Musica;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secundarias)
		int32 TrucosdeManos;
};

UCLASS()
class ANIMACREATOR_API UTabla_Secundarias : public UObject
{
	GENERATED_BODY()
		
};
