// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "PauseHudWidget.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Test2Character.generated.h"

class UInputComponent;

UCLASS(config=Game)
class ATest2Character : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	class USkeletalMeshComponent* Mesh1P;

	/** Gun mesh: 1st person view (seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* FP_Gun;

	/** Location on gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* FP_MuzzleLocation;

	/** Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* VR_Gun;

	/** Location on VR gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* VR_MuzzleLocation;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

	/** Motion controller (right hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* R_MotionController;

	/** Motion controller (left hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* L_MotionController;

public:
	ATest2Character();

protected:
	virtual void BeginPlay();

	virtual void Tick(float DeltaSeconds) override;

public:

	float BaseMoveSpeed;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector GunOffset;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category=Projectile)
	TSubclassOf<class ATest2Projectile> ProjectileClass;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	class USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class UAnimMontage* FireAnimation;

	/** Whether to use motion controller location for aiming. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	uint32 bUsingMotionControllers : 1;

protected:
	
	/** Fires a projectile. */
	//void OnFire();

	void QuitGame();

	void ResetLevel();

	/** Pauses/Unpauses the game */
	void TogglePause();

	/** Resets HMD orientation and position in VR. */
	void OnResetVR();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	struct TouchData
	{
		TouchData() { bIsPressed = false;Location=FVector::ZeroVector;}
		bool bIsPressed;
		ETouchIndex::Type FingerIndex;
		FVector Location;
		bool bMoved;
	};
	void BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location);
	TouchData	TouchItem;
	
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

	/* 
	 * Configures input for touchscreen devices if there is a valid touch interface for doing so 
	 *
	 * @param	InputComponent	The input component pointer to bind controls to
	 * @returns true if touch controls were enabled.
	 */
	bool EnableTouchscreenMovement(UInputComponent* InputComponent);

public:
	/** Returns Mesh1P subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	FORCEINLINE class TSubclassOf<class UPauseHudWidget>* GetPauseHudClass() { return &PauseHudClass; }

	class UPauseHudWidget* GetPauseMenuInstance() { return PauseHudInstance; }
	
	class UETAHUD* GetGameHUDInstance() { return GameHudInstance; }

	//sets the text prompt for player interaction, will always start with "Push E to ", so Intext should be the text that comes after, returns true if succeeded
	UFUNCTION(BlueprintCallable, Category = "Interaction")
		bool SetInteractionPromptText(FString Intext);
private:

	void HandleFocus();

	AActor* FindActorInLOS();

	UFUNCTION()
		void Interact();

	UPROPERTY()
		TSubclassOf<class UPauseHudWidget> PauseHudClass;

	UPROPERTY()
		class UPauseHudWidget* PauseHudInstance;

	UPROPERTY()
		TSubclassOf<class UHUDWidgetBase> MainMenu;

	UPROPERTY()
		class UHUDWidgetBase* MainMenuInstance;

	UPROPERTY()
		TSubclassOf<class UHUDWidgetBase> ControlsHUD;

	UPROPERTY()
		TSubclassOf<class UETAHUD> GameHud;

	UPROPERTY()
		class UETAHUD* GameHudInstance;


	class AActor* FocusedInteractable;

	UPROPERTY(EditAnywhere, Category = "Interaction")
		float InteractionDistance = 200.f;

	UPROPERTY(EditAnywhere, Category = "Interaction")
		TSubclassOf<class UHUDWidgetBase> InteractionPromptClass;

	UPROPERTY()
	class UEditableTextWidget* InteractionPromptInstance;

	FCollisionQueryParams TraceParams;
};

