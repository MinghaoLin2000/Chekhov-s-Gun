-[DeviceSetupViewController webView:didFailNavigation:withError:]
void __cdecl -[DeviceSetupViewController webView:didFailNavigation:withError:](
        DeviceSetupViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v6; // x20
  int v7; // [xsp+0h] [xbp-30h] BYREF
  id v8; // [xsp+4h] [xbp-2Ch]

  v6 = objc_retain(a5);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
  {
    v7 = 138412290;
    v8 = v6;
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEBUG,
      "activation: didFailNavigation -- %@",
      (uint8_t *)&v7,
      0xCu);
  }
  -[DeviceSetupViewController setCurrentURLString:](self, "setCurrentURLString:", 0LL);
  -[DeviceSetupViewController setSessionError:](self, "setSessionError:", v6);
  -[DeviceSetupViewController setSessionState:](self, "setSessionState:", 6LL);
  objc_release(v6);
}