-[ImageConversionService conversionQueueDidFinishProcessingEntry:]
void __cdecl -[ImageConversionService conversionQueueDidFinishProcessingEntry:](
        ImageConversionService *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  ImageConversionService *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x21
  __int64 v8; // x0
  int v9; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v10; // [xsp+8h] [xbp-48h] BYREF
  uint8_t buf[24]; // [xsp+10h] [xbp-40h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retain(self);
  v6 = objc_sync_enter(v5);
  if ( !v5->_pendingRequestCount )
  {
    CMPhotoReleaseHardwareResources(v6);
    +[NUFactory reset](&OBJC_CLASS___NUFactory, "reset");
    v10 = 0x7FF8000000000000LL;
    v9 = 0;
    v7 = pc_session_create(&v9, __stderrp, __stderrp);
    if ( v7 )
    {
      v8 = getpid();
      pc_session_set_procpid(v7, v8);
      v9 = pc_session_begin(v7);
      if ( !v9 )
      {
        *(_QWORD *)buf = 0LL;
        pc_session_get_value(v7, 0LL, 0x6375726D656D0000LL, &v10, buf, 0LL);
      }
      pc_session_destroy(v7);
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 134217984;
      *(_QWORD *)&buf[4] = v10;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "Finished processing last queue entry, dirty memory = %.0f KB",
        buf,
        0xCu);
    }
  }
  objc_sync_exit(v5);
  objc_release(v5);
  objc_release(v4);
}