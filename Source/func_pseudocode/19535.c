-[IFDBundle control:code:data:expectedLength:buffer:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[IFDBundle control:code:data:expectedLength:buffer:](
        IFDBundle *self,
        SEL a2,
        unsigned int a3,
        id a4,
        id a5,
        unsigned int a6,
        id a7)
{
  __int64 v10; // x22
  id v12; // x19
  id v13; // x20
  id v14; // x21
  void *v15; // x0
  void *IFDHCreateChannelByName; // x25
  os_log_s *v17; // x24
  __int64 v18; // x0
  __int64 isKindOfClass; // x0
  __int64 (__fastcall *IFDHControl_v3)(__int64, void *, void *, void *, void *, _QWORD, unsigned int *); // x26
  void *v21; // x23
  id v22; // x24
  __int64 (__fastcall *IFDHControl_v2)(__int64, void *, void *, void *, unsigned int *); // x25
  id v24; // x23
  __int64 v25; // x23
  void *v26; // x22
  os_log_s *v27; // x24
  int v29; // w8
  unsigned int v30; // [xsp+Ch] [xbp-74h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-70h] BYREF
  int v32; // [xsp+14h] [xbp-6Ch]
  __int16 v33; // [xsp+18h] [xbp-68h]
  int v34; // [xsp+1Ah] [xbp-66h]
  __int16 v35; // [xsp+1Eh] [xbp-62h]
  id v36; // [xsp+20h] [xbp-60h]
  __int16 v37; // [xsp+28h] [xbp-58h]
  id v38; // [xsp+2Ah] [xbp-56h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v10 = *(_QWORD *)&a3;
  v12 = objc_retain(a4);
  v13 = objc_retain(a5);
  v30 = a6;
  v14 = objc_retain(a7);
  v15 = objc_msgSend(v14, "length");
  if ( (unsigned __int64)v15 < a6 )
  {
    v15 = objc_msgSend(v14, "length");
    v30 = (unsigned int)v15;
  }
  IFDHCreateChannelByName = self->_ifdMethod.IFDHCreateChannelByName;
  v17 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v15));
  if ( os_log_type_enabled(v17, OS_LOG_TYPE_DEBUG) )
  {
    if ( IFDHCreateChannelByName )
      v29 = 3;
    else
      v29 = 2;
    *(_DWORD *)buf = 67109890;
    v32 = v29;
    v33 = 1024;
    v34 = v10;
    v35 = 2114;
    v36 = v12;
    v37 = 2114;
    v38 = v13;
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v17,
      OS_LOG_TYPE_DEBUG,
      "-> IFDHControl_v%d(%08x, code=%{public}@, in=%{public}@)",
      buf,
      0x22u);
  }
  objc_release(v17);
  if ( IFDHCreateChannelByName )
  {
    v18 = objc_opt_class(&OBJC_CLASS___NSNumber);
    isKindOfClass = objc_opt_isKindOfClass(v12, v18);
    if ( (isKindOfClass & 1) == 0 )
    {
      v26 = 0LL;
      v25 = 614LL;
      goto LABEL_12;
    }
    IFDHControl_v3 = (__int64 (__fastcall *)(__int64, void *, void *, void *, void *, _QWORD, unsigned int *))self->_ifdMethod.IFDHControl_v3;
    v21 = objc_msgSend(v12, "unsignedIntValue");
    v22 = objc_retainAutorelease(v13);
    isKindOfClass = IFDHControl_v3(
                      v10,
                      v21,
                      objc_msgSend(v22, "bytes"),
                      objc_msgSend(v22, "length"),
                      objc_msgSend(objc_retainAutorelease(v14), "mutableBytes"),
                      v30,
                      &v30);
  }
  else
  {
    IFDHControl_v2 = (__int64 (__fastcall *)(__int64, void *, void *, void *, unsigned int *))self->_ifdMethod.IFDHControl_v2;
    v24 = objc_retainAutorelease(v13);
    isKindOfClass = IFDHControl_v2(
                      v10,
                      objc_msgSend(v24, "bytes"),
                      objc_msgSend(v24, "length"),
                      objc_msgSend(objc_retainAutorelease(v14), "mutableBytes"),
                      &v30);
  }
  v25 = isKindOfClass;
  if ( isKindOfClass )
  {
    v26 = 0LL;
  }
  else
  {
    isKindOfClass = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "subdataWithRange:", 0LL, v30));
    v26 = (void *)isKindOfClass;
  }
LABEL_12:
  v27 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(isKindOfClass));
  if ( os_log_type_enabled(v27, OS_LOG_TYPE_DEBUG) )
    sub_1000061A4(v26, v25, v27);
  objc_release(v27);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v26);
}