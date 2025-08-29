+[NSError lsr_errorWithCode:description:]
id __cdecl +[NSError lsr_errorWithCode:description:](id a1, SEL a2, signed __int64 a3, id a4)
{
  id v5; // x19
  void *v6; // x0
  void *v7; // x21
  void *v8; // x4
  NSError *v9; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a4);
  v6 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary), "initWithCapacity:", 1LL);
  v7 = v6;
  if ( v5 )
    objc_msgSend(v6, "setObject:forKey:", v5, NSLocalizedDescriptionKey);
  if ( objc_msgSend(v7, "count") )
    v8 = v7;
  else
    v8 = 0LL;
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSError errorWithDomain:code:userInfo:](
           &OBJC_CLASS___NSError,
           "errorWithDomain:code:userInfo:",
           CFSTR("kLSRErrorDomain"),
           a3,
           v8));
  objc_release(v7);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}