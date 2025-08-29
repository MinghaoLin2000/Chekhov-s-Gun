-[SiriNCAlertViewController viewDidAppear]
void __cdecl -[SiriNCAlertViewController viewDidAppear](SiriNCAlertViewController *self, SEL a2)
{
  os_log_s *v4; // x21
  void *v5; // x19
  os_log_s *v6; // x19
  NSString *v7; // x20
  void *v8; // x20
  void *v9; // x21
  SiriNCService *v10; // x20
  objc_super v11; // [xsp+0h] [xbp-50h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-40h] BYREF
  const char *v13; // [xsp+14h] [xbp-3Ch]
  __int16 v14; // [xsp+1Ch] [xbp-34h]
  NSString *v15; // [xsp+1Eh] [xbp-32h]

  v4 = (os_log_s *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315138;
    v13 = "-[SiriNCAlertViewController viewDidAppear]";
    _os_log_impl((void *)&_mh_execute_header, v4, OS_LOG_TYPE_DEFAULT, "%s ", buf, 0xCu);
  }
  v11.receiver = self;
  v11.super_class = (Class)&OBJC_CLASS___SiriNCAlertViewController;
  -[SiriNCAlertViewController viewDidAppear](&v11, "viewDidAppear");
  -[SRUIFPlatformHostingInstrumentationHandler appearanceDidChange:machAbsoluteTime:](
    self->_viewHostingInstrumentationHandler,
    "appearanceDidChange:machAbsoluteTime:",
    1LL,
    mach_absolute_time());
  if ( -[SiriNCAlertViewController hostViewDidAppear](self, "hostViewDidAppear") )
  {
    v5 = (void *)AFSiriLogContextConnection;
    if ( !os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
      return;
    v6 = objc_retain(v5);
    v7 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
    *(_DWORD *)buf = 136315394;
    v13 = "-[SiriNCAlertViewController viewDidAppear]";
    v14 = 2112;
    v15 = v7;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v6,
      OS_LOG_TYPE_DEFAULT,
      "%s #SiriWindow: %@ skip while view is transferring",
      buf,
      0x16u);
    objc_release(v7);
  }
  else
  {
    v8 = objc_retainAutoreleasedReturnValue(-[AFUISiriViewController view](self->_siriViewController, "view"));
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "statusView"));
    objc_msgSend(v9, "prepareForPresentation");
    objc_release(v9);
    objc_release(v8);
    v10 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController service](self, "service"));
    -[SiriNCService alertVCBecameReadyForActions:](v10, "alertVCBecameReadyForActions:", self);
    objc_release(v10);
    +[SRFStateNotifier notifySiriDidAppear](&OBJC_CLASS___SRFStateNotifier, "notifySiriDidAppear");
    v6 = (os_log_s *)objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController autodismisser](self, "autodismisser"));
    -[os_log_s setEnabled:](v6, "setEnabled:", 1LL);
  }
  objc_release(v6);
}