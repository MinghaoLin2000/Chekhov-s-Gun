_NetFSCopyNormalizedURLString
void *__fastcall NetFSCopyNormalizedURLString(__int64 a1)
{
  void *v2; // x19
  NSURLComponents *v3; // x20
  id v4; // x0
  void *v5; // x21
  bool v6; // zf
  NSString *v7; // x22
  NSString *v8; // x22
  NSNumber *v9; // x22
  NSString *v10; // x22
  void *v11; // x23
  void *v12; // x22

  v2 = objc_autoreleasePoolPush();
  v3 = objc_retainAutoreleasedReturnValue(
         +[NSURLComponents componentsWithURL:resolvingAgainstBaseURL:](
           &OBJC_CLASS___NSURLComponents,
           "componentsWithURL:resolvingAgainstBaseURL:",
           a1,
           1LL));
  v4 = objc_alloc_init((Class)&OBJC_CLASS___NSURLComponents);
  v5 = v4;
  if ( v3 )
    v6 = v4 == 0LL;
  else
    v6 = 1;
  if ( v6 )
  {
    v12 = 0LL;
  }
  else
  {
    v7 = objc_retainAutoreleasedReturnValue(-[NSURLComponents scheme](v3, "scheme"));
    objc_msgSend(v5, "setScheme:", v7);
    objc_release(v7);
    v8 = objc_retainAutoreleasedReturnValue(-[NSURLComponents host](v3, "host"));
    objc_msgSend(v5, "setHost:", v8);
    objc_release(v8);
    v9 = objc_retainAutoreleasedReturnValue(-[NSURLComponents port](v3, "port"));
    objc_msgSend(v5, "setPort:", v9);
    objc_release(v9);
    v10 = objc_retainAutoreleasedReturnValue(-[NSURLComponents path](v3, "path"));
    objc_msgSend(v5, "setPath:", v10);
    objc_release(v10);
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "URL"));
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "absoluteString"));
    objc_release(v11);
  }
  objc_release(v5);
  objc_release(v3);
  objc_autoreleasePoolPop(v2);
  return v12;
}