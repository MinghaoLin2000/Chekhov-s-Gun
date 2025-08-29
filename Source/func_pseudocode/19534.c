-[IFDBundle transmit:protocol:data:buffer:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[IFDBundle transmit:protocol:data:buffer:](
        IFDBundle *self,
        SEL a2,
        unsigned int a3,
        unsigned int a4,
        id a5,
        id a6)
{
  __int64 v8; // x19
  id v10; // x24
  id v11; // x23
  void *v12; // x22
  void *v13; // x0
  int v14; // w8
  os_log_s *v15; // x25
  __int64 (__fastcall *IFDHTransmitToICC)(__int64, _QWORD, void *, void *, void *, unsigned int *, __int64 *); // x26
  id v17; // x21
  void *v18; // x24
  void *v19; // x25
  id v20; // x23
  void *v21; // x0
  void *v22; // x20
  void *v23; // x19
  os_log_s *v24; // x22
  unsigned int v26; // [xsp+4h] [xbp-6Ch] BYREF
  __int64 v27; // [xsp+8h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-60h] BYREF
  int v29; // [xsp+14h] [xbp-5Ch]
  __int16 v30; // [xsp+18h] [xbp-58h]
  unsigned int v31; // [xsp+1Ah] [xbp-56h]
  __int16 v32; // [xsp+1Eh] [xbp-52h]
  id v33; // [xsp+20h] [xbp-50h]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v8 = *(_QWORD *)&a3;
  v10 = objc_retain(a5);
  v11 = objc_retain(a6);
  v12 = objc_msgSend(v10, "length");
  v27 = 0LL;
  v13 = objc_msgSend(v11, "length");
  if ( (unsigned int)v13 >= 0xFFFF )
    v14 = 0xFFFF;
  else
    v14 = (int)v13;
  v26 = v14;
  v15 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v13));
  if ( os_log_type_enabled(v15, OS_LOG_TYPE_DEBUG) )
  {
    *(_DWORD *)buf = 67109634;
    v29 = v8;
    v30 = 1024;
    v31 = a4;
    v32 = 2112;
    v33 = v10;
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v15,
      OS_LOG_TYPE_DEBUG,
      "-> IFDHTransmitICC(%08x, proto=%u, in=%@)",
      buf,
      0x18u);
  }
  objc_release(v15);
  IFDHTransmitToICC = (__int64 (__fastcall *)(__int64, _QWORD, void *, void *, void *, unsigned int *, __int64 *))self->_ifdMethod.IFDHTransmitToICC;
  v17 = objc_retainAutorelease(v10);
  v18 = objc_msgSend(v17, "bytes");
  v19 = objc_msgSend(v17, "length");
  v20 = objc_retainAutorelease(v11);
  v21 = (void *)IFDHTransmitToICC(v8, a4 | ((_QWORD)v12 << 32), v18, v19, objc_msgSend(v20, "mutableBytes"), &v26, &v27);
  v22 = v21;
  if ( v21 )
  {
    v23 = 0LL;
  }
  else
  {
    v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "subdataWithRange:", 0LL, v26));
    v23 = v21;
  }
  v24 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v21));
  if ( os_log_type_enabled(v24, OS_LOG_TYPE_DEBUG) )
    sub_10000613C(v23, v22, v24);
  objc_release(v24);
  objc_release(v20);
  objc_release(v17);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v23);
}