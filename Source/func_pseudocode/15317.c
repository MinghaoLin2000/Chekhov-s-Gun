-[UARPUpdaterServiceDisplay getMatchingServicesListWithReply:]
void __cdecl -[UARPUpdaterServiceDisplay getMatchingServicesListWithReply:](
        UARPUpdaterServiceDisplay *self,
        SEL a2,
        id a3)
{
  void (__fastcall **v4)(id, void *); // x19
  OS_os_log *log; // x20
  void *v6; // x20
  id v7; // x22
  id v8; // x23
  void *v9; // x22
  id v10; // x22
  id v11; // x23
  void *v12; // x22
  id v13; // x22
  id v14; // x23
  void *v15; // x21
  int v16; // [xsp+0h] [xbp-50h] BYREF
  const char *v17; // [xsp+4h] [xbp-4Ch]

  v4 = (void (__fastcall **)(id, void *))objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    v16 = 136315138;
    v17 = "-[UARPUpdaterServiceDisplay getMatchingServicesListWithReply:]";
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s", (uint8_t *)&v16, 0xCu);
  }
  v6 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v7 = objc_alloc((Class)&OBJC_CLASS___UARPServiceUpdaterAccessoryMatchingRule);
  v8 = objc_retainAutoreleasedReturnValue((id)sub_100005B40(&off_100021790));
  v9 = objc_msgSend(
         v7,
         "initWithIdentifier:xpcEventStream:matchingDictionary:",
         CFSTR("dfuProbe"),
         CFSTR("com.apple.iokit.matching"),
         v8);
  objc_msgSend(v6, "addObject:", v9);
  objc_release(v9);
  objc_release(v8);
  v10 = objc_alloc((Class)&OBJC_CLASS___UARPServiceUpdaterAccessoryMatchingRule);
  v11 = objc_retainAutoreleasedReturnValue((id)sub_100005B40(&off_1000217A8));
  v12 = objc_msgSend(
          v10,
          "initWithIdentifier:xpcEventStream:matchingDictionary:",
          CFSTR("recoveryProbe"),
          CFSTR("com.apple.iokit.matching"),
          v11);
  objc_msgSend(v6, "addObject:", v12);
  objc_release(v12);
  objc_release(v11);
  v13 = objc_alloc((Class)&OBJC_CLASS___UARPServiceUpdaterAccessoryMatchingRule);
  v14 = objc_retainAutoreleasedReturnValue((id)sub_100005B40(&off_1000217C0));
  v15 = objc_msgSend(
          v13,
          "initWithIdentifier:xpcEventStream:matchingDictionary:",
          CFSTR("deviceProbe"),
          CFSTR("com.apple.iokit.matching"),
          v14);
  objc_msgSend(v6, "addObject:", v15);
  objc_release(v15);
  objc_release(v14);
  v4[2](v4, v6);
  objc_release(v6);
  objc_release(v4);
}