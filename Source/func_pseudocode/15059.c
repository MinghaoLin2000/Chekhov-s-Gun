-[NSString atx_isSSN]
bool __cdecl -[NSString atx_isSSN](NSString *self, SEL a2)
{
  NSString *v3; // x0
  NSString *v4; // x19
  bool v5; // w20
  NSCharacterSet *v6; // x21
  NSCharacterSet *v7; // x22

  if ( (void *)-[NSString length](self, "length") == (void *)9
    || (void *)-[NSString length](self, "length") == (void *)11 )
  {
    if ( (void *)-[NSString length](self, "length") == (void *)9 )
    {
      v3 = objc_retain(self);
LABEL_5:
      v4 = v3;
LABEL_12:
      v6 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet decimalDigitCharacterSet](&OBJC_CLASS___NSCharacterSet, "decimalDigitCharacterSet"));
      v7 = objc_retainAutoreleasedReturnValue(-[NSCharacterSet invertedSet](v6, "invertedSet"));
      v5 = -[NSString rangeOfCharacterFromSet:](v4, "rangeOfCharacterFromSet:", v7) == (void *)0x7FFFFFFFFFFFFFFFLL;
      objc_release(v7);
      objc_release(v6);
      objc_release(v4);
      return v5;
    }
    if ( (void *)-[NSString length](self, "length") != (void *)11 )
    {
      v4 = 0LL;
      goto LABEL_12;
    }
    if ( -[NSString characterAtIndex:](self, "characterAtIndex:", 3LL) == 45
      && -[NSString characterAtIndex:](self, "characterAtIndex:", 6LL) == 45 )
    {
      v3 = objc_retainAutoreleasedReturnValue(
             -[NSString stringByReplacingOccurrencesOfString:withString:](
               self,
               "stringByReplacingOccurrencesOfString:withString:",
               CFSTR("-"),
               &stru_100029D80));
      goto LABEL_5;
    }
  }
  return 0;
}