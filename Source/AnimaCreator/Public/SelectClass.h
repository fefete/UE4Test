// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "SelectClass.generated.h"


UCLASS()
class ANIMACREATOR_API ASelectClass : public AActor
{
	GENERATED_BODY()
		
public:	
	// Sets default values for this actor's properties
	ASelectClass();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Categorias")
	UDataTable* Categorias;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Categorias")
	TArray<FName> Nombres;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Categorias")
	UStruct* CategoriaStruct;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
