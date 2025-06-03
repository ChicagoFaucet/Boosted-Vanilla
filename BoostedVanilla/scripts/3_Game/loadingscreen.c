modded class LoadingScreen
{
	ref TStringArray RandomLoadingScreenArray = {
		"BoostedVanilla\\data\\BoostedVanilla1.edds",
		"BoostedVanilla\\data\\BoostedVanilla2.edds",
		"BoostedVanilla\\data\\BoostedVanilla3.edds",
		"BoostedVanilla\\data\\BoostedVanilla4.edds",
		"BoostedVanilla\\data\\BoostedVanilla5.edds",
		"BoostedVanilla\\data\\BoostedVanilla6.edds",
		"BoostedVanilla\\data\\BoostedVanilla7.edds",
		"BoostedVanilla\\data\\BoostedVanilla8.edds",
		"BoostedVanilla\\data\\BoostedVanilla9.edds",
		"BoostedVanilla\\data\\BoostedVanilla10.edds",
		"BoostedVanilla\\data\\BoostedVanilla11.edds",
		"BoostedVanilla\\data\\BoostedVanilla12.edds",
		"BoostedVanilla\\data\\BoostedVanilla13.edds",
		"BoostedVanilla\\data\\BoostedVanilla14.edds",
		"BoostedVanilla\\data\\BoostedVanilla15.edds",
		"BoostedVanilla\\data\\BoostedVanilla16.edds",
		"BoostedVanilla\\data\\BoostedVanilla17.edds"
        };
		
	override void Show()
	{		
		string preel = RandomLoadingScreenArray.GetRandomElement();
		m_ImageWidgetBackground.LoadMaskTexture("BoostedVanilla/data/ls_mask.paa");
		m_ImageWidgetBackground.LoadImageFile(0, preel);   
        m_ImageLogoMid.Show(false);
		m_ImageLogoCorner.Show(false);	    	
		m_ModdedWarning.Show(false); // Show / Hide - Modded version warning // 1.17 OK
		super.Show();
	}
};


modded class LoginTimeBase extends UIScriptedMenu
{
	ref TStringArray RandomLoadingScreenArray = {
		"BoostedVanilla\\data\\BoostedVanilla1.edds",
		"BoostedVanilla\\data\\BoostedVanilla2.edds",
		"BoostedVanilla\\data\\BoostedVanilla3.edds",
		"BoostedVanilla\\data\\BoostedVanilla4.edds",
		"BoostedVanilla\\data\\BoostedVanilla5.edds",
		"BoostedVanilla\\data\\BoostedVanilla6.edds",
		"BoostedVanilla\\data\\BoostedVanilla7.edds",
		"BoostedVanilla\\data\\BoostedVanilla8.edds",
		"BoostedVanilla\\data\\BoostedVanilla9.edds",
		"BoostedVanilla\\data\\BoostedVanilla10.edds",
		"BoostedVanilla\\data\\BoostedVanilla11.edds",
		"BoostedVanilla\\data\\BoostedVanilla12.edds",
		"BoostedVanilla\\data\\BoostedVanilla13.edds",
		"BoostedVanilla\\data\\BoostedVanilla14.edds",
		"BoostedVanilla\\data\\BoostedVanilla15.edds",
		"BoostedVanilla\\data\\BoostedVanilla16.edds",
		"BoostedVanilla\\data\\BoostedVanilla17.edds"
        };

    override void Show()
    {
        super.Show();
        if (layoutRoot)
        {
            string preel = RandomLoadingScreenArray.GetRandomElement();
            ImageWidget background = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background"));
            background.LoadImageFile(0, preel);  
        }
    }
};


modded class LoginQueueBase extends UIScriptedMenu
{
	ref TStringArray RandomLoadingScreenArray = {
		"BoostedVanilla\\data\\BoostedVanilla1.edds",
		"BoostedVanilla\\data\\BoostedVanilla2.edds",
		"BoostedVanilla\\data\\BoostedVanilla3.edds",
		"BoostedVanilla\\data\\BoostedVanilla4.edds",
		"BoostedVanilla\\data\\BoostedVanilla5.edds",
		"BoostedVanilla\\data\\BoostedVanilla6.edds",
		"BoostedVanilla\\data\\BoostedVanilla7.edds",
		"BoostedVanilla\\data\\BoostedVanilla8.edds",
		"BoostedVanilla\\data\\BoostedVanilla9.edds",
		"BoostedVanilla\\data\\BoostedVanilla10.edds",
		"BoostedVanilla\\data\\BoostedVanilla11.edds",
		"BoostedVanilla\\data\\BoostedVanilla12.edds",
		"BoostedVanilla\\data\\BoostedVanilla13.edds",
		"BoostedVanilla\\data\\BoostedVanilla14.edds",
		"BoostedVanilla\\data\\BoostedVanilla15.edds",
		"BoostedVanilla\\data\\BoostedVanilla16.edds",
		"BoostedVanilla\\data\\BoostedVanilla17.edds"
        };

    override void Show()
    {
        super.Show();
        if (layoutRoot)
        {
            string preel = RandomLoadingScreenArray.GetRandomElement();
            ImageWidget background = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background"));
            background.LoadImageFile(0, preel);  
        }
    }
};