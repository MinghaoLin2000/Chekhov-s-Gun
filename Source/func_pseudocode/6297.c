-[PAMediaConversionServiceImageConversionJob hasPhotosAdjustments]
bool __cdecl -[PAMediaConversionServiceImageConversionJob hasPhotosAdjustments](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  NSData *v2; // x0
  bool v3; // w19

  v2 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob photosAdjustmentData](self, "photosAdjustmentData"));
  v3 = v2 != 0LL;
  objc_release(v2);
  return v3;
}