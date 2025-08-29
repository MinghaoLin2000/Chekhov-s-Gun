-[device_http_t initWithSessionURL:displayNameForCertTrust:]
device_http_t *__cdecl -[device_http_t initWithSessionURL:displayNameForCertTrust:](
        device_http_t *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  device_http_t *v8; // x22
  IPPSession *v9; // x0
  IPPSession *session; // x8
  NSURL *v11; // x0
  NSURL *printerURL; // x8
  objc_super v14; // [xsp+0h] [xbp-40h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v14.receiver = self;
  v14.super_class = (Class)&OBJC_CLASS___device_http_t;
  v8 = -[device_http_t init](&v14, "init");
  if ( v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "session"));
    session = v8->_session;
    v8->_session = v9;
    objc_release(session);
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "url"));
    printerURL = v8->_printerURL;
    v8->_printerURL = v11;
    objc_release(printerURL);
    objc_storeStrong((id *)&v8->_printerDisplayName, a4);
    -[device_http_t _setupCredentials](v8, "_setupCredentials");
  }
  objc_release(v7);
  objc_release(v6);
  return v8;
}