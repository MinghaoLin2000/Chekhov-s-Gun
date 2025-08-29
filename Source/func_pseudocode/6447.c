-[ExportSessionVideoTranscodingTask currentFractionCompleted]
double __cdecl -[ExportSessionVideoTranscodingTask currentFractionCompleted](
        ExportSessionVideoTranscodingTask *self,
        SEL a2)
{
  AVAssetExportSession *v3; // x20
  float v4; // s0
  double v5; // d8
  NSString *v6; // x20
  AVAssetExportSession *v7; // x19
  int v9; // [xsp+0h] [xbp-50h] BYREF
  NSString *v10; // [xsp+4h] [xbp-4Ch]
  __int16 v11; // [xsp+Ch] [xbp-44h]
  AVAssetExportSessionStatus v12; // [xsp+Eh] [xbp-42h]
  __int16 v13; // [xsp+16h] [xbp-3Ah]
  double v14; // [xsp+18h] [xbp-38h]

  v3 = objc_retainAutoreleasedReturnValue(-[ExportSessionVideoTranscodingTask exportSession](self, "exportSession"));
  -[AVAssetExportSession progress](v3, "progress");
  v5 = v4;
  objc_release(v3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask identifier](self, "identifier"));
    v7 = objc_retainAutoreleasedReturnValue(-[ExportSessionVideoTranscodingTask exportSession](self, "exportSession"));
    v9 = 138543874;
    v10 = v6;
    v11 = 2048;
    v12 = -[AVAssetExportSession status](v7, "status");
    v13 = 2048;
    v14 = v5 * 100.0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Export session export status for conversion task %{public}@: %ld, progress %.1f",
      (uint8_t *)&v9,
      0x20u);
    objc_release(v7);
    objc_release(v6);
  }
  return v5;
}