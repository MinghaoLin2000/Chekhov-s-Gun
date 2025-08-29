+[TSUDescription popDescriptionDepth]
unsigned __int64 __cdecl +[TSUDescription popDescriptionDepth](id a1, SEL a2)
{
  NSThread *v2; // x19
  NSMutableDictionary *v3; // x20
  void *v4; // x21
  void *v5; // x22
  unsigned __int64 v6; // x21
  NSNumber *v7; // x22

  v2 = objc_retainAutoreleasedReturnValue(+[NSThread currentThread](&OBJC_CLASS___NSThread, "currentThread"));
  v3 = objc_retainAutoreleasedReturnValue(-[NSThread threadDictionary](v2, "threadDictionary"));
  objc_release(v2);
  v4 = objc_retainAutoreleasedReturnValue(
         -[NSMutableDictionary objectForKeyedSubscript:](
           v3,
           "objectForKeyedSubscript:",
           CFSTR("TSUDescriptionDepthThreadLocalKey")));
  v5 = objc_msgSend(v4, "unsignedIntegerValue");
  objc_release(v4);
  if ( v5 )
    v6 = (unsigned __int64)v5 - 1;
  else
    v6 = 0LL;
  v7 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInteger:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInteger:", v6));
  -[NSMutableDictionary setObject:forKeyedSubscript:](
    v3,
    "setObject:forKeyedSubscript:",
    v7,
    CFSTR("TSUDescriptionDepthThreadLocalKey"));
  objc_release(v7);
  objc_release(v3);
  return v6;
}