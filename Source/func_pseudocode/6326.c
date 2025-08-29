+[PAMediaConversionServiceSharedUtilitiesServiceSide isOutputCorruptionLikelyUsingSSIMOfInputURL:toOutputURL:]
bool __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide isOutputCorruptionLikelyUsingSSIMOfInputURL:toOutputURL:](
        id a1,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  id v6; // x20
  CIImage *v7; // x21
  CIImage *v8; // x22
  void *v9; // x23
  void *v10; // x24
  uint8_t buf[4]; // [xsp+10h] [xbp-80h] BYREF
  __int64 v13; // [xsp+14h] [xbp-7Ch]
  __int16 v14; // [xsp+1Ch] [xbp-74h]
  __int64 v15; // [xsp+1Eh] [xbp-72h]
  __int16 v16; // [xsp+26h] [xbp-6Ah]
  void *v17; // [xsp+28h] [xbp-68h]
  __int16 v18; // [xsp+30h] [xbp-60h]
  void *v19; // [xsp+32h] [xbp-5Eh]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(+[CIImage imageWithContentsOfURL:options:](&OBJC_CLASS___CIImage, "imageWithContentsOfURL:options:", v5, 0LL));
  v8 = objc_retainAutoreleasedReturnValue(+[CIImage imageWithContentsOfURL:options:](&OBJC_CLASS___CIImage, "imageWithContentsOfURL:options:", v6, 0LL));
  PFImageMetricComputeSSIMForCIImage();
  if ( NAN >= 94.0 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "path"));
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "path"));
      *(_DWORD *)buf = 134218754;
      v13 = 0x7FF8000000000000LL;
      v14 = 2048;
      v15 = 0x4057800000000000LL;
      v16 = 2112;
      v17 = v9;
      v18 = 2112;
      v19 = v10;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "SSIM %f >= %f for conversion of %@ to %@",
        buf,
        0x2Au);
      objc_release(v10);
      objc_release(v9);
    }
  }
  else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 134218240;
    v13 = 0x7FF8000000000000LL;
    v14 = 2048;
    v15 = 0x4057800000000000LL;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "Conversion output corruption likely based on SSIM: %f < %f",
      buf,
      0x16u);
  }
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  return NAN < 94.0;
}