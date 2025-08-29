-[PAMediaConversionServiceSetCaptionImageMetadataPolicy metadataNeedsProcessing:]
bool __cdecl -[PAMediaConversionServiceSetCaptionImageMetadataPolicy metadataNeedsProcessing:](
        PAMediaConversionServiceSetCaptionImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  void *v4; // x19
  void *v5; // x20
  NSString *v6; // x22
  NSNull *v7; // x21
  unsigned __int8 v8; // w0
  char v9; // w22

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "objectForKeyedSubscript:", kCGImagePropertyIPTCDictionary));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", kCGImagePropertyIPTCCaptionAbstract));
  v6 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetCaptionImageMetadataPolicy caption](self, "caption"));
  objc_release(v6);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetCaptionImageMetadataPolicy caption](self, "caption"));
    v8 = (unsigned __int8)-[NSNull isEqualToString:](v7, "isEqualToString:", v5);
  }
  else
  {
    if ( !v5 )
    {
      v9 = 0;
      goto LABEL_6;
    }
    v7 = objc_retainAutoreleasedReturnValue(+[NSNull null](&OBJC_CLASS___NSNull, "null"));
    v8 = (unsigned __int8)objc_msgSend(v5, "isEqual:", v7);
  }
  v9 = v8 ^ 1;
  objc_release(v7);
LABEL_6:
  objc_release(v5);
  objc_release(v4);
  return v9;
}