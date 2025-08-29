-[UINSSystemPreferencesServiceViewController _instructionsForSetting:]
id __cdecl -[UINSSystemPreferencesServiceViewController _instructionsForSetting:](
        UINSSystemPreferencesServiceViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x21
  NSString *v5; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "instructionsFormat"));
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithValidatedFormat:validFormatSpecifiers:error:](
           &OBJC_CLASS___NSString,
           "stringWithValidatedFormat:validFormatSpecifiers:error:",
           v4,
           CFSTR("%@"),
           0LL,
           self->_applicationName));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}