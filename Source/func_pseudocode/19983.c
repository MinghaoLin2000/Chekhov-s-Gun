_PKURLByReplacingScheme
NSURL *__fastcall PKURLByReplacingScheme(void *a1, void *a2)
{
  id v3; // x19
  id v4; // x20
  NSURLComponents *v5; // x21
  void *v6; // x24
  NSNumber *v7; // x22
  NSString *v8; // x24
  _UNKNOWN **v9; // x22
  NSURL *v10; // x22
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retain(a1);
  v4 = objc_retain(a2);
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSURLComponents componentsWithURL:resolvingAgainstBaseURL:](
             &OBJC_CLASS___NSURLComponents,
             "componentsWithURL:resolvingAgainstBaseURL:",
             v4,
             1LL));
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "lowercaseString"));
    -[NSURLComponents setScheme:](v5, "setScheme:", v6);
    objc_release(v6);
    v7 = objc_retainAutoreleasedReturnValue(-[NSURLComponents port](v5, "port"));
    objc_release(v7);
    if ( !v7 )
    {
      v8 = objc_retainAutoreleasedReturnValue(-[NSURLComponents scheme](v5, "scheme"));
      v9 = objc_retainAutoreleasedReturnValue(PKDefaultPortForScheme(v8));
      -[NSURLComponents setPort:](v5, "setPort:", v9);
      objc_release(v9);
      objc_release(v8);
    }
    v10 = objc_retainAutoreleasedReturnValue(-[NSURLComponents URL](v5, "URL"));
    objc_release(v5);
  }
  else
  {
    v10 = 0LL;
  }
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}