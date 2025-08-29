+[TSUDescription peekDescriptionDepth]
unsigned __int64 __cdecl +[TSUDescription peekDescriptionDepth](id a1, SEL a2)
{
  NSThread *v2; // x19
  NSMutableDictionary *v3; // x20
  void *v4; // x19
  void *v5; // x21

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
  objc_release(v3);
  return (unsigned __int64)v5;
}