-[IFDBundle getAttrib:code:buffer:error:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[IFDBundle getAttrib:code:buffer:error:](
        IFDBundle *self,
        SEL a2,
        unsigned int a3,
        unsigned int a4,
        id a5,
        signed __int64 *a6)
{
  __int64 v7; // x21
  __int64 v8; // x22
  id v10; // x23
  void *v11; // x0
  int v12; // w25
  os_log_s *v13; // x24
  __int64 (__fastcall *IFDHGetCapabilities)(__int64, __int64, unsigned int *, void *); // x24
  id v15; // x20
  void *v16; // x0
  void *v17; // x21
  os_log_s *v18; // x22
  signed __int64 v20; // x9
  unsigned int v21; // [xsp+Ch] [xbp-64h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-60h] BYREF
  _BYTE v23[10]; // [xsp+14h] [xbp-5Ch]
  _BYTE v24[6]; // [xsp+1Eh] [xbp-52h]
  int v25; // [xsp+24h] [xbp-4Ch]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v7 = *(_QWORD *)&a4;
  v8 = *(_QWORD *)&a3;
  v10 = objc_retain(a5);
  v11 = objc_msgSend(v10, "length");
  v12 = (int)v11;
  v21 = (unsigned int)v11;
  v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v11));
  if ( os_log_type_enabled(v13, OS_LOG_TYPE_DEBUG) )
  {
    *(_DWORD *)buf = 67109632;
    *(_DWORD *)v23 = v8;
    *(_WORD *)&v23[4] = 1024;
    *(_DWORD *)&v23[6] = v7;
    *(_WORD *)v24 = 1024;
    *(_DWORD *)&v24[2] = v12;
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v13,
      OS_LOG_TYPE_DEBUG,
      "-> IFDHGetCapabilities(%08x, code=%u, len=%u)",
      buf,
      0x14u);
  }
  objc_release(v13);
  IFDHGetCapabilities = (__int64 (__fastcall *)(__int64, __int64, unsigned int *, void *))self->_ifdMethod.IFDHGetCapabilities;
  v15 = objc_retainAutorelease(v10);
  v16 = (void *)IFDHGetCapabilities(v8, v7, &v21, objc_msgSend(v15, "mutableBytes"));
  *a6 = (signed __int64)v16;
  if ( v16 )
  {
    v17 = 0LL;
  }
  else
  {
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "subdataWithRange:", 0LL, v21));
    v17 = v16;
  }
  v18 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v16));
  if ( os_log_type_enabled(v18, OS_LOG_TYPE_DEBUG) )
  {
    v20 = *a6;
    *(_DWORD *)buf = 138543874;
    *(_QWORD *)v23 = v17;
    *(_WORD *)&v23[8] = 1024;
    *(_DWORD *)v24 = v21;
    *(_WORD *)&v24[4] = 1024;
    v25 = v20;
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v18,
      OS_LOG_TYPE_DEBUG,
      "<- IFDHGetCapabilities(out=%{public}@, len=%u) = %d",
      buf,
      0x18u);
  }
  objc_release(v18);
  objc_release(v15);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v17);
}