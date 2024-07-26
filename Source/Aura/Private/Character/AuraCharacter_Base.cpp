


#include "Character/AuraCharacter_Base.h"


AAuraCharacter_Base::AAuraCharacter_Base()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject <USkeletalMeshComponent>("weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}


void AAuraCharacter_Base::BeginPlay()
{
	Super::BeginPlay();

}




