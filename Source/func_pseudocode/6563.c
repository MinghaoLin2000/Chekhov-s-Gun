-[MediaConversionRequestTracker didDequeueAndStartProcessingRequest]
void __cdecl -[MediaConversionRequestTracker didDequeueAndStartProcessingRequest](
        MediaConversionRequestTracker *self,
        SEL a2)
{
  NSDate *v3; // x0
  NSDate *dequeueAndStartProcessingTime; // x8
  id v5; // x0
  os_signpost_id_t signpostId; // x20
  id v7; // x0
  os_signpost_id_t v8; // x20
  id v9; // x19
  int v10; // [xsp+0h] [xbp-30h] BYREF
  id v11; // [xsp+4h] [xbp-2Ch]

  v3 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
  dequeueAndStartProcessingTime = self->_dequeueAndStartProcessingTime;
  self->_dequeueAndStartProcessingTime = v3;
  objc_release(dequeueAndStartProcessingTime);
  v5 = objc_retain(&_os_log_default);
  signpostId = self->_signpostId;
  if ( signpostId - 1 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled((os_log_t)&_os_log_default) )
  {
    LOWORD(v10) = 0;
    _os_signpost_emit_with_name_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_SIGNPOST_INTERVAL_END,
      signpostId,
      "com.apple.photos.mediaconversion.service.enqueue",
      (const char *)&unk_10003D69F,
      (uint8_t *)&v10,
      2u);
  }
  objc_release(&_os_log_default);
  v7 = objc_retain(&_os_log_default);
  v8 = self->_signpostId;
  if ( v8 - 1 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled((os_log_t)&_os_log_default) )
  {
    v9 = objc_retainAutoreleasedReturnValue(
           -[NSDictionary objectForKeyedSubscript:](
             self->_requestOptions,
             "objectForKeyedSubscript:",
             CFSTR("PAMediaConversionServiceJobIdentifierKey")));
    v10 = 138543362;
    v11 = v9;
    _os_signpost_emit_with_name_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_SIGNPOST_INTERVAL_BEGIN,
      v8,
      "com.apple.photos.mediaconversion.service.processing",
      "Media conversion request %{public}@",
      (uint8_t *)&v10,
      0xCu);
    objc_release(v9);
  }
  objc_release(&_os_log_default);
}