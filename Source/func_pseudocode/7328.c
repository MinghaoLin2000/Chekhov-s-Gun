-[ImageConversionService performEndRequestActionsForUnitTestSupportOptions:]
void __cdecl -[ImageConversionService performEndRequestActionsForUnitTestSupportOptions:](
        ImageConversionService *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  void *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  -[ImageConversionService enumerateEnvironmentVariablePairsInRequestOptions:block:](
    self,
    "enumerateEnvironmentVariablePairsInRequestOptions:block:",
    v4,
    &stru_100039358);
  v5 = objc_retainAutoreleasedReturnValue(
         objc_msgSend(
           v4,
           "objectForKeyedSubscript:",
           CFSTR("PAMediaConversionServiceOptionUnitTestSupportServiceShouldExitAfterRequestKey")));
  objc_release(v4);
  LODWORD(v4) = (unsigned int)objc_msgSend(v5, "boolValue");
  objc_release(v5);
  if ( (_DWORD)v4 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    _xpc_transaction_exit_clean();
  }
}