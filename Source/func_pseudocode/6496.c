-[VideoConversionService optionsRequirePhotosAdjustmentProcessing:]
bool __cdecl -[VideoConversionService optionsRequirePhotosAdjustmentProcessing:](
        VideoConversionService *self,
        SEL a2,
        id a3)
{
  id v3; // x0
  bool v4; // w19

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionAdjustmentInformationKey")));
  v4 = v3 != 0LL;
  objc_release(v3);
  return v4;
}