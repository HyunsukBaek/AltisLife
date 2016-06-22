class life_slotmachine
{
	name = "life_slotmachine";
	idd = 38205;
	fadein=0;
	duration = 99999999999;
	fadeout=0;
	movingEnable = 0;
	onLoad="uiNamespace setVariable ['life_slotmachine',_this select 0]";
	objects[]={};

	class controlsBackground 
	{
		class background : life_RscPicture 
		{
			idc = -1;
			text = "textures\Slots\SlotMachine\slotbg.jpg";
			x = safeZoneX+(safezoneW * 0.5)-0.5; y = safeZoneY+(safezoneH * 0.5)-0.5;
			w = 1; h = 1;
		};
		
		class ProgressText : Life_RscText
		{
			idc = 38206;
			text = "럭키! 슬롯머신!!";
			x = safeZoneX+(safezoneW * 0.5)-0.1;
			y = safeZoneY+(safezoneH * 0.5)-0.5;
			w = 0.65; h = 0.12;
		};
		
		class roll1 : life_RscPicture
		{
			idc = 38207;
			text = "textures\Slots\SlotMachine\bar.jpg";
			x = safeZoneX+(safezoneW * 0.25) + 0.380;
			y = safeZoneY+(safezoneH * 0.5)-0.09; // 0.11 to 0.15
			w = 0.13; h = 0.25;
		};
		
		class roll2 : life_RscPicture
		{
			idc = 38208;
			text = "textures\Slots\SlotMachine\bar.jpg";
			x = safeZoneX+(safezoneW * 0.25) + 0.500;
			y = safeZoneY+(safezoneH * 0.5)-0.09;
			w = 0.13; h = 0.25;
		};
		
		class roll3 : life_RscPicture
		{
			idc = 38209;
			text = "textures\Slots\SlotMachine\bar.jpg";
			x = safeZoneX+(safezoneW * 0.25) + 0.660;
			y = safeZoneY+(safezoneH * 0.5)-0.09;
			w = 0.13; h = 0.25;
		};
	};
};
