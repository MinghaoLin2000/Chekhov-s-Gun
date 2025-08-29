-[FirmwareBundle parseSRECFile:withDefaultByteValue:]
id __cdecl -[FirmwareBundle parseSRECFile:withDefaultByteValue:](
        FirmwareBundle *self,
        SEL a2,
        id a3,
        unsigned __int8 a4)
{
  int v4; // w21
  NSMutableData *v7; // x20
  NSScanner *v8; // x21
  __int64 v10; // [xsp+8h] [xbp-38h] BYREF

  v4 = a4;
  v7 = +[NSMutableData dataWithLength:](&OBJC_CLASS___NSMutableData, "dataWithLength:", self->_firmwareImageSize);
  memset(-[NSMutableData mutableBytes](v7, "mutableBytes"), v4, -[NSMutableData length](v7, "length"));
  v8 = +[NSScanner scannerWithString:](
         &OBJC_CLASS___NSScanner,
         "scannerWithString:",
         +[NSString stringWithContentsOfFile:encoding:error:](
           &OBJC_CLASS___NSString,
           "stringWithContentsOfFile:encoding:error:",
           a3,
           1LL,
           0LL));
  if ( !-[NSScanner isAtEnd](v8, "isAtEnd") )
  {
    do
    {
      v10 = 0LL;
      if ( -[NSScanner scanUpToString:intoString:](v8, "scanUpToString:intoString:", CFSTR("\n"), &v10) )
        -[FirmwareBundle parseSRECLine:intoImage:](self, "parseSRECLine:intoImage:", v10, v7);
    }
    while ( !-[NSScanner isAtEnd](v8, "isAtEnd") );
  }
  return v7;
}