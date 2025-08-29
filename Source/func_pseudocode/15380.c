-[UARPUpdaterDisplayControllerDelegate requestUserConsentForAsset:]
void __cdecl -[UARPUpdaterDisplayControllerDelegate requestUserConsentForAsset:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        id a3)
{
  id v4; // x23
  id v5; // x19
  void *v6; // x22
  void *v7; // x20
  void *v8; // x24
  void *v9; // x22
  void *v10; // x24
  void *v11; // x23
  void *v12; // x24
  id v13; // x26
  NSString *v14; // x25
  id v15; // x26
  NSString *v16; // x25
  id v17; // x26
  NSString *v18; // x25
  id v19; // x25
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(
         -[UARPUpdaterDisplayControllerDelegate localizedStringForKey:](
           self,
           "localizedStringForKey:",
           CFSTR("Apple Studio Display")));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "attributes"));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", CFSTR("OSVersion")));
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "attributes"));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectForKeyedSubscript:", CFSTR("Build")));
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "attributes"));
  objc_release(v4);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectForKeyedSubscript:", CFSTR("_DownloadSize")));
  objc_release(v10);
  v12 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___UARPConsent), "initWithAccessoryName:assetVersion:", v5, v7);
  objc_msgSend(v12, "setDownloadSize:", v11);
  objc_msgSend(v12, "setIsRecommended:", 1LL);
  v13 = objc_retainAutoreleasedReturnValue(
          -[UARPUpdaterDisplayControllerDelegate localizedStringForKey:](
            self,
            "localizedStringForKey:",
            CFSTR("CONSENT_DESCRIPTION")));
  v14 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v13, v5));
  objc_msgSend(v12, "setConsentDescription:", v14);
  objc_release(v14);
  objc_release(v13);
  v15 = objc_retainAutoreleasedReturnValue(
          -[UARPUpdaterDisplayControllerDelegate localizedStringForKey:](
            self,
            "localizedStringForKey:",
            CFSTR("UPDATE_WARNING")));
  v16 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v15, v5));
  objc_msgSend(v12, "setWarning:", v16);
  objc_release(v16);
  objc_release(v15);
  objc_msgSend(v12, "setNeedsPostLogoutMode:", 1LL);
  v17 = objc_retainAutoreleasedReturnValue(
          -[UARPUpdaterDisplayControllerDelegate localizedStringForKey:](
            self,
            "localizedStringForKey:",
            CFSTR("INSTALLER_PROGRESS_DESCRIPTION")));
  v18 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v17, v5));
  objc_msgSend(v12, "setInstallerProgressDescription:", v18);
  objc_release(v18);
  objc_release(v17);
  objc_msgSend(v12, "setAssetBuildVersion:", v9);
  v19 = objc_alloc_init((Class)&OBJC_CLASS___UARPController);
  objc_msgSend(v19, "setDelegate:", self);
  objc_msgSend(v19, "requestConsent:", v12);
  objc_release(v19);
  objc_release(v12);
  objc_release(v11);
  objc_release(v9);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}