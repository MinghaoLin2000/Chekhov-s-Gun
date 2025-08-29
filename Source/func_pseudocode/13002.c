_TSUObjectReferenceDescription
__CFString *__fastcall TSUObjectReferenceDescription(void *a1)
{
  id v1; // x19
  __int64 v2; // x0
  char isKindOfClass; // w22
  const char *ClassName; // x0
  NSString *v5; // x0
  __CFString *v6; // x20
  __int64 v8; // [xsp+10h] [xbp-30h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v1 = objc_retain(a1);
  if ( v1 )
  {
    v2 = objc_opt_class(&OBJC_CLASS___NSArray);
    isKindOfClass = objc_opt_isKindOfClass(v1, v2);
    ClassName = object_getClassName(v1);
    if ( (isKindOfClass & 1) != 0 )
      v5 = +[NSString stringWithFormat:](
             &OBJC_CLASS___NSString,
             "stringWithFormat:",
             CFSTR("(%s*)%p; count=%lu"),
             ClassName,
             v1,
             objc_msgSend(v1, "count"));
    else
      v5 = +[NSString stringWithFormat:](
             &OBJC_CLASS___NSString,
             "stringWithFormat:",
             CFSTR("(%s*)%p"),
             ClassName,
             v1,
             v8);
    v6 = objc_retainAutoreleasedReturnValue(v5);
  }
  else
  {
    v6 = CFSTR("<nil>");
  }
  objc_release(v1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}