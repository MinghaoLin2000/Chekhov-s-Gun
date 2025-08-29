-[PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy metadataNeedsProcessing:]
bool __cdecl -[PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy metadataNeedsProcessing:](
        PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  void *v3; // x19
  NSNull *v4; // x21
  unsigned int v5; // w20

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "objectForKeyedSubscript:", kCGImagePropertyIPTCDictionary));
  if ( v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(+[NSNull null](&OBJC_CLASS___NSNull, "null"));
    v5 = (unsigned int)objc_msgSend(v3, "isEqual:", v4) ^ 1;
    objc_release(v4);
  }
  else
  {
    LOBYTE(v5) = 0;
  }
  objc_release(v3);
  return v5;
}