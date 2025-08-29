-[NSString atx_isCreditCardNumber]
bool __cdecl -[NSString atx_isCreditCardNumber](NSString *self, SEL a2)
{
  NSString *v2; // x19
  NSCharacterSet *v3; // x20
  NSCharacterSet *v4; // x21
  void *v5; // x22
  char *v6; // x0
  _BOOL4 v7; // w8
  bool v9; // w20
  int v10; // w20
  const char *v11; // x0
  int v12; // w8
  unsigned __int64 v13; // x9
  signed int v14; // w12
  unsigned __int64 v15; // t2

  v2 = objc_retainAutoreleasedReturnValue(
         -[NSString stringByReplacingOccurrencesOfString:withString:](
           self,
           "stringByReplacingOccurrencesOfString:withString:",
           CFSTR(" "),
           &stru_100029D80));
  v3 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet decimalDigitCharacterSet](&OBJC_CLASS___NSCharacterSet, "decimalDigitCharacterSet"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSCharacterSet invertedSet](v3, "invertedSet"));
  v5 = -[NSString rangeOfCharacterFromSet:](v2, "rangeOfCharacterFromSet:", v4);
  objc_release(v4);
  objc_release(v3);
  v6 = -[NSString length](v2, "length");
  v7 = (unsigned __int64)(v6 - 15) < 2 || v5 != (void *)0x7FFFFFFFFFFFFFFFLL;
  if ( v5 != (void *)0x7FFFFFFFFFFFFFFFLL || !v7 )
  {
    v9 = 0;
  }
  else
  {
    v10 = (int)v6;
    v11 = -[NSString UTF8String](objc_retainAutorelease(v2), "UTF8String");
    if ( v10 < 1 )
    {
      v9 = 1;
    }
    else
    {
      v12 = 0;
      v13 = (unsigned int)v10 + 1LL;
      do
      {
        LOBYTE(v14) = v11[(unsigned int)(v13 - 2)] - 48;
        if ( ((((_DWORD)v13 - 2) ^ v10) & 1) == 0 )
        {
          v14 = (char)(2 * v14);
          if ( v14 >= 10 )
            v14 = v14 - 10 * ((unsigned __int8)v14 / 0xAu) + (unsigned __int8)v14 / 0xAu;
        }
        v12 += (char)v14;
        --v13;
      }
      while ( v13 > 1 );
      HIDWORD(v15) = -858993459 * v12 + 429496728;
      LODWORD(v15) = HIDWORD(v15);
      v9 = (unsigned int)(v15 >> 1) < 0x19999999;
    }
  }
  objc_release(v2);
  return v9;
}