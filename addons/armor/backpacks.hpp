class B_Kitbag_rgr;
class SoD_Backpack_Base: B_Kitbag_rgr
{
    scope = 0;
    scopeArsenal = 0;
    author = "Misriah Armory";
    displayname = "[SoD] Base Backpack";
    model = "";
    maximumLoad = 250;
    hiddenSelections[]=
    {
        "camo"
    };
};


class SoD_M56S_Rucksack: SoD_Backpack_Base
{
    scope=2;
    scopeArsenal=2;
    displayName="[SoD] M56S Rucksack";
    model="MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck.p3d";
    picture="\MA_Armor\data\Icons\ODST_Rucksack.paa";
    maximumLoad = 350;
    hiddenSelections[]=
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        "Radio"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa",
        "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
        "MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa"
    };
};

class SoD_M56S_Rucksack_Medic: SoD_M56S_Rucksack
{
    displayName="[SoD] M56S Rucksack (Medic)";
    maximumLoad = 400;
    hiddenSelections[]=
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
        "Radio"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Backpacks\ODST_Rucksack\Medical_ODST_Ruck_co.paa",
        "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
        "MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa"
    };
};

class SoD_M56S_Rucksack_Radio: SoD_M56S_Rucksack
{
    displayName="[SoD] M56S Rucksack (Radio)";
    hiddenSelections[]=
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
//      "Radio"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa",
        "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
        "MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa"
    };
	maximumload = 500;
    /// TFAR LR Code
    tf_encryptionCode="tf_west_radio_code";
    tf_dialog="rt1523g_radio_dialog";
    tf_subtype="digital_lr";
    tf_range=25000;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio=1;
};

class SoD_M56S_Rucksack_ODST_Radio: MA_M56S_Rucksack_Radio
{
    displayName="[SoD] M56S Rucksack (ODST Radio)";
    hiddenSelections[]=
    {
        "camo1", // Bag
        "camo2", // Radio
        "camo3", // Straps
//      "Radio"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa",
        "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
        "MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa"
    };
};