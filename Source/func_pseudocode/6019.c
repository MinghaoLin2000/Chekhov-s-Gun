-[PAMediaConversionServiceAddPFMetadataPolicy processMetadata:]
id __cdecl -[PAMediaConversionServiceAddPFMetadataPolicy processMetadata:](
        PAMediaConversionServiceAddPFMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  void *v5; // x0
  void *v6; // x19
  NSString *v7; // x23
  id v8; // x21
  unsigned __int8 v9; // w22
  int v11; // [xsp+0h] [xbp-50h] BYREF
  __int64 v12; // [xsp+4h] [xbp-4Ch]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v6 = v5;
  if ( v4 )
    objc_msgSend(v5, "addEntriesFromDictionary:", v4);
  v7 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceAddPFMetadataPolicy key](self, "key"));
  v8 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceAddPFMetadataPolicy value](self, "value"));
  v9 = (unsigned __int8)+[PFMetadataUtilities addMakerApplePropertyWithKey:value:toProperties:](
                          &OBJC_CLASS___PFMetadataUtilities,
                          "addMakerApplePropertyWithKey:value:toProperties:",
                          v7,
                          v8,
                          v6);
  objc_release(v8);
  objc_release(v7);
  if ( (v9 & 1) == 0 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    v11 = 138412290;
    v12 = 0LL;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "Unable to add metadata: %@",
      (uint8_t *)&v11,
      0xCu);
  }
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}