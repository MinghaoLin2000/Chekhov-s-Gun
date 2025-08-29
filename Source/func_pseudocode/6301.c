-[PAMediaConversionServiceImageConversionJob _validateOrientation]
bool __cdecl -[PAMediaConversionServiceImageConversionJob _validateOrientation](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  signed __int64 v3; // x20
  signed __int64 v4; // x21
  unsigned __int64 v5; // x8
  _BOOL4 v6; // w0
  int v8; // [xsp+0h] [xbp-40h] BYREF
  signed __int64 v9; // [xsp+4h] [xbp-3Ch]

  v3 = -[PAMediaConversionServiceImageConversionJob sourceOrientation](self, "sourceOrientation");
  if ( -[PAMediaConversionServiceImageConversionJob applySourceOrientationTransform](
         self,
         "applySourceOrientationTransform") )
  {
    -[PAMediaConversionServiceImageConversionJob setOrientation:](self, "setOrientation:", v3);
  }
  v4 = -[PAMediaConversionServiceImageConversionJob orientation](self, "orientation");
  self->_orientationTransformBehavior = 0LL;
  if ( (unsigned int)IPAOrientationIsValid() )
  {
    if ( v4 == v3 )
    {
      if ( v3 == 1 )
      {
LABEL_12:
        -[NSMutableDictionary removeObjectForKey:](
          self->_destinationImageProperties,
          "removeObjectForKey:",
          kCGImagePropertyOrientation);
        goto LABEL_13;
      }
      v5 = 1LL;
    }
    else
    {
      v5 = 2LL;
    }
    self->_orientationTransformBehavior = v5;
    goto LABEL_12;
  }
  if ( !v4 )
  {
LABEL_13:
    LOBYTE(v6) = 1;
    return v6;
  }
  v6 = os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR);
  if ( v6 )
  {
    v8 = 134217984;
    v9 = v4;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "Invalid orientation request option %ld",
      (uint8_t *)&v8,
      0xCu);
    LOBYTE(v6) = 0;
  }
  return v6;
}