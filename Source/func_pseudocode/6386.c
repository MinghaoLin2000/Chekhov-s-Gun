-[VideoConversionTask requiresPhotosAdjustmentRendering]
bool __cdecl -[VideoConversionTask requiresPhotosAdjustmentRendering](VideoConversionTask *self, SEL a2)
{
  NSMutableDictionary *v2; // x19
  id v3; // x0
  bool v4; // w20

  v2 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
  v3 = objc_retainAutoreleasedReturnValue(
         -[NSMutableDictionary objectForKey:](
           v2,
           "objectForKey:",
           CFSTR("PAMediaConversionServiceOptionAdjustmentInformationKey")));
  v4 = v3 != 0LL;
  objc_release(v3);
  objc_release(v2);
  return v4;
}