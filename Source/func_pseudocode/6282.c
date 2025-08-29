-[PAMediaConversionServiceImageConversionJob sourceOrientation]
signed __int64 __cdecl -[PAMediaConversionServiceImageConversionJob sourceOrientation](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  NSDictionary *v3; // x20
  id v4; // x19
  void *v5; // x20

  if ( !-[PAMediaConversionServiceImageConversionJob canAccessSourceImageProperties](
          self,
          "canAccessSourceImageProperties") )
    return 1LL;
  v3 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob sourceImageProperties](self, "sourceImageProperties"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v3, "objectForKeyedSubscript:", kCGImagePropertyOrientation));
  objc_release(v3);
  if ( !v4 )
    return 1LL;
  v5 = objc_msgSend(v4, "integerValue");
  objc_release(v4);
  return (signed __int64)v5;
}