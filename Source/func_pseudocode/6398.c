-[VideoConversionTask sourceMainResourceURL]
NSURL *__cdecl -[VideoConversionTask sourceMainResourceURL](VideoConversionTask *self, SEL a2)
{
  PAMediaConversionServiceResourceURLCollection *v2; // x19
  id v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask sourceURLCollection](self, "sourceURLCollection"));
  v3 = objc_retainAutoreleasedReturnValue(
         -[PAMediaConversionServiceResourceURLCollection resourceURLForRole:](
           v2,
           "resourceURLForRole:",
           CFSTR("PAMediaConversionResourceRoleMainResource")));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSURL *)objc_autoreleaseReturnValue(v3);
}