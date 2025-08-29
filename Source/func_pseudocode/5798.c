-[IPLocaleCoder initWithLocaleIdentifier:]
IPLocaleCoder *__cdecl -[IPLocaleCoder initWithLocaleIdentifier:](IPLocaleCoder *self, SEL a2, id a3)
{
  id v4; // x21
  NSDictionary *v5; // x20
  IPLocaleCoder *v6; // x19
  const __CFString *v8; // [xsp+8h] [xbp-38h] BYREF
  id v9; // [xsp+10h] [xbp-30h] BYREF

  v8 = CFSTR("AppleLocale");
  v9 = a3;
  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           &v9,
           &v8,
           1LL));
  objc_release(v4);
  v6 = -[IPLocaleCoder initWithDictionary:](self, "initWithDictionary:", v5);
  objc_release(v5);
  return v6;
}