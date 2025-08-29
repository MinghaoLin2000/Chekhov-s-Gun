-[AUDeveloperSettingsDatabase init]
AUDeveloperSettingsDatabase *__cdecl -[AUDeveloperSettingsDatabase init](AUDeveloperSettingsDatabase *self, SEL a2)
{
  AUDeveloperSettingsDatabase *v2; // x19
  os_log_t v3; // x0
  OS_os_log *log; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___AUDeveloperSettingsDatabase;
  v2 = -[AUDeveloperSettingsDatabase init](&v6, "init");
  if ( v2 )
  {
    v3 = os_log_create((const char *)objc_msgSend(CFSTR("com.apple.AUDeveloperSettings"), "UTF8String"), "default");
    log = v2->_log;
    v2->_log = v3;
    objc_release(log);
    -[AUDeveloperSettingsDatabase migrateExistingDefaults](v2, "migrateExistingDefaults");
  }
  return v2;
}