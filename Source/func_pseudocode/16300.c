-[AUDeveloperSettingsDatabase seedParticipationDictionary]
id __cdecl -[AUDeveloperSettingsDatabase seedParticipationDictionary](AUDeveloperSettingsDatabase *self, SEL a2)
{
  id v3; // x19
  OS_os_log *log; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         +[NSUserDefaults AUDeveloperSettingsObjectWithKey:](
           &OBJC_CLASS___NSUserDefaults,
           "AUDeveloperSettingsObjectWithKey:",
           CFSTR("seedParticipation")));
  if ( !v3 )
    v3 = objc_alloc_init((Class)&OBJC_CLASS___NSDictionary);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
    sub_10001AF3C(v3, log);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}