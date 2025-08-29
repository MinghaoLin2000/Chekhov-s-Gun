+[PAMediaConversionServiceResourceURLReference referenceWithURL:]
id __cdecl +[PAMediaConversionServiceResourceURLReference referenceWithURL:](id a1, SEL a2, id a3)
{
  __int64 v5; // x1
  id v6; // x19
  void *v7; // x20
  NSAssertionHandler *v9; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a3);
  if ( !v6 )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v9,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
      29LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("url"));
    objc_release(v9);
  }
  v7 = (void *)objc_opt_new(&OBJC_CLASS___PAMediaConversionServiceResourceURLReference, v5);
  objc_msgSend(v7, "setUrl:", v6);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}