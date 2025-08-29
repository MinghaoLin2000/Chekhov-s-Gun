-[IPLocaleCoder preferences]
id __cdecl -[IPLocaleCoder preferences](IPLocaleCoder *self, SEL a2)
{
  NSMutableDictionary *v2; // x19
  void *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[IPLocaleCoder mutablePreferences](self, "mutablePreferences"));
  v3 = -[NSMutableDictionary mutableCopy](v2, "mutableCopy");
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}