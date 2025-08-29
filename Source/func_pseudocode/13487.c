-[NSString tsu_stringByReplacingInstancesOfCharactersInSet:withString:]
id __cdecl -[NSString tsu_stringByReplacingInstancesOfCharactersInSet:withString:](
        NSString *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  NSString *v8; // x23
  NSMutableString *v9; // x21
  NSScanner *v10; // x22
  id v11; // x23
  unsigned int v12; // w25
  id v13; // x24
  char *i; // x24
  id v16; // [xsp+0h] [xbp-50h] BYREF
  id v17; // [xsp+8h] [xbp-48h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  if ( -[NSString rangeOfCharacterFromSet:options:](self, "rangeOfCharacterFromSet:options:", v6, 2LL) == (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    v8 = objc_retain(self);
  }
  else
  {
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSMutableString stringWithCapacity:](
             &OBJC_CLASS___NSMutableString,
             "stringWithCapacity:",
             -[NSString length](self, "length")));
    v10 = objc_retainAutoreleasedReturnValue(+[NSScanner scannerWithString:](&OBJC_CLASS___NSScanner, "scannerWithString:", self));
    -[NSScanner setCharactersToBeSkipped:](v10, "setCharactersToBeSkipped:", 0LL);
    if ( !-[NSScanner isAtEnd](v10, "isAtEnd") )
    {
      v11 = 0LL;
      while ( 1 )
      {
        v17 = v11;
        v12 = -[NSScanner scanUpToCharactersFromSet:intoString:](v10, "scanUpToCharactersFromSet:intoString:", v6, &v17);
        v13 = objc_retain(v17);
        objc_release(v11);
        if ( v12 )
          -[NSMutableString appendString:](v9, "appendString:", v13);
        if ( -[NSScanner isAtEnd](v10, "isAtEnd") )
          break;
        v16 = v13;
        -[NSScanner scanCharactersFromSet:intoString:](v10, "scanCharactersFromSet:intoString:", v6, &v16);
        v11 = objc_retain(v16);
        objc_release(v13);
        for ( i = (char *)objc_msgSend(v11, "length"); i; --i )
          -[NSMutableString appendString:](v9, "appendString:", v7);
        if ( -[NSScanner isAtEnd](v10, "isAtEnd") )
          goto LABEL_13;
      }
      v11 = v13;
LABEL_13:
      objc_release(v11);
    }
    v8 = objc_retainAutoreleasedReturnValue(+[NSString stringWithString:](&OBJC_CLASS___NSString, "stringWithString:", v9));
    objc_release(v10);
    objc_release(v9);
  }
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}