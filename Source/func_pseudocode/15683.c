-[UARPUpdaterServiceDFU standaloneDynamicAssetSolicitation:modelNumber:notifyService:reply:]
void __cdecl -[UARPUpdaterServiceDFU standaloneDynamicAssetSolicitation:modelNumber:notifyService:reply:](
        UARPUpdaterServiceDFU *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v10; // x19
  id v11; // x20
  id v12; // x21
  void (__fastcall **v13)(id, _QWORD); // x22
  OS_os_log *log; // x23
  uint8_t v15[16]; // [xsp+0h] [xbp-40h] BYREF

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  v13 = (void (__fastcall **)(id, _QWORD))objc_retain(a6);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
    sub_100017BFC(log);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    *(_WORD *)v15 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "UARPUpdaterService does not handle Dynamic Asset Solicitation",
      v15,
      2u);
  }
  v13[2](v13, 0LL);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
}