#pragma once
#include "CoreMinimal.h"
#include "TWDUserWidget.h"
#include "SubtitleSplit.h"
#include "DialogueLine.h"
#include "EGender.h"
#include "TWDSubtitleWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class TWD_API UTWDSubtitleWidget : public UTWDUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* SubtitleTextBlock;
    
public:
    UTWDSubtitleWidget();
    UFUNCTION(BlueprintCallable)
    void RemoveSubtitle(int32 Key);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSubtitleChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSubtitleText() const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddSubtitle(const FText& Name, const FText& Subtitle, TArray<FSubtitleSplit> SubtitleSplits, float Duration);
    
    UFUNCTION(BlueprintCallable)
    int32 AddLineSubtitle(const FText& Name, FDialogueLine DialogueLine, EGender Gender, const FString& VoiceId);
    
};

