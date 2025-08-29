-[AUDeveloperSettingsDatabase accessoriesDictionary]
NSDictionary *__cdecl -[AUDeveloperSettingsDatabase accessoriesDictionary](AUDeveloperSettingsDatabase *self, SEL a2)
{
  id v3; // x20
  __int64 v4; // x0
  OS_os_log *log; // x21
  OS_os_log *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         +[NSUserDefaults AUDeveloperSettingsObjectWithKey:](
           &OBJC_CLASS___NSUserDefaults,
           "AUDeveloperSettingsObjectWithKey:",
           CFSTR("accessories")));
  v4 = objc_opt_class(&OBJC_CLASS___NSDictionary);
  if ( (objc_opt_isKindOfClass(v3, v4) & 1) != 0 )
  {
    if ( v3 )
      goto LABEL_8;
  }
  else
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_10001AEBC(v3, log);
    objc_release(v3);
  }
  v3 = objc_alloc_init((Class)&OBJC_CLASS___NSDictionary);
LABEL_8:
  v6 = self->_log;
  if ( os_log_type_enabled(v6, OS_LOG_TYPE_DEBUG) )
    sub_10001AE3C(v3, v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSDictionary *)objc_autoreleaseReturnValue(v3);
}