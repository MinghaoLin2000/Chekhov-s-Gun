-[PhotosAdjustmentsVideoTranscodingTask currentFractionCompleted]
double __cdecl -[PhotosAdjustmentsVideoTranscodingTask currentFractionCompleted](
        PhotosAdjustmentsVideoTranscodingTask *self,
        SEL a2)
{
  NSProgress *v3; // x20
  double v4; // d0
  double v5; // d8
  NSString *v6; // x19
  int v8; // [xsp+0h] [xbp-40h] BYREF
  NSString *v9; // [xsp+4h] [xbp-3Ch]
  __int16 v10; // [xsp+Ch] [xbp-34h]
  double v11; // [xsp+Eh] [xbp-32h]

  v3 = objc_retainAutoreleasedReturnValue(-[PhotosAdjustmentsVideoTranscodingTask progress](self, "progress"));
  -[NSProgress fractionCompleted](v3, "fractionCompleted");
  v5 = v4;
  objc_release(v3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask identifier](self, "identifier"));
    v8 = 138543618;
    v9 = v6;
    v10 = 2048;
    v11 = v5 * 100.0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Photos adjustment export progress for conversion task %{public}@: %.1f",
      (uint8_t *)&v8,
      0x16u);
    objc_release(v6);
  }
  return v5;
}