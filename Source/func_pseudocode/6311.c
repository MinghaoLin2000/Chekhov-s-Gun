+[PAMediaConversionServiceSharedUtilitiesServiceSide newScaledImageForImageRef:inputSize:outputSize:sx:sy:orientation:colorspace:]
CGImage *__cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide newScaledImageForImageRef:inputSize:outputSize:sx:sy:orientation:colorspace:](
        id a1,
        SEL a2,
        CGImage *a3,
        PFIntSize_st a4,
        PFIntSize_st a5,
        double a6,
        double a7,
        signed __int64 a8,
        CGColorSpace *space)
{
  unsigned __int64 var1; // x22
  unsigned __int64 var0; // x23
  CGContext *v15; // x0
  CGContext *v16; // x20
  double v17; // d8
  double v18; // d9
  CGImage *Image; // x19
  CGAffineTransform v21; // [xsp+0h] [xbp-A0h] BYREF
  CGAffineTransform buf; // [xsp+30h] [xbp-70h] BYREF
  CGRect v23; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  var1 = a4.var1;
  var0 = a4.var0;
  v15 = CGBitmapContextCreate(0LL, a5.var0, a5.var1, 8uLL, (4 * a5.var0 + 15) & 0xFFFFFFFFFFFFFFF0LL, space, 2u);
  if ( v15 )
  {
    v16 = v15;
    CGContextSetInterpolationQuality(v15, kCGInterpolationHigh);
    CGContextScaleCTM(v16, a6, a7);
    if ( a8 == 1 )
    {
      v17 = (double)var0;
      v18 = (double)var1;
    }
    else
    {
      memset(&buf, 0, sizeof(buf));
      v17 = (double)var0;
      v18 = (double)var1;
      IPAOrientationMakeTransformWithSize(&buf, a8, (double)var0, (double)var1);
      v21 = buf;
      CGContextConcatCTM(v16, &v21);
    }
    v23.origin.x = 0.0;
    v23.origin.y = 0.0;
    v23.size.width = v17;
    v23.size.height = v18;
    CGContextDrawImage(v16, v23, a3);
    Image = CGBitmapContextCreateImage(v16);
    CGContextRelease(v16);
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      LOWORD(buf.a) = 0;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to create output bitmap context",
        (uint8_t *)&buf,
        2u);
    }
    return 0LL;
  }
  return Image;
}