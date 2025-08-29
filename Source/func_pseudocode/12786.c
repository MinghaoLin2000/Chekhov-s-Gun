+[NSError tsu_errorWithDomain:code:description:recoverySuggestion:]
id __cdecl +[NSError tsu_errorWithDomain:code:description:recoverySuggestion:](
        id a1,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5,
        id a6)
{
  id v10; // x19
  id v11; // x20
  id v12; // x23
  void *v13; // x0
  void *v14; // x24
  void *v15; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a5);
  v12 = objc_retain(a6);
  v13 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary), "initWithCapacity:", 2LL);
  v14 = v13;
  if ( v11 )
    objc_msgSend(v13, "setObject:forKeyedSubscript:", v11, NSLocalizedDescriptionKey);
  if ( v12 )
    objc_msgSend(v14, "setObject:forKeyedSubscript:", v12, NSLocalizedRecoverySuggestionErrorKey);
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "errorWithDomain:code:userInfo:", v10, a4, v14));
  objc_release(v14);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}