-[SinglePassVideoTranscodingTask currentFractionCompleted]
double __cdecl -[SinglePassVideoTranscodingTask currentFractionCompleted](SinglePassVideoTranscodingTask *self, SEL a2)
{
  PFSinglePassVideoExportItem *v3; // x21
  void *v4; // x19
  double v5; // d0
  double v6; // d8
  NSString *v7; // x21
  PFSinglePassVideoExportItem *v8; // x20
  void *v9; // x22
  int v11; // [xsp+0h] [xbp-70h] BYREF
  NSString *v12; // [xsp+4h] [xbp-6Ch]
  __int16 v13; // [xsp+Ch] [xbp-64h]
  void *v14; // [xsp+Eh] [xbp-62h]
  __int16 v15; // [xsp+16h] [xbp-5Ah]
  double v16; // [xsp+18h] [xbp-58h]
  __int16 v17; // [xsp+20h] [xbp-50h]
  void *v18; // [xsp+22h] [xbp-4Eh]

  v3 = objc_retainAutoreleasedReturnValue(-[SinglePassVideoTranscodingTask singlePassExportItem](self, "singlePassExportItem"));
  v4 = objc_retainAutoreleasedReturnValue(-[PFSinglePassVideoExportItem progress](v3, "progress"));
  objc_release(v3);
  objc_msgSend(v4, "fractionCompleted");
  v6 = v5;
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask identifier](self, "identifier"));
    v8 = objc_retainAutoreleasedReturnValue(-[SinglePassVideoTranscodingTask singlePassExportItem](self, "singlePassExportItem"));
    v9 = objc_retainAutoreleasedReturnValue(-[PFSinglePassVideoExportItem identifier](v8, "identifier"));
    v11 = 138544130;
    v12 = v7;
    v13 = 2114;
    v14 = v9;
    v15 = 2048;
    v16 = v6 * 100.0;
    v17 = 2048;
    v18 = objc_msgSend(v4, "completedUnitCount");
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Single pass export conversion task %{public}@ (export item %{public}@) progress %.1f (%lld bytes)",
      (uint8_t *)&v11,
      0x2Au);
    objc_release(v9);
    objc_release(v8);
    objc_release(v7);
  }
  objc_release(v4);
  return v6;
}