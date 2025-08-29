-[DisplayMobileAssetUpdater initWithAssetType:internal:log:]
DisplayMobileAssetUpdater *__cdecl -[DisplayMobileAssetUpdater initWithAssetType:internal:log:](
        DisplayMobileAssetUpdater *self,
        SEL a2,
        id a3,
        bool a4,
        id a5)
{
  id v9; // x19
  DisplayMobileAssetUpdater *v10; // x0
  DisplayMobileAssetUpdater *v11; // x20
  NSProcessInfo *v12; // x0
  const char *v13; // x1
  NSProcessInfo *v14; // x21
  NSString *v15; // x0
  NSString *osVersion; // x8
  __int128 v18; // [xsp+18h] [xbp-48h] BYREF
  __int64 v19; // [xsp+28h] [xbp-38h]

  v9 = objc_retain(a5);
  v10 = -[MobileAssetUpdater initWithAssetType:log:](self, "initWithAssetType:log:", a3, v9);
  v11 = v10;
  if ( v10 )
  {
    objc_storeStrong((id *)&v10->_log, a5);
    v11->_internalUpdate = a4;
    v18 = 0uLL;
    v19 = 0LL;
    v12 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
    v14 = v12;
    if ( v12 )
    {
      objc_msgSend_operatingSystemVersion(&v18, v12, v13);
    }
    else
    {
      v18 = 0uLL;
      v19 = 0LL;
    }
    objc_release(v14);
    v15 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%ld.%ld.%ld"), v18, v19));
    osVersion = v11->_osVersion;
    v11->_osVersion = v15;
    objc_release(osVersion);
  }
  objc_release(v9);
  return v11;
}