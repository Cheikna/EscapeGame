// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "OpenDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenDoor() {}
// Cross Module References
	ESCAPEGAME_API UClass* Z_Construct_UClass_UOpenDoor_NoRegister();
	ESCAPEGAME_API UClass* Z_Construct_UClass_UOpenDoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_EscapeGame();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void UOpenDoor::StaticRegisterNativesUOpenDoor()
	{
	}
	UClass* Z_Construct_UClass_UOpenDoor_NoRegister()
	{
		return UOpenDoor::StaticClass();
	}
	UClass* Z_Construct_UClass_UOpenDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_EscapeGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "OpenDoor.h" },
				{ "ModuleRelativePath", "OpenDoor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doorCloseDelay_MetaData[] = {
				{ "Category", "OpenDoor" },
				{ "ModuleRelativePath", "OpenDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_doorCloseDelay = { UE4CodeGen_Private::EPropertyClass::Float, "doorCloseDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UOpenDoor, doorCloseDelay), METADATA_PARAMS(NewProp_doorCloseDelay_MetaData, ARRAY_COUNT(NewProp_doorCloseDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pressurePlate_MetaData[] = {
				{ "Category", "OpenDoor" },
				{ "ModuleRelativePath", "OpenDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pressurePlate = { UE4CodeGen_Private::EPropertyClass::Object, "pressurePlate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UOpenDoor, pressurePlate), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(NewProp_pressurePlate_MetaData, ARRAY_COUNT(NewProp_pressurePlate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_openAngle_MetaData[] = {
				{ "Category", "OpenDoor" },
				{ "ModuleRelativePath", "OpenDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_openAngle = { UE4CodeGen_Private::EPropertyClass::Float, "openAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UOpenDoor, openAngle), METADATA_PARAMS(NewProp_openAngle_MetaData, ARRAY_COUNT(NewProp_openAngle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_doorCloseDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pressurePlate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_openAngle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UOpenDoor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UOpenDoor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenDoor, 3246801187);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenDoor(Z_Construct_UClass_UOpenDoor, &UOpenDoor::StaticClass, TEXT("/Script/EscapeGame"), TEXT("UOpenDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
