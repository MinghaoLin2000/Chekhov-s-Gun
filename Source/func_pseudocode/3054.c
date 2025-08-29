-[DeviceSetupViewController webView:didFinishNavigation:]
void __cdecl -[DeviceSetupViewController webView:didFinishNavigation:](
        DeviceSetupViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x21
  uint8_t v8[16]; // [xsp+0h] [xbp-30h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
  {
    *(_WORD *)v8 = 0;
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEBUG,
      "activation: didFinishNavigation",
      v8,
      2u);
  }
  -[DeviceSetupViewController setCurrentURLString:](self, "setCurrentURLString:", 0LL);
  if ( -[DeviceSetupViewController sessionState](self, "sessionState") == 3 )
    -[DeviceSetupViewController setSessionState:](self, "setSessionState:", 6LL);
  objc_release(v7);
  objc_release(v6);
}