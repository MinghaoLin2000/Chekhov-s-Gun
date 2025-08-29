-[VideoConversionService conversionQueue:cancelCurrentlyProcessingEntry:]
void __cdecl -[VideoConversionService conversionQueue:cancelCurrentlyProcessingEntry:](
        VideoConversionService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v7; // x19
  id v8; // x20
  void *v9; // x23
  NSAssertionHandler *v10; // x24
  int v11; // [xsp+0h] [xbp-50h] BYREF
  id v12; // [xsp+4h] [xbp-4Ch]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v11 = 138543362;
    v12 = v8;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Request queue issued cancellation of currently processing queue entry %{public}@",
      (uint8_t *)&v11,
      0xCu);
  }
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "videoConversionTask"));
  if ( !v9 )
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v10,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("VideoConversionService.m"),
      1763LL,
      CFSTR("Unexpected nil conversion task"));
    objc_release(v10);
  }
  objc_msgSend(v9, "cancel");
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
}