-[ImageConversionService decrementPendingRequestCountWithRequestIdentifier:]
void __cdecl -[ImageConversionService decrementPendingRequestCountWithRequestIdentifier:](
        ImageConversionService *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  ImageConversionService *v5; // x20
  __int64 v6; // x21
  int v7; // [xsp+0h] [xbp-40h] BYREF
  id v8; // [xsp+4h] [xbp-3Ch]
  __int16 v9; // [xsp+Ch] [xbp-34h]
  __int64 v10; // [xsp+Eh] [xbp-32h]

  v4 = objc_retain(a3);
  v5 = objc_retain(self);
  objc_sync_enter(v5);
  v6 = v5->_pendingRequestCount - 1;
  v5->_pendingRequestCount = v6;
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v7 = 138543618;
    v8 = v4;
    v9 = 2048;
    v10 = v6;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Sent reply for image conversion request %{public}@, pending request count now %ld",
      (uint8_t *)&v7,
      0x16u);
  }
  objc_sync_exit(v5);
  objc_release(v5);
  objc_release(v4);
}