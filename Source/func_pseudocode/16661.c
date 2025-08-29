-[EAAccessoryUpdater prepareFirmwareBundlesFromDropbox:error:]
bool __cdecl -[EAAccessoryUpdater prepareFirmwareBundlesFromDropbox:error:](
        EAAccessoryUpdater *self,
        SEL a2,
        id a3,
        id *a4)
{
  NSArray *v6; // x21
  __int64 v7; // x1
  NSString *v8; // x24
  void *v9; // x24
  void *v10; // x0
  void *v11; // x26
  __int64 v12; // x19
  __int64 v13; // x28
  void *v14; // x25
  const __CFString *v15; // x8
  NSError *v16; // x8
  bool result; // w0
  NSArray *v18; // x22
  NSArray *v19; // x21
  NSDictionary *v20; // x21
  _OWORD v22[2]; // [xsp+20h] [xbp-1C0h] BYREF
  _OWORD v23[2]; // [xsp+40h] [xbp-1A0h] BYREF
  __int128 v24; // [xsp+60h] [xbp-180h] BYREF
  __int128 v25; // [xsp+70h] [xbp-170h]
  __int64 v26; // [xsp+88h] [xbp-158h] BYREF
  __int128 v27; // [xsp+90h] [xbp-150h] BYREF
  __int128 v28; // [xsp+A0h] [xbp-140h]
  __int128 v29; // [xsp+B0h] [xbp-130h]
  __int128 v30; // [xsp+C0h] [xbp-120h]
  __int128 v31; // [xsp+D0h] [xbp-110h] BYREF
  __int128 v32; // [xsp+E0h] [xbp-100h]
  NSErrorUserInfoKey v33; // [xsp+F0h] [xbp-F0h] BYREF
  const __CFString *v34; // [xsp+F8h] [xbp-E8h] BYREF
  _BYTE v35[128]; // [xsp+100h] [xbp-E0h] BYREF

  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Entering: %s:%d"),
    "-[EAAccessoryUpdater prepareFirmwareBundlesFromDropbox:error:]",
    720LL);
  v6 = +[NSArray arrayWithObjects:](
         &OBJC_CLASS___NSArray,
         "arrayWithObjects:",
         NSURLIsDirectoryKey,
         NSURLLocalizedNameKey,
         0LL);
  if ( !(unsigned int)MGGetBoolAnswer(CFSTR("InternalBuild"), v7) )
  {
    v15 = CFSTR("Not Applicable.");
    goto LABEL_15;
  }
  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("%s: attempting to use files from dropbox: %@"),
    "-[EAAccessoryUpdater prepareFirmwareBundlesFromDropbox:error:]",
    self->dropboxPath);
  v8 = -[EAFirmwareUpdater currentFirmwareVersionOnAcc](self->firmwareUpdater, "currentFirmwareVersionOnAcc");
  v31 = 0u;
  v32 = 0u;
  if ( !-[EAAccessoryUpdater accessoryVersionFromString:accyVersion:](
          self,
          "accessoryVersionFromString:accyVersion:",
          v8,
          &v31) )
  {
    v15 = CFSTR("Accessory Firmware Version Reading Error");
    goto LABEL_15;
  }
  objc_msgSend(a3, "setObject:forKey:", v8, CFSTR("existingFWVersionOnAccessory"));
  v9 = -[NSArray mutableCopy](
         -[NSFileManager contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:](
           +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"),
           "contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:",
           self->dropboxPath,
           v6,
           4LL,
           0LL),
         "mutableCopy");
  objc_msgSend(v9, "sortUsingComparator:", &stru_100031AE0);
  if ( !objc_msgSend(v9, "count") )
  {
    v15 = CFSTR("No Firmware Bundle Is Available");
LABEL_15:
    if ( !a4 )
      return 0;
    v33 = NSLocalizedDescriptionKey;
    v34 = v15;
    v16 = +[NSError errorWithDomain:code:userInfo:](
            &OBJC_CLASS___NSError,
            "errorWithDomain:code:userInfo:",
            CFSTR("com.apple.EAAccessoryUpdater"),
            -1LL,
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v34,
              &v33,
              1LL));
    result = 0;
    *a4 = v16;
    return result;
  }
  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Firmware Bundles (In Descending Oder):%@"),
    v9);
  v29 = 0u;
  v30 = 0u;
  v27 = 0u;
  v28 = 0u;
  v10 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v27, v35, 16LL);
  if ( !v10 )
  {
LABEL_13:
    -[FudPluginDelegate log:format:](
      self->delegate,
      "log:format:",
      5LL,
      CFSTR("Using firmware bundle in dropbox: %@"),
      0LL);
LABEL_14:
    v15 = CFSTR("No Firmware Bundle Is Available, either the folder name is incorrect or no firmware bundle has higher firmware version.");
    goto LABEL_15;
  }
  v11 = v10;
  v12 = *(_QWORD *)v28;
LABEL_6:
  v13 = 0LL;
  while ( 1 )
  {
    if ( *(_QWORD *)v28 != v12 )
      objc_enumerationMutation(v9);
    v14 = *(void **)(*((_QWORD *)&v27 + 1) + 8 * v13);
    v26 = 0LL;
    objc_msgSend(v14, "getResourceValue:forKey:error:", &v26, NSURLLocalizedNameKey, 0LL);
    v24 = 0u;
    v25 = 0u;
    if ( -[EAAccessoryUpdater accessoryVersionFromString:accyVersion:](
           self,
           "accessoryVersionFromString:accyVersion:",
           v26,
           &v24) )
    {
      -[FudPluginDelegate log:format:](self->delegate, "log:format:", 6LL, CFSTR("Checking firmware bundle: %@"), v14);
      v23[0] = v31;
      v23[1] = v32;
      v22[0] = v24;
      v22[1] = v25;
      if ( -[EAAccessoryUpdater compareLongVersionString:withFirmwareVersion:](
             self,
             "compareLongVersionString:withFirmwareVersion:",
             v23,
             v22) == -1 )
        break;
    }
    if ( v11 == (void *)++v13 )
    {
      v11 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v27, v35, 16LL);
      if ( v11 )
        goto LABEL_6;
      goto LABEL_13;
    }
  }
  objc_msgSend(a3, "setObject:forKey:", v26, CFSTR("newFWVersion"));
  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Using firmware bundle in dropbox: %@"),
    v14);
  if ( !v14 )
    goto LABEL_14;
  v18 = -[NSFileManager contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:](
          +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"),
          "contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:",
          +[NSURL URLWithString:relativeToURL:](
            &OBJC_CLASS___NSURL,
            "URLWithString:relativeToURL:",
            CFSTR("FirmwareImage"),
            v14),
          v6,
          4LL,
          0LL);
  if ( !-[NSArray count](v18, "count") )
  {
    v15 = CFSTR("Cannot locate available firmware files");
    goto LABEL_15;
  }
  v19 = -[NSFileManager contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:](
          +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"),
          "contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:",
          +[NSURL URLWithString:relativeToURL:](
            &OBJC_CLASS___NSURL,
            "URLWithString:relativeToURL:",
            CFSTR("BuildManifest"),
            v14),
          v6,
          4LL,
          0LL);
  if ( -[NSArray count](v19, "count") )
  {
    -[FudPluginDelegate log:format:](
      self->delegate,
      "log:format:",
      5LL,
      CFSTR("Using BuildManifest: %@"),
      -[NSArray objectAtIndex:](v19, "objectAtIndex:", 0LL));
    v20 = +[NSDictionary dictionaryWithContentsOfURL:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithContentsOfURL:",
            -[NSArray objectAtIndex:](v19, "objectAtIndex:", 0LL));
    if ( !v20 )
    {
      v15 = CFSTR("Failed to Read from Build Manifest");
      goto LABEL_15;
    }
  }
  else
  {
    v20 = 0LL;
  }
  -[EAFirmwareUpdater setFirmwareURL:withManifest:signature:certificate:hash:](
    self->firmwareUpdater,
    "setFirmwareURL:withManifest:signature:certificate:hash:",
    -[NSArray objectAtIndex:](v18, "objectAtIndex:", 0LL),
    v20,
    0LL,
    0LL,
    0LL);
  return 1;
}