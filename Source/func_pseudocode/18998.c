-[SiriNCAlertViewController handleAction:fromEventSource:atTime:requestInfo:speechRequestOptions:launchOptions:dismissalOptions:]
void __cdecl -[SiriNCAlertViewController handleAction:fromEventSource:atTime:requestInfo:speechRequestOptions:launchOptions:dismissalOptions:](
        SiriNCAlertViewController *self,
        SEL a2,
        signed __int64 a3,
        signed __int64 a4,
        unsigned __int64 a5,
        id a6,
        id a7,
        id a8,
        id a9)
{
  unsigned __int64 v16; // x19
  _BOOL4 v19; // w8
  NSProcessInfo *v20; // x23
  double v21; // d0
  double v22; // d9
  void *v23; // x23
  os_log_s *v24; // x23
  void *v25; // x24
  NSNumber *v26; // x22
  unsigned __int64 v27; // x22
  os_log_s *v28; // x23
  void *v29; // x22
  AFUISiriViewController *v30; // x23
  __int64 v31; // x0
  __int64 v32; // x24
  void *v33; // x20
  void *v34; // x27
  void *v35; // x21
  int v36; // w21
  id v37; // x0
  void *v38; // x0
  void *v39; // x21
  void *v40; // x0
  void *v41; // x21
  void *v42; // x22
  void *v43; // x26
  void *v44; // x22
  void *v45; // x25
  void *v46; // x21
  NSDistributedNotificationCenter *v47; // x21
  __int64 v48; // x22
  NSNumber *v49; // x24
  NSNumber **v50; // x2
  __int64 *v51; // x3
  void *v52; // x21
  int v53; // w21
  id v54; // x0
  void *v55; // x0
  NSAssertionHandler *v56; // x22
  NSAssertionHandler *v57; // x0
  void *v58; // x21
  __int64 v59; // x21
  NSDictionary *v60; // x25
  void *v61; // x22
  void *v62; // x26
  void *v63; // x22
  void *v64; // x25
  void *v65; // x0
  os_log_s *v66; // x21
  void *v67; // x22
  id v68; // [xsp+8h] [xbp-C8h]
  id v69; // [xsp+10h] [xbp-C0h]
  id v70; // [xsp+18h] [xbp-B8h]
  __int64 v71; // [xsp+20h] [xbp-B0h] BYREF
  NSNumber *v72; // [xsp+28h] [xbp-A8h] BYREF
  __int64 v73; // [xsp+30h] [xbp-A0h] BYREF
  NSNumber *v74; // [xsp+38h] [xbp-98h] BYREF
  uint8_t buf[4]; // [xsp+40h] [xbp-90h] BYREF
  const char *v76; // [xsp+44h] [xbp-8Ch]
  __int16 v77; // [xsp+4Ch] [xbp-84h]
  void *v78; // [xsp+4Eh] [xbp-82h]
  __int16 v79; // [xsp+56h] [xbp-7Ah]
  signed __int64 v80; // [xsp+58h] [xbp-78h]

  v70 = objc_retain(a6);
  v16 = (unsigned __int64)objc_retain(a7);
  v69 = objc_retain(a8);
  v68 = objc_retain(a9);
  v19 = (a3 == 2 || a3 == 16) && a4 == 2;
  if ( a3 == 1 || v19 )
    -[SiriUIAutoDismissalController cancelClickOutsideOfContentHoldBackTimerIfNeeded](
      self->_autodismisser,
      "cancelClickOutsideOfContentHoldBackTimerIfNeeded");
  v20 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
  -[NSProcessInfo systemUptime](v20, "systemUptime");
  v22 = v21 - (double)a5;
  objc_release(v20);
  v23 = (void *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    v24 = objc_retain(v23);
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(self), "_nameForActionType:", a3));
    v26 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", v22));
    *(_DWORD *)buf = 136315650;
    v76 = "-[SiriNCAlertViewController handleAction:fromEventSource:atTime:requestInfo:speechRequestOptions:launchOptions"
          ":dismissalOptions:]";
    v77 = 2112;
    v78 = v25;
    v79 = 2112;
    v80 = (signed __int64)v26;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v24,
      OS_LOG_TYPE_DEFAULT,
      "%s [Invocation] View controller handling action '%@' withDelay: %@",
      buf,
      0x20u);
    objc_release(v26);
    objc_release(v25);
    objc_release(v24);
  }
  v27 = (unsigned __int64)v70;
  if ( v22 > 1.0 )
  {
    v28 = (os_log_s *)AFSiriLogContextConnection;
    if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_ERROR) )
      sub_100012C50(v28);
    v29 = objc_retainAutoreleasedReturnValue(+[SRFBugReporter sharedReporter](&OBJC_CLASS___SRFBugReporter, "sharedReporter"));
    objc_msgSend(
      v29,
      "reportIssue:subtype:description:",
      SRFBugReporterTypeInvocation,
      SRFBugReporterSubtypeInvocationSuppression,
      CFSTR("Delay in invocation"));
    objc_release(v29);
    v27 = (unsigned __int64)v70;
  }
  v30 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  v31 = SiriUIRequestSourceFromNCEventSource(a3, a4, objc_msgSend((id)v27, "activationEvent"));
  v32 = v31;
  switch ( a3 )
  {
    case 0LL:
      -[AFUISiriViewController siriWillActivateFromSource:](v30, "siriWillActivateFromSource:", v31);
      -[AFUISiriViewController handlePreheatFromSource:](v30, "handlePreheatFromSource:", v32);
      -[AFUISiriViewController siriDidActivateFromSource:](v30, "siriDidActivateFromSource:", v32);
      goto LABEL_57;
    case 1LL:
    case 2LL:
      goto LABEL_24;
    case 3LL:
    case 18LL:
      -[AFUISiriViewController handleLongPressEndFromSource:atTime:](
        v30,
        "handleLongPressEndFromSource:atTime:",
        v31,
        (double)a5);
      goto LABEL_57;
    case 4LL:
      v34 = v68;
      -[SiriNCAlertViewController dismissController:dismissalOptions:](
        self,
        "dismissController:dismissalOptions:",
        self,
        v68);
      v33 = v69;
      goto LABEL_76;
    case 5LL:
    case 6LL:
      v35 = objc_retainAutoreleasedReturnValue(
              +[SRFUserDefaultsController sharedUserDefaultsController](
                &OBJC_CLASS___SRFUserDefaultsController,
                "sharedUserDefaultsController"));
      objc_msgSend(v35, "setPreferBluetoothMicrophones:", 1LL);
      objc_release(v35);
LABEL_24:
      v34 = v68;
      v33 = v69;
      if ( -[SiriNCAlertViewController handleInvocationCancel:](self, "handleInvocationCancel:", 1LL) )
        goto LABEL_76;
      -[AFUISiriViewController siriWillActivateFromSource:](v30, "siriWillActivateFromSource:", v32);
      -[AFUISiriViewController handleClickFromSource:systemUpTime:](v30, "handleClickFromSource:systemUpTime:", v32, a5);
      goto LABEL_26;
    case 7LL:
    case 20LL:
      v34 = v68;
      v33 = v69;
      if ( !(v27 | v16) )
        goto LABEL_76;
      v36 = SiriUIIsButtonDownRequest(v31);
      v37 = objc_alloc((Class)&OBJC_CLASS___SiriUIRequestOptions);
      if ( v36 )
        v38 = objc_msgSend(v37, "initWithRequestSource:buttonDownTimestamp:", v32, a5);
      else
        v38 = objc_msgSend(v37, "initWithRequestSource:", v32);
      v58 = v38;
      if ( v27 )
      {
        objc_msgSend(v38, "setRequestInfo:", v27);
      }
      else if ( v16 )
      {
        objc_msgSend(v38, "setSpeechRequestOptions:", v16);
      }
      -[AFUISiriViewController siriWillActivateFromSource:](v30, "siriWillActivateFromSource:", v32);
      -[AFUISiriViewController startRequestWithOptions:](v30, "startRequestWithOptions:", v58);
      -[AFUISiriViewController siriDidActivateFromSource:](v30, "siriDidActivateFromSource:", v32);
      goto LABEL_74;
    case 8LL:
    case 12LL:
      goto LABEL_33;
    case 9LL:
      v39 = objc_retainAutoreleasedReturnValue(
              +[SRFUserDefaultsController sharedUserDefaultsController](
                &OBJC_CLASS___SRFUserDefaultsController,
                "sharedUserDefaultsController"));
      objc_msgSend(v39, "setPreferBluetoothMicrophones:", 1LL);
      objc_release(v39);
LABEL_33:
      if ( v27 | v16 )
      {
        v40 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___SiriUIRequestOptions), "initWithRequestSource:", v32);
        v41 = v40;
        if ( v27 )
        {
          objc_msgSend(v40, "setRequestInfo:", v27);
          v42 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)v27, "speechRequestOptions"));
          objc_release(v42);
          v34 = v68;
          v33 = v69;
          if ( !v42 )
          {
            v45 = 0LL;
            v27 = (unsigned __int64)v70;
            goto LABEL_67;
          }
          v43 = objc_retainAutoreleasedReturnValue(objc_msgSend(v41, "requestInfo"));
          v44 = objc_retainAutoreleasedReturnValue(objc_msgSend(v43, "speechRequestOptions"));
          v45 = objc_retainAutoreleasedReturnValue(objc_msgSend(v44, "activationDeviceIdentifier"));
          objc_release(v44);
          v27 = (unsigned __int64)v70;
        }
        else
        {
          v34 = v68;
          v33 = v69;
          if ( !v16 )
          {
            v45 = 0LL;
            goto LABEL_67;
          }
          objc_msgSend(v40, "setSpeechRequestOptions:", v16);
          v43 = objc_retainAutoreleasedReturnValue(objc_msgSend(v41, "speechRequestOptions"));
          v45 = objc_retainAutoreleasedReturnValue(objc_msgSend(v43, "activationDeviceIdentifier"));
        }
        objc_release(v43);
LABEL_67:
        objc_msgSend(v41, "setActivationDeviceIdentifier:", v45);
        -[AFUISiriViewController siriWillActivateFromSource:](v30, "siriWillActivateFromSource:", v32);
        -[AFUISiriViewController handleVoiceWithOptions:](v30, "handleVoiceWithOptions:", v41);
        -[AFUISiriViewController siriDidActivateFromSource:](v30, "siriDidActivateFromSource:", v32);
        objc_release(v41);
        v65 = v45;
        goto LABEL_75;
      }
      v46 = (void *)AFSiriLogContextConnection;
      if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_ERROR) )
      {
        v66 = objc_retain(v46);
        v67 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(self), "_nameForActionType:", a3));
        *(_DWORD *)buf = 136315650;
        v76 = "-[SiriNCAlertViewController handleAction:fromEventSource:atTime:requestInfo:speechRequestOptions:launchOpt"
              "ions:dismissalOptions:]";
        v77 = 2112;
        v78 = v67;
        v79 = 2048;
        v80 = a4;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          v66,
          OS_LOG_TYPE_ERROR,
          "%s [Invocation] No info or options for request with action: %@ from event source: %lu",
          buf,
          0x20u);
        objc_release(v67);
        objc_release(v66);
      }
      v47 = objc_retainAutoreleasedReturnValue(
              +[NSDistributedNotificationCenter defaultCenter](
                &OBJC_CLASS___NSDistributedNotificationCenter,
                "defaultCenter"));
      v48 = SiriUIInvocationRequestCompleted;
      v71 = SRFInvocationWasSuccessful;
      v49 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", 0LL));
      v72 = v49;
      v50 = &v72;
      v51 = &v71;
LABEL_56:
      v60 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                v50,
                v51,
                1LL));
      -[NSDistributedNotificationCenter postNotificationName:object:userInfo:options:](
        v47,
        "postNotificationName:object:userInfo:options:",
        v48,
        0LL,
        v60,
        1LL);
      objc_release(v60);
      objc_release(v49);
      objc_release(v47);
      v27 = (unsigned __int64)v70;
LABEL_57:
      v34 = v68;
      v33 = v69;
      goto LABEL_76;
    case 10LL:
      v52 = objc_retainAutoreleasedReturnValue(
              +[SRFUserDefaultsController sharedUserDefaultsController](
                &OBJC_CLASS___SRFUserDefaultsController,
                "sharedUserDefaultsController"));
      objc_msgSend(v52, "setPreferBluetoothMicrophones:", 1LL);
      objc_release(v52);
      if ( !(v27 | v16) )
      {
        v59 = AFSiriLogContextConnection;
        if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_ERROR) )
          sub_100012B74(v59, self, a4);
        v47 = objc_retainAutoreleasedReturnValue(
                +[NSDistributedNotificationCenter defaultCenter](
                  &OBJC_CLASS___NSDistributedNotificationCenter,
                  "defaultCenter"));
        v48 = SiriUIInvocationRequestCompleted;
        v73 = SRFInvocationWasSuccessful;
        v49 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", 0LL));
        v74 = v49;
        v50 = &v74;
        v51 = &v73;
        goto LABEL_56;
      }
      v53 = SiriUIIsButtonDownRequest(v32);
      v54 = objc_alloc((Class)&OBJC_CLASS___SiriUIRequestOptions);
      if ( v53 )
        v55 = objc_msgSend(v54, "initWithRequestSource:buttonDownTimestamp:", v32, a5);
      else
        v55 = objc_msgSend(v54, "initWithRequestSource:", v32);
      v58 = v55;
      v34 = v68;
      v33 = v69;
      if ( v27 )
      {
        objc_msgSend(v55, "setRequestInfo:", v27);
        v61 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)v27, "speechRequestOptions"));
        objc_release(v61);
        if ( v61 )
        {
          v62 = objc_retainAutoreleasedReturnValue(objc_msgSend(v58, "requestInfo"));
          v63 = objc_retainAutoreleasedReturnValue(objc_msgSend(v62, "speechRequestOptions"));
          v64 = objc_retainAutoreleasedReturnValue(objc_msgSend(v63, "activationDeviceIdentifier"));
          objc_release(v63);
          v27 = (unsigned __int64)v70;
LABEL_70:
          objc_release(v62);
          goto LABEL_73;
        }
        v64 = 0LL;
        v27 = (unsigned __int64)v70;
      }
      else
      {
        if ( v16 )
        {
          objc_msgSend(v55, "setSpeechRequestOptions:", v16);
          v62 = objc_retainAutoreleasedReturnValue(objc_msgSend(v58, "speechRequestOptions"));
          v64 = objc_retainAutoreleasedReturnValue(objc_msgSend(v62, "activationDeviceIdentifier"));
          goto LABEL_70;
        }
        v64 = 0LL;
      }
LABEL_73:
      objc_msgSend(v58, "setActivationDeviceIdentifier:", v64);
      -[AFUISiriViewController siriWillActivateFromSource:](v30, "siriWillActivateFromSource:", v32);
      -[AFUISiriViewController handleDoubleTapWithOptions:](v30, "handleDoubleTapWithOptions:", v58);
      -[AFUISiriViewController siriDidActivateFromSource:](v30, "siriDidActivateFromSource:", v32);
      objc_release(v64);
LABEL_74:
      v65 = v58;
LABEL_75:
      objc_release(v65);
LABEL_76:
      objc_release(v30);
      objc_release(v34);
      objc_release(v33);
      objc_release((id)v16);
      objc_release((id)v27);
      return;
    case 13LL:
      -[AFUISiriViewController cancelTTS](v30, "cancelTTS");
      goto LABEL_57;
    case 15LL:
    case 16LL:
    case 17LL:
      v34 = v68;
      v33 = v69;
      if ( -[SiriNCAlertViewController handleInvocationCancel:](self, "handleInvocationCancel:", 15LL) )
        goto LABEL_76;
      -[AFUISiriViewController siriWillActivateFromSource:](v30, "siriWillActivateFromSource:", v32);
      -[AFUISiriViewController handleLongPressBeginFromSource:systemUpTime:](
        v30,
        "handleLongPressBeginFromSource:systemUpTime:",
        v32,
        a5);
LABEL_26:
      -[AFUISiriViewController siriDidActivateFromSource:](v30, "siriDidActivateFromSource:", v32);
      goto LABEL_76;
    case 19LL:
      v34 = v68;
      v33 = v69;
      if ( (unsigned int)AFDeviceSupportsSystemAssistantExperience(v31) )
        -[SiriUIAutoDismissalController cancelClickOutsideOfContentHoldBackTimerIfNeeded](
          self->_autodismisser,
          "cancelClickOutsideOfContentHoldBackTimerIfNeeded");
      goto LABEL_76;
    default:
      v56 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v56,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        self,
        CFSTR("SiriNCAlertViewController.m"),
        667LL,
        CFSTR("Unexpected action type %ld"),
        a3);
      v57 = v56;
      v27 = (unsigned __int64)v70;
      objc_release(v57);
      goto LABEL_57;
  }
}