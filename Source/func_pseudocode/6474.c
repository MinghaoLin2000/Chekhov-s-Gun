-[VideoStillImageExtractionTask posterFrameScaleFactorForCGImage:]
double __cdecl -[VideoStillImageExtractionTask posterFrameScaleFactorForCGImage:](
        VideoStillImageExtractionTask *self,
        SEL a2,
        CGImage *a3)
{
  double Width; // d8
  double Height; // d9
  NSMutableDictionary *v7; // x20
  void *v8; // x21
  NSMutableDictionary *v9; // x0
  NSMutableDictionary *v10; // x20
  NSString *v11; // x19
  double v12; // d0
  NSSize v13; // kr00_16
  double v14; // d2
  double v15; // d1
  double v16; // d1
  double v17; // d2
  double v18; // d0
  double v19; // d8
  double result; // d0
  void *v21; // x21
  NSMutableDictionary *v22; // x19
  void *v23; // x20
  void *v24; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  Width = (double)CGImageGetWidth(a3);
  Height = (double)CGImageGetHeight(a3);
  v7 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
  v8 = objc_retainAutoreleasedReturnValue(
         -[NSMutableDictionary objectForKeyedSubscript:](
           v7,
           "objectForKeyedSubscript:",
           CFSTR("PAMediaConversionServiceOptionBoundingBoxKey")));
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
  v10 = v9;
  if ( v8 )
  {
    v11 = objc_retainAutoreleasedReturnValue(
            -[NSMutableDictionary objectForKeyedSubscript:](
              v9,
              "objectForKeyedSubscript:",
              CFSTR("PAMediaConversionServiceOptionBoundingBoxKey")));
    objc_release(v10);
    v13 = NSSizeFromString(v11);
    v12 = v13.width;
    if ( v13.width >= v13.height )
      v14 = v13.height;
    else
      v14 = v13.width;
    if ( v13.width < v13.height )
      v12 = v13.height;
    if ( Width >= Height )
      v15 = Height;
    else
      v15 = Width;
    v16 = v14 / v15;
    if ( Width >= Height )
      v17 = Width;
    else
      v17 = Height;
    v18 = v12 / v17;
    if ( v16 < v18 )
      v18 = v16;
    v19 = fmin(v18, 1.0);
    objc_release(v11);
    return v19;
  }
  v21 = objc_retainAutoreleasedReturnValue(
          -[NSMutableDictionary objectForKeyedSubscript:](
            v9,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionMaximumPixelCountKey")));
  objc_release(v21);
  objc_release(v10);
  if ( !v21 )
    return 1.0;
  v22 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
  v23 = objc_retainAutoreleasedReturnValue(
          -[NSMutableDictionary objectForKeyedSubscript:](
            v22,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionMaximumPixelCountKey")));
  v24 = objc_msgSend(v23, "integerValue");
  objc_release(v23);
  objc_release(v22);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  PFScaleFactorForMaximumPixelCount(v24, Width, Height);
  return result;
}