-[DeviceSettingsAudiobooksViewController setupCheckBoxesForTabViewItem:]
void __cdecl -[DeviceSettingsAudiobooksViewController setupCheckBoxesForTabViewItem:](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x21
  unsigned int v6; // w22
  NSMutableDictionary *v7; // x21
  void *v8; // x22
  void *v9; // x23
  id v10; // x21
  void *v11; // x0
  void *v12; // x22
  __int64 v13; // x27
  void *i; // x28
  void *v15; // x23
  void *v16; // x24
  NSMutableDictionary *v17; // x25
  void *v18; // x26
  objc_super v19; // [xsp+0h] [xbp-130h] BYREF
  __int128 v20; // [xsp+10h] [xbp-120h] BYREF
  __int128 v21; // [xsp+20h] [xbp-110h]
  __int128 v22; // [xsp+30h] [xbp-100h]
  __int128 v23; // [xsp+40h] [xbp-F0h]
  _BYTE v24[128]; // [xsp+50h] [xbp-E0h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
  v6 = (unsigned int)objc_msgSend(v5, "isEqualToString:", CFSTR("Audiobooks"));
  objc_release(v5);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
    v9 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v7, "objectForKeyedSubscript:", v8));
    objc_release(v8);
    objc_release(v7);
    v22 = 0u;
    v23 = 0u;
    v20 = 0u;
    v21 = 0u;
    v10 = objc_retain(v9);
    v11 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v20, v24, 16LL);
    if ( v11 )
    {
      v12 = v11;
      v13 = *(_QWORD *)v21;
      do
      {
        for ( i = 0LL; i != v12; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v21 != v13 )
            objc_enumerationMutation(v10);
          v15 = *(void **)(*((_QWORD *)&v20 + 1) + 8LL * (_QWORD)i);
          v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "name"));
          v17 = objc_retainAutoreleasedReturnValue(
                  -[DeviceSettingsAudiobooksViewController audiobooksDetailsModelDict](
                    self,
                    "audiobooksDetailsModelDict"));
          v18 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v17, "objectForKeyedSubscript:", v16));
          objc_release(v17);
          objc_msgSend(
            v15,
            "setState:setChildren:setAncestors:",
            objc_msgSend(v18, "effectiveStateOfChildren"),
            0LL,
            0LL);
          objc_release(v18);
          objc_release(v16);
        }
        v12 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v20, v24, 16LL);
      }
      while ( v12 );
    }
    objc_release(v10);
    objc_release(v10);
  }
  else
  {
    v19.receiver = self;
    v19.super_class = (Class)&OBJC_CLASS___DeviceSettingsAudiobooksViewController;
    -[DeviceSettingsViewController setupCheckBoxesForTabViewItem:](&v19, "setupCheckBoxesForTabViewItem:", v4);
  }
  objc_release(v4);
}