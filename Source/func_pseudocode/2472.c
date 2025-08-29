-[DeviceBackUpSettingsViewController maxFittingButtonWidth]
double __cdecl -[DeviceBackUpSettingsViewController maxFittingButtonWidth](
        DeviceBackUpSettingsViewController *self,
        SEL a2)
{
  NSButton *v3; // x20
  NSButton *v4; // x21
  NSButton *v5; // x22
  NSButton *v6; // x19
  NSArray *v7; // x23
  NSArray *v8; // x19
  void *v9; // x0
  void *v10; // x20
  __int64 v11; // x21
  double v12; // d8
  void *i; // x22
  double v14; // d0
  __int128 v16; // [xsp+0h] [xbp-130h] BYREF
  __int128 v17; // [xsp+10h] [xbp-120h]
  __int128 v18; // [xsp+20h] [xbp-110h]
  __int128 v19; // [xsp+30h] [xbp-100h]
  _BYTE v20[128]; // [xsp+48h] [xbp-E8h] BYREF
  _QWORD v21[4]; // [xsp+C8h] [xbp-68h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backUpNowButton](self, "backUpNowButton"));
  v21[0] = v3;
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController restoreBackUpButton](self, "restoreBackUpButton"));
  v21[1] = v4;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController manageBackupsButton](self, "manageBackupsButton"));
  v21[2] = v5;
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController changePasswordButton](self, "changePasswordButton"));
  v21[3] = v6;
  v7 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v21, 4LL));
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  v18 = 0u;
  v19 = 0u;
  v16 = 0u;
  v17 = 0u;
  v8 = objc_retain(v7);
  v9 = -[NSArray countByEnumeratingWithState:objects:count:](
         v8,
         "countByEnumeratingWithState:objects:count:",
         &v16,
         v20,
         16LL);
  if ( v9 )
  {
    v10 = v9;
    v11 = *(_QWORD *)v17;
    v12 = 0.0;
    do
    {
      for ( i = 0LL; i != v10; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v17 != v11 )
          objc_enumerationMutation(v8);
        objc_msgSend(*(id *)(*((_QWORD *)&v16 + 1) + 8LL * (_QWORD)i), "fittingSize", (_QWORD)v16);
        if ( v14 > v12 )
          v12 = v14;
      }
      v10 = -[NSArray countByEnumeratingWithState:objects:count:](
              v8,
              "countByEnumeratingWithState:objects:count:",
              &v16,
              v20,
              16LL);
    }
    while ( v10 );
  }
  else
  {
    v12 = 0.0;
  }
  objc_release(v8);
  objc_release(v8);
  return v12;
}