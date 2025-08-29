-[VideoTranscodingTask hasSlowMotionAdjustments]
bool __cdecl -[VideoTranscodingTask hasSlowMotionAdjustments](VideoTranscodingTask *self, SEL a2)
{
  NSMutableDictionary *v2; // x19
  void *v3; // x20
  bool v4; // w21

  v2 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
  v3 = objc_retainAutoreleasedReturnValue(
         -[NSMutableDictionary objectForKey:](
           v2,
           "objectForKey:",
           CFSTR("PAMediaConversionServiceOptionVideoAdjustmentsPropertyListKey")));
  v4 = objc_msgSend(v3, "count") != 0LL;
  objc_release(v3);
  objc_release(v2);
  return v4;
}