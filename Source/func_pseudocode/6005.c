-[PAMediaConversionServiceSetLocationImageMetadataPolicy metadataNeedsProcessing:]
bool __cdecl -[PAMediaConversionServiceSetLocationImageMetadataPolicy metadataNeedsProcessing:](
        PAMediaConversionServiceSetLocationImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  void *v4; // x19
  CLLocation *v5; // x21
  CLLocation *v6; // x22
  NSNull *v7; // x20
  unsigned __int8 v8; // w0
  char v9; // w21

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "objectForKeyedSubscript:", kCGImagePropertyGPSDictionary));
  v5 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetLocationImageMetadataPolicy location](self, "location"));
  objc_release(v5);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetLocationImageMetadataPolicy location](self, "location"));
    v7 = objc_retainAutoreleasedReturnValue(
           +[PFSharingUtilities gpsDictionaryForLocation:](
             &OBJC_CLASS___PFSharingUtilities,
             "gpsDictionaryForLocation:",
             v6));
    objc_release(v6);
    v8 = (unsigned __int8)-[NSNull isEqualToDictionary:](v7, "isEqualToDictionary:", v4);
  }
  else
  {
    if ( !v4 )
    {
      v9 = 0;
      goto LABEL_6;
    }
    v7 = objc_retainAutoreleasedReturnValue(+[NSNull null](&OBJC_CLASS___NSNull, "null"));
    v8 = (unsigned __int8)objc_msgSend(v4, "isEqual:", v7);
  }
  v9 = v8 ^ 1;
  objc_release(v7);
LABEL_6:
  objc_release(v4);
  return v9;
}