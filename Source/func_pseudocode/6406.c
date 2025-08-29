-[VideoTranscodingTask outputAssetInformationWithError:]
id __cdecl -[VideoTranscodingTask outputAssetInformationWithError:](VideoTranscodingTask *self, SEL a2, id *a3)
{
  NSURL *v5; // x28
  void *v6; // x24
  AVURLAsset *v7; // x20
  double height; // d10
  double width; // d11
  double v10; // d8
  double v11; // d9
  void *v12; // x23
  double v13; // d0
  double v14; // d1
  const char *v15; // x1
  NSFileManager *v16; // x25
  NSString *v17; // x26
  NSDictionary *v18; // x23
  id v19; // x19
  id v20; // x25
  NSNumber *v21; // x22
  NSNumber *v22; // x26
  AVURLAsset *v23; // x21
  NSURL *v24; // x20
  NSNumber *v25; // x28
  NSNumber *v26; // x19
  NSDictionary *v27; // x27
  NSNumber *v28; // x0
  NSNumber *v29; // x0
  NSDictionary *v30; // x26
  NSError *v31; // x0
  NSString *v32; // x23
  NSString *v34; // x23
  NSAssertionHandler *v36; // x21
  id v37; // [xsp+10h] [xbp-180h]
  id v38; // [xsp+18h] [xbp-178h] BYREF
  double v39[6]; // [xsp+20h] [xbp-170h] BYREF
  _QWORD v40[5]; // [xsp+50h] [xbp-140h] BYREF
  _QWORD v41[5]; // [xsp+78h] [xbp-118h] BYREF
  NSErrorUserInfoKey v42; // [xsp+A0h] [xbp-F0h] BYREF
  const __CFString *v43; // [xsp+A8h] [xbp-E8h] BYREF
  _QWORD v44[2]; // [xsp+B0h] [xbp-E0h] BYREF
  _QWORD v45[2]; // [xsp+C0h] [xbp-D0h] BYREF
  NSErrorUserInfoKey v46; // [xsp+D0h] [xbp-C0h] BYREF
  NSString *v47; // [xsp+D8h] [xbp-B8h] BYREF
  uint8_t buf[4]; // [xsp+E0h] [xbp-B0h] BYREF
  NSString *v49; // [xsp+E4h] [xbp-ACh]
  __int16 v50; // [xsp+ECh] [xbp-A4h]
  AVURLAsset *v51; // [xsp+EEh] [xbp-A2h]
  __int16 v52; // [xsp+F6h] [xbp-9Ah]
  void *v53; // [xsp+F8h] [xbp-98h]
  __int64 vars8; // [xsp+198h] [xbp+8h]

  if ( !a3 )
  {
    v36 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v36,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("VideoConversionService.m"),
      490LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("outError"));
    objc_release(v36);
  }
  v5 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask outputMainResourceURL](self, "outputMainResourceURL"));
  if ( -[VideoConversionTask isMetadataTrackExtractionConversion](self, "isMetadataTrackExtractionConversion") )
  {
    v6 = 0LL;
    v7 = 0LL;
    width = CGSizeZero.width;
    height = CGSizeZero.height;
    v10 = height;
    v11 = CGSizeZero.width;
    goto LABEL_8;
  }
  v7 = objc_retainAutoreleasedReturnValue(+[AVURLAsset URLAssetWithURL:options:](&OBJC_CLASS___AVURLAsset, "URLAssetWithURL:options:", v5, 0LL));
  v12 = objc_retainAutoreleasedReturnValue(
          +[PFMediaUtilities tracksWithMediaType:forAsset:](
            &OBJC_CLASS___PFMediaUtilities,
            "tracksWithMediaType:forAsset:",
            AVMediaTypeVideo,
            v7));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "lastObject"));
  objc_release(v12);
  if ( v7 && v6 )
  {
    objc_msgSend(v6, "naturalSize");
    v11 = v13;
    v10 = v14;
    objc_msgSend_preferredTransform(v39, v6, v15);
    width = v10 * v39[2] + v39[0] * v11;
    height = v10 * v39[3] + v39[1] * v11;
LABEL_8:
    v16 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v17 = objc_retainAutoreleasedReturnValue(-[NSURL path](v5, "path"));
    v38 = 0LL;
    v18 = objc_retainAutoreleasedReturnValue(-[NSFileManager attributesOfItemAtPath:error:](v16, "attributesOfItemAtPath:error:", v17, &v38));
    v19 = objc_retain(v38);
    objc_release(v17);
    objc_release(v16);
    if ( v18 )
    {
      v20 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v18, "objectForKeyedSubscript:", NSFileSize));
      if ( objc_msgSend(v20, "integerValue") )
      {
        v40[0] = CFSTR("PAMediaConversionServicePixelWidthKey");
        v37 = v19;
        v21 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", v11));
        v41[0] = v21;
        v40[1] = CFSTR("PAMediaConversionServicePixelHeightKey");
        v22 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", v10));
        v41[1] = v22;
        v40[2] = CFSTR("PAMediaConversionServiceOrientedPixelWidthKey");
        v23 = v7;
        v24 = v5;
        v25 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", fabs(width)));
        v41[2] = v25;
        v40[3] = CFSTR("PAMediaConversionServiceOrientedPixelHeightKey");
        v26 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", fabs(height)));
        v40[4] = CFSTR("PAMediaConversionServiceFileSizeKey");
        v41[3] = v26;
        v41[4] = v20;
        v27 = objc_retainAutoreleasedReturnValue(
                +[NSDictionary dictionaryWithObjects:forKeys:count:](
                  &OBJC_CLASS___NSDictionary,
                  "dictionaryWithObjects:forKeys:count:",
                  v41,
                  v40,
                  5LL));
        v28 = v26;
        v19 = v37;
        objc_release(v28);
        v29 = v25;
        v5 = v24;
        v7 = v23;
        objc_release(v29);
        objc_release(v22);
        objc_release(v21);
        v30 = 0LL;
LABEL_18:
        objc_release(v19);
        objc_release(v20);
        objc_release(v18);
        goto LABEL_19;
      }
      v42 = NSLocalizedDescriptionKey;
      v43 = CFSTR("Unable to get file information about converted asset");
      v30 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v43,
                &v42,
                1LL));
      v31 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("PAMediaConversionServiceErrorDomain"),
                  4LL,
                  v30)));
    }
    else
    {
      v44[0] = NSLocalizedDescriptionKey;
      v44[1] = NSUnderlyingErrorKey;
      v45[0] = CFSTR("Unable to get file system information about converted asset");
      v45[1] = v19;
      v30 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                v45,
                v44,
                2LL));
      v31 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("PAMediaConversionServiceErrorDomain"),
                  4LL,
                  v30)));
      v20 = 0LL;
    }
    v27 = 0LL;
    *a3 = v31;
    goto LABEL_18;
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    v34 = objc_retainAutoreleasedReturnValue(-[NSURL path](v5, "path"));
    *(_DWORD *)buf = 138412802;
    v49 = v34;
    v50 = 2112;
    v51 = v7;
    v52 = 2112;
    v53 = v6;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "Unable to get AV information about converted asset at %@ (%@/%@)",
      buf,
      0x20u);
    objc_release(v34);
  }
  v46 = NSLocalizedDescriptionKey;
  v32 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("Unable to get AV information about converted asset (%@/%@)"),
            v7,
            v6));
  v47 = v32;
  v30 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            &v47,
            &v46,
            1LL));
  objc_release(v32);
  v27 = 0LL;
  if ( a3 )
    *a3 = objc_autorelease(
            objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("PAMediaConversionServiceErrorDomain"),
                4LL,
                v30)));
LABEL_19:
  objc_release(v5);
  objc_release(v6);
  objc_release(v7);
  objc_release(v30);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v27);
}