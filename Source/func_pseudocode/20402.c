+[device_http_t deviceHTTPForSessionURL:completionHandler:]
void __cdecl +[device_http_t deviceHTTPForSessionURL:completionHandler:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x19
  void (__fastcall **v6)(id, device_http_t *); // x20
  device_http_t *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = (void (__fastcall **)(id, device_http_t *))objc_retain(a4);
  v7 = -[device_http_t initWithSessionURL:displayNameForCertTrust:](
         objc_alloc(&OBJC_CLASS___device_http_t),
         "initWithSessionURL:displayNameForCertTrust:",
         v5,
         0LL);
  v6[2](v6, v7);
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}