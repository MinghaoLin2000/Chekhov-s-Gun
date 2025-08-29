-[SiriNCService alertVCBecameReadyForActions:]
void __cdecl -[SiriNCService alertVCBecameReadyForActions:](SiriNCService *self, SEL a2, id a3)
{
  id v4; // x20
  os_log_s *v5; // x21
  void *v6; // x21
  void *v7; // x22
  _QWORD v8[5]; // [xsp+8h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-40h] BYREF
  const char *v10; // [xsp+34h] [xbp-3Ch]

  v4 = objc_retain(a3);
  v5 = (os_log_s *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315138;
    v10 = "-[SiriNCService alertVCBecameReadyForActions:]";
    _os_log_impl((void *)&_mh_execute_header, v5, OS_LOG_TYPE_DEFAULT, "%s Alert is presented", buf, 0xCu);
  }
  -[SiriNCService _updateAndSignpostAlertStateChange:](self, "_updateAndSignpostAlertStateChange:", 2LL);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "view"));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "window"));
  -[SiriNCService observeHostWindowKeynessChanges:](self, "observeHostWindowKeynessChanges:", v7);
  objc_release(v7);
  objc_release(v6);
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_10000708C;
  v8[3] = &unk_100020670;
  v8[4] = self;
  -[SiriNCService _performThreadSafePresentationDependentBlocksBlock:](
    self,
    "_performThreadSafePresentationDependentBlocksBlock:",
    v8);
  objc_release(v4);
}