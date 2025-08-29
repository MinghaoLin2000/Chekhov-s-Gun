+[PAMediaConversionServiceImagingUtilities _generatePosterFrameExportForVideoURL:imageDestinationToAddToAndFinalize:maximumSize:error:]
bool __cdecl +[PAMediaConversionServiceImagingUtilities _generatePosterFrameExportForVideoURL:imageDestinationToAddToAndFinalize:maximumSize:error:](
        id a1,
        SEL a2,
        id a3,
        CGImageDestination *a4,
        CGSize a5,
        id *a6)
{
  double height; // d8
  double width; // d9
  id v12; // x19
  AVAsset *v13; // x20
  AVAssetImageGenerator *v14; // x21
  CGImage *v15; // x0
  CGImage *v16; // x23
  bool v17; // w22
  void *v19; // x24
  NSAssertionHandler *v20; // x24
  uint8_t buf[16]; // [xsp+10h] [xbp-60h] BYREF
  CMTimeEpoch epoch; // [xsp+20h] [xbp-50h]

  height = a5.height;
  width = a5.width;
  v12 = objc_retain(a3);
  if ( !a4 )
  {
    v20 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v20,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceImagingUtilities.m"),
      213LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("imageDestination"));
    objc_release(v20);
  }
  v13 = objc_retainAutoreleasedReturnValue(+[AVAsset assetWithURL:](&OBJC_CLASS___AVAsset, "assetWithURL:", v12));
  v14 = objc_retainAutoreleasedReturnValue(
          +[AVAssetImageGenerator assetImageGeneratorWithAsset:](
            &OBJC_CLASS___AVAssetImageGenerator,
            "assetImageGeneratorWithAsset:",
            v13));
  -[AVAssetImageGenerator setMaximumSize:](v14, "setMaximumSize:", width, height);
  -[AVAssetImageGenerator setAppliesPreferredTrackTransform:](v14, "setAppliesPreferredTrackTransform:", 1LL);
  *(_OWORD *)buf = *(_OWORD *)&kCMTimeZero.value;
  epoch = kCMTimeZero.epoch;
  v15 = (CGImage *)+[PFMediaUtilities copyCGImageFromImageGenerator:atTime:actualTime:error:](
                     &OBJC_CLASS___PFMediaUtilities,
                     "copyCGImageFromImageGenerator:atTime:actualTime:error:",
                     v14,
                     buf,
                     0LL,
                     a6);
  if ( v15 )
  {
    v16 = v15;
    CGImageDestinationAddImage(a4, v15, 0LL);
    v17 = CGImageDestinationFinalize(a4);
    if ( !v17 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "path"));
      *(_DWORD *)buf = 138412290;
      *(_QWORD *)&buf[4] = v19;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to finalize image destination for still image extraction for %@",
        buf,
        0xCu);
      objc_release(v19);
    }
    CFRelease(v16);
  }
  else
  {
    v17 = 0;
  }
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  return v17;
}