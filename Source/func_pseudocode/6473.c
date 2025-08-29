-[VideoStillImageExtractionTask storeImage]
void __cdecl -[VideoStillImageExtractionTask storeImage](VideoStillImageExtractionTask *self, SEL a2)
{
  NSData *v3; // x20
  NSData *v4; // x20
  NSMutableDictionary *v5; // x21
  NSURL *v6; // x20
  NSData *v7; // x21
  NSURL *v8; // x22
  unsigned int v9; // w23
  NSData *v10; // x21
  NSNumber *v11; // x20
  NSMutableDictionary *v12; // x22
  NSDictionary *v13; // x21
  NSError *v14; // x20
  void *v15; // x0
  NSDictionary *v16; // x22
  NSError *v17; // x21
  id v18; // [xsp+0h] [xbp-70h] BYREF
  NSErrorUserInfoKey v19; // [xsp+8h] [xbp-68h] BYREF
  const __CFString *v20; // [xsp+10h] [xbp-60h] BYREF
  _QWORD v21[2]; // [xsp+18h] [xbp-58h] BYREF
  _QWORD v22[2]; // [xsp+28h] [xbp-48h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[VideoStillImageExtractionTask imageData](self, "imageData"));
  objc_release(v3);
  if ( v3 )
  {
    if ( -[VideoConversionTask wantsResultAsData](self, "wantsResultAsData") )
    {
      v4 = objc_retainAutoreleasedReturnValue(-[VideoStillImageExtractionTask imageData](self, "imageData"));
      v5 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask resultInformation](self, "resultInformation"));
      -[NSMutableDictionary setObject:forKeyedSubscript:](
        v5,
        "setObject:forKeyedSubscript:",
        v4,
        CFSTR("PAMediaConversionServiceResultDataKey"));
      objc_release(v5);
LABEL_6:
      objc_release(v4);
      v10 = objc_retainAutoreleasedReturnValue(-[VideoStillImageExtractionTask imageData](self, "imageData"));
      v11 = objc_retainAutoreleasedReturnValue(
              +[NSNumber numberWithUnsignedInteger:](
                &OBJC_CLASS___NSNumber,
                "numberWithUnsignedInteger:",
                -[NSData length](v10, "length")));
      v12 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask resultInformation](self, "resultInformation"));
      -[NSMutableDictionary setObject:forKeyedSubscript:](
        v12,
        "setObject:forKeyedSubscript:",
        v11,
        CFSTR("PAMediaConversionServiceFileSizeKey"));
      objc_release(v12);
      objc_release(v11);
      objc_release(v10);
      -[VideoConversionTask setStatus:](self, "setStatus:", 1LL);
      return;
    }
    v6 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask outputMainResourceURL](self, "outputMainResourceURL"));
    objc_release(v6);
    if ( v6 )
    {
      v7 = objc_retainAutoreleasedReturnValue(-[VideoStillImageExtractionTask imageData](self, "imageData"));
      v8 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask outputMainResourceURL](self, "outputMainResourceURL"));
      v18 = 0LL;
      v9 = -[NSData writeToURL:options:error:](v7, "writeToURL:options:error:", v8, 1LL, &v18);
      v4 = (NSData *)objc_retain(v18);
      objc_release(v8);
      objc_release(v7);
      if ( v9 )
        goto LABEL_6;
      v21[0] = NSLocalizedDescriptionKey;
      v21[1] = NSUnderlyingErrorKey;
      v22[0] = CFSTR("Unable to write output data");
      v22[1] = v4;
      v16 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                v22,
                v21,
                2LL));
      v17 = objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("PAMediaConversionServiceErrorDomain"),
                2LL,
                v16));
      -[VideoConversionTask setError:](self, "setError:", v17);
      objc_release(v17);
      objc_release(v16);
      v15 = v4;
    }
    else
    {
      v19 = NSDebugDescriptionErrorKey;
      v20 = CFSTR("Caller wants result to URL but no URL is provided");
      v13 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v20,
                &v19,
                1LL));
      v14 = objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("PAMediaConversionServiceErrorDomain"),
                4LL,
                v13));
      -[VideoConversionTask setError:](self, "setError:", v14);
      objc_release(v14);
      v15 = v13;
    }
    objc_release(v15);
  }
}