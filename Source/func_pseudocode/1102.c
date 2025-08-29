-[DeviceSettingsPhotosViewController loadModelForFolders]
void __cdecl -[DeviceSettingsPhotosViewController loadModelForFolders](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  NSFileManager *v3; // x21
  NSURL *v4; // x22
  NSArray *v5; // x23
  NSDirectoryEnumerator *v6; // x26
  void *v7; // x0
  void *v8; // x26
  __int64 v9; // x20
  void *i; // x25
  void *v11; // x27
  unsigned int v12; // w22
  id v13; // x21
  id v14; // x0
  void *v15; // x28
  unsigned int v16; // w19
  id v17; // x23
  id v18; // x22
  void *v19; // x0
  void *v20; // x27
  id v21; // x23
  void *v22; // x0
  void *v23; // x21
  DeviceSettingsNode *v24; // x24
  __int64 v25; // x25
  void *v26; // x26
  DeviceSettingsNode *v27; // x22
  __int64 v28; // x19
  id v29; // x21
  NSMutableDictionary *v30; // x19
  NSMutableDictionary *v31; // x19
  AMPPhotoSyncPrefs *v32; // x19
  void *v33; // x22
  void *v34; // x21
  void *v35; // x22
  NSMutableDictionary *v36; // x19
  NSURL *v37; // x22
  NSString *v38; // x19
  FileEventObserver *v39; // x24
  DeviceSettingsPhotosViewController *v40; // [xsp+0h] [xbp-240h]
  id v41; // [xsp+8h] [xbp-238h]
  NSDirectoryEnumerator *obj; // [xsp+18h] [xbp-228h]
  id v43; // [xsp+20h] [xbp-220h]
  id v44; // [xsp+28h] [xbp-218h]
  __int128 v45; // [xsp+30h] [xbp-210h] BYREF
  __int128 v46; // [xsp+40h] [xbp-200h]
  __int128 v47; // [xsp+50h] [xbp-1F0h]
  __int128 v48; // [xsp+60h] [xbp-1E0h]
  id v49; // [xsp+70h] [xbp-1D0h] BYREF
  id v50; // [xsp+78h] [xbp-1C8h] BYREF
  id v51; // [xsp+80h] [xbp-1C0h] BYREF
  id v52; // [xsp+88h] [xbp-1B8h] BYREF
  __int128 v53; // [xsp+90h] [xbp-1B0h] BYREF
  __int128 v54; // [xsp+A0h] [xbp-1A0h]
  __int128 v55; // [xsp+B0h] [xbp-190h]
  __int128 v56; // [xsp+C0h] [xbp-180h]
  _BYTE v57[128]; // [xsp+D0h] [xbp-170h] BYREF
  _BYTE v58[128]; // [xsp+150h] [xbp-F0h] BYREF
  _QWORD v59[2]; // [xsp+1D0h] [xbp-70h] BYREF

  v44 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v43 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v41 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v3 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v40 = self;
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController folderURL](self, "folderURL"));
  v59[0] = NSURLIsDirectoryKey;
  v59[1] = NSURLIsPackageKey;
  v5 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v59, 2LL));
  v6 = objc_retainAutoreleasedReturnValue(
         -[NSFileManager enumeratorAtURL:includingPropertiesForKeys:options:errorHandler:](
           v3,
           "enumeratorAtURL:includingPropertiesForKeys:options:errorHandler:",
           v4,
           v5,
           23LL,
           &stru_1000B9348));
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  v55 = 0u;
  v56 = 0u;
  v53 = 0u;
  v54 = 0u;
  obj = objc_retain(v6);
  v7 = -[NSDirectoryEnumerator countByEnumeratingWithState:objects:count:](
         obj,
         "countByEnumeratingWithState:objects:count:",
         &v53,
         v58,
         16LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_QWORD *)v54;
    do
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v54 != v9 )
          objc_enumerationMutation(obj);
        v11 = *(void **)(*((_QWORD *)&v53 + 1) + 8LL * (_QWORD)i);
        v51 = 0LL;
        v52 = 0LL;
        v12 = (unsigned int)objc_msgSend(v11, "getResourceValue:forKey:error:", &v52, NSURLIsDirectoryKey, &v51);
        v13 = objc_retain(v52);
        v14 = objc_retain(v51);
        v15 = v14;
        if ( v12 )
        {
          v49 = 0LL;
          v50 = 0LL;
          v16 = (unsigned int)objc_msgSend(v11, "getResourceValue:forKey:error:", &v50, NSURLIsPackageKey, &v49);
          v17 = objc_retain(v50);
          v18 = objc_retain(v49);
          objc_release(v15);
          if ( v16
            && (unsigned int)objc_msgSend(v13, "boolValue")
            && ((unsigned int)objc_msgSend(v17, "boolValue") & 1) == 0 )
          {
            v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "lastPathComponent"));
            v20 = v19;
            if ( v19
              && ((unsigned int)objc_msgSend(v19, "isEqualToString:", CFSTR("iPod Photo Cache")) & 1) == 0
              && ((unsigned int)objc_msgSend(v20, "isEqualToString:", CFSTR("Apple TV Photo Cache")) & 1) == 0 )
            {
              objc_msgSend(v41, "addObject:", v20);
            }
            objc_release(v20);
          }
        }
        else
        {
          v17 = 0LL;
          v18 = v14;
        }
        objc_release(v17);
        objc_release(v13);
        objc_release(v18);
      }
      v8 = -[NSDirectoryEnumerator countByEnumeratingWithState:objects:count:](
             obj,
             "countByEnumeratingWithState:objects:count:",
             &v53,
             v58,
             16LL);
    }
    while ( v8 );
  }
  objc_release(obj);
  v47 = 0u;
  v48 = 0u;
  v45 = 0u;
  v46 = 0u;
  v21 = objc_retain(v41);
  v22 = objc_msgSend(v21, "countByEnumeratingWithState:objects:count:", &v45, v57, 16LL);
  if ( v22 )
  {
    v23 = v22;
    v24 = 0LL;
    v25 = *(_QWORD *)v46;
    do
    {
      v26 = 0LL;
      v27 = v24;
      do
      {
        if ( *(_QWORD *)v46 != v25 )
          objc_enumerationMutation(v21);
        v28 = *(_QWORD *)(*((_QWORD *)&v45 + 1) + 8LL * (_QWORD)v26);
        v24 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode nodeWithName:](&OBJC_CLASS___DeviceSettingsNode, "nodeWithName:", v28));
        objc_release(v27);
        objc_msgSend(v43, "setObject:forKeyedSubscript:", v24, v28);
        -[DeviceSettingsNode setIsPlaylist:](v24, "setIsPlaylist:", 1LL);
        objc_msgSend(v44, "addObject:", v24);
        v26 = (char *)v26 + 1;
        v27 = v24;
      }
      while ( v23 != v26 );
      v23 = objc_msgSend(v21, "countByEnumeratingWithState:objects:count:", &v45, v57, 16LL);
    }
    while ( v23 );
    objc_release(v24);
  }
  objc_release(v21);
  v29 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode fileNodeComparator](&OBJC_CLASS___DeviceSettingsNode, "fileNodeComparator"));
  +[DeviceSettingsNode sortUsingComparator:nodes:](
    &OBJC_CLASS___DeviceSettingsNode,
    "sortUsingComparator:nodes:",
    v29,
    v44);
  objc_release(v29);
  v30 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](v40, "dataNodes"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v30, "setObject:forKeyedSubscript:", v44, CFSTR("Folders"));
  objc_release(v30);
  v31 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodesLookup](v40, "dataNodesLookup"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v31, "setObject:forKeyedSubscript:", v43, CFSTR("Folders"));
  objc_release(v31);
  v32 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](v40, "photoSyncPrefs"));
  v33 = objc_retainAutoreleasedReturnValue(-[AMPPhotoSyncPrefs photosFolderSelectedNames](v32, "photosFolderSelectedNames"));
  v34 = objc_msgSend(v33, "mutableCopy");
  objc_release(v33);
  objc_release(v32);
  v35 = v34;
  if ( !v34 )
    v35 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  v36 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](v40, "checkedItems"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v36, "setObject:forKeyedSubscript:", v35, CFSTR("Folders"));
  objc_release(v36);
  if ( !v34 )
    objc_release(v35);
  -[DeviceSettingsPhotosViewController setFolderModelIsLoaded:](v40, "setFolderModelIsLoaded:", 1LL);
  v37 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController folderURL](v40, "folderURL")));
  v38 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            -[NSURL fileSystemRepresentation](v37, "fileSystemRepresentation")));
  v39 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController fileEventObserver](v40, "fileEventObserver"));
  -[FileEventObserver setPath:](v39, "setPath:", v38);
  objc_release(v39);
  objc_release(v38);
  objc_release(v37);
  objc_release(v34);
  objc_release(obj);
  objc_release(v21);
  objc_release(v43);
  objc_release(v44);
}