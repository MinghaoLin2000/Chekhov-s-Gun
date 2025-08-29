-[SiriNCAlertViewController dismissController:dismissalOptions:completion:]
void __cdecl -[SiriNCAlertViewController dismissController:dismissalOptions:completion:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x19
  id v8; // x20
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x22
  SRFLockStateNotifier *v11; // x23
  unsigned int v12; // w24
  AFUISiriViewController *v13; // x24
  void *v14; // x25
  unsigned __int8 v15; // w26
  void *v16; // x23
  os_log_s *v17; // x23
  id v18; // x22
  __int64 v19; // x22
  void *v20; // x23
  SiriUIHeater *v21; // x22
  NSTimer *v22; // x22
  SiriNCService *v23; // x22
  AFUISiriViewController *v24; // x0
  AFUISiriViewController *v25; // x22
  void *v26; // x23
  AFUISiriViewController *v27; // x21
  _QWORD v28[5]; // [xsp+0h] [xbp-90h] BYREF
  AFUISiriViewController *v29; // [xsp+28h] [xbp-68h]
  uint8_t buf[4]; // [xsp+30h] [xbp-60h] BYREF
  const char *v31; // [xsp+34h] [xbp-5Ch]
  __int16 v32; // [xsp+3Ch] [xbp-54h]
  id v33; // [xsp+3Eh] [xbp-52h]

  v7 = objc_retain(a4);
  v8 = objc_retain(a5);
  v9 = (unsigned __int64)objc_msgSend(v7, "dismissalReason");
  v10 = v9;
  if ( v9 == 8 )
  {
    v11 = objc_retainAutoreleasedReturnValue(+[SRFLockStateNotifier sharedInstance](&OBJC_CLASS___SRFLockStateNotifier, "sharedInstance"));
    if ( (unsigned int)-[SRFLockStateNotifier isLocked](v11, "isLocked") )
    {
      objc_release(v11);
    }
    else
    {
      v13 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
      v14 = objc_retainAutoreleasedReturnValue(-[AFUISiriViewController view](v13, "view"));
      v15 = (unsigned __int8)objc_msgSend(v14, "userInputIsEmpty");
      objc_release(v14);
      objc_release(v13);
      objc_release(v11);
      if ( (v15 & 1) == 0 )
      {
        v25 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
        v26 = objc_retainAutoreleasedReturnValue(-[AFUISiriViewController view](v25, "view"));
        objc_msgSend(v26, "clearUserInput");
        objc_release(v26);
        objc_release(v25);
        v27 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
        -[AFUISiriViewController interruptRequest](v27, "interruptRequest");
        v24 = v27;
        goto LABEL_12;
      }
    }
    v12 = 1;
  }
  else
  {
    v12 = (v9 < 0x15) & (0x100401u >> v9);
  }
  v16 = (void *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    v17 = objc_retain(v16);
    v18 = objc_retainAutoreleasedReturnValue((id)SiriUIDismissalString(v10));
    *(_DWORD *)buf = 136315394;
    v31 = "-[SiriNCAlertViewController dismissController:dismissalOptions:completion:]";
    v32 = 2112;
    v33 = v18;
    _os_log_impl((void *)&_mh_execute_header, v17, OS_LOG_TYPE_DEFAULT, "%s Alert dismiss requested: %@.", buf, 0x16u);
    objc_release(v18);
    objc_release(v17);
  }
  if ( ((self->_ncBreakOutState == 2) & ~v12) == 0 )
  {
    v19 = SiriUIDismissalReasonToSISchemaDismissalReason(objc_msgSend(v7, "dismissalReason"));
    v20 = objc_retainAutoreleasedReturnValue(+[SRUIFInstrumentationManager sharedManager](&OBJC_CLASS___SRUIFInstrumentationManager, "sharedManager"));
    objc_msgSend(v20, "emitUIStateTransitionForSiriDismissalWithReason:", v19);
    objc_release(v20);
    -[SiriNCAlertViewController setWasDismissed:](self, "setWasDismissed:", 1LL);
    v21 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController heater](self, "heater"));
    -[SiriUIHeater cancelPreparation](v21, "cancelPreparation");
    objc_release(v21);
    v22 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController idleDelayTimer](self, "idleDelayTimer"));
    -[NSTimer invalidate](v22, "invalidate");
    objc_release(v22);
    -[SiriNCAlertViewController setIdleDelayTimer:](self, "setIdleDelayTimer:", 0LL);
    v23 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController service](self, "service"));
    v28[0] = _NSConcreteStackBlock;
    v28[1] = 3254779904LL;
    v28[2] = sub_10000E834;
    v28[3] = &unk_100020850;
    v28[4] = self;
    v29 = (AFUISiriViewController *)objc_retain(v8);
    -[SiriNCService dismissAlertWithDismissalOptions:completion:](
      v23,
      "dismissAlertWithDismissalOptions:completion:",
      v7,
      v28);
    objc_release(v23);
    v24 = v29;
LABEL_12:
    objc_release(v24);
  }
  objc_release(v8);
  objc_release(v7);
}