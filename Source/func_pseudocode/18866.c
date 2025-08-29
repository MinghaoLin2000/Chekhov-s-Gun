-[SiriNCService invokeService:fromEventSource:eventTime:requestInfo:speechRequestOptions:launchOptions:dismissalOptions:]
void __cdecl -[SiriNCService invokeService:fromEventSource:eventTime:requestInfo:speechRequestOptions:launchOptions:dismissalOptions:](
        SiriNCService *self,
        SEL a2,
        signed __int64 a3,
        signed __int64 a4,
        unsigned __int64 a5,
        id a6,
        id a7,
        id a8,
        id a9)
{
  id v15; // x19
  id v16; // x20
  id v17; // x21
  os_log_s *v18; // x28
  SiriUIDynamicProperties *v19; // x28
  unsigned __int64 v20; // x8
  __int64 v21; // x27
  id v22; // x28
  id v23; // x26
  NSAssertionHandler *v24; // x28
  id v26; // [xsp+8h] [xbp-168h]
  _QWORD v27[5]; // [xsp+10h] [xbp-160h] BYREF
  id v28; // [xsp+38h] [xbp-138h]
  id v29; // [xsp+40h] [xbp-130h]
  id v30; // [xsp+48h] [xbp-128h]
  id v31; // [xsp+50h] [xbp-120h]
  signed __int64 v32; // [xsp+58h] [xbp-118h]
  signed __int64 v33; // [xsp+60h] [xbp-110h]
  unsigned __int64 v34; // [xsp+68h] [xbp-108h]
  _QWORD v35[5]; // [xsp+70h] [xbp-100h] BYREF
  id v36; // [xsp+98h] [xbp-D8h]
  _BYTE *v37; // [xsp+A0h] [xbp-D0h]
  signed __int64 v38; // [xsp+A8h] [xbp-C8h]
  uint8_t v39[32]; // [xsp+B0h] [xbp-C0h] BYREF
  _BYTE buf[24]; // [xsp+D0h] [xbp-A0h] BYREF
  signed __int64 v41; // [xsp+E8h] [xbp-88h]

  v15 = objc_retain(a6);
  v16 = objc_retain(a7);
  v17 = objc_retain(a8);
  v26 = objc_retain(a9);
  v18 = (os_log_s *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315650;
    *(_QWORD *)&buf[4] = "-[SiriNCService invokeService:fromEventSource:eventTime:requestInfo:speechRequestOptions:launch"
                         "Options:dismissalOptions:]";
    *(_WORD *)&buf[12] = 2048;
    *(_QWORD *)&buf[14] = a3;
    *(_WORD *)&buf[22] = 2048;
    v41 = a4;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v18,
      OS_LOG_TYPE_DEFAULT,
      "%s Action type: %ld Event Source: %ld",
      buf,
      0x20u);
  }
  *(_QWORD *)buf = 0LL;
  *(_QWORD *)&buf[8] = buf;
  *(_QWORD *)&buf[16] = 0x2020000000LL;
  LOBYTE(v41) = 0;
  v19 = objc_retainAutoreleasedReturnValue(+[SiriUIDynamicProperties sharedInstance](&OBJC_CLASS___SiriUIDynamicProperties, "sharedInstance"));
  if ( a4 == 11 )
    -[SiriUIDynamicProperties setTypingDynamicallyEnabled:](v19, "setTypingDynamicallyEnabled:", 1LL);
  else
    -[SiriUIDynamicProperties setTypingDynamicallyEnabled:](v19, "setTypingDynamicallyEnabled:", 0LL);
  objc_release(v19);
  v20 = a3 | (32 * -[SiriNCService alertState](self, "alertState"));
  if ( v20 <= 0x32 && ((1LL << v20) & 0x4000800001304LL) != 0 )
  {
    v21 = SiriUIRequestSourceFromNCEventSource(a3, a4, 0LL);
    v22 = objc_retainAutoreleasedReturnValue(+[SRUIFInstrumentationManager sharedManager](&OBJC_CLASS___SRUIFInstrumentationManager, "sharedManager"));
    objc_msgSend(v22, "emitInvocationWithSource:eventTime:", v21, a5);
  }
  else
  {
    v22 = objc_retain(AFSiriLogContextConnection);
    if ( os_log_type_enabled((os_log_t)v22, OS_LOG_TYPE_DEBUG) )
      sub_1000127B8(v39, a3, (int)-[SiriNCService alertState](self, "alertState"), (os_log_t)v22);
  }
  objc_release(v22);
  if ( qword_100029308 != -1 )
    dispatch_once(&qword_100029308, &stru_100020740);
  if ( !byte_100029300 )
  {
    v24 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v24,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("SiriNCService.m"),
      318LL,
      CFSTR("Siri is disabled by Screen Time"));
    objc_release(v24);
  }
  -[SiriNCService _startEagerMyriadAdvertisingForAction:eventSource:requestInfo:speechRequestOptions:systemUpTime:](
    self,
    "_startEagerMyriadAdvertisingForAction:eventSource:requestInfo:speechRequestOptions:systemUpTime:",
    a3,
    a4,
    v15,
    v16,
    a5,
    a2);
  v35[0] = _NSConcreteStackBlock;
  v35[1] = 3254779904LL;
  v35[2] = sub_100005E9C;
  v35[3] = &unk_100020760;
  v35[4] = self;
  v38 = a3;
  v23 = objc_retain(v17);
  v36 = v23;
  v37 = buf;
  -[SiriNCService _performThreadSafeAlertStateBlock:](self, "_performThreadSafeAlertStateBlock:", v35);
  if ( !*(_BYTE *)(*(_QWORD *)&buf[8] + 24LL) )
  {
    v27[0] = _NSConcreteStackBlock;
    v27[1] = 3254779904LL;
    v27[2] = sub_1000063B8;
    v27[3] = &unk_100020790;
    v27[4] = self;
    v32 = a3;
    v33 = a4;
    v34 = a5;
    v28 = objc_retain(v15);
    v29 = objc_retain(v16);
    v30 = objc_retain(v23);
    v31 = objc_retain(v26);
    -[SiriNCService _performPresentationDependentBlock:](self, "_performPresentationDependentBlock:", v27);
    objc_release(v31);
    objc_release(v30);
    objc_release(v29);
    objc_release(v28);
  }
  objc_release(v36);
  _Block_object_dispose(buf, 8);
  objc_release(v26);
  objc_release(v23);
  objc_release(v16);
  objc_release(v15);
}