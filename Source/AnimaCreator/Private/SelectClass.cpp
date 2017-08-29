// Fill out your copyright notice in the Description page of Project Settings.

#include "SelectClass.h"

// Sets default values
ASelectClass::ASelectClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASelectClass::BeginPlay()
{
	Super::BeginPlay();
	Nombres = Categorias->GetRowNames();
	CategoriaStruct = CategoriaStruct;
}

// Called every frame
void ASelectClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}