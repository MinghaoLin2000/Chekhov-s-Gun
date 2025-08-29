-[device_http_t _setupCredentials]
void __cdecl -[device_http_t _setupCredentials](device_http_t *self, SEL a2)
{
  NSString *v3; // x0
  NSString *v4; // x20
  NSString *v5; // x21
  NSString *v6; // x20
  NSString *v7; // x21
  NSURLCredential *v8; // x0
  NSURLCredential *defaultCredential; // x8
  NSString *printerDisplayName; // x0
  NSURLCredential *v11; // x0
  NSURLCredential *v12; // x8

  v3 = objc_retainAutoreleasedReturnValue(-[NSURL user](self->_printerURL, "user"));
  if ( v3 )
  {
    v4 = v3;
    v5 = objc_retainAutoreleasedReturnValue(-[NSURL password](self->_printerURL, "password"));
    objc_release(v5);
    objc_release(v4);
    if ( v5 )
    {
      v6 = objc_retainAutoreleasedReturnValue(-[NSURL user](self->_printerURL, "user"));
      v7 = objc_retainAutoreleasedReturnValue(-[NSURL password](self->_printerURL, "password"));
      v8 = objc_retainAutoreleasedReturnValue(
             +[NSURLCredential credentialWithUser:password:persistence:](
               &OBJC_CLASS___NSURLCredential,
               "credentialWithUser:password:persistence:",
               v6,
               v7,
               2LL));
      defaultCredential = self->_defaultCredential;
      self->_defaultCredential = v8;
      objc_release(defaultCredential);
      objc_release(v7);
      objc_release(v6);
    }
  }
  if ( self->_defaultCredential
    || (printerDisplayName = self->_printerDisplayName) != 0LL
    && (v11 = objc_retainAutoreleasedReturnValue(PKGetAuthInfo(printerDisplayName, self->_printerURL)),
        v12 = self->_defaultCredential,
        self->_defaultCredential = v11,
        objc_release(v12),
        self->_defaultCredential) )
  {
    self->_forceEncryption = 1;
  }
}