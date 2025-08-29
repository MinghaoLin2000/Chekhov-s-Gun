-[DisplayMobileAssetUpdater validAssetOSVersionBuild:restoreVersion:]
bool __cdecl -[DisplayMobileAssetUpdater validAssetOSVersionBuild:restoreVersion:](
        DisplayMobileAssetUpdater *self,
        SEL a2,
        id a3,
        bool a4)
{
  _BOOL4 v4; // w22
  id v6; // x0
  void *v7; // x19
  void *v8; // x0
  void *v9; // x20
  void *v10; // x23
  void *v11; // x23
  void *v12; // x22
  bool v13; // w21
  OS_os_log *v14; // x20
  OS_os_log *log; // x22
  const char *v16; // x3
  int v18; // [xsp+0h] [xbp-50h] BYREF
  const char *v19; // [xsp+4h] [xbp-4Ch]

  v4 = a4;
  v6 = objc_retain(a3);
  v7 = v6;
  if ( v6 )
  {
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "attributes"));
    v9 = v8;
    if ( v8 )
    {
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectForKeyedSubscript:", CFSTR("OSVersion")));
      objc_release(v10);
      if ( v10 )
      {
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", CFSTR("Build")));
        objc_release(v11);
        if ( v11 )
        {
          if ( !v4
            || (v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", CFSTR("RestoreVersion"))),
                objc_release(v12),
                v12) )
          {
            v13 = 1;
LABEL_19:
            objc_release(v9);
            goto LABEL_20;
          }
          log = self->_log;
          v13 = 0;
          if ( !os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
            goto LABEL_19;
          v18 = 136315138;
          v19 = "-[DisplayMobileAssetUpdater validAssetOSVersionBuild:restoreVersion:]";
          v16 = "%s: Asset is missing its RestoreVersion";
        }
        else
        {
          log = self->_log;
          v13 = 0;
          if ( !os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
            goto LABEL_19;
          v18 = 136315138;
          v19 = "-[DisplayMobileAssetUpdater validAssetOSVersionBuild:restoreVersion:]";
          v16 = "%s: Asset is missing its build version";
        }
      }
      else
      {
        log = self->_log;
        v13 = 0;
        if ( !os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
          goto LABEL_19;
        v18 = 136315138;
        v19 = "-[DisplayMobileAssetUpdater validAssetOSVersionBuild:restoreVersion:]";
        v16 = "%s: Asset is missing its OS version";
      }
    }
    else
    {
      log = self->_log;
      v13 = 0;
      if ( !os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
        goto LABEL_19;
      v18 = 136315138;
      v19 = "-[DisplayMobileAssetUpdater validAssetOSVersionBuild:restoreVersion:]";
      v16 = "%s: Empty asset attributes";
    }
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, v16, (uint8_t *)&v18, 0xCu);
    v13 = 0;
    goto LABEL_19;
  }
  v14 = self->_log;
  v13 = 0;
  if ( os_log_type_enabled(v14, OS_LOG_TYPE_DEFAULT) )
  {
    v18 = 136315138;
    v19 = "-[DisplayMobileAssetUpdater validAssetOSVersionBuild:restoreVersion:]";
    _os_log_impl((void *)&_mh_execute_header, v14, OS_LOG_TYPE_DEFAULT, "%s: Asset is nil", (uint8_t *)&v18, 0xCu);
    v13 = 0;
  }
LABEL_20:
  objc_release(v7);
  return v13;
}