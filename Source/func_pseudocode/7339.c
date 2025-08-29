-[ImageConversionService init]
ImageConversionService *__cdecl -[ImageConversionService init](ImageConversionService *self, SEL a2)
{
  ImageConversionService *v2; // x19
  os_signpost_id_t v3; // x20
  id v4; // x0
  MediaConversionQueue *v5; // x0
  MediaConversionQueue *requestQueue; // x8
  uint8_t v8[16]; // [xsp+0h] [xbp-40h] BYREF
  objc_super v9; // [xsp+10h] [xbp-30h] BYREF

  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___ImageConversionService;
  v2 = -[ImageConversionService init](&v9, "init");
  if ( v2 )
  {
    v3 = os_signpost_id_make_with_pointer((os_log_t)&_os_log_default, v2);
    v4 = objc_retain(&_os_log_default);
    if ( v3 - 1 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled((os_log_t)&_os_log_default) )
    {
      *(_WORD *)v8 = 0;
      _os_signpost_emit_with_name_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_SIGNPOST_EVENT,
        v3,
        "com.apple.photos.mediaconversion.service.init",
        (const char *)&unk_100032A6B,
        v8,
        2u);
    }
    objc_release(&_os_log_default);
    v5 = -[MediaConversionQueue initWithDelegate:](
           objc_alloc(&OBJC_CLASS___MediaConversionQueue),
           "initWithDelegate:",
           v2);
    requestQueue = v2->_requestQueue;
    v2->_requestQueue = v5;
    objc_release(requestQueue);
  }
  return v2;
}