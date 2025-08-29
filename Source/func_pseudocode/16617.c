-[FirmwareBundle calculateHash]
void __cdecl -[FirmwareBundle calculateHash](FirmwareBundle *self, SEL a2)
{
  NSURL *firmwareLocalURL; // x0
  NSData *HashForDataAtLocationAsData; // x0
  NSData *v5; // x0
  __int64 v6; // x20
  __int64 v7; // x8
  char *v8; // x21
  NSData *v9; // x0
  __int64 v10; // [xsp+10h] [xbp-70h] BYREF
  __int64 v11; // [xsp+18h] [xbp-68h] BYREF
  _OWORD v12[2]; // [xsp+20h] [xbp-60h] BYREF

  v11 = 0LL;
  firmwareLocalURL = self->_firmwareLocalURL;
  if ( firmwareLocalURL )
  {
    HashForDataAtLocationAsData = (NSData *)generateHashForDataAtLocationAsData(firmwareLocalURL, 10LL, (__int64)&v11);
    self->_hash = HashForDataAtLocationAsData;
    v5 = objc_retain(HashForDataAtLocationAsData);
  }
  else
  {
    memset(v12, 0, sizeof(v12));
    v6 = ccsha256_di(0LL, a2);
    NSLog(
      &CFSTR("%s: hash not provided by asset. creating sha256 on the fly imageSize=%d\n").isa,
      "-[FirmwareBundle calculateHash]",
      self->_firmwareImageSize);
    __chkstk_darwin();
    v8 = (char *)&v10 - v7;
    ccdigest_init(v6, (char *)&v10 - v7);
    ccdigest_update(v6, v8, self->_firmwareImageSize, -[NSData bytes](self->_firmwareImage, "bytes"));
    (*(void (__fastcall **)(__int64, char *, _OWORD *))(v6 + 56))(v6, v8, v12);
    v9 = objc_retain(+[NSData dataWithBytes:length:](&OBJC_CLASS___NSData, "dataWithBytes:length:", v12, 32LL));
    self->_hash = v9;
    NSLog(&CFSTR("hash created %@\n").isa, v9);
  }
}