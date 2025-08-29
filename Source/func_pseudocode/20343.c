-[PKiCloudDataController ubiquitousKeyValueStoreDidChange:]
void __cdecl -[PKiCloudDataController ubiquitousKeyValueStoreDidChange:](PKiCloudDataController *self, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  void *v5; // x21
  void *v6; // x22
  os_log_s *v7; // x21
  __CFNotificationCenter *DarwinNotifyCenter; // x0
  int v9; // [xsp+0h] [xbp-40h] BYREF
  void *v10; // [xsp+4h] [xbp-3Ch]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "userInfo"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", NSUbiquitousKeyValueStoreChangeReasonKey));
  v6 = objc_msgSend(v5, "unsignedIntegerValue");
  objc_release(v5);
  if ( (unsigned __int64)v6 >= 4 )
  {
    v7 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
    {
      v9 = 134217984;
      v10 = v6;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v7,
        OS_LOG_TYPE_DEFAULT,
        "NSUbiquitousKeyValueStoreDidChangeExternallyNotification ignoring unknown notification: %ld",
        (uint8_t *)&v9,
        0xCu);
    }
    objc_release(v7);
  }
  DarwinNotifyCenter = CFNotificationCenterGetDarwinNotifyCenter();
  CFNotificationCenterPostNotification(
    DarwinNotifyCenter,
    CFSTR("com.apple.printerTool.iCloud-printers-changed"),
    0LL,
    0LL,
    0);
  objc_release(v4);
  objc_release(v3);
}