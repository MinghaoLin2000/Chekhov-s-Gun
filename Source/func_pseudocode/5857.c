-[GCSettingsMediator copilotFusedControllers]
id __cdecl -[GCSettingsMediator copilotFusedControllers](GCSettingsMediator *self, SEL a2)
{
  os_log_s *v2; // x19
  id v3; // x20
  void *v4; // x21
  id v5; // x20
  void *v6; // x19
  int v8; // [xsp+0h] [xbp-40h] BYREF
  void *v9; // [xsp+4h] [xbp-3Ch]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v2 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(self, a2));
  if ( os_log_type_enabled(v2, OS_LOG_TYPE_INFO) )
  {
    v3 = objc_retainAutoreleasedReturnValue((id)sub_100003C08());
    v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKey:", CFSTR("copilotFusedControllers")));
    v8 = 138412290;
    v9 = v4;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v2,
      OS_LOG_TYPE_INFO,
      "GCSettingsMediator::copilotFusedControllers %@",
      (uint8_t *)&v8,
      0xCu);
    objc_release(v3);
    objc_release(v4);
  }
  objc_release(v2);
  v5 = objc_retainAutoreleasedReturnValue((id)sub_100003C08());
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKey:", CFSTR("copilotFusedControllers")));
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}