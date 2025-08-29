-[DeviceSettingsAudiobooksViewController setupDetailsCheckBoxesForTabViewItem:]
void __cdecl -[DeviceSettingsAudiobooksViewController setupDetailsCheckBoxesForTabViewItem:](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSMutableDictionary *v5; // x22
  void *v6; // x23
  void *v7; // x20
  NSMutableSet *v8; // x21
  void *v9; // x0
  void *v10; // x22
  __int64 v11; // x24
  void *v12; // x25
  void *v13; // x23
  __int128 v14; // [xsp+0h] [xbp-110h] BYREF
  __int128 v15; // [xsp+10h] [xbp-100h]
  __int128 v16; // [xsp+20h] [xbp-F0h]
  __int128 v17; // [xsp+30h] [xbp-E0h]
  _BYTE v18[128]; // [xsp+48h] [xbp-C8h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodesLookup](self, "dataNodesLookup"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
  v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v5, "objectForKeyedSubscript:", v6));
  objc_release(v6);
  objc_release(v5);
  v16 = 0u;
  v17 = 0u;
  v14 = 0u;
  v15 = 0u;
  v8 = objc_retainAutoreleasedReturnValue(
         -[DeviceSettingsAudiobooksViewController audiobooksDetailsCheckedItems](
           self,
           "audiobooksDetailsCheckedItems",
           0LL));
  v9 = -[NSMutableSet countByEnumeratingWithState:objects:count:](
         v8,
         "countByEnumeratingWithState:objects:count:",
         &v14,
         v18,
         16LL);
  if ( v9 )
  {
    v10 = v9;
    v11 = *(_QWORD *)v15;
    do
    {
      v12 = 0LL;
      do
      {
        if ( *(_QWORD *)v15 != v11 )
          objc_enumerationMutation(v8);
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", *(_QWORD *)(*((_QWORD *)&v14 + 1) + 8LL * (_QWORD)v12)));
        if ( ((unsigned int)objc_msgSend(v13, "isFolder") & 1) == 0 )
          objc_msgSend(v13, "setState:setChildren:setAncestors:", 1LL, 1LL, 1LL);
        objc_release(v13);
        v12 = (char *)v12 + 1;
      }
      while ( v10 != v12 );
      v10 = -[NSMutableSet countByEnumeratingWithState:objects:count:](
              v8,
              "countByEnumeratingWithState:objects:count:",
              &v14,
              v18,
              16LL);
    }
    while ( v10 );
  }
  objc_release(v8);
  objc_release(v7);
  objc_release(v4);
}