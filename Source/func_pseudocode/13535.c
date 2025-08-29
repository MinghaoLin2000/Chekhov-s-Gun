+[NSString tsu_JSONStringFromString:]
id __cdecl +[NSString tsu_JSONStringFromString:](id a1, SEL a2, id a3)
{
  id v3; // x20
  __CFString *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( a3 )
  {
    v3 = objc_retain(a3);
    v4 = objc_retainAutoreleasedReturnValue(+[NSMutableString string](&OBJC_CLASS___NSMutableString, "string"));
    objc_msgSend(v3, "tsu_appendJSONStringToString:", v4);
    objc_release(v3);
  }
  else
  {
    v4 = CFSTR("null");
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}