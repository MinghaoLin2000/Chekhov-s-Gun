-[NSString tsu_stringTrimByLimitingFirstCharacterToSet:]
id __cdecl -[NSString tsu_stringTrimByLimitingFirstCharacterToSet:](NSString *self, SEL a2, id a3)
{
  id v4; // x19
  NSString *v5; // x21
  unsigned __int16 v6; // w20
  NSString *v7; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retain(self);
  if ( -[NSString length](v5, "length") )
  {
    v6 = -[NSString characterAtIndex:](v5, "characterAtIndex:", 0LL);
    if ( -[NSString length](v5, "length") )
    {
      while ( ((unsigned int)objc_msgSend(v4, "characterIsMember:", v6) & 1) == 0 )
      {
        v7 = objc_retainAutoreleasedReturnValue(-[NSString substringFromIndex:](v5, "substringFromIndex:", 1LL));
        objc_release(v5);
        if ( -[NSString length](v7, "length") )
          v6 = -[NSString characterAtIndex:](v7, "characterAtIndex:", 0LL);
        v5 = v7;
        if ( !-[NSString length](v7, "length") )
          goto LABEL_9;
      }
    }
  }
  v7 = v5;
LABEL_9:
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}