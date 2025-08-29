-[UARPUpdaterServiceDisplay getDASActivityListWithReply:]
void __cdecl -[UARPUpdaterServiceDisplay getDASActivityListWithReply:](UARPUpdaterServiceDisplay *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, NSArray *); // x19
  OS_os_log *log; // x20
  xpc_object_t v6; // x20
  int64_t AppIntegerValue; // x22
  const char *v8; // x1
  void *v9; // x0
  int64_t v10; // x2
  void *v11; // x21
  void *v12; // x22
  NSArray *v13; // x23
  void *v14; // [xsp+8h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-50h] BYREF
  const char *v16; // [xsp+14h] [xbp-4Ch]

  v4 = (void (__fastcall **)(id, NSArray *))objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315138;
    v16 = "-[UARPUpdaterServiceDisplay getDASActivityListWithReply:]";
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s", buf, 0xCu);
  }
  v6 = xpc_dictionary_create(0LL, 0LL, 0LL);
  buf[0] = 0;
  AppIntegerValue = XPC_ACTIVITY_INTERVAL_1_DAY;
  if ( +[UARPUpdaterDisplayControllerDelegate hostIsInternal](
         &OBJC_CLASS___UARPUpdaterDisplayControllerDelegate,
         "hostIsInternal") )
  {
    AppIntegerValue = CFPreferencesGetAppIntegerValue(
                        CFSTR("SetDASInterval"),
                        CFSTR("com.apple.DarwinAccessoryUpdate.A2525"),
                        buf);
  }
  xpc_dictionary_set_bool(v6, XPC_ACTIVITY_REPEATING, 1);
  v8 = XPC_ACTIVITY_INTERVAL;
  v9 = v6;
  if ( buf[0] )
  {
    v10 = AppIntegerValue;
  }
  else
  {
    xpc_dictionary_set_int64(v6, XPC_ACTIVITY_INTERVAL, XPC_ACTIVITY_INTERVAL_1_DAY);
    v8 = (const char *)XPC_ACTIVITY_REQUIRE_SIGNIFICANT_USER_INACTIVITY;
    v9 = v6;
    v10 = 1LL;
  }
  xpc_dictionary_set_int64(v9, v8, v10);
  v11 = (void *)_CFXPCCreateCFObjectFromXPCObject(v6);
  v12 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___UARPServiceUpdaterDASMatchingRule),
          "initWithIdentifier:matchingDictionary:",
          CFSTR("AppleDisplayTimer"),
          v11);
  v14 = v12;
  v13 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v14, 1LL));
  v4[2](v4, v13);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  objc_release(v6);
  objc_release(v4);
}