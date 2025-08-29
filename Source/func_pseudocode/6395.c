-[VideoConversionTask callCompletionHandler]
void __cdecl -[VideoConversionTask callCompletionHandler](VideoConversionTask *self, SEL a2)
{
  VideoConversionTask *v2; // x19
  NSError *v3; // x20
  NSDictionary *v4; // x20
  NSError *v5; // x21
  NSDate *v6; // x20
  NSMutableDictionary *v7; // x21
  void (__fastcall **v8)(void *, void *); // x20
  NSString *v9; // x20
  NSError *v10; // x21
  int v11; // [xsp+0h] [xbp-50h] BYREF
  NSString *v12; // [xsp+4h] [xbp-4Ch]
  __int16 v13; // [xsp+Ch] [xbp-44h]
  NSError *v14; // [xsp+Eh] [xbp-42h]
  NSErrorUserInfoKey v15; // [xsp+18h] [xbp-38h] BYREF
  const __CFString *v16; // [xsp+20h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v2 = objc_retain(self);
  objc_sync_enter(v2);
  if ( -[VideoConversionTask didCallCompletionHandler](v2, "didCallCompletionHandler") )
  {
    objc_sync_exit(v2);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v2);
  }
  else
  {
    -[VideoConversionTask setDidCallCompletionHandler:](v2, "setDidCallCompletionHandler:", 1LL);
    objc_sync_exit(v2);
    objc_release(v2);
    if ( (void *)-[VideoConversionTask status](v2, "status") != (void *)1 )
    {
      v3 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask error](v2, "error"));
      objc_release(v3);
      if ( !v3 )
      {
        v15 = NSLocalizedDescriptionKey;
        v16 = CFSTR("Conversion failed for unknown reason");
        v4 = objc_retainAutoreleasedReturnValue(
               +[NSDictionary dictionaryWithObjects:forKeys:count:](
                 &OBJC_CLASS___NSDictionary,
                 "dictionaryWithObjects:forKeys:count:",
                 &v16,
                 &v15,
                 1LL));
        v5 = objc_retainAutoreleasedReturnValue(
               +[NSError errorWithDomain:code:userInfo:](
                 &OBJC_CLASS___NSError,
                 "errorWithDomain:code:userInfo:",
                 CFSTR("PAMediaConversionServiceErrorDomain"),
                 2LL,
                 v4));
        -[VideoConversionTask setError:](v2, "setError:", v5);
        objc_release(v5);
        objc_release(v4);
      }
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      {
        v9 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask identifier](v2, "identifier"));
        v10 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask error](v2, "error"));
        v11 = 138543618;
        v12 = v9;
        v13 = 2114;
        v14 = v10;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_ERROR,
          "Video conversion error for conversion task %{public}@: %{public}@",
          (uint8_t *)&v11,
          0x16u);
        objc_release(v10);
        objc_release(v9);
      }
    }
    v6 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
    v7 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask resultInformation](v2, "resultInformation"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](
      v7,
      "setObject:forKeyedSubscript:",
      v6,
      CFSTR("PAMediaConversionServiceConversionEndDateKey"));
    objc_release(v7);
    objc_release(v6);
    -[VideoConversionTask updateResultTracker](v2, "updateResultTracker");
    v8 = (void (__fastcall **)(void *, void *))objc_retainAutoreleasedReturnValue(-[VideoConversionTask completionHandler](v2, "completionHandler"));
    v8[2](v8, (void *)-[VideoConversionTask status](v2, "status"));
    objc_release(v8);
  }
}