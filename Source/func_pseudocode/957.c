-[DeviceSettingsAudiobooksViewController clearDetailsCheckBoxesForTabViewItem:]
void __cdecl -[DeviceSettingsAudiobooksViewController clearDetailsCheckBoxesForTabViewItem:](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2,
        id a3)
{
  NSMutableDictionary *v3; // x19
  void *v4; // x20
  id v5; // x19
  void *v6; // x0
  void *v7; // x20
  __int64 v8; // x23
  void *v9; // x24
  void *v10; // x0
  void *v11; // x21
  void *v12; // x0
  void *v13; // x22
  __int64 v14; // x25
  void *v15; // x26
  __int128 v16; // [xsp+0h] [xbp-1E0h] BYREF
  __int128 v17; // [xsp+10h] [xbp-1D0h]
  __int128 v18; // [xsp+20h] [xbp-1C0h]
  __int128 v19; // [xsp+30h] [xbp-1B0h]
  __int128 v20; // [xsp+40h] [xbp-1A0h] BYREF
  __int128 v21; // [xsp+50h] [xbp-190h]
  __int128 v22; // [xsp+60h] [xbp-180h]
  __int128 v23; // [xsp+70h] [xbp-170h]
  _BYTE v24[128]; // [xsp+88h] [xbp-158h] BYREF
  _BYTE v25[128]; // [xsp+108h] [xbp-D8h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController audiobooksDetailsModelDict](self, "audiobooksDetailsModelDict", a3));
  v4 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary allValues](v3, "allValues"));
  objc_release(v3);
  v22 = 0u;
  v23 = 0u;
  v20 = 0u;
  v21 = 0u;
  v5 = objc_retain(v4);
  v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v20, v25, 16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v21;
    do
    {
      v9 = 0LL;
      do
      {
        if ( *(_QWORD *)v21 != v8 )
          objc_enumerationMutation(v5);
        v10 = *(void **)(*((_QWORD *)&v20 + 1) + 8LL * (_QWORD)v9);
        v16 = 0u;
        v17 = 0u;
        v18 = 0u;
        v19 = 0u;
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "children", 0LL));
        v12 = objc_msgSend(v11, "countByEnumeratingWithState:objects:count:", &v16, v24, 16LL);
        if ( v12 )
        {
          v13 = v12;
          v14 = *(_QWORD *)v17;
          do
          {
            v15 = 0LL;
            do
            {
              if ( *(_QWORD *)v17 != v14 )
                objc_enumerationMutation(v11);
              objc_msgSend(
                *(id *)(*((_QWORD *)&v16 + 1) + 8LL * (_QWORD)v15),
                "setState:setChildren:setAncestors:",
                0LL,
                0LL,
                0LL);
              v15 = (char *)v15 + 1;
            }
            while ( v13 != v15 );
            v13 = objc_msgSend(v11, "countByEnumeratingWithState:objects:count:", &v16, v24, 16LL);
          }
          while ( v13 );
        }
        objc_release(v11);
        v9 = (char *)v9 + 1;
      }
      while ( v9 != v7 );
      v7 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v20, v25, 16LL);
    }
    while ( v7 );
  }
  objc_release(v5);
  objc_release(v5);
}