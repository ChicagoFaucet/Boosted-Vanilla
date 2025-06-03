class CfgPatches
{
	class BoostedVanilla
	{
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class BoostedVanilla
	{
		dir="BoostedVanilla";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="BoostedVanilla";
		credits="The DayZ Community";
		author="ChicagoFaucet";
		authorID="0";
		version="2.14";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[] = {"BoostedVanilla/scripts/3_Game"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"BoostedVanilla/scripts/5_Mission"};
			};
		};
	};
};

class CfgSoundSets
{
	class Josies_Menu_SoundSet // do not change anything in this
	{
		soundShaders[] = {"Josies_Menu_Shader"};
		volumeFactor = 1;
		frequencyFactor = 1;
		spatial = 0;
	};
};
class CfgSoundShaders
{
	class Josies_Menu_Shader
	{
		samples[] = {
					 {"\BoostedVanilla\OGG\BoostedVanilla1.ogg",1},
					 {"\BoostedVanilla\OGG\BoostedVanilla2.ogg",2},
					 {"\BoostedVanilla\OGG\BoostedVanilla3.ogg",3}
					}; 
		volume = 1.0;  // volume of your music
	};
};
class cfgCharacterScenes
{
    class ChernarusPlus
    {
        class loc1
        {
            target[] = {2720.49,1281.29,23.4}; // Position of character
            position[] = {2719.49,1280.29,1.75}; // Position of camera
            fov = 0.65; // Zoom of scene on character
            date[] = {2017/11/05/17/59}; // The time/date of scene (year, month, day, hour, minute)
            overcast = 0.5; // The overcast for the scene
            rain = 0.5; // The amount of rain in scene
            fog = 0.5; // The amount of fog in scene
            wind = 0.5; // The amount of wind in scene
        };
        class loc2
        {
            target[] = {2651.6,2206.17.8,113.027}; // Position of character
            position[] = {2652.6,2207.18,1.0}; // Position of camera
            fov = 0.65; // Zoom of scene on character
            date[] = {2017/11/05/07/59}; // The time/date of scene (year, month, day, hour, minute)
            overcast = 0.5; // The overcast for the scene
            rain = 0.5; // The amount of rain in scene
            fog = 0.5; // The amount of fog in scene
            wind = 0.5; // The amount of wind in scene
        };
        class loc3
        {
            target[] = {6560.43,2469.68,6.00001}; // Position of character
            position[] = {6559.43,2470.68,1.0}; // Position of camera
            fov = 0.65; // Zoom of scene on character
            date[] = {2017/11/05/07/59}; // The time/date of scene (year, month, day, hour, minute)
            overcast = 0.5; // The overcast for the scene
            rain = 0.5; // The amount of rain in scene
            fog = 0.5; // The amount of fog in scene
            wind = 0.5; // The amount of wind in scene
        };
        class loc4
        {
            target[] = {6513.5,2452.47,6}; // Position of character
            position[] = {6514.5,2453.47,1.0}; // Position of camera
            fov = 0.65; // Zoom of scene on character
            date[] = {2017/11/05/17/59}; // The time/date of scene (year, month, day, hour, minute)
            overcast = 0.5; // The overcast for the scene
            rain = 0.5; // The amount of rain in scene
            fog = 0.5; // The amount of fog in scene
            wind = 0.5; // The amount of wind in scene
        };
		class loc5
        {
            target[] = {11225,4261.57,294.058}; // Position of character
            position[] = {11224,4260.57,1.0}; // Position of camera
            fov = 0.65; // Zoom of scene on character
            date[] = {2017/11/05/07/59}; // The time/date of scene (year, month, day, hour, minute)
            overcast = 0.5; // The overcast for the scene
            rain = 0.5; // The amount of rain in scene
            fog = 0.5; // The amount of fog in scene
            wind = 0.5; // The amount of wind in scene
        };
		class loc6
        {
            target[] = {10490.5,5893.18,277.559}; // Position of character
            position[] = {10489.5,5893.18,1.0}; // Position of camera
            fov = 0.65; // Zoom of scene on character
            date[] = {2017/11/05/17/59}; // The time/date of scene (year, month, day, hour, minute)
            overcast = 0.5; // The overcast for the scene
            rain = 0.5; // The amount of rain in scene
            fog = 0.5; // The amount of fog in scene
            wind = 0.5; // The amount of wind in scene
        };
		class loc7
        {
            target[] = {11358.6,8412.82,267.318}; // Position of character
            position[] = {11357.6,8413.82,1.0}; // Position of camera
            fov = 0.65; // Zoom of scene on character
            date[] = {2017/11/05/07/59}; // The time/date of scene (year, month, day, hour, minute)
            overcast = 0.5; // The overcast for the scene
            rain = 0.5; // The amount of rain in scene
            fog = 0.5; // The amount of fog in scene
            wind = 0.5; // The amount of wind in scene
        };
		class loc8
        {
            target[] = {4813.61,10156,339}; // Position of character
            position[] = {4812.61,10155,1.0}; // Position of camera
            fov = 0.65; // Zoom of scene on character
            date[] = {2017/11/05/07/59}; // The time/date of scene (year, month, day, hour, minute)
            overcast = 0.5; // The overcast for the scene
            rain = 0.5; // The amount of rain in scene
            fog = 0.5; // The amount of fog in scene
            wind = 0.5; // The amount of wind in scene
        };
		class loc9
        {
            target[] = {9575.57,11818.7,242.867}; // Position of character
            position[] = {9576.57,11819.7,1.0}; // Position of camera
            fov = 0.65; // Zoom of scene on character
            date[] = {2017/11/05/07/59}; // The time/date of scene (year, month, day, hour, minute)
            overcast = 0.5; // The overcast for the scene
            rain = 0.5; // The amount of rain in scene
            fog = 0.5; // The amount of fog in scene
            wind = 0.5; // The amount of wind in scene
        };
		class loc10
        {
            target[] = {13356.1,13796.6,17.2203}; // Position of character
            position[] = {13355.1,13795.6,1.0}; // Position of camera
            fov = 0.65; // Zoom of scene on character
            date[] = {2017/11/05/07/59}; // The time/date of scene (year, month, day, hour, minute)
            overcast = 0.5; // The overcast for the scene
            rain = 0.5; // The amount of rain in scene
            fog = 0.5; // The amount of fog in scene
            wind = 0.5; // The amount of wind in scene
        };
    };
};
class CfgMissions
{
    class Cutscenes
    {
        class TESTcutscene
        {
            directory = "BoostedVanilla\intro.something";
        };
    };
};
class CfgWorlds
{
    class BoostedVanilla
    {
        cutscenes[] = {"TESTcutscene"};
    };    
};