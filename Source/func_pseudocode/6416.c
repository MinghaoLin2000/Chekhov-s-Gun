-[VideoTranscodingTask cancel]
void __cdecl -[VideoTranscodingTask cancel](VideoTranscodingTask *self, SEL a2)
{
  VideoTranscodingTask *v2; // x19
  void *v3; // x20
  NSDictionary *v4; // x20
  NSError *v5; // x21
  int v6; // [xsp+0h] [xbp-50h] BYREF
  void *v7; // [xsp+4h] [xbp-4Ch]
  NSErrorUserInfoKey v8; // [xsp+18h] [xbp-38h] BYREF
  const __CFString *v9; // [xsp+20h] [xbp-30h] BYREF

  v2 = objc_retain(self);
  objc_sync_enter(v2);
  v3 = -[VideoConversionTask status](v2, "status");
  -[VideoConversionTask setStatus:](v2, "setStatus:", 4LL);
  if ( v3 == (void *)5 )
  {
    v8 = NSDebugDescriptionErrorKey;
    v9 = CFSTR("Export was cancelled while conversion task was still enqueued");
    v4 = objc_retainAutoreleasedReturnValue(
           +[NSDictionary dictionaryWithObjects:forKeys:count:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithObjects:forKeys:count:",
             &v9,
             &v8,
             1LL));
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSError errorWithDomain:code:userInfo:](
             &OBJC_CLASS___NSError,
             "errorWithDomain:code:userInfo:",
             CFSTR("PAMediaConversionServiceErrorDomain"),
             5LL,
             v4));
    -[VideoConversionTask setError:](v2, "setError:", v5);
    objc_release(v5);
    -[VideoTranscodingTask callCompletionHandler](v2, "callCompletionHandler");
    objc_release(v4);
  }
  else if ( v3 == (void *)6 )
  {
    -[VideoTranscodingTask cancelTranscode](v2, "cancelTranscode");
  }
  else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v6 = 134217984;
    v7 = v3;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Ignoring cancellation request for transcode task in state %ld",
      (uint8_t *)&v6,
      0xCu);
  }
  objc_sync_exit(v2);
  objc_release(v2);
}