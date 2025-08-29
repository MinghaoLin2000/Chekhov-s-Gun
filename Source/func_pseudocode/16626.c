-[FirmwareBundle parseResourceFileIntoData:]
id __cdecl -[FirmwareBundle parseResourceFileIntoData:](FirmwareBundle *self, SEL a2, id a3)
{
  NSString *v3; // x20
  NSMutableData *v4; // x19
  NSScanner *v5; // x20
  char v7; // [xsp+Bh] [xbp-25h] BYREF
  int v8; // [xsp+Ch] [xbp-24h] BYREF

  v3 = +[NSString stringWithContentsOfFile:encoding:error:](
         &OBJC_CLASS___NSString,
         "stringWithContentsOfFile:encoding:error:",
         a3,
         1LL,
         0LL);
  v4 = +[NSMutableData dataWithCapacity:](
         &OBJC_CLASS___NSMutableData,
         "dataWithCapacity:",
         -[NSString length](v3, "length") / 5);
  v5 = +[NSScanner scannerWithString:](&OBJC_CLASS___NSScanner, "scannerWithString:", v3);
  v8 = 0;
  if ( -[NSScanner scanHexInt:](v5, "scanHexInt:", &v8) )
  {
    do
    {
      v7 = v8;
      -[NSMutableData appendBytes:length:](v4, "appendBytes:length:", &v7, 1LL);
      -[NSScanner scanCharactersFromSet:intoString:](
        v5,
        "scanCharactersFromSet:intoString:",
        +[NSCharacterSet characterSetWithCharactersInString:](
          &OBJC_CLASS___NSCharacterSet,
          "characterSetWithCharactersInString:",
          CFSTR(",")),
        0LL);
    }
    while ( -[NSScanner scanHexInt:](v5, "scanHexInt:", &v8) );
  }
  return v4;
}