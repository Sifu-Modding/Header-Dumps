#ifndef UE4SS_SDK_PDA_Lesson_HPP
#define UE4SS_SDK_PDA_Lesson_HPP

class UPDA_Lesson_C : public UPrimaryDataAsset
{
    TArray<FSTR_Lesson> Lessons;                                                      // 0x0030 (size: 0x10)

    void GetAllUsedAIs(TSet<TSubclassOf<ABP_AICharacter_Base_C>>& UsedAIs);
    void GetAllLessons(TArray<FSTR_Lesson>& Lessons);
    void GetLesson(int32 LessonNumber, FText& LessonIngameDisplay, TArray<FSTR_Lesson_Step>& LessonSteps, FString& ID);
}; // Size: 0x40

#endif
