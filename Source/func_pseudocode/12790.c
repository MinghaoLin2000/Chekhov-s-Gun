+[NSError tsu_errorWithDomain:code:description:underlyingError:]
id __cdecl +[NSError tsu_errorWithDomain:code:description:underlyingError:](
        id a1,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5,
        id a6)
{
  id v10; // x19
  id v11; // x21
  id v12; // x25
  void *v13; // x23
  void *v14; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a6);
  v12 = objc_retain(a5);
  v13 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary), "initWithCapacity:", 2LL);
  objc_msgSend(v13, "setObject:forKeyedSubscript:", v12, NSLocalizedDescriptionKey);
  objc_release(v12);
  if ( v11 )
    objc_msgSend(v13, "setObject:forKeyedSubscript:", v11, NSUnderlyingErrorKey);
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "errorWithDomain:code:userInfo:", v10, a4, v13));
  objc_release(v13);
  objc_release(v11);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}