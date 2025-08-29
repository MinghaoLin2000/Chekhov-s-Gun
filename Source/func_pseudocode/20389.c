-[device_http_t trustChallengeWithTrust:]
bool __cdecl -[device_http_t trustChallengeWithTrust:](device_http_t *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x21
  __int64 (__fastcall **v6)(id, device_http_t *, id); // x21
  char v7; // w20

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[device_http_t serverCertificateCheckForDeviceHTTP](self, "serverCertificateCheckForDeviceHTTP"));
  objc_release(v5);
  if ( v5 )
  {
    v6 = (__int64 (__fastcall **)(id, device_http_t *, id))objc_retainAutoreleasedReturnValue(
                                                             -[device_http_t serverCertificateCheckForDeviceHTTP](
                                                               self,
                                                               "serverCertificateCheckForDeviceHTTP"));
    v7 = v6[2](v6, self, v4);
    objc_release(v6);
  }
  else
  {
    v7 = 1;
  }
  objc_release(v4);
  return v7;
}