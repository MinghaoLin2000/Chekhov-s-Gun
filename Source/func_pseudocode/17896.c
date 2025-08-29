-[IsExtensionEnabled fileProviderDomainsByIDToEnable]
id __cdecl -[IsExtensionEnabled fileProviderDomainsByIDToEnable](IsExtensionEnabled *self, SEL a2)
{
  NSURL *v3; // x21
  NSString *v4; // x20
  void *v5; // x21
  id v6; // x22
  void *v7; // x23
  __int64 v8; // x28
  void *i; // x19
  __int64 v10; // x25
  void *v11; // x24
  void *v12; // x27
  void *v13; // x26
  NSRunningApplication *v15; // [xsp+8h] [xbp-128h]
  __int128 v16; // [xsp+10h] [xbp-120h] BYREF
  __int128 v17; // [xsp+20h] [xbp-110h]
  __int128 v18; // [xsp+30h] [xbp-100h]
  __int128 v19; // [xsp+40h] [xbp-F0h]
  _BYTE v20[128]; // [xsp+50h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+138h] [xbp+8h]

  if ( (unsigned int)sub_100001AA4(self, a2) )
  {
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSRunningApplication runningApplicationWithProcessIdentifier:](
              &OBJC_CLASS___NSRunningApplication,
              "runningApplicationWithProcessIdentifier:",
              -[IsExtensionEnabled requestingProcessIdentifier](self, "requestingProcessIdentifier")));
    v3 = objc_retainAutoreleasedReturnValue(-[NSRunningApplication bundleURL](v15, "bundleURL"));
    v4 = objc_retainAutoreleasedReturnValue(-[NSURL absoluteString](v3, "absoluteString"));
    objc_release(v3);
    if ( v4 )
    {
      v5 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
      v18 = 0u;
      v19 = 0u;
      v16 = 0u;
      v17 = 0u;
      v6 = objc_retain(objc_retainAutoreleasedReturnValue(FileProvidersByIDSync()));
      v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v16, v20, 16LL);
      if ( v7 )
      {
        v8 = *(_QWORD *)v17;
        do
        {
          for ( i = 0LL; i != v7; i = (char *)i + 1 )
          {
            if ( *(_QWORD *)v17 != v8 )
              objc_enumerationMutation(v6);
            v10 = *(_QWORD *)(*((_QWORD *)&v16 + 1) + 8LL * (_QWORD)i);
            v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", v10));
            if ( ((unsigned int)objc_msgSend(v11, "isHidden") & 1) == 0
              && ((unsigned int)objc_msgSend(v11, "isEnabled") & 1) == 0 )
            {
              v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "extensionBundleURL"));
              v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "absoluteString"));
              objc_release(v12);
              if ( (unsigned int)objc_msgSend(v13, "hasPrefix:", v4) )
                objc_msgSend(v5, "setObject:forKeyedSubscript:", v11, v10);
              objc_release(v13);
            }
            objc_release(v11);
          }
          v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v16, v20, 16LL);
        }
        while ( v7 );
      }
      objc_release(v6);
      objc_release(v6);
    }
    else
    {
      v5 = 0LL;
    }
    objc_release(v4);
    objc_release(v15);
  }
  else
  {
    v5 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}