-[DeviceSetupViewController webView:decidePolicyForNavigationAction:decisionHandler:]
void __cdecl -[DeviceSetupViewController webView:decidePolicyForNavigationAction:decisionHandler:](
        DeviceSetupViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  void (__fastcall **v10)(id, _QWORD); // x21
  NSWorkspace *v11; // x22
  void *v12; // x23
  void *v13; // x24
  NSArray *v14; // x25
  NSString *v15; // x0
  NSString *v16; // x23
  NSString *v17; // x24
  void *v18; // x25
  void *v19; // x26
  void *v20; // x27
  unsigned __int8 v21; // w28
  void *v22; // x23
  void *v23; // x24
  void *v24; // x25
  void *v25; // x23
  void *v26; // x24
  int v27; // [xsp+0h] [xbp-70h] BYREF
  void *v28; // [xsp+4h] [xbp-6Ch]
  void *v29; // [xsp+10h] [xbp-60h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = (void (__fastcall **)(id, _QWORD))objc_retain(a5);
  if ( objc_msgSend(v9, "navigationType") )
  {
    if ( objc_msgSend(v9, "navigationType") != (void *)-1LL )
      goto LABEL_3;
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController currentURLString](self, "currentURLString"));
    if ( !v15 )
      goto LABEL_3;
    v16 = v15;
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController currentURLString](self, "currentURLString"));
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "request"));
    v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "URL"));
    v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "absoluteString"));
    v21 = -[NSString isEqualToString:](v17, "isEqualToString:", v20);
    objc_release(v20);
    objc_release(v19);
    objc_release(v18);
    objc_release(v17);
    objc_release(v16);
    if ( (v21 & 1) == 0 )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
      {
        v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "request"));
        v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "URL"));
        v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "host"));
        v27 = 138412290;
        v28 = v24;
        _os_log_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_INFO,
          "activation: redirect to %@",
          (uint8_t *)&v27,
          0xCu);
        objc_release(v24);
        objc_release(v23);
        objc_release(v22);
      }
      v10[2](v10, 0LL);
      v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "URL"));
      v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v25, "absoluteString"));
      -[DeviceSetupViewController sendActivationRequestWithURLString:](self, "sendActivationRequestWithURLString:", v26);
      objc_release(v26);
      objc_release(v25);
    }
    else
    {
LABEL_3:
      v10[2](v10, 1LL);
    }
  }
  else
  {
    v11 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "request"));
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "URL"));
    v29 = v13;
    v14 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v29, 1LL));
    -[NSWorkspace openURLs:withAppBundleIdentifier:options:additionalEventParamDescriptor:launchIdentifiers:](
      v11,
      "openURLs:withAppBundleIdentifier:options:additionalEventParamDescriptor:launchIdentifiers:",
      v14,
      CFSTR("com.apple.safari"),
      0x10000LL,
      0LL,
      0LL);
    objc_release(v14);
    objc_release(v13);
    objc_release(v12);
    objc_release(v11);
    v10[2](v10, 0LL);
  }
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
}