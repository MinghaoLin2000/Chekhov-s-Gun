-[DeviceSettingsMoviesViewController selectDisableAndCheckItemsForNodes:updateMode:updateCount:]
id __cdecl -[DeviceSettingsMoviesViewController selectDisableAndCheckItemsForNodes:updateMode:updateCount:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        signed __int64 a5)
{
  id v7; // x23
  void *v8; // x20
  signed __int64 v9; // x8
  __int64 v10; // x22
  void *v11; // x0
  void *v12; // x26
  __int64 v13; // x23
  void *v14; // x21
  __int64 v15; // x24
  void *v16; // x0
  __int64 (__fastcall **v17)(id, __int64, __int64); // x25
  id v18; // x26
  void *v19; // x0
  void *v20; // x27
  __int64 v21; // x19
  void *i; // x23
  __int64 v23; // x28
  __int64 v25; // [xsp+8h] [xbp-218h]
  unsigned __int64 v26; // [xsp+10h] [xbp-210h]
  void *v27; // [xsp+18h] [xbp-208h]
  signed __int64 v28; // [xsp+20h] [xbp-200h]
  void *v29; // [xsp+28h] [xbp-1F8h]
  unsigned __int64 v30; // [xsp+30h] [xbp-1F0h]
  id obj; // [xsp+38h] [xbp-1E8h]
  __int128 v32; // [xsp+40h] [xbp-1E0h] BYREF
  __int128 v33; // [xsp+50h] [xbp-1D0h]
  __int128 v34; // [xsp+60h] [xbp-1C0h]
  __int128 v35; // [xsp+70h] [xbp-1B0h]
  __int128 v36; // [xsp+80h] [xbp-1A0h] BYREF
  __int128 v37; // [xsp+90h] [xbp-190h]
  __int128 v38; // [xsp+A0h] [xbp-180h]
  __int128 v39; // [xsp+B0h] [xbp-170h]
  _BYTE v40[128]; // [xsp+C0h] [xbp-160h] BYREF
  _BYTE v41[128]; // [xsp+140h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+228h] [xbp+8h]

  v7 = objc_retain(a3);
  v8 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  if ( a5 >= 0 )
    v9 = a5;
  else
    v9 = -a5;
  v30 = v9;
  v36 = 0u;
  v37 = 0u;
  if ( a5 < 1 )
    v10 = 1LL;
  else
    v10 = -1LL;
  v38 = 0uLL;
  v39 = 0uLL;
  obj = objc_retain(v7);
  v11 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v36, v41, 16LL);
  if ( v11 )
  {
    v12 = v11;
    v13 = *(_QWORD *)v37;
    v27 = v8;
    v28 = a5;
    v25 = *(_QWORD *)v37;
    v26 = a4;
    do
    {
      v14 = 0LL;
      v29 = v12;
      do
      {
        if ( *(_QWORD *)v37 != v13 )
          objc_enumerationMutation(obj);
        v15 = *(_QWORD *)(*((_QWORD *)&v36 + 1) + 8LL * (_QWORD)v14);
        if ( a4 != 4 || !objc_msgSend(*(id *)(*((_QWORD *)&v36 + 1) + 8LL * (_QWORD)v14), "playCount") )
        {
          v16 = objc_msgSend(v8, "count");
          if ( a5 && (unsigned __int64)v16 >= v30 )
          {
            v17 = (__int64 (__fastcall **)(id, __int64, __int64))objc_retainAutoreleasedReturnValue(
                                                                   +[DeviceSettingsNode mostRecentMovieNodeComparator](
                                                                     &OBJC_CLASS___DeviceSettingsNode,
                                                                     "mostRecentMovieNodeComparator"));
            v32 = 0u;
            v33 = 0u;
            v34 = 0u;
            v35 = 0u;
            v18 = objc_retain(v8);
            v19 = objc_msgSend(v18, "countByEnumeratingWithState:objects:count:", &v32, v40, 16LL);
            if ( v19 )
            {
              v20 = v19;
              v21 = *(_QWORD *)v33;
              while ( 2 )
              {
                for ( i = 0LL; i != v20; i = (char *)i + 1 )
                {
                  if ( *(_QWORD *)v33 != v21 )
                    objc_enumerationMutation(v18);
                  v23 = *(_QWORD *)(*((_QWORD *)&v32 + 1) + 8LL * (_QWORD)i);
                  if ( v17[2](v17, v23, v15) == v10 )
                  {
                    objc_msgSend(v18, "removeObject:", v23);
                    objc_msgSend(v18, "addObject:", v15);
                    goto LABEL_27;
                  }
                }
                v20 = objc_msgSend(v18, "countByEnumeratingWithState:objects:count:", &v32, v40, 16LL);
                if ( v20 )
                  continue;
                break;
              }
            }
LABEL_27:
            objc_release(v18);
            objc_release(v17);
            v8 = v27;
            a5 = v28;
            v13 = v25;
            a4 = v26;
            v12 = v29;
          }
          else
          {
            objc_msgSend(v8, "addObject:", v15);
          }
        }
        v14 = (char *)v14 + 1;
      }
      while ( v14 != v12 );
      v12 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v36, v41, 16LL);
    }
    while ( v12 );
  }
  objc_release(obj);
  objc_release(obj);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}