+[PAMediaConversionServiceImagingUtilities generatePosterFrameExportForVideoURL:outputData:maximumSize:outputFileType:error:]
bool __cdecl +[PAMediaConversionServiceImagingUtilities generatePosterFrameExportForVideoURL:outputData:maximumSize:outputFileType:error:](
        id a1,
        SEL a2,
        id a3,
        id *a4,
        CGSize a5,
        id a6,
        id *a7)
{
  double height; // d8
  double width; // d9
  id v14; // x19
  __CFString *v15; // x20
  __CFData *v16; // x21
  CGImageDestinationRef v17; // x0
  CGImageDestinationRef v18; // x25
  unsigned int v19; // w0
  bool v20; // w23
  void *v22; // x22
  NSAssertionHandler *v23; // x25
  uint8_t buf[4]; // [xsp+10h] [xbp-70h] BYREF
  void *v25; // [xsp+14h] [xbp-6Ch]

  height = a5.height;
  width = a5.width;
  v14 = objc_retain(a3);
  v15 = (__CFString *)objc_retain(a6);
  if ( !v15 )
  {
    v23 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v23,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceImagingUtilities.m"),
      192LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("outputFileType"));
    objc_release(v23);
  }
  v16 = objc_retainAutoreleasedReturnValue(+[NSMutableData data](&OBJC_CLASS___NSMutableData, "data"));
  v17 = CGImageDestinationCreateWithData(v16, v15, 1uLL, 0LL);
  if ( v17 )
  {
    v18 = v17;
    v19 = (unsigned int)objc_msgSend(
                          a1,
                          "_generatePosterFrameExportForVideoURL:imageDestinationToAddToAndFinalize:maximumSize:error:",
                          v14,
                          v17,
                          a7,
                          width,
                          height);
    v20 = v19;
    if ( a4 && v19 )
      *a4 = objc_retainAutorelease(v16);
    CFRelease(v18);
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "path"));
      *(_DWORD *)buf = 138412290;
      v25 = v22;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to create image destination for still image extraction for %@",
        buf,
        0xCu);
      objc_release(v22);
    }
    v20 = 0;
  }
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  return v20;
}