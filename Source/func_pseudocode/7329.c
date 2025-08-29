-[ImageConversionService performBeginRequestActionsForUnitTestSupportOptions:]
void __cdecl -[ImageConversionService performBeginRequestActionsForUnitTestSupportOptions:](
        ImageConversionService *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x22
  unsigned int v6; // w23
  int v7; // [xsp+0h] [xbp-50h] BYREF
  const __CFString *v8; // [xsp+4h] [xbp-4Ch]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(
         objc_msgSend(
           v4,
           "objectForKeyedSubscript:",
           CFSTR("PAMediaConversionServiceOptionUnitTestSupportServiceShouldExitDuringRequestKey")));
  v6 = (unsigned int)objc_msgSend(v5, "boolValue");
  objc_release(v5);
  if ( v6 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
    {
      v7 = 138412290;
      v8 = CFSTR("PAMediaConversionServiceOptionUnitTestSupportServiceShouldExitDuringRequestKey");
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "Terminating process because %@ request option is set",
        (uint8_t *)&v7,
        0xCu);
    }
    exit(1);
  }
  -[ImageConversionService enumerateEnvironmentVariablePairsInRequestOptions:block:](
    self,
    "enumerateEnvironmentVariablePairsInRequestOptions:block:",
    v4,
    &stru_100039338);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}