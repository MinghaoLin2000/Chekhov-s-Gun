+[PAMediaConversionServiceiCloudPhotoLibraryImageMetadataPolicy standardPolicy]
id __cdecl +[PAMediaConversionServiceiCloudPhotoLibraryImageMetadataPolicy standardPolicy](id a1, SEL a2)
{
  void *v4; // x21
  void *v5; // x0
  NSAssertionHandler *v7; // x21
  NSString *v8; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = (void *)objc_opt_class(a1);
  if ( ((unsigned int)objc_msgSend(
                        v4,
                        "isEqual:",
                        objc_opt_class(&OBJC_CLASS___PAMediaConversionServiceiCloudPhotoLibraryImageMetadataPolicy)) & 1) == 0 )
  {
    v7 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    v8 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v7,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceImageMetadataPolicy.m"),
      297LL,
      CFSTR("Subclasses must override %@"),
      v8);
    objc_release(v8);
    objc_release(v7);
  }
  if ( qword_10004A030 != -1 )
    dispatch_once(&qword_10004A030, &stru_100040CC0);
  v5 = (void *)qword_10004A028;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v5);
}