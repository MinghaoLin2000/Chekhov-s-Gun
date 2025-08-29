-[InternationalCloudMediator setInflection:]
void __cdecl -[InternationalCloudMediator setInflection:](InternationalCloudMediator *self, SEL a2, id a3)
{
  void *v3; // x19
  void *v4; // x20
  id v5; // x21
  id v6; // [xsp+8h] [xbp-48h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-40h] BYREF
  void *v8; // [xsp+14h] [xbp-3Ch]

  if ( a3 )
  {
    v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "dataUsingEncoding:", 4LL));
    v6 = 0LL;
    v4 = objc_msgSend(
           objc_alloc((Class)&OBJC_CLASS____NSAttributedStringGrammarInflection),
           "initWithExternalRepresentation:error:",
           v3,
           &v6);
    v5 = objc_retain(v6);
    if ( v5 )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        sub_100002604(v5);
    }
    else
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
      {
        *(_DWORD *)buf = 138412290;
        v8 = v4;
        _os_log_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_DEFAULT,
          "IN XPCSERVICE - Update inflection: %@",
          buf,
          0xCu);
      }
      objc_msgSend(v4, "_setAsGlobalUserInflection");
    }
    objc_release(v4);
    objc_release(v5);
    objc_release(v3);
  }
}