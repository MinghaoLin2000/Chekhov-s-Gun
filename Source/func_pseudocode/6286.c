-[PAMediaConversionServiceImageConversionJob sourceImageProperties]
NSDictionary *__cdecl -[PAMediaConversionServiceImageConversionJob sourceImageProperties](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  NSDictionary *sourceImageProperties; // x0
  NSDictionary *v4; // x0
  PAMediaConversionServiceResourceURLCollection *v6; // x20
  unsigned int v7; // w21
  PAMediaConversionServiceResourceURLCollection *v8; // x20
  NSDictionary *v9; // x0
  NSDictionary *v10; // x8
  NSDictionary *v11; // x0
  NSURL *v12; // x19
  NSURL *v13; // x20
  int v14; // [xsp+0h] [xbp-40h] BYREF
  NSURL *v15; // [xsp+4h] [xbp-3Ch]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  sourceImageProperties = self->_sourceImageProperties;
  if ( sourceImageProperties )
  {
LABEL_2:
    v4 = objc_retain(sourceImageProperties);
    goto LABEL_3;
  }
  if ( -[PAMediaConversionServiceImageConversionJob canAccessSourceImageProperties](
         self,
         "canAccessSourceImageProperties") )
  {
    v6 = objc_retainAutoreleasedReturnValue(
           -[PAMediaConversionServiceImageConversionJob sourceResourceURLCollection](
             self,
             "sourceResourceURLCollection"));
    v7 = -[PAMediaConversionServiceResourceURLCollection isBlastDoorAccessRequired](v6, "isBlastDoorAccessRequired");
    objc_release(v6);
    if ( v7 )
    {
      v8 = objc_retainAutoreleasedReturnValue(
             -[PAMediaConversionServiceImageConversionJob sourceResourceURLCollection](
               self,
               "sourceResourceURLCollection"));
      v9 = objc_retainAutoreleasedReturnValue(
             -[PAMediaConversionServiceResourceURLCollection blastDoorMainSourceProperties](
               v8,
               "blastDoorMainSourceProperties"));
      v10 = self->_sourceImageProperties;
      self->_sourceImageProperties = v9;
      objc_release(v10);
    }
    else
    {
      v11 = objc_retainAutoreleasedReturnValue(
              +[PFMediaUtilities imagePropertiesFromImageSource:](
                &OBJC_CLASS___PFMediaUtilities,
                "imagePropertiesFromImageSource:",
                self->_imageSource));
      v8 = (PAMediaConversionServiceResourceURLCollection *)self->_sourceImageProperties;
      self->_sourceImageProperties = v11;
    }
    objc_release(v8);
    sourceImageProperties = self->_sourceImageProperties;
    if ( !sourceImageProperties )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      {
        v13 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob mainSourceResourceURL](self, "mainSourceResourceURL"));
        v14 = 138412290;
        v15 = v13;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_ERROR,
          "Unable to get source image properties for %@",
          (uint8_t *)&v14,
          0xCu);
        objc_release(v13);
        sourceImageProperties = self->_sourceImageProperties;
      }
      else
      {
        sourceImageProperties = 0LL;
      }
    }
    goto LABEL_2;
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob mainSourceResourceURL](self, "mainSourceResourceURL"));
    v14 = 138412290;
    v15 = v12;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "Unable to get source image properties for input image: %@",
      (uint8_t *)&v14,
      0xCu);
    objc_release(v12);
  }
  v4 = 0LL;
LABEL_3:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}