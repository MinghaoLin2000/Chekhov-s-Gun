-[DisplayMobileAssetUpdater asset:newerThanVersion:]
bool __cdecl -[DisplayMobileAssetUpdater asset:newerThanVersion:](
        DisplayMobileAssetUpdater *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  void *v8; // x21
  id v9; // x22
  void *v10; // x23
  void *v11; // x24
  void *v12; // x22
  OS_os_log *log; // x21
  bool v14; // w21
  OS_os_log *v15; // x21

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  if ( !-[DisplayMobileAssetUpdater validAssetOSVersionBuild:restoreVersion:](
          self,
          "validAssetOSVersionBuild:restoreVersion:",
          v6,
          1LL) )
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_100015A90(log);
    goto LABEL_8;
  }
  if ( !v7 )
  {
    v15 = self->_log;
    if ( os_log_type_enabled(v15, OS_LOG_TYPE_ERROR) )
      sub_100015A18(v15);
    goto LABEL_12;
  }
  v8 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___SUCoreRestoreVersion), "initWithRestoreVersion:", v7);
  v9 = objc_alloc((Class)&OBJC_CLASS___SUCoreRestoreVersion);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "attributes"));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectForKeyedSubscript:", CFSTR("RestoreVersion")));
  v12 = objc_msgSend(v9, "initWithRestoreVersion:", v11);
  objc_release(v11);
  objc_release(v10);
  if ( (unsigned int)objc_msgSend(v8, "isComparable:", v12) && objc_msgSend(v8, "compare:", v12) == (void *)-1LL )
  {
    objc_release(v12);
    objc_release(v8);
LABEL_12:
    v14 = 1;
    goto LABEL_13;
  }
  objc_release(v12);
  objc_release(v8);
LABEL_8:
  v14 = 0;
LABEL_13:
  objc_release(v7);
  objc_release(v6);
  return v14;
}