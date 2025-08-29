-[PAMediaConversionServiceSetCreationDateImageMetadataPolicy metadataNeedsProcessing:]
bool __cdecl -[PAMediaConversionServiceSetCreationDateImageMetadataPolicy metadataNeedsProcessing:](
        PAMediaConversionServiceSetCreationDateImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSDate *v5; // x20
  void *v6; // x20
  void *v7; // x22
  id v8; // x23
  NSDate *v9; // x25
  NSTimeZone *v10; // x24
  void *v11; // x24
  void *v12; // x25
  void *v13; // x26
  NSArray *v14; // x27
  int v15; // w28
  char v16; // w27
  NSArray *v17; // x28
  void *v18; // x20
  int v19; // w22
  void *v20; // x28
  NSArray *v21; // x22
  char v22; // w27
  void *v24; // [xsp+0h] [xbp-C0h]
  id v25; // [xsp+8h] [xbp-B8h]
  _QWORD v26[2]; // [xsp+10h] [xbp-B0h] BYREF
  CFStringRef v27; // [xsp+20h] [xbp-A0h] BYREF
  _QWORD v28[8]; // [xsp+28h] [xbp-98h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetCreationDateImageMetadataPolicy creationDate](self, "creationDate"));
  objc_release(v5);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", kCGImagePropertyExifDictionary));
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", kCGImagePropertyTIFFDictionary));
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", kCGImagePropertyIPTCDictionary));
    v8 = objc_alloc_init((Class)&OBJC_CLASS___PFImageMetadataBuilder);
    v9 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetCreationDateImageMetadataPolicy creationDate](self, "creationDate"));
    v10 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceSetCreationDateImageMetadataPolicy timeZone](self, "timeZone"));
    objc_msgSend(v8, "setCreationDate:timeZone:", v9, v10);
    objc_release(v10);
    objc_release(v9);
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "exifDictionary"));
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "tiffDictionary"));
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "iptcDictionary"));
    v28[0] = kCGImagePropertyExifDateTimeOriginal;
    v28[1] = kCGImagePropertyExifSubsecTimeOriginal;
    v28[2] = kCGImagePropertyExifOffsetTimeOriginal;
    v28[3] = kCGImagePropertyExifDateTimeDigitized;
    v28[4] = kCGImagePropertyExifSubsecTimeDigitized;
    v28[5] = kCGImagePropertyExifOffsetTimeDigitized;
    v28[6] = kCGImagePropertyExifSubsecTime;
    v28[7] = kCGImagePropertyExifOffsetTime;
    v14 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v28, 8LL));
    v25 = v6;
    v15 = sub_100003794(v6, v11, v14);
    objc_release(v14);
    if ( v15 )
    {
      v27 = kCGImagePropertyTIFFDateTime;
      v16 = 1;
      v17 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v27, 1LL));
      v18 = v7;
      v19 = sub_100003794(v7, v12, v17);
      objc_release(v17);
      v20 = v24;
      if ( v19 )
      {
        v26[0] = kCGImagePropertyIPTCDateCreated;
        v26[1] = kCGImagePropertyIPTCTimeCreated;
        v21 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v26, 2LL));
        v22 = sub_100003794(v24, v13, v21);
        objc_release(v21);
        v16 = v22 ^ 1;
      }
    }
    else
    {
      v18 = v7;
      v16 = 1;
      v20 = v24;
    }
    objc_release(v13);
    objc_release(v12);
    objc_release(v11);
    objc_release(v8);
    objc_release(v20);
    objc_release(v18);
    objc_release(v25);
  }
  else
  {
    v16 = 0;
  }
  objc_release(v4);
  return v16;
}