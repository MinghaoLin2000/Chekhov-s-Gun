-[PAMediaConversionServiceSetCaptionImageMetadataPolicy processMetadata:]
id __cdecl -[PAMediaConversionServiceSetCaptionImageMetadataPolicy processMetadata:](
        PAMediaConversionServiceSetCaptionImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x0
  void *v6; // x20
  void *v7; // x24
  void *v8; // x22
  NSString *v9; // x24
  NSNull *v10; // x0
  NSNull *v11; // x23
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v6 = v5;
  if ( v4 )
    objc_msgSend(v5, "addEntriesFromDictionary:", v4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", kCGImagePropertyIPTCDictionary));
  v8 = objc_msgSend(v7, "mutableCopy");
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetCaptionImageMetadataPolicy caption](self, "caption"));
  objc_release(v9);
  if ( v9 )
  {
    if ( !v8 )
      v8 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
    v10 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetCaptionImageMetadataPolicy caption](self, "caption"));
  }
  else
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSNull null](&OBJC_CLASS___NSNull, "null"));
  }
  v11 = v10;
  objc_msgSend(v8, "setObject:forKeyedSubscript:", v10, kCGImagePropertyIPTCCaptionAbstract);
  objc_release(v11);
  objc_msgSend(v6, "setObject:forKeyedSubscript:", v8, kCGImagePropertyIPTCDictionary);
  objc_release(v8);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}