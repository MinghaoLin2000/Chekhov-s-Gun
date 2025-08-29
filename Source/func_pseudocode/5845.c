-[GCSettingsMediator registerKeys]
void __cdecl -[GCSettingsMediator registerKeys](GCSettingsMediator *self, SEL a2)
{
  os_log_s *v3; // x20
  objc_class *v4; // x0
  NSString *v5; // x23
  objc_class *v6; // x0
  NSString *v7; // x23
  objc_class *v8; // x0
  NSString *v9; // x23
  objc_class *v10; // x0
  NSString *v11; // x23
  uint8_t v12[16]; // [xsp+0h] [xbp-40h] BYREF

  v3 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(self, a2));
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_INFO) )
  {
    *(_WORD *)v12 = 0;
    _os_log_impl((void *)&_mh_execute_header, v3, OS_LOG_TYPE_INFO, "GCSettingsMediator::registerKeys", v12, 2u);
  }
  objc_release(v3);
  -[GCSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("settingsVersion"),
    "storeVersion",
    "setStoreVersion:");
  v4 = (objc_class *)objc_opt_class(&OBJC_CLASS___NSDictionary);
  v5 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v4));
  -[GCSettingsMediator registerKey:getter:setter:merger:type:](
    self,
    "registerKey:getter:setter:merger:type:",
    CFSTR("controllers"),
    "controllers",
    "setControllers:",
    "mergeControllers:",
    v5);
  objc_release(v5);
  v6 = (objc_class *)objc_opt_class(&OBJC_CLASS___NSDictionary);
  v7 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v6));
  -[GCSettingsMediator registerKey:getter:setter:merger:type:](
    self,
    "registerKey:getter:setter:merger:type:",
    CFSTR("games"),
    "games",
    "setGames:",
    "mergeGames:",
    v7);
  objc_release(v7);
  v8 = (objc_class *)objc_opt_class(&OBJC_CLASS___NSDictionary);
  v9 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v8));
  -[GCSettingsMediator registerKey:getter:setter:merger:type:](
    self,
    "registerKey:getter:setter:merger:type:",
    CFSTR("copilotFusedControllers"),
    "copilotFusedControllers",
    "setCopilotFusedControllers:",
    "mergeCopilotFusedControllers:",
    v9);
  objc_release(v9);
  v10 = (objc_class *)objc_opt_class(&OBJC_CLASS___NSDictionary);
  v11 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v10));
  -[GCSettingsMediator registerKey:getter:setter:merger:type:](
    self,
    "registerKey:getter:setter:merger:type:",
    CFSTR("profiles"),
    "profiles",
    "setProfiles:",
    "mergeProfiles:",
    v11);
  objc_release(v11);
}