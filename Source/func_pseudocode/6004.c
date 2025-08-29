-[PAMediaConversionServiceSetLocationImageMetadataPolicy processMetadata:]
id __cdecl -[PAMediaConversionServiceSetLocationImageMetadataPolicy processMetadata:](
        PAMediaConversionServiceSetLocationImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x0
  void *v6; // x20
  CLLocation *v7; // x22
  CLLocation *v8; // x23
  NSNull *v9; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v6 = v5;
  if ( v4 )
    objc_msgSend(v5, "addEntriesFromDictionary:", v4);
  v7 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetLocationImageMetadataPolicy location](self, "location"));
  objc_release(v7);
  if ( v7 )
  {
    v8 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetLocationImageMetadataPolicy location](self, "location"));
    v9 = objc_retainAutoreleasedReturnValue(
           +[PFSharingUtilities gpsDictionaryForLocation:](
             &OBJC_CLASS___PFSharingUtilities,
             "gpsDictionaryForLocation:",
             v8));
    objc_release(v8);
  }
  else
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSNull null](&OBJC_CLASS___NSNull, "null"));
  }
  objc_msgSend(v6, "setObject:forKeyedSubscript:", v9, kCGImagePropertyGPSDictionary);
  objc_release(v9);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}