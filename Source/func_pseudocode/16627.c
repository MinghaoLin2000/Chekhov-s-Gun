-[FirmwareBundle parseMSP430TXTFile:withDefaultByteValue:]
id __cdecl -[FirmwareBundle parseMSP430TXTFile:withDefaultByteValue:](
        FirmwareBundle *self,
        SEL a2,
        id a3,
        unsigned __int8 a4)
{
  int v4; // w21
  NSMutableData *v7; // x20
  NSScanner *v8; // x21
  unsigned int v9; // w0
  NSScanner *v10; // x23
  int v12; // [xsp+Ch] [xbp-44h] BYREF
  id v13; // [xsp+10h] [xbp-40h] BYREF
  int v14; // [xsp+1Ch] [xbp-34h] BYREF

  v4 = a4;
  v7 = +[NSMutableData dataWithLength:](&OBJC_CLASS___NSMutableData, "dataWithLength:", self->_firmwareImageSize);
  memset(-[NSMutableData mutableBytes](v7, "mutableBytes"), v4, -[NSMutableData length](v7, "length"));
  v14 = 0;
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
      v13 = 0LL;
      if ( -[NSScanner scanUpToString:intoString:](v8, "scanUpToString:intoString:", CFSTR("\n"), &v13) )
      {
        v9 = (unsigned int)objc_msgSend(v13, "characterAtIndex:", 0LL);
        if ( v9 != 113 )
        {
          if ( v9 == 64 )
          {
            -[NSScanner scanHexInt:](
              +[NSScanner scannerWithString:](
                &OBJC_CLASS___NSScanner,
                "scannerWithString:",
                objc_msgSend(v13, "substringFromIndex:", 1LL)),
              "scanHexInt:",
              &v14);
            v14 -= self->_firmwareImageBaseAddress;
          }
          else
          {
            v10 = +[NSScanner scannerWithString:](&OBJC_CLASS___NSScanner, "scannerWithString:", v13);
            if ( !-[NSScanner isAtEnd](v10, "isAtEnd") )
            {
              do
              {
                v12 = 0;
                -[NSScanner scanHexInt:](v10, "scanHexInt:", &v12);
                ++v14;
                -[NSMutableData replaceBytesInRange:withBytes:](v7, "replaceBytesInRange:withBytes:");
              }
              while ( !-[NSScanner isAtEnd](v10, "isAtEnd") );
            }
          }
        }
      }
    }
    while ( !-[NSScanner isAtEnd](v8, "isAtEnd") );
  }
  return v7;
}