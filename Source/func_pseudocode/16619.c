-[FirmwareBundle initWithURL:hashData:signatureData:certData:]
FirmwareBundle *__cdecl -[FirmwareBundle initWithURL:hashData:signatureData:certData:](
        FirmwareBundle *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  FirmwareBundle *v11; // x19
  NSURL *firmwareLocalURL; // x23
  void *v13; // x20
  NSData *hash; // x0
  const char *v15; // x24
  const char *v16; // x26
  void *v17; // x21
  NSData *signature; // x0
  const char *v19; // x27
  void *v20; // x22
  NSData *certificate; // x0
  id v23; // [xsp+50h] [xbp-70h] BYREF
  objc_super v24; // [xsp+58h] [xbp-68h] BYREF
  __int64 v25; // [xsp+68h] [xbp-58h] BYREF

  v25 = 0LL;
  if ( ((unsigned int)objc_msgSend(a3, "checkResourceIsReachableAndReturnError:", &v25) & 1) != 0 )
  {
    v24.receiver = self;
    v24.super_class = (Class)&OBJC_CLASS___FirmwareBundle;
    v11 = -[FirmwareBundle init](&v24, "init");
    if ( v11 )
    {
      v11->_firmwareLocalURL = (NSURL *)objc_retain(a3);
      v11->_hash = (NSData *)objc_retain(a4);
      v11->_signature = (NSData *)objc_retain(a5);
      v11->_certificate = (NSData *)objc_retain(a6);
      *(_QWORD *)&v11->_productIDCode = 0LL;
      v11->_bundleDescription = 0LL;
      v11->_buildManifest = 0LL;
      v23 = 0LL;
      objc_msgSend(a3, "getResourceValue:forKey:error:", &v23, NSURLFileSizeKey, &v25);
      v11->_firmwareImageSize = (unsigned int)objc_msgSend(v23, "unsignedIntValue");
      if ( !v11->_hash )
        -[FirmwareBundle calculateHash](v11, "calculateHash");
      firmwareLocalURL = v11->_firmwareLocalURL;
      v13 = -[NSData length](v11->_firmwareImage, "length");
      hash = v11->_hash;
      v15 = "valid";
      if ( hash )
        v16 = "valid";
      else
        v16 = "nil";
      v17 = -[NSData length](hash, "length");
      signature = v11->_signature;
      if ( signature )
        v19 = "valid";
      else
        v19 = "nil";
      v20 = -[NSData length](signature, "length");
      certificate = v11->_certificate;
      if ( !certificate )
        v15 = "nil";
      NSLog(
        &CFSTR("%s: I=%@[%lu] H=%s[%lu] S=%s[%lu] C=%s[%lu] productID=%d\n").isa,
        "-[FirmwareBundle initWithURL:hashData:signatureData:certData:]",
        firmwareLocalURL,
        v13,
        v16,
        v17,
        v19,
        v20,
        v15,
        -[NSData length](certificate, "length"),
        v11->_productIDCode);
    }
    else
    {
      NSLog(&CFSTR("%s: super init failed\n").isa, "-[FirmwareBundle initWithURL:hashData:signatureData:certData:]");
    }
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_10001B6DC(a3);
    return 0LL;
  }
  return v11;
}