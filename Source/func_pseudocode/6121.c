-[PAMediaConversionServiceResourceURLCollection blastDoorVideoComplementProperties]
NSDictionary *__cdecl -[PAMediaConversionServiceResourceURLCollection blastDoorVideoComplementProperties](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2)
{
  void *v3; // x20
  void *v4; // x21
  PAMediaConversionServiceResourceURLCollectionAccessProvider *v5; // x19
  id v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         -[NSMutableDictionary objectForKeyedSubscript:](
           self->_urlReferencesByRole,
           "objectForKeyedSubscript:",
           CFSTR("PAMediaConversionResourceRoleVideoComplement")));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "url"));
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceResourceURLCollection accessProviderDelegate](self, "accessProviderDelegate"));
  v6 = objc_retainAutoreleasedReturnValue(
         -[PAMediaConversionServiceResourceURLCollectionAccessProvider propertiesForVideoComplementURL:](
           v5,
           "propertiesForVideoComplementURL:",
           v4));
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSDictionary *)objc_autoreleaseReturnValue(v6);
}