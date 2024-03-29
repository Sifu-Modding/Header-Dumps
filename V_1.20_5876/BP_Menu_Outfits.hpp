#ifndef UE4SS_SDK_BP_Menu_Outfits_HPP
#define UE4SS_SDK_BP_Menu_Outfits_HPP

class UBP_Menu_Outfits_C : public UGameplayOptionsMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class UHorizontalBox* Border_InputsnoAnim;                                        // 0x0878 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_DefaultOutfit;                                        // 0x0880 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Kickboxer;                                            // 0x0888 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Master;                                               // 0x0890 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_NightDriver;                                          // 0x0898 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_OldMan;                                               // 0x08A0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Raid;                                                 // 0x08A8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Tracksuit;                                            // 0x08B0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Vengeance;                                            // 0x08B8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_WingChunDark;                                         // 0x08C0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_WingChunLight;                                        // 0x08C8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Wude;                                                 // 0x08D0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Yellowjumpsuit;                                       // 0x08D8 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Back;                                          // 0x08E0 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Choose;                                        // 0x08E8 (size: 0x8)
    class UBP_Btn_InputTip_C* InputTip_Gender;                                        // 0x08F0 (size: 0x8)
    class UScrollBox* OutfitsScroll;                                                  // 0x08F8 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x0900 (size: 0x8)
    bool AudioApplied;                                                                // 0x0908 (size: 0x1)
    TMap<class FString, class FText> AudioLanguageMap;                                // 0x0910 (size: 0x50)
    class UPlayerFightingComponent* PlayerFightingComp;                               // 0x0960 (size: 0x8)
    ECharacterGender eGender;                                                         // 0x0968 (size: 0x1)
    class USkeletalMesh* DefaultMaleMesh;                                             // 0x0970 (size: 0x8)
    class USkeletalMesh* DefaultFemaleMesh;                                           // 0x0978 (size: 0x8)
    int32 OutfitSaved;                                                                // 0x0980 (size: 0x4)
    TArray<class UBP_Btn_Outfit_C*> OutfitButtons;                                    // 0x0988 (size: 0x10)
    bool bIsMenuReady;                                                                // 0x0998 (size: 0x1)
    FBP_Menu_Outfits_CFadeIn FadeIn;                                                  // 0x09A0 (size: 0x10)
    void FadeIn();
    class UBP_Btn_Outfit_C* Btn_Character13;                                          // 0x09B0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character14;                                          // 0x09B8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character15;                                          // 0x09C0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character16;                                          // 0x09C8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character17;                                          // 0x09D0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character18;                                          // 0x09D8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character19;                                          // 0x09E0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character20;                                          // 0x09E8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character21;                                          // 0x09F0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character22;                                          // 0x09F8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character23;                                          // 0x0A00 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character24;                                          // 0x0A08 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character25;                                          // 0x0A10 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character26;                                          // 0x0A18 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character27;                                          // 0x0A20 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character28;                                          // 0x0A28 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character29;                                          // 0x0A30 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character30;                                          // 0x0A38 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character31;                                          // 0x0A40 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character32;                                          // 0x0A48 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character33;                                          // 0x0A50 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character34;                                          // 0x0A58 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character35;                                          // 0x0A60 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character36;                                          // 0x0A68 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character37;                                          // 0x0A70 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character38;                                          // 0x0A78 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character39;                                          // 0x0A80 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character40;                                          // 0x0A88 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character41;                                          // 0x0A90 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character42;                                          // 0x0A98 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character43;                                          // 0x0AA0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character44;                                          // 0x0AA8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character45;                                          // 0x0AB0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character46;                                          // 0x0AB8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character47;                                          // 0x0AC0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character48;                                          // 0x0AC8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character49;                                          // 0x0AD0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character50;                                          // 0x0AD8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character51;                                          // 0x0AE0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character52;                                          // 0x0AE8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character53;                                          // 0x0AF0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character54;                                          // 0x0AF8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character55;                                          // 0x0B00 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character56;                                          // 0x0B08 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character57;                                          // 0x0B10 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character58;                                          // 0x0B18 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character59;                                          // 0x0B20 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character60;                                          // 0x0B28 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character61;                                          // 0x0B30 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character62;                                          // 0x0B38 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character63;                                          // 0x0B40 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character64;                                          // 0x0B48 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character65;                                          // 0x0B50 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character66;                                          // 0x0B58 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character67;                                          // 0x0B60 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character68;                                          // 0x0B68 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character69;                                          // 0x0B70 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character70;                                          // 0x0B78 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character71;                                          // 0x0B80 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character72;                                          // 0x0B88 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character73;                                          // 0x0B90 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character74;                                          // 0x0B98 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character75;                                          // 0x0BA0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character76;                                          // 0x0BA8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character77;                                          // 0x0BB0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character78;                                          // 0x0BB8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character79;                                          // 0x0BC0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character80;                                          // 0x0BC8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character81;                                          // 0x0BD0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character82;                                          // 0x0BD8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character83;                                          // 0x0BE0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character84;                                          // 0x0BE8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character85;                                          // 0x0BF0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character86;                                          // 0x0BF8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character87;                                          // 0x0C00 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character88;                                          // 0x0C08 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character89;                                          // 0x0C10 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character90;                                          // 0x0C18 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character91;                                          // 0x0C20 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character92;                                          // 0x0C28 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character93;                                          // 0x0C30 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character94;                                          // 0x0C38 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character95;                                          // 0x0C40 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character96;                                          // 0x0C48 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character97;                                          // 0x0C50 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character98;                                          // 0x0C58 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character99;                                          // 0x0C60 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character100;                                         // 0x0C68 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character101;                                         // 0x0C70 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character102;                                         // 0x0C78 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character103;                                         // 0x0C80 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character104;                                         // 0x0C88 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character105;                                         // 0x0C90 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character106;                                         // 0x0C98 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character107;                                         // 0x0CA0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character108;                                         // 0x0CA8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character109;                                         // 0x0CB0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character110;                                         // 0x0CB8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character111;                                         // 0x0CC0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character112;                                         // 0x0CC8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character113;                                         // 0x0CD0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character114;                                         // 0x0CD8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character115;                                         // 0x0CE0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character116;                                         // 0x0CE8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character117;                                         // 0x0CF0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character118;                                         // 0x0CF8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character119;                                         // 0x0D00 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character120;                                         // 0x0D08 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character121;                                         // 0x0D10 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character122;                                         // 0x0D18 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character123;                                         // 0x0D20 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character124;                                         // 0x0D28 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character125;                                         // 0x0D30 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character126;                                         // 0x0D38 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character127;                                         // 0x0D40 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character128;                                         // 0x0D48 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character129;                                         // 0x0D50 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character130;                                         // 0x0D58 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character131;                                         // 0x0D60 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character132;                                         // 0x0D68 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character133;                                         // 0x0D70 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character134;                                         // 0x0D78 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character135;                                         // 0x0D80 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character136;                                         // 0x0D88 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character137;                                         // 0x0D90 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character138;                                         // 0x0D98 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character139;                                         // 0x0DA0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character140;                                         // 0x0DA8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character141;                                         // 0x0DB0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character142;                                         // 0x0DB8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character143;                                         // 0x0DC0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character144;                                         // 0x0DC8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character145;                                         // 0x0DD0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character146;                                         // 0x0DD8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character147;                                         // 0x0DE0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character148;                                         // 0x0DE8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character149;                                         // 0x0DF0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character150;                                         // 0x0DF8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character151;                                         // 0x0E00 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character152;                                         // 0x0E08 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character153;                                         // 0x0E10 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character154;                                         // 0x0E18 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character155;                                         // 0x0E20 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character156;                                         // 0x0E28 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character157;                                         // 0x0E30 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character158;                                         // 0x0E38 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character159;                                         // 0x0E40 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character160;                                         // 0x0E48 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character161;                                         // 0x0E50 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character162;                                         // 0x0E58 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character163;                                         // 0x0E60 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character164;                                         // 0x0E68 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character165;                                         // 0x0E70 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character166;                                         // 0x0E78 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character167;                                         // 0x0E80 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character168;                                         // 0x0E88 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character169;                                         // 0x0E90 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character170;                                         // 0x0E98 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character171;                                         // 0x0EA0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character172;                                         // 0x0EA8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character173;                                         // 0x0EB0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character174;                                         // 0x0EB8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character175;                                         // 0x0EC0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character176;                                         // 0x0EC8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character177;                                         // 0x0ED0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character178;                                         // 0x0ED8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character179;                                         // 0x0EE0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character180;                                         // 0x0EE8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character181;                                         // 0x0EF0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character182;                                         // 0x0EF8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character183;                                         // 0x0F00 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character184;                                         // 0x0F08 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character185;                                         // 0x0F10 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character186;                                         // 0x0F18 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character187;                                         // 0x0F20 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character188;                                         // 0x0F28 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character189;                                         // 0x0F30 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character190;                                         // 0x0F38 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character191;                                         // 0x0F40 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character192;                                         // 0x0F48 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character193;                                         // 0x0F50 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character194;                                         // 0x0F58 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character195;                                         // 0x0F60 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character196;                                         // 0x0F68 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character197;                                         // 0x0F70 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character198;                                         // 0x0F78 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character199;                                         // 0x0F80 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character200;                                         // 0x0F88 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character201;                                         // 0x0F90 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character202;                                         // 0x0F98 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character203;                                         // 0x0FA0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character204;                                         // 0x0FA8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character205;                                         // 0x0FB0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character206;                                         // 0x0FB8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character207;                                         // 0x0FC0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character208;                                         // 0x0FC8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character209;                                         // 0x0FD0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character210;                                         // 0x0FD8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character211;                                         // 0x0FE0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character212;                                         // 0x0FE8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character213;                                         // 0x0FF0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character214;                                         // 0x0FF8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character215;                                         // 0x1000 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character216;                                         // 0x1008 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character217;                                         // 0x1010 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character218;                                         // 0x1018 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character219;                                         // 0x1020 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character220;                                         // 0x1028 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character221;                                         // 0x1030 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character222;                                         // 0x1038 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character223;                                         // 0x1040 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character224;                                         // 0x1048 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character225;                                         // 0x1050 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character226;                                         // 0x1058 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character227;                                         // 0x1060 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character228;                                         // 0x1068 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character229;                                         // 0x1070 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character230;                                         // 0x1078 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character231;                                         // 0x1080 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character232;                                         // 0x1088 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character233;                                         // 0x1090 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character234;                                         // 0x1098 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character235;                                         // 0x10A0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character236;                                         // 0x10A8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character237;                                         // 0x10B0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character238;                                         // 0x10B8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character239;                                         // 0x10C0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character240;                                         // 0x10C8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character241;                                         // 0x10D0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character242;                                         // 0x10D8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character243;                                         // 0x10E0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character244;                                         // 0x10E8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character245;                                         // 0x10F0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character246;                                         // 0x10F8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character247;                                         // 0x1100 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character248;                                         // 0x1108 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character249;                                         // 0x1110 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character250;                                         // 0x1118 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character251;                                         // 0x1120 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character252;                                         // 0x1128 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character253;                                         // 0x1130 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character254;                                         // 0x1138 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character255;                                         // 0x1140 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character256;                                         // 0x1148 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character257;                                         // 0x1150 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character258;                                         // 0x1158 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character259;                                         // 0x1160 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character260;                                         // 0x1168 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character261;                                         // 0x1170 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character262;                                         // 0x1178 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character263;                                         // 0x1180 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character264;                                         // 0x1188 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character265;                                         // 0x1190 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character266;                                         // 0x1198 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character267;                                         // 0x11A0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character268;                                         // 0x11A8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character269;                                         // 0x11B0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character270;                                         // 0x11B8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character271;                                         // 0x11C0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character272;                                         // 0x11C8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character273;                                         // 0x11D0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character274;                                         // 0x11D8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character275;                                         // 0x11E0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character276;                                         // 0x11E8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character277;                                         // 0x11F0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character278;                                         // 0x11F8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character279;                                         // 0x1200 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character280;                                         // 0x1208 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character281;                                         // 0x1210 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character282;                                         // 0x1218 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character283;                                         // 0x1220 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character284;                                         // 0x1228 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character285;                                         // 0x1230 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character286;                                         // 0x1238 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character287;                                         // 0x1240 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character288;                                         // 0x1248 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character289;                                         // 0x1250 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character290;                                         // 0x1258 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character291;                                         // 0x1260 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character292;                                         // 0x1268 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character293;                                         // 0x1270 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character294;                                         // 0x1278 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character295;                                         // 0x1280 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character296;                                         // 0x1288 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character297;                                         // 0x1290 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character298;                                         // 0x1298 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character299;                                         // 0x12A0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character300;                                         // 0x12A8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character301;                                         // 0x12B0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character302;                                         // 0x12B8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character303;                                         // 0x12C0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character304;                                         // 0x12C8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character305;                                         // 0x12D0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character306;                                         // 0x12D8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character307;                                         // 0x12E0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character308;                                         // 0x12E8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character309;                                         // 0x12F0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character310;                                         // 0x12F8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character311;                                         // 0x1300 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character312;                                         // 0x1308 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character313;                                         // 0x1310 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character314;                                         // 0x1318 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character315;                                         // 0x1320 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character316;                                         // 0x1328 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character317;                                         // 0x1330 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character318;                                         // 0x1338 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character319;                                         // 0x1340 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character320;                                         // 0x1348 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character321;                                         // 0x1350 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character322;                                         // 0x1358 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character323;                                         // 0x1360 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character324;                                         // 0x1368 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character325;                                         // 0x1370 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character326;                                         // 0x1378 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character327;                                         // 0x1380 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character328;                                         // 0x1388 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character329;                                         // 0x1390 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character330;                                         // 0x1398 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character331;                                         // 0x13A0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character332;                                         // 0x13A8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character333;                                         // 0x13B0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character334;                                         // 0x13B8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character335;                                         // 0x13C0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character336;                                         // 0x13C8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character337;                                         // 0x13D0 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character338;                                         // 0x13D8 (size: 0x8)
    class UBP_Btn_Outfit_C* Btn_Character339;                                         // 0x13E0 (size: 0x8)

    void GetButtonLinkedToIndexOutfit(int32 Index, class UBP_Btn_Outfit_C*& BtnOutfit);
    class UWidget* LoopList(EUINavigation Navigation);
    bool BPE_OnInputAction(InputAction eAction);
    void OnClickButton(class UButtonUserWidget* _button, bool _bWithMouse);
    void UpdateInputChooseDisplay(class UButtonUserWidget* _button, EFocusCause _eCause);
    void MenuReady();
    void OnDarkModeChange();
    bool BPE_OnBackButtonPressed();
    void LaunchBackSequence();
    void Construct();
    void BPE_GiveFocus();
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    void SwapGenderEvent(int32 iOutfitIndex, ECharacterGender eGender);
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    void FadeIn_Event();
    void ExecuteUbergraph_BP_Menu_Outfits(int32 EntryPoint);
    void FadeIn__DelegateSignature();
}; // Size: 0x13E8

#endif
