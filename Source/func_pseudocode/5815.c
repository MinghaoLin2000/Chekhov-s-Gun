-[InternationalCloudMediator inflection]
id __cdecl -[InternationalCloudMediator inflection](InternationalCloudMediator *self, SEL a2)
{
  void *v2; // x19
  id v3; // x20
  void *v4; // x21
  void *v5; // x20
  uint8_t v7[16]; // [xsp+0h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v7 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "IN SERVICE Inflection",
      v7,
      2u);
  }
  v2 = objc_retainAutoreleasedReturnValue(
         +[_NSAttributedStringGrammarInflection _currentGlobalUserInflection](
           &OBJC_CLASS____NSAttributedStringGrammarInflection,
           "_currentGlobalUserInflection"));
  v3 = objc_alloc((Class)&OBJC_CLASS___NSString);
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "externalRepresentation"));
  v5 = objc_msgSend(v3, "initWithData:encoding:", v4, 4LL);
  objc_release(v4);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}