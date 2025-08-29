-[SFUFileInputStream initWithPath:offset:]
SFUFileInputStream *__cdecl -[SFUFileInputStream initWithPath:offset:](
        SFUFileInputStream *self,
        SEL a2,
        id a3,
        signed __int64 a4)
{
  SFUFileInputStream *v6; // x19
  NSDictionary *v7; // x0
  id v8; // x0
  char *v9; // x0

  v6 = -[SFUFileInputStream p_init](self, "p_init");
  if ( v6 )
  {
    v7 = -[NSFileManager attributesOfItemAtPath:error:](
           +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"),
           "attributesOfItemAtPath:error:",
           a3,
           0LL);
    if ( !v7
      || (v8 = -[NSDictionary objectForKey:](v7, "objectForKey:", NSFileSize)) == 0LL
      || (v9 = (char *)objc_msgSend(v8, "unsignedLongLongValue"), (__int64)v9 < a4)
      || !-[SFUFileInputStream p_configureWithPath:offset:length:](
            v6,
            "p_configureWithPath:offset:length:",
            a3,
            a4,
            &v9[-a4]) )
    {
      objc_release(v6);
      return 0LL;
    }
  }
  return v6;
}