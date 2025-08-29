-[DeviceSettingsTVShowsViewController selectDisableAndCheckItemsForUpdateMode:episodeCount:episodeAction:nodes:checkedItems:detailsModel:detailsCheckedItems:]
id __cdecl -[DeviceSettingsTVShowsViewController selectDisableAndCheckItemsForUpdateMode:episodeCount:episodeAction:nodes:checkedItems:detailsModel:detailsCheckedItems:](
        DeviceSettingsTVShowsViewController *self,
        SEL a2,
        unsigned __int64 a3,
        signed __int64 a4,
        unsigned __int64 a5,
        id a6,
        id a7,
        id a8,
        id a9)
{
  id v12; // x19
  void *v13; // x23
  signed __int64 v14; // x8
  void *i; // x22
  __int64 v16; // x19
  void *v17; // x24
  void *v18; // x0
  void *v19; // x25
  void *v20; // x0
  void *v21; // x1
  __int64 v22; // x2
  void *v23; // x19
  unsigned int v24; // w0
  signed __int64 v25; // x25
  __int64 v26; // x19
  void *v27; // x22
  void *v28; // x0
  void *v29; // x0
  id v30; // x19
  void *v31; // x0
  void *v32; // x27
  int v33; // w26
  __int64 v34; // x24
  __int64 v35; // x22
  __int64 v36; // x28
  signed __int64 v38; // [xsp+8h] [xbp-328h]
  id v39; // [xsp+10h] [xbp-320h]
  id obj; // [xsp+18h] [xbp-318h]
  __int64 v41; // [xsp+20h] [xbp-310h]
  id v43; // [xsp+30h] [xbp-300h]
  void *v44; // [xsp+38h] [xbp-2F8h]
  void *v45; // [xsp+40h] [xbp-2F0h]
  void *v46; // [xsp+48h] [xbp-2E8h]
  void *v47; // [xsp+50h] [xbp-2E0h]
  void *v48; // [xsp+58h] [xbp-2D8h]
  id v49; // [xsp+60h] [xbp-2D0h]
  __int64 v50; // [xsp+68h] [xbp-2C8h]
  void *v51; // [xsp+70h] [xbp-2C0h]
  void *v52; // [xsp+78h] [xbp-2B8h]
  __int64 v53; // [xsp+80h] [xbp-2B0h]
  void *v54; // [xsp+88h] [xbp-2A8h]
  __int128 v55; // [xsp+90h] [xbp-2A0h] BYREF
  __int128 v56; // [xsp+A0h] [xbp-290h]
  __int128 v57; // [xsp+B0h] [xbp-280h]
  __int128 v58; // [xsp+C0h] [xbp-270h]
  __int128 v59; // [xsp+D0h] [xbp-260h] BYREF
  __int128 v60; // [xsp+E0h] [xbp-250h]
  __int128 v61; // [xsp+F0h] [xbp-240h]
  __int128 v62; // [xsp+100h] [xbp-230h]
  __int128 v63; // [xsp+110h] [xbp-220h] BYREF
  __int128 v64; // [xsp+120h] [xbp-210h]
  __int128 v65; // [xsp+130h] [xbp-200h]
  __int128 v66; // [xsp+140h] [xbp-1F0h]
  _BYTE v67[128]; // [xsp+150h] [xbp-1E0h] BYREF
  _BYTE v68[128]; // [xsp+1D0h] [xbp-160h] BYREF
  _BYTE v69[128]; // [xsp+250h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+338h] [xbp+8h]

  v39 = objc_retain(a7);
  v12 = objc_retain(a8);
  v13 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  if ( a4 >= 0 )
    v14 = a4;
  else
    v14 = -a4;
  v38 = v14;
  v43 = v12;
  v63 = 0u;
  v64 = 0u;
  v65 = 0u;
  v66 = 0u;
  obj = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "allKeys"));
  v44 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v63, v69, 16LL);
  if ( v44 )
  {
    v41 = *(_QWORD *)v64;
    do
    {
      for ( i = 0LL; i != v44; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v64 != v41 )
          objc_enumerationMutation(obj);
        v16 = *(_QWORD *)(*((_QWORD *)&v63 + 1) + 8LL * (_QWORD)i);
        v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v43, "objectForKeyedSubscript:", v16));
        v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "children"));
        v19 = v18;
        if ( a4 < 0 )
          v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "reverseObjectEnumerator"));
        else
          v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "objectEnumerator"));
        v21 = v20;
        if ( a3 == 1
          || (v22 = v16, v23 = v20, v24 = (unsigned int)objc_msgSend(v39, "containsObject:", v22), v21 = v23, v24) )
        {
          v46 = v19;
          v47 = v17;
          v48 = i;
          v61 = 0u;
          v62 = 0u;
          v59 = 0u;
          v60 = 0u;
          v45 = v21;
          v49 = objc_retain(v21);
          v51 = objc_msgSend(v49, "countByEnumeratingWithState:objects:count:", &v59, v68, 16LL);
          if ( v51 )
          {
            v50 = *(_QWORD *)v60;
            v25 = v38;
LABEL_16:
            v26 = 0LL;
            while ( 1 )
            {
              if ( *(_QWORD *)v60 != v50 )
                objc_enumerationMutation(v49);
              v27 = *(void **)(*((_QWORD *)&v59 + 1) + 8 * v26);
              v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v27, "children"));
              v53 = v26;
              v54 = v28;
              v52 = v27;
              v29 = a4 < 0
                  ? objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "reverseObjectEnumerator"))
                  : objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "objectEnumerator"));
              v57 = 0u;
              v58 = 0u;
              v55 = 0u;
              v56 = 0u;
              v30 = objc_retain(v29);
              v31 = objc_msgSend(v30, "countByEnumeratingWithState:objects:count:", &v55, v67, 16LL);
              if ( v31 )
              {
                v32 = v31;
                v33 = 0;
                v34 = *(_QWORD *)v56;
LABEL_24:
                v35 = 0LL;
                while ( 1 )
                {
                  if ( *(_QWORD *)v56 != v34 )
                    objc_enumerationMutation(v30);
                  v36 = *(_QWORD *)(*((_QWORD *)&v55 + 1) + 8 * v35);
                  if ( a5 != 1 || !objc_msgSend(*(id *)(*((_QWORD *)&v55 + 1) + 8 * v35), "playCount") )
                  {
                    objc_msgSend(v13, "addObject:", v36);
                    ++v33;
                    if ( a4 )
                    {
                      if ( !--v25 )
                        break;
                    }
                  }
                  if ( v32 == (void *)++v35 )
                  {
                    v32 = objc_msgSend(v30, "countByEnumeratingWithState:objects:count:", &v55, v67, 16LL);
                    if ( v32 )
                      goto LABEL_24;
                    break;
                  }
                }
              }
              else
              {
                v33 = 0;
              }
              objc_release(v30);
              if ( objc_msgSend(v54, "count") == (void *)v33 )
                objc_msgSend(v13, "addObject:", v52);
              objc_release(v30);
              objc_release(v54);
              if ( a4 )
              {
                if ( !v25 )
                  break;
              }
              v26 = v53 + 1;
              if ( (void *)(v53 + 1) == v51 )
              {
                v51 = objc_msgSend(v49, "countByEnumeratingWithState:objects:count:", &v59, v68, 16LL);
                if ( v51 )
                  goto LABEL_16;
                break;
              }
            }
          }
          objc_release(v49);
          v17 = v47;
          i = v48;
          v21 = v45;
          v19 = v46;
        }
        objc_release(v21);
        objc_release(v19);
        objc_release(v17);
      }
      v44 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v63, v69, 16LL);
    }
    while ( v44 );
  }
  objc_release(obj);
  objc_release(v43);
  objc_release(v39);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}