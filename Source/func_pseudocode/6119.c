-[PAMediaConversionServiceResourceURLCollection blastDoorError]
NSError *__cdecl -[PAMediaConversionServiceResourceURLCollection blastDoorError](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2)
{
  PAMediaConversionServiceResourceURLCollectionAccessProvider *v2; // x19
  NSError *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceResourceURLCollection accessProviderDelegate](self, "accessProviderDelegate"));
  v3 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceResourceURLCollectionAccessProvider error](v2, "error"));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}