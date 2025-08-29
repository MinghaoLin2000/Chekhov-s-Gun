-[PAMediaConversionServiceSetCreationDateImageMetadataPolicy processMetadata:]
id __cdecl -[PAMediaConversionServiceSetCreationDateImageMetadataPolicy processMetadata:](
        PAMediaConversionServiceSetCreationDateImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSDate *v5; // x20
  void *v6; // x0
  void *v7; // x21
  id v8; // x20
  NSDate *v9; // x23
  NSTimeZone *v10; // x22
  void *v11; // x22
  void *v12; // x23
  void *v13; // x24
  NSDictionary *v14; // x25
  id v15; // x21
  _QWORD v17[4]; // [xsp+0h] [xbp-A0h] BYREF
  id v18; // [xsp+20h] [xbp-80h]
  _QWORD v19[3]; // [xsp+28h] [xbp-78h] BYREF
  _QWORD v20[3]; // [xsp+40h] [xbp-60h] BYREF
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetCreationDateImageMetadataPolicy creationDate](self, "creationDate"));
  objc_release(v5);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
    v7 = v6;
    if ( v4 )
      objc_msgSend(v6, "addEntriesFromDictionary:", v4);
    v8 = objc_alloc_init((Class)&OBJC_CLASS___PFImageMetadataBuilder);
    v9 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetCreationDateImageMetadataPolicy creationDate](self, "creationDate"));
    v10 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetCreationDateImageMetadataPolicy timeZone](self, "timeZone"));
    objc_msgSend(v8, "setCreationDate:timeZone:", v9, v10);
    objc_release(v10);
    objc_release(v9);
    v19[0] = kCGImagePropertyExifDictionary;
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "exifDictionary"));
    v20[0] = v11;
    v19[1] = kCGImagePropertyTIFFDictionary;
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "tiffDictionary"));
    v20[1] = v12;
    v19[2] = kCGImagePropertyIPTCDictionary;
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "iptcDictionary"));
    v20[2] = v13;
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              v20,
              v19,
              3LL));
    objc_release(v13);
    objc_release(v12);
    objc_release(v11);
    v17[0] = _NSConcreteStackBlock;
    v17[1] = 3254779904LL;
    v17[2] = sub_100003348;
    v17[3] = &unk_100040CE0;
    v15 = objc_retain(v7);
    v18 = v15;
    -[NSDictionary enumerateKeysAndObjectsUsingBlock:](v14, "enumerateKeysAndObjectsUsingBlock:", v17);
    objc_release(v18);
    objc_release(v14);
    objc_release(v8);
  }
  else
  {
    v15 = objc_retain(v4);
  }
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}