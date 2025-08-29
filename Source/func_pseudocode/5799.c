-[IPLocaleCoder initWithDictionary:]
IPLocaleCoder *__cdecl -[IPLocaleCoder initWithDictionary:](IPLocaleCoder *self, SEL a2, id a3)
{
  id v4; // x19
  IPLocaleCoder *v5; // x20
  NSMutableDictionary *v6; // x21
  objc_super v8; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___IPLocaleCoder;
  v5 = -[IPLocaleCoder init](&v8, "init");
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSMutableDictionary dictionaryWithDictionary:](
             &OBJC_CLASS___NSMutableDictionary,
             "dictionaryWithDictionary:",
             v4));
    -[IPLocaleCoder setMutablePreferences:](v5, "setMutablePreferences:", v6);
    objc_release(v6);
  }
  objc_release(v4);
  return v5;
}