-[DeviceSettingsTabContentViewController updateCheckedItems:withNode:updateChildren:updateAncestors:]
void __cdecl -[DeviceSettingsTabContentViewController updateCheckedItems:withNode:updateChildren:updateAncestors:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        bool a6)
{
  _BOOL4 v6; // w23
  _BOOL4 v7; // w24
  id v10; // x19
  id v11; // x21
  void *v12; // x22
  void *v13; // x0
  void *v14; // x22
  void *v15; // x22
  void *v16; // x24
  void *v17; // x0
  void *v18; // x25
  __int64 v19; // x26
  void *i; // x27
  void *v21; // x23
  void *v22; // x0
  void *v23; // x24
  __int64 v24; // x25
  void *j; // x26
  __int128 v26; // [xsp+0h] [xbp-1E0h] BYREF
  __int128 v27; // [xsp+10h] [xbp-1D0h]
  __int128 v28; // [xsp+20h] [xbp-1C0h]
  __int128 v29; // [xsp+30h] [xbp-1B0h]
  __int128 v30; // [xsp+40h] [xbp-1A0h] BYREF
  __int128 v31; // [xsp+50h] [xbp-190h]
  __int128 v32; // [xsp+60h] [xbp-180h]
  __int128 v33; // [xsp+70h] [xbp-170h]
  _BYTE v34[128]; // [xsp+88h] [xbp-158h] BYREF
  _BYTE v35[128]; // [xsp+108h] [xbp-D8h] BYREF

  v6 = a6;
  v7 = a5;
  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "identifier"));
  objc_release(v12);
  if ( v12 )
  {
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "identifier"));
  }
  else
  {
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "persistentID"));
    objc_release(v14);
    if ( v14 )
      v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "persistentID"));
    else
      v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "name"));
  }
  v15 = v13;
  if ( !v13 )
    goto LABEL_32;
  if ( !objc_msgSend(v11, "state") || objc_msgSend(v11, "state") == (void *)-1LL )
  {
    objc_msgSend(v10, "removeObject:", v15);
    if ( v7 )
      goto LABEL_16;
LABEL_11:
    if ( !v6 )
      goto LABEL_32;
    goto LABEL_24;
  }
  if ( objc_msgSend(v11, "state") == (void *)1 )
  {
    objc_msgSend(v10, "addObject:", v15);
    if ( v7 )
      goto LABEL_16;
    goto LABEL_11;
  }
  if ( !v7 )
    goto LABEL_11;
LABEL_16:
  v32 = 0u;
  v33 = 0u;
  v30 = 0u;
  v31 = 0u;
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "children"));
  v17 = objc_msgSend(v16, "countByEnumeratingWithState:objects:count:", &v30, v35, 16LL);
  if ( v17 )
  {
    v18 = v17;
    v19 = *(_QWORD *)v31;
    do
    {
      for ( i = 0LL; i != v18; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v31 != v19 )
          objc_enumerationMutation(v16);
        -[DeviceSettingsTabContentViewController updateCheckedItems:withNode:updateChildren:updateAncestors:](
          self,
          "updateCheckedItems:withNode:updateChildren:updateAncestors:",
          v10,
          *(_QWORD *)(*((_QWORD *)&v30 + 1) + 8LL * (_QWORD)i),
          1LL,
          0LL);
      }
      v18 = objc_msgSend(v16, "countByEnumeratingWithState:objects:count:", &v30, v35, 16LL);
    }
    while ( v18 );
  }
  objc_release(v16);
  if ( v6 )
  {
LABEL_24:
    v28 = 0u;
    v29 = 0u;
    v26 = 0u;
    v27 = 0u;
    v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "ancestors", 0LL));
    v22 = objc_msgSend(v21, "countByEnumeratingWithState:objects:count:", &v26, v34, 16LL);
    if ( v22 )
    {
      v23 = v22;
      v24 = *(_QWORD *)v27;
      do
      {
        for ( j = 0LL; j != v23; j = (char *)j + 1 )
        {
          if ( *(_QWORD *)v27 != v24 )
            objc_enumerationMutation(v21);
          -[DeviceSettingsTabContentViewController updateCheckedItems:withNode:updateChildren:updateAncestors:](
            self,
            "updateCheckedItems:withNode:updateChildren:updateAncestors:",
            v10,
            *(_QWORD *)(*((_QWORD *)&v26 + 1) + 8LL * (_QWORD)j),
            0LL,
            0LL);
        }
        v23 = objc_msgSend(v21, "countByEnumeratingWithState:objects:count:", &v26, v34, 16LL);
      }
      while ( v23 );
    }
    objc_release(v21);
  }
LABEL_32:
  objc_release(v15);
  objc_release(v11);
  objc_release(v10);
}