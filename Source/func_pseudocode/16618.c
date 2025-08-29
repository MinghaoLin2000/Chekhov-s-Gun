-[FirmwareBundle initWithData:hashData:signatureData:certData:]
FirmwareBundle *__cdecl -[FirmwareBundle initWithData:hashData:signatureData:certData:](
        FirmwareBundle *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  FirmwareBundle *v6; // x19
  NSData *firmwareImage; // x0
  const char *v12; // x23
  const char *v13; // x25
  void *v14; // x20
  NSData *hash; // x0
  const char *v16; // x26
  void *v17; // x21
  NSData *signature; // x0
  const char *v19; // x27
  void *v20; // x22
  NSData *certificate; // x0
  objc_super v23; // [xsp+50h] [xbp-60h] BYREF

  v6 = self;
  if ( a3 )
  {
    v23.receiver = self;
    v23.super_class = (Class)&OBJC_CLASS___FirmwareBundle;
    v6 = -[FirmwareBundle init](&v23, "init");
    if ( v6 )
    {
      v6->_firmwareImage = (NSData *)objc_retain(a3);
      v6->_firmwareImageSize = (unsigned int)objc_msgSend(a3, "length");
      v6->_hash = (NSData *)objc_retain(a4);
      v6->_signature = (NSData *)objc_retain(a5);
      v6->_certificate = (NSData *)objc_retain(a6);
      *(_QWORD *)&v6->_productIDCode = 0LL;
      v6->_bundleDescription = 0LL;
      v6->_buildManifest = 0LL;
      if ( !v6->_hash )
        -[FirmwareBundle calculateHash](v6, "calculateHash");
      firmwareImage = v6->_firmwareImage;
      v12 = "valid";
      if ( firmwareImage )
        v13 = "valid";
      else
        v13 = "nil";
      v14 = -[NSData length](firmwareImage, "length");
      hash = v6->_hash;
      if ( hash )
        v16 = "valid";
      else
        v16 = "nil";
      v17 = -[NSData length](hash, "length");
      signature = v6->_signature;
      if ( signature )
        v19 = "valid";
      else
        v19 = "nil";
      v20 = -[NSData length](signature, "length");
      certificate = v6->_certificate;
      if ( !certificate )
        v12 = "nil";
      NSLog(
        &CFSTR("%s: I=%s[%lu] H=%s[%lu] S=%s[%lu] C=%s[%lu] productID=%d\n").isa,
        "-[FirmwareBundle initWithData:hashData:signatureData:certData:]",
        v13,
        v14,
        v16,
        v17,
        v19,
        v20,
        v12,
        -[NSData length](certificate, "length"),
        v6->_productIDCode);
    }
    else
    {
      NSLog(&CFSTR("%s: super init failed\n").isa, "-[FirmwareBundle initWithData:hashData:signatureData:certData:]");
    }
  }
  else
  {
    NSLog(&CFSTR("%s: null payload\n").isa, "-[FirmwareBundle initWithData:hashData:signatureData:certData:]");
  }
  return v6;
}