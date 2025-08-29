-[PAMediaConversionServiceImageConversionJob _validate]
void __cdecl -[PAMediaConversionServiceImageConversionJob _validate](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  os_signpost_id_t v3; // x19
  id v4; // x0
  unsigned int v5; // w0
  unsigned __int64 v6; // x8
  id v7; // x0
  uint8_t v8[16]; // [xsp+0h] [xbp-40h] BYREF
  uint8_t buf[16]; // [xsp+10h] [xbp-30h] BYREF

  v3 = os_signpost_id_make_with_pointer((os_log_t)&_os_log_default, self);
  v4 = objc_retain(&_os_log_default);
  if ( v3 - 1 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled((os_log_t)&_os_log_default) )
  {
    *(_WORD *)buf = 0;
    _os_signpost_emit_with_name_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_SIGNPOST_INTERVAL_BEGIN,
      v3,
      "com.apple.photos.mediaconversion.service.validate",
      (const char *)&unk_10003D69F,
      buf,
      2u);
  }
  objc_release(&_os_log_default);
  if ( -[PAMediaConversionServiceImageConversionJob _validateSource](self, "_validateSource")
    && -[PAMediaConversionServiceImageConversionJob _validateMetadata](self, "_validateMetadata")
    && -[PAMediaConversionServiceImageConversionJob _validateOrientation](self, "_validateOrientation") )
  {
    v5 = -[PAMediaConversionServiceImageConversionJob _validateOutputSize](self, "_validateOutputSize");
    v6 = 1LL;
    if ( v5 )
      v6 = 2LL;
  }
  else
  {
    v6 = 1LL;
  }
  self->_validationState = v6;
  v7 = objc_retain(&_os_log_default);
  if ( v3 - 1 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled((os_log_t)&_os_log_default) )
  {
    *(_WORD *)v8 = 0;
    _os_signpost_emit_with_name_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_SIGNPOST_INTERVAL_END,
      v3,
      "com.apple.photos.mediaconversion.service.validate",
      (const char *)&unk_10003D69F,
      v8,
      2u);
  }
  objc_release(&_os_log_default);
}