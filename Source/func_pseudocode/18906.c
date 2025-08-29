-[SiriNCService shouldAbortAnotherDeviceBetter:]
void __cdecl -[SiriNCService shouldAbortAnotherDeviceBetter:](SiriNCService *self, SEL a2, id a3)
{
  id v4; // x19
  os_log_s *v5; // x21
  SiriUIDismissalOptions *v6; // x22
  SiriUIDismissalOptions *v7; // x20
  __int64 v8; // x1
  _QWORD v9[5]; // [xsp+8h] [xbp-78h] BYREF
  id v10; // [xsp+30h] [xbp-50h]
  id v11; // [xsp+38h] [xbp-48h] BYREF
  uint8_t buf[4]; // [xsp+40h] [xbp-40h] BYREF
  const char *v13; // [xsp+44h] [xbp-3Ch]

  v4 = objc_retain(a3);
  v5 = (os_log_s *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315138;
    v13 = "-[SiriNCService shouldAbortAnotherDeviceBetter:]";
    _os_log_impl(
      (void *)&_mh_execute_header,
      v5,
      OS_LOG_TYPE_DEFAULT,
      "%s [Invocation] BTLE Device should abort session",
      buf,
      0xCu);
  }
  v6 = objc_retainAutoreleasedReturnValue(
         +[SiriUIDismissalOptions optionsWithDismissalReason:](
           &OBJC_CLASS___SiriUIDismissalOptions,
           "optionsWithDismissalReason:",
           14LL));
  objc_initWeak((id *)buf, self);
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_10000B15C;
  v9[3] = &unk_100020AC0;
  objc_copyWeak(&v11, (id *)buf);
  v9[4] = self;
  v7 = objc_retain(v6);
  v10 = v7;
  SiriUIInvokeOnMainQueue(v9, v8);
  objc_release(v10);
  objc_destroyWeak(&v11);
  objc_destroyWeak((id *)buf);
  objc_release(v7);
  objc_release(v4);
}