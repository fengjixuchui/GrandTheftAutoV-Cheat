#pragma once

enum SubMenus {
	NOMENU,
	mainmenu,
	selfoptions,
	settings,
	settingstheme,
	themeloader,
	themefiles,
	settingstitlerect,
	settingsheaderbackground,
	settingssmalltitlebackground,
	settingsscroller,
	settingsmenubackground,
	settingsoptiontext,
	settingsbottomline,
	settingsmenubottombackground,
	plist,
	pmenu,
	teleportmenu,
	weaponmenu,
	vehicle_lsc_color_options_custom_color,
	miscmenu,
	worldmenu,
	vehiclemenu,
	scenarios,
	nearbyvehicles_menu, 
	nearbypeds_menu,
	iplloader,
	iplteleports,
	weathermenu,
	vehicle_spawnsettings,
	hotkeys,
	allplayers,
	modelchanger,
	vehiclespawnermenu,
	//Vehicle Spawner Types
	Super,
	Sports,
	smugglersrun,
	SportClassic,
	Offroad,
	Sedans,
	Coupes,
	Muscle,
	Boats,
	Commercial,
	Compacts,
	Cycles,
	Emergency,
	Helicopters,
	Industrial,
	Military,
	Motorcycles,
	Planes,
	Service,
	SUV,
	Trailer,
	Trains,
	vehicle_lsc_neon_options,
	vehicle_lsc_color_options,
	Utility,
	Vans,
	SSASSSDLC, 
	doomsdayheistdlc,
	gunrunningdlc, 
	CunningStuntsDLCMenu,
	afterhoursdlc, 
	arenawardlc, 
	casinodlc,
	diamondcasinoheist,
	//Vehicle Spawner Types
	networkoptions,
	animations,
	timemenu,
	teleportlocations,
	attachoptions,
	player_troll,
	protections,
	ESPMenu, 
	clothingmenu, 
	visionsmenu,
	outfitsmenu,
	componentschangermenu,
	objectspawnermenu,  
	playermoneymenu, 
	player_weaponmenu,
	player_remoteoptions,
	sessionweathermenu,
	sessiontimemenu,
	vehicleweaponsmenu,
	allplayers_trolloptionsmenu,
	statsoptionsmenu, 
	vehicledooroptionsmenu,
	vehiclemultipliersmenus,
	custombulletsmenu, 
	vehiclegunmenu,
	aimbotsettingsmenu,
	rankmenu,
	miscstatsmenu, 
	player_teleportmenu,
	sessionoptionsmenu,
	togglesmenu,
	hudmenu,
	guisettings, 
	menusettingsmenu,
	moneyoptionsmenu, 
	unlocksmenu,
	reportsmenu_stats, 
	allplayers_weaponoptionsmenu,
	hangars_teleportmenu,
	bunkers_teleportmenu,
	special_teleportmenu,
	pointsofview_teleportmenu,
	ammunation_teleportmenu,
	airports_teleportmenu,
	cartuning_teleportmenu,
	activities_teleportmenu,
	clothingshops_teleportmenu,
	shops_teleportmenu,
	barbershops_teleportmenu,
	tattooshops_teleportmenu,
	cinemas_teleportmenu,
	superjumps_teleportmenu,
	otherlocations_teleportmenu,
	simplemenucustomsmenu,
	customheadersmenu,
	player_otherpickupsmenu,
};
extern enum SubMenus;

typedef struct VECTOR2 {
	float x, y;
};
typedef struct VECTOR2_2 {
	float w, h;
};
typedef struct RGBAF {
	int r, g, b, a, f;
};
typedef struct RGBA {
	int r, g, b, a;
};
typedef struct RGB {
	int r, g, b;
};

extern bool shop_box_bool_option;
extern bool medal_bool_option;
extern bool show_header_background;
extern bool show_header_gui;
extern char* themefilesarray[100];
extern char* CurrentTheme;
extern bool ShowVehiclePreviews;