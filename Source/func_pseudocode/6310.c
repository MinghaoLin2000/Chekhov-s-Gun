+[PAMediaConversionServiceSharedUtilitiesServiceSide newScaledImageForImageRef:scaleFactor:orientation:colorspace:]
CGImage *__cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide newScaledImageForImageRef:scaleFactor:orientation:colorspace:](
        id a1,
        SEL a2,
        CGImage *a3,
        double a4,
        signed __int64 a5,
        CGColorSpace *a6)
{
  size_t Width; // x23
  size_t Height; // x24
  unsigned __int64 v13; // x25
  unsigned __int64 v14; // x1
  unsigned __int64 v15; // x26
  void *v16; // x27
  double v17; // d0
  double v18; // d1
  double v19; // d0

  if ( !a3 )
    return 0LL;
  Width = CGImageGetWidth(a3);
  Height = CGImageGetHeight(a3);
  v13 = IPAOrientationTransformIntegralImageSize(a5, Width, Height);
  v15 = v14;
  if ( a4 < 1.0 )
  {
    v16 = objc_retainAutoreleasedReturnValue(+[IPAImageSizePolicy scalePolicyWithScale:](&OBJC_CLASS___IPAImageSizePolicy, "scalePolicyWithScale:", a4));
    objc_msgSend(v16, "transformSize:", (double)v13, (double)v15);
    v13 = llround(v17);
    v15 = llround(v18);
    objc_release(v16);
  }
  if ( !v13 || !v15 )
    return 0LL;
  v19 = 1.0;
  if ( a4 <= 1.0 )
    v19 = a4;
  return (CGImage *)objc_msgSend(
                      a1,
                      "newScaledImageForImageRef:inputSize:outputSize:sx:sy:orientation:colorspace:",
                      a3,
                      Width,
                      Height,
                      v13,
                      v15,
                      a5,
                      v19,
                      v19,
                      a6);
}