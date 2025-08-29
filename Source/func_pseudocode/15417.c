-[DisplayMobileAssetUpdater asset:newerThanVersion:build:]
bool __cdecl -[DisplayMobileAssetUpdater asset:newerThanVersion:build:](
        DisplayMobileAssetUpdater *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  void *v11; // x24
  void *v12; // x23
  void *v13; // x25
  void *v14; // x24
  bool v15; // w22
  OS_os_log *log; // x22

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  if ( -[DisplayMobileAssetUpdater validAssetOSVersionBuild:restoreVersion:](
         self,
         "validAssetOSVersionBuild:restoreVersion:",
         v8,
         0LL) )
  {
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "attributes"));
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "objectForKeyedSubscript:", CFSTR("OSVersion")));
    objc_release(v11);
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "attributes"));
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "objectForKeyedSubscript:", CFSTR("Build")));
    objc_release(v13);
    v15 = -[DisplayMobileAssetUpdater version:isGreaterThan:](self, "version:isGreaterThan:", v12, v9)
       || (unsigned int)objc_msgSend(v12, "isEqualTo:", v9)
       && -[DisplayMobileAssetUpdater build:isGreaterThan:](self, "build:isGreaterThan:", v14, v10);
    objc_release(v14);
    objc_release(v12);
  }
  else
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_1000159A0(log);
    v15 = 0;
  }
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  return v15;
}