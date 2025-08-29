-[PAMediaConversionServiceImageConversionJob _validateOutputSize]
bool __cdecl -[PAMediaConversionServiceImageConversionJob _validateOutputSize](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  double v3; // d0
  double v4; // d1
  bool v5; // w19
  double v6; // d8
  double v7; // d9
  double v8; // d0
  __int64 v9; // x0
  double v10; // d1
  double v11; // d0
  uint8_t v13[16]; // [xsp+0h] [xbp-30h] BYREF

  -[PAMediaConversionServiceImageConversionJob sourceImageSize](self, "sourceImageSize");
  v5 = v4 != 0.0 && v3 != 0.0;
  if ( v5 )
  {
    v6 = v3;
    v7 = v4;
    if ( -[PAMediaConversionServiceImageConversionJob requestedMaximumPixelCount](self, "requestedMaximumPixelCount") )
    {
      PFScaleFactorForMaximumPixelCount(
        -[PAMediaConversionServiceImageConversionJob requestedMaximumPixelCount](self, "requestedMaximumPixelCount"),
        v6,
        v7);
    }
    else
    {
      if ( !-[PAMediaConversionServiceImageConversionJob requestedMaximumLongSideLength](
              self,
              "requestedMaximumLongSideLength") )
      {
LABEL_15:
        -[PAMediaConversionServiceImageConversionJob scaleFactor](self, "scaleFactor");
        if ( v11 > 1.0 )
          v11 = 1.0;
        -[PAMediaConversionServiceImageConversionJob setScaleFactor:](self, "setScaleFactor:", v11);
        return v5;
      }
      v9 = -[PAMediaConversionServiceImageConversionJob requestedMaximumLongSideLength](
             self,
             "requestedMaximumLongSideLength");
      if ( v6 >= v7 )
        v10 = v6;
      else
        v10 = v7;
      v8 = (double)v9 / v10;
    }
    -[PAMediaConversionServiceImageConversionJob setScaleFactor:](self, "setScaleFactor:", v8);
    goto LABEL_15;
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    *(_WORD *)v13 = 0;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "Unable to determine input image size",
      v13,
      2u);
  }
  return v5;
}