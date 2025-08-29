-[DeviceSettingsDetailsTabContentViewController setDetailsNodesState:]
void __cdecl -[DeviceSettingsDetailsTabContentViewController setDetailsNodesState:](
        DeviceSettingsDetailsTabContentViewController *self,
        SEL a2,
        signed __int64 a3)
{
  NSMutableDictionary *v5; // x21
  void *v6; // x22
  void *v7; // x0
  void *v8; // x22
  void *i; // x28
  void *v10; // x0
  void *v11; // x23
  void *v12; // x0
  void *v13; // x24
  __int64 v14; // x21
  void *j; // x27
  void *v16; // x25
  NSMutableSet *v17; // x26
  id obj; // [xsp+0h] [xbp-1F0h]
  __int64 v19; // [xsp+8h] [xbp-1E8h]
  __int128 v20; // [xsp+10h] [xbp-1E0h] BYREF
  __int128 v21; // [xsp+20h] [xbp-1D0h]
  __int128 v22; // [xsp+30h] [xbp-1C0h]
  __int128 v23; // [xsp+40h] [xbp-1B0h]
  __int128 v24; // [xsp+50h] [xbp-1A0h] BYREF
  __int128 v25; // [xsp+60h] [xbp-190h]
  __int128 v26; // [xsp+70h] [xbp-180h]
  __int128 v27; // [xsp+80h] [xbp-170h]
  _BYTE v28[128]; // [xsp+90h] [xbp-160h] BYREF
  _BYTE v29[128]; // [xsp+110h] [xbp-E0h] BYREF

  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController detailsModelDict](self, "detailsModelDict"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary allValues](v5, "allValues"));
  objc_release(v5);
  v26 = 0u;
  v27 = 0u;
  v24 = 0u;
  v25 = 0u;
  obj = objc_retain(v6);
  v7 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v24, v29, 16LL);
  if ( v7 )
  {
    v8 = v7;
    v19 = *(_QWORD *)v25;
    do
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v25 != v19 )
          objc_enumerationMutation(obj);
        v10 = *(void **)(*((_QWORD *)&v24 + 1) + 8LL * (_QWORD)i);
        v20 = 0u;
        v21 = 0u;
        v22 = 0u;
        v23 = 0u;
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "children"));
        v12 = objc_msgSend(v11, "countByEnumeratingWithState:objects:count:", &v20, v28, 16LL);
        if ( v12 )
        {
          v13 = v12;
          v14 = *(_QWORD *)v21;
          do
          {
            for ( j = 0LL; j != v13; j = (char *)j + 1 )
            {
              if ( *(_QWORD *)v21 != v14 )
                objc_enumerationMutation(v11);
              v16 = *(void **)(*((_QWORD *)&v20 + 1) + 8LL * (_QWORD)j);
              objc_msgSend(v16, "setState:setChildren:setAncestors:", a3, 1LL, 1LL);
              v17 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController detailsCheckedItems](self, "detailsCheckedItems"));
              -[DeviceSettingsTabContentViewController updateCheckedItems:withNode:updateChildren:updateAncestors:](
                self,
                "updateCheckedItems:withNode:updateChildren:updateAncestors:",
                v17,
                v16,
                1LL,
                1LL);
              objc_release(v17);
            }
            v13 = objc_msgSend(v11, "countByEnumeratingWithState:objects:count:", &v20, v28, 16LL);
          }
          while ( v13 );
        }
        objc_release(v11);
      }
      v8 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v24, v29, 16LL);
    }
    while ( v8 );
  }
  objc_release(obj);
  objc_release(obj);
}