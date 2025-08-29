-[DeviceSettingsAudiobooksViewController clearCheckBoxesForTabViewItem:]
void __cdecl -[DeviceSettingsAudiobooksViewController clearCheckBoxesForTabViewItem:](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSMutableDictionary *v5; // x20
  void *v6; // x21
  void *v7; // x22
  id v8; // x20
  void *v9; // x0
  void *v10; // x21
  __int64 v11; // x22
  void *v12; // x23
  __int128 v13; // [xsp+0h] [xbp-100h] BYREF
  __int128 v14; // [xsp+10h] [xbp-F0h]
  __int128 v15; // [xsp+20h] [xbp-E0h]
  __int128 v16; // [xsp+30h] [xbp-D0h]
  _BYTE v17[128]; // [xsp+48h] [xbp-B8h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
  v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v5, "objectForKeyedSubscript:", v6));
  objc_release(v6);
  objc_release(v5);
  v15 = 0u;
  v16 = 0u;
  v13 = 0u;
  v14 = 0u;
  v8 = objc_retain(v7);
  v9 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
  if ( v9 )
  {
    v10 = v9;
    v11 = *(_QWORD *)v14;
    do
    {
      v12 = 0LL;
      do
      {
        if ( *(_QWORD *)v14 != v11 )
          objc_enumerationMutation(v8);
        objc_msgSend(
          *(id *)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)v12),
          "setState:setChildren:setAncestors:",
          0LL,
          1LL,
          1LL,
          (_QWORD)v13);
        v12 = (char *)v12 + 1;
      }
      while ( v10 != v12 );
      v10 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
    }
    while ( v10 );
  }
  objc_release(v8);
  objc_release(v8);
  objc_release(v4);
}