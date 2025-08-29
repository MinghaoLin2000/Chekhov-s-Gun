-[PhotosAdjustmentsVideoTranscodingTask cancelTranscode]
void __cdecl -[PhotosAdjustmentsVideoTranscodingTask cancelTranscode](
        PhotosAdjustmentsVideoTranscodingTask *self,
        SEL a2)
{
  NSProgress *v4; // x21
  NSString *v5; // x20
  NSProgress *v6; // x19
  NSAssertionHandler *v7; // x21
  int v8; // [xsp+0h] [xbp-40h] BYREF
  NSString *v9; // [xsp+4h] [xbp-3Ch]

  v4 = objc_retainAutoreleasedReturnValue(-[PhotosAdjustmentsVideoTranscodingTask progress](self, "progress"));
  objc_release(v4);
  if ( !v4 )
  {
    v7 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v7,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("VideoConversionService.m"),
      691LL,
      CFSTR("Unexpected missing photos adjustments video transcode export progress with job in running state"));
    objc_release(v7);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask identifier](self, "identifier"));
    v8 = 138543362;
    v9 = v5;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Cancelling photos adjustments conversion task %{public}@",
      (uint8_t *)&v8,
      0xCu);
    objc_release(v5);
  }
  v6 = objc_retainAutoreleasedReturnValue(-[PhotosAdjustmentsVideoTranscodingTask progress](self, "progress"));
  -[NSProgress cancel](v6, "cancel");
  objc_release(v6);
}