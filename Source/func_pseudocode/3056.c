-[DeviceSetupViewController webView:didReceiveServerRedirectForProvisionalNavigation:]
void __cdecl -[DeviceSetupViewController webView:didReceiveServerRedirectForProvisionalNavigation:](
        DeviceSetupViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  void *v5; // x19
  void *v6; // x20
  int v7; // [xsp+0h] [xbp-30h] BYREF
  void *v8; // [xsp+4h] [xbp-2Ch]

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
  {
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "URL"));
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "absoluteString"));
    v7 = 138412290;
    v8 = v6;
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEBUG,
      "activation: didReceiveServerRedirectForProvisionalNavigation: %@",
      (uint8_t *)&v7,
      0xCu);
    objc_release(v6);
    objc_release(v5);
  }
}