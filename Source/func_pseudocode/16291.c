-[AUDeveloperSettingsDatabase setAccessoriesDictionary:]
void __cdecl -[AUDeveloperSettingsDatabase setAccessoriesDictionary:](AUDeveloperSettingsDatabase *self, SEL a2, id a3)
{
  id v4; // x19
  OS_os_log *log; // x20

  v4 = objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
    sub_10001ADA0(v4, log);
  +[NSUserDefaults AUDeveloperSettingsSetObject:withKey:](
    &OBJC_CLASS___NSUserDefaults,
    "AUDeveloperSettingsSetObject:withKey:",
    v4,
    CFSTR("accessories"));
  objc_release(v4);
}