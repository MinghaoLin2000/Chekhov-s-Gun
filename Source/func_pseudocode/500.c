-[DeviceSettingsTVShowsViewController refreshDetailCheckBoxStatesWithDimNodes:updateMode:]
void __cdecl -[DeviceSettingsTVShowsViewController refreshDetailCheckBoxStatesWithDimNodes:updateMode:](
        DeviceSettingsTVShowsViewController *self,
        SEL a2,
        id a3,
        unsigned __int64 a4)
{
  id v5; // x19
  __int64 v6; // x21
  id v7; // x0
  void *v8; // x0
  void *v9; // x26
  void *i; // x23
  void *v11; // x27
  void *v12; // x21
  void *v13; // x22
  signed __int64 v14; // x28
  id v15; // x22
  void *v16; // x0
  void *v17; // x21
  __int64 v18; // x25
  void *j; // x24
  id obj; // [xsp+0h] [xbp-2E0h]
  __int64 v21; // [xsp+8h] [xbp-2D8h]
  NSMutableDictionary *v22; // [xsp+10h] [xbp-2D0h]
  void *v23; // [xsp+18h] [xbp-2C8h]
  id v24; // [xsp+20h] [xbp-2C0h]
  __int64 v25; // [xsp+28h] [xbp-2B8h]
  id v26; // [xsp+30h] [xbp-2B0h]
  __int64 v27; // [xsp+38h] [xbp-2A8h]
  __int128 v28; // [xsp+40h] [xbp-2A0h] BYREF
  __int128 v29; // [xsp+50h] [xbp-290h]
  __int128 v30; // [xsp+60h] [xbp-280h]
  __int128 v31; // [xsp+70h] [xbp-270h]
  __int128 v32; // [xsp+80h] [xbp-260h] BYREF
  __int128 v33; // [xsp+90h] [xbp-250h]
  __int128 v34; // [xsp+A0h] [xbp-240h]
  __int128 v35; // [xsp+B0h] [xbp-230h]
  __int128 v36; // [xsp+C0h] [xbp-220h] BYREF
  __int128 v37; // [xsp+D0h] [xbp-210h]
  __int128 v38; // [xsp+E0h] [xbp-200h]
  __int128 v39; // [xsp+F0h] [xbp-1F0h]
  _BYTE v40[128]; // [xsp+100h] [xbp-1E0h] BYREF
  _BYTE v41[128]; // [xsp+180h] [xbp-160h] BYREF
  _BYTE v42[128]; // [xsp+200h] [xbp-E0h] BYREF

  v5 = objc_retain(a3);
  v36 = 0u;
  v37 = 0u;
  v38 = 0u;
  v39 = 0u;
  v22 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController detailsModelDict](self, "detailsModelDict"));
  obj = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary allKeys](v22, "allKeys"));
  v23 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v36, v42, 16LL);
  if ( v23 )
  {
    v21 = *(_QWORD *)v37;
    do
    {
      v6 = 0LL;
      do
      {
        if ( *(_QWORD *)v37 != v21 )
          objc_enumerationMutation(obj);
        v25 = v6;
        v24 = objc_retainAutoreleasedReturnValue(
                -[NSMutableDictionary objectForKeyedSubscript:](
                  v22,
                  "objectForKeyedSubscript:",
                  *(_QWORD *)(*((_QWORD *)&v36 + 1) + 8 * v6)));
        v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "children"));
        v32 = 0u;
        v33 = 0u;
        v34 = 0u;
        v35 = 0u;
        v26 = v7;
        v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v32, v41, 16LL);
        if ( v8 )
        {
          v9 = v8;
          v27 = *(_QWORD *)v33;
          do
          {
            for ( i = 0LL; i != v9; i = (char *)i + 1 )
            {
              if ( *(_QWORD *)v33 != v27 )
                objc_enumerationMutation(v26);
              v11 = *(void **)(*((_QWORD *)&v32 + 1) + 8LL * (_QWORD)i);
              v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "children"));
              v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "objectAtIndexedSubscript:", 0LL));
              v14 = -[DeviceSettingsTVShowsViewController effectiveStateForNode:withDimNodes:](
                      self,
                      "effectiveStateForNode:withDimNodes:",
                      v13,
                      v5);
              objc_release(v13);
              v30 = 0u;
              v31 = 0u;
              v28 = 0u;
              v29 = 0u;
              v15 = objc_retain(v12);
              v16 = objc_msgSend(v15, "countByEnumeratingWithState:objects:count:", &v28, v40, 16LL);
              if ( v16 )
              {
                v17 = v16;
                v18 = *(_QWORD *)v29;
                while ( 2 )
                {
                  for ( j = 0LL; j != v17; j = (char *)j + 1 )
                  {
                    if ( *(_QWORD *)v29 != v18 )
                      objc_enumerationMutation(v15);
                    if ( v14 != -[DeviceSettingsTVShowsViewController effectiveStateForNode:withDimNodes:](
                                  self,
                                  "effectiveStateForNode:withDimNodes:",
                                  *(_QWORD *)(*((_QWORD *)&v28 + 1) + 8LL * (_QWORD)j),
                                  v5) )
                    {
                      v14 = -1LL;
                      goto LABEL_21;
                    }
                  }
                  v17 = objc_msgSend(v15, "countByEnumeratingWithState:objects:count:", &v28, v40, 16LL);
                  if ( v17 )
                    continue;
                  break;
                }
              }
LABEL_21:
              objc_release(v15);
              objc_msgSend(v11, "setState:setChildren:setAncestors:", v14, 0LL, 0LL);
              objc_release(v15);
            }
            v9 = objc_msgSend(v26, "countByEnumeratingWithState:objects:count:", &v32, v41, 16LL);
          }
          while ( v9 );
        }
        objc_release(v26);
        objc_release(v24);
        v6 = v25 + 1;
      }
      while ( (void *)(v25 + 1) != v23 );
      v23 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v36, v42, 16LL);
    }
    while ( v23 );
  }
  objc_release(obj);
  objc_release(v22);
  objc_release(v5);
}