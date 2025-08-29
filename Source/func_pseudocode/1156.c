-[DeviceSettingsPhotosViewController loadRootMediaGroup]
void __cdecl -[DeviceSettingsPhotosViewController loadRootMediaGroup](DeviceSettingsPhotosViewController *self, SEL a2)
{
  AMPPHMediaGroup *v2; // x20
  NSMutableArray *v3; // x19
  void *v4; // x0
  void *v5; // x24
  void *v6; // x22
  void *v7; // x20
  __int64 v8; // x25
  void *i; // x19
  void *v10; // x26
  void *v11; // x27
  unsigned __int8 v12; // w28
  void *v13; // x27
  void *v14; // x21
  void *v15; // x27
  unsigned int v16; // w28
  id v17; // x0
  void *v18; // x21
  AMPPHMediaGroup *v19; // x24
  NSMutableArray *v20; // x23
  void *v21; // x0
  void *v22; // x24
  __int64 v23; // x19
  void *j; // x25
  void *v25; // x2
  NSTabView *v27; // x24
  NSArray *v28; // x23
  void *v29; // x0
  void *v30; // x24
  __int64 v31; // x19
  void *k; // x25
  NSProgressIndicator *v33; // x19
  NSMutableArray *obj; // [xsp+8h] [xbp-2A8h]
  __int128 v36; // [xsp+10h] [xbp-2A0h] BYREF
  __int128 v37; // [xsp+20h] [xbp-290h]
  __int128 v38; // [xsp+30h] [xbp-280h]
  __int128 v39; // [xsp+40h] [xbp-270h]
  __int128 v40; // [xsp+50h] [xbp-260h] BYREF
  __int128 v41; // [xsp+60h] [xbp-250h]
  __int128 v42; // [xsp+70h] [xbp-240h]
  __int128 v43; // [xsp+80h] [xbp-230h]
  __int128 v44; // [xsp+90h] [xbp-220h] BYREF
  __int128 v45; // [xsp+A0h] [xbp-210h]
  __int128 v46; // [xsp+B0h] [xbp-200h]
  __int128 v47; // [xsp+C0h] [xbp-1F0h]
  _BYTE v48[128]; // [xsp+D0h] [xbp-1E0h] BYREF
  _BYTE v49[128]; // [xsp+150h] [xbp-160h] BYREF
  _BYTE v50[128]; // [xsp+1D0h] [xbp-E0h] BYREF

  v44 = 0u;
  v45 = 0u;
  v46 = 0u;
  v47 = 0u;
  v2 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController rootMediaGroup](self, "rootMediaGroup"));
  v3 = objc_retainAutoreleasedReturnValue(-[AMPPHMediaGroup childGroups](v2, "childGroups"));
  objc_release(v2);
  obj = v3;
  v4 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
         v3,
         "countByEnumeratingWithState:objects:count:",
         &v44,
         v50,
         16LL);
  if ( !v4 )
  {
    v6 = 0LL;
    v7 = 0LL;
    goto LABEL_14;
  }
  v5 = v4;
  v6 = 0LL;
  v7 = 0LL;
  v8 = *(_QWORD *)v45;
  do
  {
    for ( i = 0LL; i != v5; i = (char *)i + 1 )
    {
      if ( *(_QWORD *)v45 != v8 )
        objc_enumerationMutation(obj);
      v10 = *(void **)(*((_QWORD *)&v44 + 1) + 8LL * (_QWORD)i);
      v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "mediaLibraryTypeIdentifier"));
      v12 = (unsigned __int8)objc_msgSend(v11, "isEqualToString:", CFSTR("com.apple.Photos.FavoritesGroup"));
      objc_release(v11);
      if ( (v12 & 1) != 0 )
      {
        v13 = v7;
        v14 = v6;
        v7 = v10;
      }
      else
      {
        v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "mediaLibraryTypeIdentifier"));
        v16 = (unsigned int)objc_msgSend(v15, "isEqualToString:", CFSTR("com.apple.Photos.FacesAlbum"));
        objc_release(v15);
        v13 = v6;
        v14 = v10;
        if ( !v16 )
          continue;
      }
      v17 = objc_retain(v10);
      objc_release(v13);
      v6 = v14;
    }
    v5 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
           obj,
           "countByEnumeratingWithState:objects:count:",
           &v44,
           v50,
           16LL);
  }
  while ( v5 );
LABEL_14:
  objc_release(obj);
  v18 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v40 = 0u;
  v41 = 0u;
  v42 = 0u;
  v43 = 0u;
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController rootMediaGroup](self, "rootMediaGroup"));
  v20 = objc_retainAutoreleasedReturnValue(-[AMPPHMediaGroup childGroups](v19, "childGroups"));
  objc_release(v19);
  v21 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
          v20,
          "countByEnumeratingWithState:objects:count:",
          &v40,
          v49,
          16LL);
  if ( v21 )
  {
    v22 = v21;
    v23 = *(_QWORD *)v41;
    do
    {
      for ( j = 0LL; j != v22; j = (char *)j + 1 )
      {
        if ( *(_QWORD *)v41 != v23 )
          objc_enumerationMutation(v20);
        v25 = *(void **)(*((_QWORD *)&v40 + 1) + 8LL * (_QWORD)j);
        if ( v25 != v7 && v25 != v6 )
          objc_msgSend(v18, "addObject:");
      }
      v22 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
              v20,
              "countByEnumeratingWithState:objects:count:",
              &v40,
              v49,
              16LL);
    }
    while ( v22 );
  }
  objc_release(v20);
  -[DeviceSettingsPhotosViewController loadPeopleGroup:](self, "loadPeopleGroup:", v6);
  if ( v7 )
    objc_msgSend(v18, "insertObject:atIndex:", v7, 0LL);
  -[DeviceSettingsPhotosViewController loadAlbumGroups:](self, "loadAlbumGroups:", v18);
  v38 = 0u;
  v39 = 0u;
  v36 = 0u;
  v37 = 0u;
  v27 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController tabView](self, "tabView"));
  v28 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItems](v27, "tabViewItems"));
  objc_release(v27);
  v29 = -[NSArray countByEnumeratingWithState:objects:count:](
          v28,
          "countByEnumeratingWithState:objects:count:",
          &v36,
          v48,
          16LL);
  if ( v29 )
  {
    v30 = v29;
    v31 = *(_QWORD *)v37;
    do
    {
      for ( k = 0LL; k != v30; k = (char *)k + 1 )
      {
        if ( *(_QWORD *)v37 != v31 )
          objc_enumerationMutation(v28);
        -[DeviceSettingsPhotosViewController setupTabViewItem:](
          self,
          "setupTabViewItem:",
          *(_QWORD *)(*((_QWORD *)&v36 + 1) + 8LL * (_QWORD)k));
      }
      v30 = -[NSArray countByEnumeratingWithState:objects:count:](
              v28,
              "countByEnumeratingWithState:objects:count:",
              &v36,
              v48,
              16LL);
    }
    while ( v30 );
  }
  objc_release(v28);
  -[DeviceSettingsPhotosViewController updateTabView](self, "updateTabView");
  -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  -[DeviceSettingsPhotosViewController setPhotosIsLoading:](self, "setPhotosIsLoading:", 0LL);
  -[DeviceSettingsPhotosViewController setPhotosModelIsLoaded:](self, "setPhotosModelIsLoaded:", 1LL);
  v33 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController progressIndicator](self, "progressIndicator"));
  -[NSProgressIndicator setHidden:](v33, "setHidden:", 1LL);
  objc_release(v33);
  objc_release(v18);
  objc_release(v6);
  objc_release(v7);
}