-[DeviceSettingsPodcastsViewController selectDisableAndCheckItemsForUpdateMode:episodeCount:episodeAction:nodes:checkedItems:detailsModel:detailsCheckedItems:]
id __cdecl -[DeviceSettingsPodcastsViewController selectDisableAndCheckItemsForUpdateMode:episodeCount:episodeAction:nodes:checkedItems:detailsModel:detailsCheckedItems:](
        DeviceSettingsPodcastsViewController *self,
        SEL a2,
        unsigned __int64 a3,
        signed __int64 a4,
        unsigned __int64 a5,
        id a6,
        id a7,
        id a8,
        id a9)
{
  id v13; // x24
  void *v14; // x23
  signed __int64 v15; // x8
  void *i; // x26
  void *v17; // x21
  void *v18; // x22
  void *v19; // x25
  void *v20; // x0
  void *v21; // x22
  void *v22; // x0
  void *v23; // x27
  void *v24; // x21
  unsigned int v25; // w24
  id v26; // x25
  void *v27; // x0
  void *v28; // x21
  __int64 v29; // x27
  signed __int64 v30; // x28
  void *j; // x22
  __int64 v32; // x24
  signed __int64 v34; // [xsp+0h] [xbp-230h]
  id v35; // [xsp+8h] [xbp-228h]
  id obj; // [xsp+10h] [xbp-220h]
  __int64 v37; // [xsp+18h] [xbp-218h]
  id v39; // [xsp+28h] [xbp-208h]
  void *v40; // [xsp+30h] [xbp-200h]
  void *v41; // [xsp+38h] [xbp-1F8h]
  void *v42; // [xsp+40h] [xbp-1F0h]
  void *v43; // [xsp+48h] [xbp-1E8h]
  __int128 v44; // [xsp+50h] [xbp-1E0h] BYREF
  __int128 v45; // [xsp+60h] [xbp-1D0h]
  __int128 v46; // [xsp+70h] [xbp-1C0h]
  __int128 v47; // [xsp+80h] [xbp-1B0h]
  __int128 v48; // [xsp+90h] [xbp-1A0h] BYREF
  __int128 v49; // [xsp+A0h] [xbp-190h]
  __int128 v50; // [xsp+B0h] [xbp-180h]
  __int128 v51; // [xsp+C0h] [xbp-170h]
  _BYTE v52[128]; // [xsp+D0h] [xbp-160h] BYREF
  _BYTE v53[128]; // [xsp+150h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+238h] [xbp+8h]

  v13 = objc_retain(a6);
  v35 = objc_retain(a7);
  v39 = objc_retain(a8);
  v14 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  v48 = 0u;
  v49 = 0u;
  if ( a4 >= 0 )
    v15 = a4;
  else
    v15 = -a4;
  v34 = v15;
  v50 = 0uLL;
  v51 = 0uLL;
  obj = objc_retain(v13);
  v40 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v48, v53, 16LL);
  if ( v40 )
  {
    v37 = *(_QWORD *)v49;
    do
    {
      for ( i = 0LL; i != v40; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v49 != v37 )
          objc_enumerationMutation(obj);
        v17 = *(void **)(*((_QWORD *)&v48 + 1) + 8LL * (_QWORD)i);
        v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "persistentID", v34));
        v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v39, "objectForKeyedSubscript:", v18));
        objc_release(v18);
        v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "children"));
        v21 = v20;
        if ( a4 < 0 )
          v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "reverseObjectEnumerator"));
        else
          v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "objectEnumerator"));
        v23 = v22;
        if ( a3 == 1
          || (v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "persistentID")),
              v25 = (unsigned int)objc_msgSend(v35, "containsObject:", v24),
              objc_release(v24),
              v25) )
        {
          v42 = v21;
          v43 = v19;
          v46 = 0u;
          v47 = 0u;
          v44 = 0u;
          v45 = 0u;
          v41 = v23;
          v26 = objc_retain(v23);
          v27 = objc_msgSend(v26, "countByEnumeratingWithState:objects:count:", &v44, v52, 16LL);
          if ( !v27 )
            goto LABEL_28;
          v28 = v27;
          v29 = *(_QWORD *)v45;
          v30 = v34;
          while ( 1 )
          {
            for ( j = 0LL; j != v28; j = (char *)j + 1 )
            {
              if ( *(_QWORD *)v45 != v29 )
                objc_enumerationMutation(v26);
              v32 = *(_QWORD *)(*((_QWORD *)&v44 + 1) + 8LL * (_QWORD)j);
              if ( a5 == 3 )
              {
                if ( ((unsigned int)objc_msgSend(*(id *)(*((_QWORD *)&v44 + 1) + 8LL * (_QWORD)j), "hasBeenPlayed") & 1) != 0 )
                  continue;
              }
              else if ( a5 == 4 && objc_msgSend(*(id *)(*((_QWORD *)&v44 + 1) + 8LL * (_QWORD)j), "playCount") )
              {
                continue;
              }
              objc_msgSend(v14, "addObject:", v32);
              if ( a4 )
              {
                if ( !--v30 )
                  goto LABEL_28;
              }
            }
            v28 = objc_msgSend(v26, "countByEnumeratingWithState:objects:count:", &v44, v52, 16LL);
            if ( !v28 )
            {
LABEL_28:
              objc_release(v26);
              v21 = v42;
              v19 = v43;
              v23 = v41;
              break;
            }
          }
        }
        objc_release(v23);
        objc_release(v21);
        objc_release(v19);
      }
      v40 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v48, v53, 16LL);
    }
    while ( v40 );
  }
  objc_release(obj);
  objc_release(v39);
  objc_release(v35);
  objc_release(obj);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}