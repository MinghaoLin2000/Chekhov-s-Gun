_PKURLWithString
NSURL *__fastcall PKURLWithString(void *a1)
{
  id v1; // x19
  NSURLComponents *v2; // x20
  NSNumber *v3; // x21
  NSString *v4; // x23
  _UNKNOWN **v5; // x21
  NSURL *v6; // x21
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v1 = objc_retain(a1);
  if ( v1 )
  {
    v2 = objc_retainAutoreleasedReturnValue(
           +[NSURLComponents componentsWithString:encodingInvalidCharacters:](
             &OBJC_CLASS___NSURLComponents,
             "componentsWithString:encodingInvalidCharacters:",
             v1,
             0LL));
    if ( !v2 )
      v2 = objc_retainAutoreleasedReturnValue(
             +[NSURLComponents componentsWithString:encodingInvalidCharacters:](
               &OBJC_CLASS___NSURLComponents,
               "componentsWithString:encodingInvalidCharacters:",
               v1,
               1LL));
    v3 = objc_retainAutoreleasedReturnValue(-[NSURLComponents port](v2, "port"));
    objc_release(v3);
    if ( !v3 )
    {
      v4 = objc_retainAutoreleasedReturnValue(-[NSURLComponents scheme](v2, "scheme"));
      v5 = objc_retainAutoreleasedReturnValue(PKDefaultPortForScheme(v4));
      -[NSURLComponents setPort:](v2, "setPort:", v5);
      objc_release(v5);
      objc_release(v4);
    }
    v6 = objc_retainAutoreleasedReturnValue(-[NSURLComponents URL](v2, "URL"));
    objc_release(v2);
  }
  else
  {
    v6 = 0LL;
  }
  objc_release(v1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}