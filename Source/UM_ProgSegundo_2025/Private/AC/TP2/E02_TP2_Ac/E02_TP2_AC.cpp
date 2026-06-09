#include "AC/TP2/E02_TP2_Ac/E02_TP2_AC.h"

// Sets default values
AE02_TP2_AC::AE02_TP2_AC()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Raiz = CreateDefaultSubobject<USceneComponent>(TEXT("Raiz"));
	RootComponent = Raiz;

	TextoFlotante = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextoFlotante"));
	TextoFlotante->SetupAttachment(Raiz);

	TextoFlotante->SetRelativeLocation(FVector(0.0f, 0.0f, 150.0f));
	TextoFlotante->SetHorizontalAlignment(EHTA_Center);
	TextoFlotante->SetWorldSize(80.0f);
}

void AE02_TP2_AC::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if (TextoFlotante)
	{
		TextoFlotante->SetText(TextoMensaje);
		TextoFlotante->SetTextRenderColor(ColorMensaje);
	}
}

