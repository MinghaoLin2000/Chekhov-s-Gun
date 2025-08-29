-[DeviceSettingsViewController setupCheckBoxesForTabViewItem:]
void __cdecl -[DeviceSettingsViewController setupCheckBoxesForTabViewItem:](
        DeviceSettingsViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x19
  NSMutableDictionary *v5; // x20
  void *v6; // x22
  id v7; // x20
  void *v8; // x0
  void *v9; // x22
  __int64 v10; // x23
  void *v11; // x24
  NSMutableDictionary *v12; // x22
  void *v13; // x23
  NSMutableDictionary *v14; // x22
  void *v15; // x21
  id v16; // x22
  void *v17; // x0
  void *v18; // x23
  __int64 v19; // x25
  void *v20; // x26
  void *v21; // x24
  __int128 v22; // [xsp+0h] [xbp-1E0h] BYREF
  __int128 v23; // [xsp+10h] [xbp-1D0h]
  __int128 v24; // [xsp+20h] [xbp-1C0h]
  __int128 v25; // [xsp+30h] [xbp-1B0h]
  __int128 v26; // [xsp+40h] [xbp-1A0h] BYREF
  __int128 v27; // [xsp+50h] [xbp-190h]
  __int128 v28; // [xsp+60h] [xbp-180h]
  __int128 v29; // [xsp+70h] [xbp-170h]
  _BYTE v30[128]; // [xsp+88h] [xbp-158h] BYREF
  _BYTE v31[128]; // [xsp+108h] [xbp-D8h] BYREF

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "identifier"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v5, "objectForKeyedSubscript:", v4));
  objc_release(v5);
  v28 = 0u;
  v29 = 0u;
  v26 = 0u;
  v27 = 0u;
  v7 = objc_retain(v6);
  v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v26, v31, 16LL);
  if ( v8 )
  {
    v9 = v8;
    v10 = *(_QWORD *)v27;
    do
    {
      v11 = 0LL;
      do
      {
        if ( *(_QWORD *)v27 != v10 )
          objc_enumerationMutation(v7);
        objc_msgSend(
          *(id *)(*((_QWORD *)&v26 + 1) + 8LL * (_QWORD)v11),
          "setState:setChildren:setAncestors:",
          0LL,
          1LL,
          1LL);
        v11 = (char *)v11 + 1;
      }
      while ( v9 != v11 );
      v9 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v26, v31, 16LL);
    }
    while ( v9 );
  }
  objc_release(v7);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v13 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v12, "objectForKeyedSubscript:", v4));
  objc_release(v12);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodesLookup](self, "dataNodesLookup"));
  v15 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v14, "objectForKeyedSubscript:", v4));
  objc_release(v14);
  v24 = 0u;
  v25 = 0u;
  v22 = 0u;
  v23 = 0u;
  v16 = objc_retain(v13);
  v17 = objc_msgSend(v16, "countByEnumeratingWithState:objects:count:", &v22, v30, 16LL);
  if ( v17 )
  {
    v18 = v17;
    v19 = *(_QWORD *)v23;
    do
    {
      v20 = 0LL;
      do
      {
        if ( *(_QWORD *)v23 != v19 )
          objc_enumerationMutation(v16);
        v21 = objc_retainAutoreleasedReturnValue(
                objc_msgSend(
                  v15,
                  "objectForKeyedSubscript:",
                  *(_QWORD *)(*((_QWORD *)&v22 + 1) + 8LL * (_QWORD)v20),
                  (_QWORD)v22));
        objc_msgSend(v21, "setState:setChildren:setAncestors:", 1LL, 1LL, 1LL);
        objc_release(v21);
        v20 = (char *)v20 + 1;
      }
      while ( v18 != v20 );
      v18 = objc_msgSend(v16, "countByEnumeratingWithState:objects:count:", &v22, v30, 16LL);
    }
    while ( v18 );
  }
  objc_release(v16);
  objc_release(v15);
  objc_release(v16);
  objc_release(v7);
  objc_release(v4);
}