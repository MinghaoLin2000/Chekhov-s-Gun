+[NSString tsu_fogFilenameFromShareToken:]
id __cdecl +[NSString tsu_fogFilenameFromShareToken:](id a1, SEL a2, id a3)
{
  void *v3; // x19
  void *v4; // x20
  void *v5; // x22
  id v6; // x23
  void *v7; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( a3 )
  {
    v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "componentsSeparatedByString:", CFSTR(":")));
    v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "firstObject"));
    if ( (unsigned int)objc_msgSend(v4, "isEqualToString:", CFSTR("fog")) && objc_msgSend(v3, "count") == (void *)2 )
    {
      v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectAtIndexedSubscript:", 1LL));
      v6 = objc_retainAutoreleasedReturnValue(+[NSData tsu_decodeFromHexidecimalString:](&OBJC_CLASS___NSData, "tsu_decodeFromHexidecimalString:", v5));
      v7 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithData:encoding:", v6, 4LL);
      objc_release(v6);
      objc_release(v5);
    }
    else
    {
      v7 = 0LL;
    }
    objc_release(v4);
    objc_release(v3);
  }
  else
  {
    v7 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}