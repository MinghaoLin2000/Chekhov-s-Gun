-[IFDBundle setAttrib:code:data:attribNotSupported:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl -[IFDBundle setAttrib:code:data:attribNotSupported:](
        IFDBundle *self,
        SEL a2,
        unsigned int a3,
        unsigned int a4,
        id a5,
        bool *a6)
{
  __int64 v7; // x20
  __int64 v8; // x21
  id v10; // x22
  os_log_s *v11; // x24
  __int64 (__fastcall *IFDHSetCapabilities)(__int64, __int64, void *, void *); // x24
  void *v13; // x23
  id v14; // x22
  __int64 v15; // x0
  __int64 v16; // x20
  os_log_s *v17; // x19
  _DWORD v19[2]; // [xsp+0h] [xbp-50h] BYREF
  __int16 v20; // [xsp+8h] [xbp-48h]
  int v21; // [xsp+Ah] [xbp-46h]
  __int16 v22; // [xsp+Eh] [xbp-42h]
  id v23; // [xsp+10h] [xbp-40h]

  v7 = *(_QWORD *)&a4;
  v8 = *(_QWORD *)&a3;
  v10 = objc_retain(a5);
  v11 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v10));
  if ( os_log_type_enabled(v11, OS_LOG_TYPE_DEBUG) )
  {
    v19[0] = 67109634;
    v19[1] = v8;
    v20 = 1024;
    v21 = v7;
    v22 = 2114;
    v23 = v10;
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v11,
      OS_LOG_TYPE_DEBUG,
      "-> IFDHSetCapabilities(%08x, code=%u, data=%{public}@)",
      (uint8_t *)v19,
      0x18u);
  }
  objc_release(v11);
  IFDHSetCapabilities = (__int64 (__fastcall *)(__int64, __int64, void *, void *))self->_ifdMethod.IFDHSetCapabilities;
  v13 = objc_msgSend(v10, "length");
  v14 = objc_retainAutorelease(v10);
  v15 = IFDHSetCapabilities(v8, v7, v13, objc_msgSend(v14, "bytes"));
  v16 = v15;
  if ( v15 == 600 )
    *a6 = 1;
  v17 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v15));
  if ( os_log_type_enabled(v17, OS_LOG_TYPE_DEBUG) )
    sub_10000620C(v16, v17);
  objc_release(v17);
  objc_release(v14);
  return v16 == 0;
}