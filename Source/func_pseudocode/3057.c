-[DeviceSetupViewController userContentController:didReceiveScriptMessage:]
void __cdecl -[DeviceSetupViewController userContentController:didReceiveScriptMessage:](
        DeviceSetupViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  void *v8; // x22
  void *v9; // x23
  __int64 v10; // x0
  char isKindOfClass; // w24
  void *v12; // x22
  void *v13; // x23
  id v14; // x22
  void *v15; // x24
  void *v16; // x25
  AMPDevicesClient *v17; // x25
  AMPDevice *v18; // x26
  NSDictionary *v19; // x27
  id v20; // x24
  _QWORD v21[4]; // [xsp+0h] [xbp-90h] BYREF
  id v22; // [xsp+20h] [xbp-70h]
  id v23; // [xsp+28h] [xbp-68h] BYREF
  id buf[2]; // [xsp+30h] [xbp-60h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "name"));
  if ( ((unsigned int)objc_msgSend(v8, "isEqualToString:", CFSTR("iTunes_addProtocol")) & 1) == 0 )
  {
    objc_release(v8);
    goto LABEL_13;
  }
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "body"));
  v10 = objc_opt_class(&OBJC_CLASS___NSString);
  isKindOfClass = objc_opt_isKindOfClass(v9, v10);
  objc_release(v9);
  objc_release(v8);
  if ( (isKindOfClass & 1) == 0 )
  {
LABEL_13:
    -[DeviceSetupViewController setSessionError:](self, "setSessionError:", 0LL);
    -[DeviceSetupViewController setSessionState:](self, "setSessionState:", 6LL);
    goto LABEL_14;
  }
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "body"));
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "dataUsingEncoding:", 4LL));
  objc_release(v12);
  v14 = objc_retainAutoreleasedReturnValue(
          +[NSPropertyListSerialization propertyListWithData:options:format:error:](
            &OBJC_CLASS___NSPropertyListSerialization,
            "propertyListWithData:options:format:error:",
            v13,
            0LL,
            0LL,
            0LL));
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKey:", CFSTR("ActivationRecord")));
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKey:", CFSTR("registration")));
  objc_release(v16);
  if ( v16 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    LOWORD(buf[0]) = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "activation: Unhandled device type 'registration'",
      (uint8_t *)buf,
      2u);
  }
  if ( v15 )
    goto LABEL_10;
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKey:", CFSTR("device-activation")));
  if ( !v15 )
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKey:", CFSTR("iphone-activation")));
  objc_release(v13);
  -[DeviceSetupViewController setResponseHeaders:](self, "setResponseHeaders:", 0LL);
  v13 = 0LL;
  if ( v15 )
  {
LABEL_10:
    -[DeviceSetupViewController setSessionState:](self, "setSessionState:", 4LL);
    objc_initWeak(buf, self);
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
    v18 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v19 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController responseHeaders](self, "responseHeaders"));
    v21[0] = _NSConcreteStackBlock;
    v21[1] = 3254779904LL;
    v21[2] = sub_10006F63C;
    v21[3] = &unk_1000B95F8;
    objc_copyWeak(&v23, buf);
    v20 = objc_retain(v15);
    v22 = v20;
    -[AMPDevicesClient completeActivationForDevice:withInfo:withData:withHeaders:withReply:](
      v17,
      "completeActivationForDevice:withInfo:withData:withHeaders:withReply:",
      v18,
      v20,
      v13,
      v19,
      v21);
    objc_release(v19);
    objc_release(v18);
    objc_release(v17);
    objc_release(v22);
    objc_destroyWeak(&v23);
    objc_destroyWeak(buf);
    objc_release(v20);
    objc_release(v13);
  }
  else
  {
    -[DeviceSetupViewController setSessionError:](self, "setSessionError:", 0LL);
    -[DeviceSetupViewController setSessionState:](self, "setSessionState:", 6LL);
  }
  objc_release(v14);
LABEL_14:
  objc_release(v7);
  objc_release(v6);
}