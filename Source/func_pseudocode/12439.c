-[NSURL tsu_conformsToAnyUTI:]
bool __cdecl -[NSURL tsu_conformsToAnyUTI:](NSURL *self, SEL a2, id a3)
{
  id v4; // x19
  NSString *v5; // x0
  NSString *v6; // x20
  id v7; // x21
  void *v8; // x0
  void *v9; // x22
  __int64 v10; // x24
  void *i; // x27
  void *v12; // x23
  id v13; // x24
  void *v14; // x0
  void *v15; // x25
  __int64 v16; // x28
  void *j; // x26
  bool v18; // w23
  __int64 v20; // [xsp+8h] [xbp-1E8h]
  __int128 v21; // [xsp+10h] [xbp-1E0h] BYREF
  __int128 v22; // [xsp+20h] [xbp-1D0h]
  __int128 v23; // [xsp+30h] [xbp-1C0h]
  __int128 v24; // [xsp+40h] [xbp-1B0h]
  __int128 v25; // [xsp+50h] [xbp-1A0h] BYREF
  __int128 v26; // [xsp+60h] [xbp-190h]
  __int128 v27; // [xsp+70h] [xbp-180h]
  __int128 v28; // [xsp+80h] [xbp-170h]
  _BYTE v29[128]; // [xsp+90h] [xbp-160h] BYREF
  _BYTE v30[128]; // [xsp+110h] [xbp-E0h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[NSURL pathExtension](self, "pathExtension"));
  v6 = v5;
  if ( v5 )
  {
    v25 = 0u;
    v26 = 0u;
    v27 = 0u;
    v28 = 0u;
    v7 = objc_retain(objc_retainAutoreleasedReturnValue(-[NSString tsu_allFilenameExtensionIdentifiersForTag](v5, "tsu_allFilenameExtensionIdentifiersForTag")));
    v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v25, v30, 16LL);
    if ( v8 )
    {
      v9 = v8;
      v10 = *(_QWORD *)v26;
      v20 = *(_QWORD *)v26;
      do
      {
        for ( i = 0LL; i != v9; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v26 != v10 )
            objc_enumerationMutation(v7);
          v12 = *(void **)(*((_QWORD *)&v25 + 1) + 8LL * (_QWORD)i);
          if ( ((unsigned int)objc_msgSend(v12, "tsu_isDynamic") & 1) == 0 )
          {
            v23 = 0u;
            v24 = 0u;
            v21 = 0u;
            v22 = 0u;
            v13 = objc_retain(v4);
            v14 = objc_msgSend(v13, "countByEnumeratingWithState:objects:count:", &v21, v29, 16LL);
            if ( v14 )
            {
              v15 = v14;
              v16 = *(_QWORD *)v22;
              while ( 2 )
              {
                for ( j = 0LL; j != v15; j = (char *)j + 1 )
                {
                  if ( *(_QWORD *)v22 != v16 )
                    objc_enumerationMutation(v13);
                  if ( ((unsigned int)objc_msgSend(
                                        v12,
                                        "tsu_conformsToUTI:",
                                        *(_QWORD *)(*((_QWORD *)&v21 + 1) + 8LL * (_QWORD)j)) & 1) != 0 )
                  {
                    objc_release(v13);
                    v18 = 1;
                    goto LABEL_23;
                  }
                }
                v15 = objc_msgSend(v13, "countByEnumeratingWithState:objects:count:", &v21, v29, 16LL);
                if ( v15 )
                  continue;
                break;
              }
            }
            objc_release(v13);
            v10 = v20;
          }
        }
        v9 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v25, v30, 16LL);
        v18 = 0;
      }
      while ( v9 );
    }
    else
    {
      v18 = 0;
    }
LABEL_23:
    objc_release(v7);
    objc_release(v7);
  }
  else
  {
    v18 = 0;
  }
  objc_release(v6);
  objc_release(v4);
  return v18;
}