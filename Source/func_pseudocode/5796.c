+[IPLocaleCoder localePreferenceKeysAndClasses]
id __cdecl +[IPLocaleCoder localePreferenceKeysAndClasses](id a1, SEL a2)
{
  void *v2; // x0
  NSDictionary *v3; // x0
  void *v4; // x8
  const __CFString *v6; // [xsp+8h] [xbp-28h] BYREF
  __int64 v7; // [xsp+10h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v2 = (void *)qword_100008AB0;
  if ( !qword_100008AB0 )
  {
    v6 = CFSTR("AppleLocale");
    v7 = objc_opt_class(&OBJC_CLASS___NSString, a2);
    v3 = objc_retainAutoreleasedReturnValue(
           +[NSDictionary dictionaryWithObjects:forKeys:count:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithObjects:forKeys:count:",
             &v7,
             &v6,
             1LL));
    v4 = (void *)qword_100008AB0;
    qword_100008AB0 = (__int64)v3;
    objc_release(v4);
    v2 = (void *)qword_100008AB0;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v2);
}