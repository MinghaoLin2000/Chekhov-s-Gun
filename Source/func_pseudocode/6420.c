+[VideoTranscodingTask shouldMaximizeVideoConversionPowerEfficiencyForOptions:inputAssetDuration:taskIdentifier:]
bool __cdecl +[VideoTranscodingTask shouldMaximizeVideoConversionPowerEfficiencyForOptions:inputAssetDuration:taskIdentifier:](
        id a1,
        SEL a2,
        id a3,
        double a4,
        id a5)
{
  id v9; // x19
  id v10; // x20
  void *v11; // x24
  void *v12; // x23
  void *v13; // x24
  double v14; // d0
  double v15; // d9
  _BOOL4 v16; // w21
  NSAssertionHandler *v18; // x23
  NSAssertionHandler *v19; // x23
  NSAssertionHandler *v20; // x24
  uint8_t buf[4]; // [xsp+10h] [xbp-70h] BYREF
  _BOOL4 v22; // [xsp+14h] [xbp-6Ch]
  __int16 v23; // [xsp+18h] [xbp-68h]
  void *v24; // [xsp+1Ah] [xbp-66h]
  __int16 v25; // [xsp+22h] [xbp-5Eh]
  double v26; // [xsp+24h] [xbp-5Ch]
  __int16 v27; // [xsp+2Ch] [xbp-54h]
  id v28; // [xsp+2Eh] [xbp-52h]

  v9 = objc_retain(a3);
  v10 = objc_retain(a5);
  if ( !v9 )
  {
    v18 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v18,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("VideoConversionService.m"),
      421LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("options"));
    objc_release(v18);
  }
  if ( a4 == 0.0 )
  {
    v19 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v19,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("VideoConversionService.m"),
      422LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("inputAssetDuration"));
    objc_release(v19);
  }
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionPowerEfficiencyKey")));
  v12 = objc_msgSend(v11, "integerValue");
  objc_release(v11);
  if ( v12 == (void *)1 )
  {
    v16 = 1;
  }
  else if ( v12 == (void *)2 )
  {
    v13 = objc_retainAutoreleasedReturnValue(
            objc_msgSend(
              v9,
              "objectForKeyedSubscript:",
              CFSTR("PAMediaConversionServiceOptionPowerEfficiencyMinimumDurationKey")));
    objc_msgSend(v13, "doubleValue");
    v15 = v14;
    objc_release(v13);
    if ( v15 <= 0.0 )
    {
      v20 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v20,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        a1,
        CFSTR("VideoConversionService.m"),
        430LL,
        CFSTR("PAMediaConversionServiceOptionPowerEfficiencyMinimumDurationKey option is required for PAMediaConversionServicePowerEfficiencyMaximizeWithMinimumDuration"));
      objc_release(v20);
    }
    v16 = v15 < a4;
  }
  else
  {
    v16 = 0;
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 67109890;
    v22 = v16;
    v23 = 2048;
    v24 = v12;
    v25 = 2048;
    v26 = a4;
    v27 = 2114;
    v28 = v10;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Maximize video conversion power efficiency: %d (mode = %ld, duration = %f, conversion task = %{public}@)",
      buf,
      0x26u);
  }
  objc_release(v10);
  objc_release(v9);
  return v16;
}