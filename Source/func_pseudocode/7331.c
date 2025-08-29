-[ImageConversionService replyToCompletionHandler:requestIdentifier:resultData:resultImageInformation:signpostID:error:]
void __cdecl -[ImageConversionService replyToCompletionHandler:requestIdentifier:resultData:resultImageInformation:signpostID:error:](
        ImageConversionService *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        unsigned __int64 a7,
        id a8)
{
  void (__fastcall *v14)(id, id, id, id); // x27
  id v15; // x20
  id v16; // x0
  uint8_t v17[16]; // [xsp+0h] [xbp-60h] BYREF

  v14 = (void (__fastcall *)(id, id, id, id))*((_QWORD *)a3 + 2);
  v15 = objc_retain(a4);
  v14(a3, a5, a6, a8);
  v16 = objc_retain(&_os_log_default);
  if ( a7 - 1 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled((os_log_t)&_os_log_default) )
  {
    *(_WORD *)v17 = 0;
    _os_signpost_emit_with_name_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_SIGNPOST_INTERVAL_END,
      a7,
      "com.apple.photos.mediaconversion.service",
      (const char *)&unk_100032A6B,
      v17,
      2u);
  }
  objc_release(&_os_log_default);
  -[ImageConversionService decrementPendingRequestCountWithRequestIdentifier:](
    self,
    "decrementPendingRequestCountWithRequestIdentifier:",
    v15);
  objc_release(v15);
}