-[UARPUpdaterServiceAFUPreferences init]
UARPUpdaterServiceAFUPreferences *__cdecl -[UARPUpdaterServiceAFUPreferences init](
        UARPUpdaterServiceAFUPreferences *self,
        SEL a2)
{
  UARPUpdaterServiceAFUPreferences *v2; // x19
  os_log_t v3; // x0
  OS_os_log *log; // x8
  NSUserDefaults *v5; // x0
  NSUserDefaults *userPrefs; // x8
  objc_super v8; // [xsp+0h] [xbp-20h] BYREF

  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___UARPUpdaterServiceAFUPreferences;
  v2 = -[UARPUpdaterServiceAFUPreferences init](&v8, "init");
  if ( v2 )
  {
    v3 = os_log_create("com.apple.accessoryupdater.UARPUpdaterServiceAFU", "preferences");
    log = v2->_log;
    v2->_log = v3;
    objc_release(log);
    v5 = (NSUserDefaults *)objc_msgSend(
                             objc_alloc((Class)&OBJC_CLASS___NSUserDefaults),
                             "initWithSuiteName:",
                             CFSTR("com.apple.accessoryupdater.UARPUpdaterServiceAFU"));
    userPrefs = v2->_userPrefs;
    v2->_userPrefs = v5;
    objc_release(userPrefs);
  }
  return v2;
}