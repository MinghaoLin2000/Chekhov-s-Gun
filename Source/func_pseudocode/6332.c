+[PAMediaConversionServiceImagingUtilities generatePosterFrameExportForVideoURL:destinationURL:maximumSize:outputFileType:error:]
bool __cdecl +[PAMediaConversionServiceImagingUtilities generatePosterFrameExportForVideoURL:destinationURL:maximumSize:outputFileType:error:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        CGSize a5,
        id a6,
        id *a7)
{
  double height; // d8
  double width; // d9
  id v14; // x19
  const __CFURL *v15; // x20
  __CFString *v16; // x21
  CGImageDestinationRef v17; // x0
  CGImageDestinationRef v18; // x24
  unsigned __int8 v19; // w22
  void *v21; // x22
  NSAssertionHandler *v22; // x25
  uint8_t buf[4]; // [xsp+10h] [xbp-70h] BYREF
  void *v24; // [xsp+14h] [xbp-6Ch]

  height = a5.height;
  width = a5.width;
  v14 = objc_retain(a3);
  v15 = (const __CFURL *)objc_retain(a4);
  v16 = (__CFString *)objc_retain(a6);
  if ( !v16 )
  {
    v22 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v22,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceImagingUtilities.m"),
      174LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("outputFileType"));
    objc_release(v22);
  }
  v17 = CGImageDestinationCreateWithURL(v15, v16, 1uLL, 0LL);
  if ( v17 )
  {
    v18 = v17;
    v19 = (unsigned __int8)objc_msgSend(
                             a1,
                             "_generatePosterFrameExportForVideoURL:imageDestinationToAddToAndFinalize:maximumSize:error:",
                             v14,
                             v17,
                             a7,
                             width,
                             height);
    CFRelease(v18);
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "path"));
      *(_DWORD *)buf = 138412290;
      v24 = v21;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to create image destination for still image extraction for %@",
        buf,
        0xCu);
      objc_release(v21);
    }
    v19 = 0;
  }
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  return v19;
}