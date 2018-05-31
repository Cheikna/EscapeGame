// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ESCAPEGAME_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define ESCAPEGAME_OpenDoor_generated_h

#define EscapeGame_Source_EscapeGame_OpenDoor_h_14_RPC_WRAPPERS
#define EscapeGame_Source_EscapeGame_OpenDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define EscapeGame_Source_EscapeGame_OpenDoor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend ESCAPEGAME_API class UClass* Z_Construct_UClass_UOpenDoor(); \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EscapeGame"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define EscapeGame_Source_EscapeGame_OpenDoor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend ESCAPEGAME_API class UClass* Z_Construct_UClass_UOpenDoor(); \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EscapeGame"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define EscapeGame_Source_EscapeGame_OpenDoor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public:


#define EscapeGame_Source_EscapeGame_OpenDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor)


#define EscapeGame_Source_EscapeGame_OpenDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__openAngle() { return STRUCT_OFFSET(UOpenDoor, openAngle); } \
	FORCEINLINE static uint32 __PPO__pressurePlate() { return STRUCT_OFFSET(UOpenDoor, pressurePlate); } \
	FORCEINLINE static uint32 __PPO__doorCloseDelay() { return STRUCT_OFFSET(UOpenDoor, doorCloseDelay); }


#define EscapeGame_Source_EscapeGame_OpenDoor_h_11_PROLOG
#define EscapeGame_Source_EscapeGame_OpenDoor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeGame_Source_EscapeGame_OpenDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	EscapeGame_Source_EscapeGame_OpenDoor_h_14_RPC_WRAPPERS \
	EscapeGame_Source_EscapeGame_OpenDoor_h_14_INCLASS \
	EscapeGame_Source_EscapeGame_OpenDoor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EscapeGame_Source_EscapeGame_OpenDoor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EscapeGame_Source_EscapeGame_OpenDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	EscapeGame_Source_EscapeGame_OpenDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	EscapeGame_Source_EscapeGame_OpenDoor_h_14_INCLASS_NO_PURE_DECLS \
	EscapeGame_Source_EscapeGame_OpenDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EscapeGame_Source_EscapeGame_OpenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
