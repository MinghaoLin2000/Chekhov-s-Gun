-[UARPUpdaterServiceAFUPreferences overriddenFirmwareAssetDirectoryURL]
NSURL *__cdecl -[UARPUpdaterServiceAFUPreferences overriddenFirmwareAssetDirectoryURL](
        UARPUpdaterServiceAFUPreferences *self,
        SEL a2)
{
  id v3; // x19
  OS_os_log *log; // x20
  __int64 v5; // x0
  NSURL *v6; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[NSUserDefaults objectForKey:](self->_userPrefs, "objectForKey:", CFSTR("OverrideAssetDirectoryURL")));
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
    sub_100002394(v3, log);
  v5 = objc_opt_class(&OBJC_CLASS___NSString);
  if ( (objc_opt_isKindOfClass(v3, v5) & 1) != 0 )
    v6 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v3));
  else
    v6 = 0LL;
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}