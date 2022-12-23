#ifndef UE4SS_SDK_WaveEnemy_HPP
#define UE4SS_SDK_WaveEnemy_HPP

struct FWaveEnemy
{
    TEnumAsByte<EnemyTypes::Type> EnemyType_13_D60DF6654C258A592E98CBB6048F55A7;
    int32 Amount_9_B2E4F2524E8E2F60EC39349EE5394F9A;
    bool AllowWeapons?_12_3E981CA747B879E15F801AB5E82D1B91;
    TArray<class TSubclassOf<ABaseWeapon>> Weapons_17_D910C51E4C8F72F705043DAA42BB3C3D;
    TEnumAsByte<EnemyDifficulty::Type> Difficulty_20_9735B3884E6D2C0684ED2AA5D4F908D9;
    TEnumAsByte<Hideouts::Type> Hideout_23_F873AF8646F9766C7B0526A61877F453;

};

#endif
