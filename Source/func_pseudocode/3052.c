-[DeviceSetupViewController webView:decidePolicyForNavigationResponse:decisionHandler:]
void __cdecl -[DeviceSetupViewController webView:decidePolicyForNavigationResponse:decisionHandler:](
        DeviceSetupViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  void (__fastcall **v7)(id, __int64); // x19
  void *v8; // x20
  void *v9; // x22
  _DWORD v10[2]; // [xsp+0h] [xbp-30h] BYREF

  v7 = (void (__fastcall **)(id, __int64))objc_retain(a5);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(a4, "response"));
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
  {
    v10[0] = 67109120;
    v10[1] = (unsigned int)objc_msgSend(v8, "statusCode");
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEBUG,
      "activation: decidePolicyForNavigationResponse (%d)",
      (uint8_t *)v10,
      8u);
  }
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "allHeaderFields"));
  -[DeviceSetupViewController setResponseHeaders:](self, "setResponseHeaders:", v9);
  objc_release(v9);
  v7[2](v7, 1LL);
  objc_release(v7);
  objc_release(v8);
}