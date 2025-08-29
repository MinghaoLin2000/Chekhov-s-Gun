-[PAMediaConversionServiceImageConversionJob _validateMetadata]
bool __cdecl -[PAMediaConversionServiceImageConversionJob _validateMetadata](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  PAMediaConversionServiceImageMetadataPolicy *v3; // x20
  id v4; // x20
  PAMediaConversionServiceImageMetadataPolicy *v5; // x20
  NSDictionary *v6; // x21
  id v7; // x22
  NSMutableDictionary *v8; // x0
  NSMutableDictionary *destinationImageProperties; // x8
  void *v10; // x0
  NSMutableDictionary *v11; // x0
  NSMutableDictionary *v12; // x8
  uint8_t v14[16]; // [xsp+0h] [xbp-30h] BYREF

  if ( -[PAMediaConversionServiceImageConversionJob canAccessSourceImageProperties](
         self,
         "canAccessSourceImageProperties") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob metadataPolicy](self, "metadataPolicy"));
    objc_release(v3);
    if ( !v3 )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
      {
        *(_WORD *)v14 = 0;
        _os_log_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_DEFAULT,
          "No metadata policy provided, defaulting to standard policy",
          v14,
          2u);
      }
      v4 = objc_retainAutoreleasedReturnValue(
             +[PAMediaConversionServiceImageMetadataPolicy standardPolicy](
               &OBJC_CLASS___PAMediaConversionServiceImageMetadataPolicy,
               "standardPolicy"));
      -[PAMediaConversionServiceImageConversionJob setMetadataPolicy:](self, "setMetadataPolicy:", v4);
      objc_release(v4);
    }
    v5 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob metadataPolicy](self, "metadataPolicy"));
    v6 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob sourceImageProperties](self, "sourceImageProperties"));
    v7 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageMetadataPolicy processMetadata:](v5, "processMetadata:", v6));
    v8 = (NSMutableDictionary *)objc_msgSend(v7, "mutableCopy");
    destinationImageProperties = self->_destinationImageProperties;
    self->_destinationImageProperties = v8;
    objc_release(destinationImageProperties);
    objc_release(v7);
    objc_release(v6);
    v10 = v5;
  }
  else
  {
    v11 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
    v12 = self->_destinationImageProperties;
    self->_destinationImageProperties = v11;
    v10 = v12;
  }
  objc_release(v10);
  return 1;
}