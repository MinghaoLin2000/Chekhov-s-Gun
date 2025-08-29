-[DeviceSettingsAudiobooksViewController revertCheckBoxesForTabView]
void __cdecl -[DeviceSettingsAudiobooksViewController revertCheckBoxesForTabView](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2)
{
  NSTabView *v3; // x21
  NSArray *v4; // x20
  void *v5; // x0
  void *v6; // x22
  __int64 v7; // x26
  void *i; // x27
  void *v9; // x23
  void *v10; // x24
  unsigned int v11; // w25
  void *v12; // x23
  __int128 v13; // [xsp+0h] [xbp-120h] BYREF
  __int128 v14; // [xsp+10h] [xbp-110h]
  __int128 v15; // [xsp+20h] [xbp-100h]
  __int128 v16; // [xsp+30h] [xbp-F0h]
  _BYTE v17[128]; // [xsp+48h] [xbp-D8h] BYREF

  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController tabView](self, "tabView", 0LL));
  v4 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItems](v3, "tabViewItems"));
  objc_release(v3);
  v5 = -[NSArray countByEnumeratingWithState:objects:count:](
         v4,
         "countByEnumeratingWithState:objects:count:",
         &v13,
         v17,
         16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v14;
    do
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v14 != v7 )
          objc_enumerationMutation(v4);
        v9 = *(void **)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)i);
        v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "identifier"));
        v11 = (unsigned int)objc_msgSend(v10, "isEqualToString:", CFSTR("Audiobooks"));
        objc_release(v10);
        if ( v11 )
        {
          -[DeviceSettingsAudiobooksViewController clearCheckBoxesForTabViewItem:](
            self,
            "clearCheckBoxesForTabViewItem:",
            v9);
          -[DeviceSettingsAudiobooksViewController clearDetailsCheckBoxesForTabViewItem:](
            self,
            "clearDetailsCheckBoxesForTabViewItem:",
            v9);
          -[DeviceSettingsAudiobooksViewController setupDetailsCheckBoxesForTabViewItem:](
            self,
            "setupDetailsCheckBoxesForTabViewItem:",
            v9);
          -[DeviceSettingsAudiobooksViewController setupCheckBoxesForTabViewItem:](
            self,
            "setupCheckBoxesForTabViewItem:",
            v9);
          v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "viewController"));
          objc_msgSend(v12, "reloadData");
          objc_release(v12);
        }
      }
      v6 = -[NSArray countByEnumeratingWithState:objects:count:](
             v4,
             "countByEnumeratingWithState:objects:count:",
             &v13,
             v17,
             16LL);
    }
    while ( v6 );
  }
  objc_release(v4);
}