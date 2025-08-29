-[NSString tsu_escapeForIcuRegex]
id __cdecl -[NSString tsu_escapeForIcuRegex](NSString *self, SEL a2)
{
  NSString *v3; // x19
  char *v4; // x20
  NSString *v5; // x21
  id v6; // x21
  NSString *v7; // x22
  __int64 v8; // x23
  __int64 v9; // x1
  NSString *v10; // x23
  __int128 v12; // [xsp+10h] [xbp-70h]
  __int128 v13; // [xsp+20h] [xbp-60h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  if ( qword_1001F8018 != -1 )
    dispatch_once(&qword_1001F8018, &stru_1001DF378);
  v3 = objc_retain(self);
  v4 = -[NSString length](v3, "length");
  *(_QWORD *)&v13 = -[NSString rangeOfCharacterFromSet:](v3, "rangeOfCharacterFromSet:", qword_1001F8010);
  if ( (_QWORD)v13 == 0x7FFFFFFFFFFFFFFFLL )
  {
    v5 = v3;
  }
  else
  {
    v6 = objc_alloc((Class)&OBJC_CLASS___NSMutableString);
    v7 = objc_retainAutoreleasedReturnValue(-[NSString substringToIndex:](v3, "substringToIndex:", (_QWORD)v13));
    v5 = (NSString *)objc_msgSend(v6, "initWithString:", v7);
    objc_release(v7);
    if ( v4 != (char *)v13 )
    {
      do
      {
        -[NSString appendFormat:](
          v5,
          "appendFormat:",
          CFSTR("\\%C"),
          -[NSString characterAtIndex:](v3, "characterAtIndex:", (_QWORD)v13));
        *(_QWORD *)&v13 = v13 + 1;
        *((_QWORD *)&v13 + 1) = &v4[-v13];
        v8 = v13;
        if ( v4 != (char *)v13 )
        {
          *(_QWORD *)&v12 = -[NSString rangeOfCharacterFromSet:options:range:](
                              v3,
                              "rangeOfCharacterFromSet:options:range:",
                              qword_1001F8010,
                              0LL,
                              (_QWORD)v13);
          *((_QWORD *)&v12 + 1) = v9;
          v13 = v12;
          if ( (_QWORD)v12 == 0x7FFFFFFFFFFFFFFFLL )
            v13 = (unsigned __int64)v4;
          if ( (_QWORD)v13 != v8 )
          {
            v10 = objc_retainAutoreleasedReturnValue(-[NSString substringWithRange:](v3, "substringWithRange:", v8, (_QWORD)v13 - v8));
            -[NSString appendString:](v5, "appendString:", v10);
            objc_release(v10);
          }
        }
      }
      while ( *((_QWORD *)&v13 + 1) );
    }
    objc_release(v3);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}