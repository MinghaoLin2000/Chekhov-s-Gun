-[IPLocaleCoder locale]
id __cdecl -[IPLocaleCoder locale](IPLocaleCoder *self, SEL a2)
{
  void *v3; // x20
  id v4; // x19
  void *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = (void *)objc_opt_class(self, a2);
  v4 = objc_retainAutoreleasedReturnValue(-[IPLocaleCoder preferences](self, "preferences"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "localeWithPreferences:", v4));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}