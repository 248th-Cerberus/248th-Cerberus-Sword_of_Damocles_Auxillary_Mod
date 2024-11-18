//Custom Helmets
//Ordered by position -> Alphabetical

class SoD_M56_Scout_Helmet_Cerberus: MA_M56_Scout_Helmet
{
    displayName="[SoD] [Custom] M65-S Helmet (Cerberus)";
	model="MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    picture="\MA_Armor\data\Icons\H4_Scout_Helmet.paa";
    hiddenSelectionsTextures[]=
    {
        "Sword_of_Damocles_Auxiliary_Mod\addons\armor\Custom\Helmet\Scout_Helmet_Cerberus.paa",
        "Sword_of_Damocles_Auxiliary_Mod\addons\armor\Custom\Helmet\Visors\Scout_Visor_Cerberus.paa"
    };
    class XtdGearInfo
    {
        model="SoD_Custom_Helmets";
        Camo="Cerberus_M56_S";
        
    };
	class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
    };
};