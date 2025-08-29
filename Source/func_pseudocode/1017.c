-[DeviceManageBackupsViewController formattedPhoneNumberStringWithString:]
id __cdecl -[DeviceManageBackupsViewController formattedPhoneNumberStringWithString:](
        DeviceManageBackupsViewController *self,
        SEL a2,
        id a3)
{
  NSString *v3; // x0
  NSString *v4; // x19
  void *v5; // x20
  unsigned int v6; // w21
  unsigned int v7; // w0
  NSString *v8; // x20
  NSString *v9; // x20
  NSString *v10; // x21
  NSString *v11; // x22
  NSString *v12; // x23
  NSString *v13; // x24
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = (NSString *)objc_retain(a3);
  v4 = v3;
  if ( v3 )
  {
    v5 = -[NSString length](v3, "length");
    v6 = -[NSString characterAtIndex:](v4, "characterAtIndex:", 0LL);
    v7 = -[NSString characterAtIndex:](v4, "characterAtIndex:", 1LL);
    if ( v5 == (void *)11 && v6 == 49 )
      goto LABEL_8;
    if ( v5 == (void *)12 && v6 == 43 && v7 == 49 )
    {
      v8 = objc_retainAutoreleasedReturnValue(-[NSString substringFromIndex:](v4, "substringFromIndex:", 1LL));
      objc_release(v4);
      v4 = v8;
LABEL_8:
      v9 = objc_retainAutoreleasedReturnValue(-[NSString substringWithRange:](v4, "substringWithRange:", 0LL, 1LL));
      v10 = objc_retainAutoreleasedReturnValue(-[NSString substringWithRange:](v4, "substringWithRange:", 1LL, 3LL));
      v11 = objc_retainAutoreleasedReturnValue(-[NSString substringWithRange:](v4, "substringWithRange:", 4LL, 3LL));
      v12 = objc_retainAutoreleasedReturnValue(-[NSString substringWithRange:](v4, "substringWithRange:", 7LL, 3LL));
      v13 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("%@ (%@) %@-%@"),
                v9,
                v10,
                v11,
                v12));
      objc_release(v12);
      objc_release(v11);
      objc_release(v10);
      objc_release(v9);
      objc_release(v4);
      v4 = v13;
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}