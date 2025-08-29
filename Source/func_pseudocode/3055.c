-[DeviceSetupViewController webView:didFailProvisionalNavigation:withError:]
void __cdecl -[DeviceSetupViewController webView:didFailProvisionalNavigation:withError:](
        DeviceSetupViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x19
  WKWebView *v8; // x21
  WKWebView *v9; // x22
  void *v10; // x21
  void *v11; // x22
  int v12; // [xsp+0h] [xbp-40h] BYREF
  id v13; // [xsp+4h] [xbp-3Ch]

  v7 = objc_retain(a5);
  v8 = (WKWebView *)objc_retain(a3);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController activationWebView](self, "activationWebView"));
  objc_release(v8);
  objc_release(v9);
  if ( v9 != v8 )
    goto LABEL_10;
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "domain"));
  if ( (unsigned int)objc_msgSend(v10, "isEqualToString:", WebKitErrorDomain) )
  {
    v11 = objc_msgSend(v7, "code");
    objc_release(v10);
    if ( v11 == (void *)102 )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      {
        LOWORD(v12) = 0;
        _os_log_debug_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_DEBUG,
          "activation: didFailProvisionalNavigation (canceled for redirect)",
          (uint8_t *)&v12,
          2u);
      }
      goto LABEL_10;
    }
  }
  else
  {
    objc_release(v10);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
  {
    v12 = 138412290;
    v13 = v7;
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEBUG,
      "activation: didFailProvisionalNavigation: %@",
      (uint8_t *)&v12,
      0xCu);
  }
  -[DeviceSetupViewController setSessionError:](self, "setSessionError:", v7);
  -[DeviceSetupViewController setSessionState:](self, "setSessionState:", 6LL);
LABEL_10:
  objc_release(v7);
}