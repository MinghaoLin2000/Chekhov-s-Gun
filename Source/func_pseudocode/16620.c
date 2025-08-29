-[FirmwareBundle initWithBundle:]
FirmwareBundle *__cdecl -[FirmwareBundle initWithBundle:](FirmwareBundle *self, SEL a2, id a3)
{
  FirmwareBundle *v4; // x19
  void *v5; // x27
  void *v6; // x26
  void *v7; // x0
  void *v8; // x25
  void *v9; // x24
  void *v10; // x23
  void *v11; // x22
  void *v12; // x0
  void *v13; // x21
  unsigned __int64 v14; // x0
  void *v15; // x0
  unsigned __int8 v16; // w26
  void *v17; // x25
  void *v18; // x2
  NSURL *v19; // x0
  __int64 v20; // x25
  NSData *v21; // x0
  NSData *v22; // x0
  NSData *v23; // x0
  void *v24; // x0
  const char *v25; // x24
  __int64 v26; // x25
  const char *v27; // x26
  void *v28; // x20
  const char *v29; // x27
  void *v30; // x21
  const char *v31; // x28
  int v33; // [xsp+5Ch] [xbp-74h] BYREF
  objc_super v34; // [xsp+60h] [xbp-70h] BYREF
  id v35; // [xsp+70h] [xbp-60h] BYREF
  __int64 v36; // [xsp+78h] [xbp-58h] BYREF

  v35 = 0LL;
  v36 = 0LL;
  v34.receiver = self;
  v34.super_class = (Class)&OBJC_CLASS___FirmwareBundle;
  v4 = -[FirmwareBundle init](&v34, "init");
  if ( !v4 )
    goto LABEL_37;
  v5 = objc_msgSend(a3, "objectForInfoDictionaryKey:", CFSTR("FirmwareImageBaseAddress"));
  v6 = objc_msgSend(a3, "objectForInfoDictionaryKey:", CFSTR("FirmwareImageSize"));
  v7 = objc_msgSend(a3, "objectForInfoDictionaryKey:", CFSTR("FirmwareImageFile"));
  if ( !v7 )
    goto LABEL_37;
  v8 = v7;
  v9 = objc_msgSend(a3, "objectForInfoDictionaryKey:", CFSTR("HashFile"));
  v10 = objc_msgSend(a3, "objectForInfoDictionaryKey:", CFSTR("CertificateFile"));
  v11 = objc_msgSend(a3, "objectForInfoDictionaryKey:", CFSTR("SignatureFile"));
  v12 = objc_msgSend(a3, "objectForInfoDictionaryKey:", CFSTR("CFBundleIdentifier"));
  if ( !v12 )
    goto LABEL_37;
  v13 = v12;
  NSLog(&CFSTR("%s: Info Name Keys [I:%@ H:%@ S:%@ C=%@]\n").isa, "-[FirmwareBundle initWithBundle:]", v8, v9, v11, v10);
  if ( v5 )
    -[NSScanner scanHexInt:](
      +[NSScanner scannerWithString:](&OBJC_CLASS___NSScanner, "scannerWithString:", v5),
      "scanHexInt:",
      &v4->_firmwareImageBaseAddress);
  if ( v6 )
  {
    -[NSScanner scanHexInt:](
      +[NSScanner scannerWithString:](&OBJC_CLASS___NSScanner, "scannerWithString:", v6),
      "scanHexInt:",
      &v4->_firmwareImageSize);
  }
  else
  {
    -[FirmwareBundle parseFileName:intoPath:andExtension:](v4, "parseFileName:intoPath:andExtension:", v8, &v36, &v35);
    v14 = -[NSDictionary fileSize](
            -[NSFileManager attributesOfItemAtPath:error:](
              +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"),
              "attributesOfItemAtPath:error:",
              objc_msgSend(a3, "pathForResource:ofType:", v36, v35),
              0LL),
            "fileSize");
    v4->_firmwareImageSize = v14;
    NSLog(
      &CFSTR("%s: imageFileSize unspecified by asset. using file size=%d\n").isa,
      "-[FirmwareBundle initWithBundle:]",
      v14);
  }
  v15 = objc_msgSend(a3, "objectForInfoDictionaryKey:", CFSTR("DefaultFillByte"));
  if ( v15 )
  {
    v33 = 0;
    -[NSScanner scanHexInt:](
      +[NSScanner scannerWithString:](&OBJC_CLASS___NSScanner, "scannerWithString:", v15),
      "scanHexInt:",
      &v33);
    v16 = v33;
  }
  else
  {
    v16 = -1;
  }
  -[FirmwareBundle parseFileName:intoPath:andExtension:](v4, "parseFileName:intoPath:andExtension:", v8, &v36, &v35);
  if ( !objc_msgSend(v35, "caseInsensitiveCompare:", CFSTR("s19")) )
  {
    v19 = -[FirmwareBundle parseSRECFile:withDefaultByteValue:](
            v4,
            "parseSRECFile:withDefaultByteValue:",
            objc_msgSend(a3, "pathForResource:ofType:", v36, v35),
            v16);
    goto LABEL_16;
  }
  v17 = objc_msgSend(v35, "caseInsensitiveCompare:", CFSTR("bin"));
  v18 = objc_msgSend(a3, "pathForResource:ofType:", v36, v35);
  if ( v17 )
  {
    v19 = -[FirmwareBundle parseMSP430TXTFile:withDefaultByteValue:](
            v4,
            "parseMSP430TXTFile:withDefaultByteValue:",
            v18,
            v16);
LABEL_16:
    v20 = 40LL;
    goto LABEL_18;
  }
  v19 = +[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v18);
  v20 = 80LL;
LABEL_18:
  *(Class *)((char *)&v4->super.isa + v20) = (Class)objc_retain(v19);
  -[FirmwareBundle parseFileName:intoPath:andExtension:](
    v4,
    "parseFileName:intoPath:andExtension:",
    CFSTR("BuildManifest.plist"),
    &v36,
    &v35);
  v4->_buildManifest = objc_retain(
                         +[NSDictionary dictionaryWithContentsOfFile:](
                           &OBJC_CLASS___NSDictionary,
                           "dictionaryWithContentsOfFile:",
                           objc_msgSend(a3, "pathForResource:ofType:", v36, v35)));
  if ( v9 )
  {
    -[FirmwareBundle parseFileName:intoPath:andExtension:](v4, "parseFileName:intoPath:andExtension:", v9, &v36, &v35);
    if ( objc_msgSend(v35, "caseInsensitiveCompare:", CFSTR("bin")) )
      v21 = -[FirmwareBundle parseResourceFileIntoData:](
              v4,
              "parseResourceFileIntoData:",
              objc_msgSend(a3, "pathForResource:ofType:", v36, v35));
    else
      v21 = +[NSData dataWithContentsOfFile:](
              &OBJC_CLASS___NSData,
              "dataWithContentsOfFile:",
              objc_msgSend(a3, "pathForResource:ofType:", v36, v35));
    v4->_hash = objc_retain(v21);
    if ( !v10 )
      goto LABEL_29;
    goto LABEL_25;
  }
  -[FirmwareBundle calculateHash](v4, "calculateHash");
  if ( v10 )
  {
LABEL_25:
    -[FirmwareBundle parseFileName:intoPath:andExtension:](v4, "parseFileName:intoPath:andExtension:", v10, &v36, &v35);
    if ( objc_msgSend(v35, "caseInsensitiveCompare:", CFSTR("bin")) )
      v22 = -[FirmwareBundle parseResourceFileIntoData:](
              v4,
              "parseResourceFileIntoData:",
              objc_msgSend(a3, "pathForResource:ofType:", v36, v35));
    else
      v22 = +[NSData dataWithContentsOfFile:](
              &OBJC_CLASS___NSData,
              "dataWithContentsOfFile:",
              objc_msgSend(a3, "pathForResource:ofType:", v36, v35));
    v4->_certificate = objc_retain(v22);
  }
LABEL_29:
  if ( v11 )
  {
    -[FirmwareBundle parseFileName:intoPath:andExtension:](v4, "parseFileName:intoPath:andExtension:", v11, &v36, &v35);
    if ( objc_msgSend(v35, "caseInsensitiveCompare:", CFSTR("bin")) )
      v23 = -[FirmwareBundle parseResourceFileIntoData:](
              v4,
              "parseResourceFileIntoData:",
              objc_msgSend(a3, "pathForResource:ofType:", v36, v35));
    else
      v23 = +[NSData dataWithContentsOfFile:](
              &OBJC_CLASS___NSData,
              "dataWithContentsOfFile:",
              objc_msgSend(a3, "pathForResource:ofType:", v36, v35));
    v4->_signature = objc_retain(v23);
  }
  v24 = objc_msgSend(v13, "componentsSeparatedByString:", CFSTR("."));
  if ( v24 )
    LODWORD(v24) = (unsigned int)objc_msgSend(objc_msgSend(v24, "lastObject"), "intValue");
  v4->_productIDCode = (unsigned int)v24;
  v4->_bundleDescription = (NSString *)objc_retain(objc_msgSend(objc_msgSend(a3, "bundlePath"), "lastPathComponent"));
LABEL_37:
  if ( -[FirmwareBundle firmwareImage](v4, "firmwareImage") )
    v25 = "valid";
  else
    v25 = "nil";
  v26 = -[FirmwareBundle firmwareImageSize](v4, "firmwareImageSize");
  if ( -[FirmwareBundle hash](v4, "hash") )
    v27 = "valid";
  else
    v27 = "nil";
  v28 = -[NSData length](-[FirmwareBundle hash](v4, "hash"), "length");
  if ( -[FirmwareBundle signature](v4, "signature") )
    v29 = "valid";
  else
    v29 = "nil";
  v30 = -[NSData length](-[FirmwareBundle signature](v4, "signature"), "length");
  if ( -[FirmwareBundle certificate](v4, "certificate") )
    v31 = "valid";
  else
    v31 = "nil";
  NSLog(
    &CFSTR("%s: I=%s[%lu] H=%s[%lu] S=%s[%lu] C=%s[%lu] productID=%d baseAddress=%d\n").isa,
    "-[FirmwareBundle initWithBundle:]",
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    -[NSData length](-[FirmwareBundle certificate](v4, "certificate"), "length"),
    -[FirmwareBundle productIDCode](v4, "productIDCode"),
    -[FirmwareBundle firmwareImageBaseAddress](v4, "firmwareImageBaseAddress"));
  return v4;
}