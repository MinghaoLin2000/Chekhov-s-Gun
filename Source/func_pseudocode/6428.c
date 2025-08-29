-[PhotosAdjustmentsVideoTranscodingTask dumpStatistics]
void __cdecl -[PhotosAdjustmentsVideoTranscodingTask dumpStatistics](
        PhotosAdjustmentsVideoTranscodingTask *self,
        SEL a2)
{
  NSDate *v3; // x19
  NSDate *v4; // x21
  double v5; // d0
  double v6; // d8
  AVAsset *v7; // x0
  const char *v8; // x1
  AVAsset *v9; // x19
  double Seconds; // d9
  void *v11; // x21
  void *v12; // x22
  float v13; // s0
  float v14; // s10
  double v15; // d10
  float v16; // s11
  float v17; // s12
  NSString *v18; // x20
  CMTime time; // [xsp+8h] [xbp-B8h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-A0h] BYREF
  NSString *v21; // [xsp+24h] [xbp-9Ch]
  __int16 v22; // [xsp+2Ch] [xbp-94h]
  double v23; // [xsp+2Eh] [xbp-92h]
  __int16 v24; // [xsp+36h] [xbp-8Ah]
  double v25; // [xsp+38h] [xbp-88h]
  __int16 v26; // [xsp+40h] [xbp-80h]
  double v27; // [xsp+42h] [xbp-7Eh]
  __int16 v28; // [xsp+4Ah] [xbp-76h]
  double v29; // [xsp+4Ch] [xbp-74h]
  __int16 v30; // [xsp+54h] [xbp-6Ch]
  double v31; // [xsp+56h] [xbp-6Ah]

  v3 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask conversionEndTime](self, "conversionEndTime"));
  v4 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask conversionStartTime](self, "conversionStartTime"));
  -[NSDate timeIntervalSinceDate:](v3, "timeIntervalSinceDate:", v4);
  v6 = v5;
  objc_release(v4);
  objc_release(v3);
  v7 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask asset](self, "asset"));
  v9 = v7;
  if ( v7 )
    objc_msgSend_duration(&time, v7, v8);
  else
    memset(&time, 0, sizeof(time));
  Seconds = CMTimeGetSeconds(&time);
  v11 = objc_retainAutoreleasedReturnValue(
          +[PFMediaUtilities tracksWithMediaType:forAsset:](
            &OBJC_CLASS___PFMediaUtilities,
            "tracksWithMediaType:forAsset:",
            AVMediaTypeVideo,
            v9));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "firstObject"));
  objc_msgSend(v12, "nominalFrameRate");
  v14 = v13;
  objc_release(v12);
  objc_release(v11);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v15 = v14;
    v16 = Seconds * v15 / v6;
    v17 = v6 / Seconds;
    v18 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask identifier](self, "identifier"));
    *(_DWORD *)buf = 138544642;
    v21 = v18;
    v22 = 2048;
    v23 = v6;
    v24 = 2048;
    v25 = Seconds;
    v26 = 2048;
    v27 = v15;
    v28 = 2048;
    v29 = v17;
    v30 = 2048;
    v31 = v16;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Photos adjustments video transcode conversion for conversion task %{public}@ finished, conversion duration %.1fs, "
      "input asset duration %.1fs (%.1ffps), %.1f x realtime (%.1ffps)",
      buf,
      0x3Eu);
    objc_release(v18);
  }
  objc_release(v9);
}