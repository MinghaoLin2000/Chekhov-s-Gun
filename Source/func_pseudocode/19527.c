-[IFDBundle createChannel:name:channel:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl -[IFDBundle createChannel:name:channel:](IFDBundle *self, SEL a2, unsigned int a3, id a4, unsigned int a5)
{
  __int64 v5; // x22
  __int64 v6; // x21
  id v8; // x0
  void *v9; // x19
  os_log_s *v10; // x22
  __int64 v11; // x22
  os_log_s *v12; // x23
  os_log_s *v13; // x23
  __int64 v14; // x0
  os_log_s *v15; // x23
  __int64 v16; // x21
  os_log_s *v17; // x23
  bool v18; // w20
  CFURLRef v20; // x20
  os_log_s *v21; // x21
  int v22; // [xsp+8h] [xbp-38h] BYREF
  unsigned __int8 v23; // [xsp+Fh] [xbp-31h] BYREF

  v5 = *(_QWORD *)&a5;
  v6 = *(_QWORD *)&a3;
  v8 = objc_retain(a4);
  v9 = v8;
  if ( self->_ifdMethod.IFDHCreateChannelByName )
  {
    v10 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v8));
    if ( os_log_type_enabled(v10, OS_LOG_TYPE_DEBUG) )
      sub_100005CB0(v9, v6, v10);
    objc_release(v10);
    v11 = ((__int64 (__fastcall *)(__int64, void *))self->_ifdMethod.IFDHCreateChannelByName)(
            v6,
            objc_msgSend(objc_retainAutorelease(v9), "UTF8String"));
    v12 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v11));
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEBUG) )
      sub_100005C48(v11, v12);
LABEL_11:
    objc_release(v12);
    if ( !self->_maxDevices )
    {
      v23 = 1;
      v22 = 1;
      v15 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v14));
      if ( os_log_type_enabled(v15, OS_LOG_TYPE_DEBUG) )
        sub_100005B10(v6, v15);
      objc_release(v15);
      v16 = ((__int64 (__fastcall *)(__int64, __int64, int *, unsigned __int8 *))self->_ifdMethod.IFDHGetCapabilities)(
              v6,
              4015LL,
              &v22,
              &v23);
      v17 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v16));
      if ( os_log_type_enabled(v17, OS_LOG_TYPE_DEBUG) )
        sub_100005AA8(&v23, v16, v17);
      objc_release(v17);
      if ( !v16 && v22 == 1 )
        self->_maxDevices = v23;
    }
    v18 = v11 == 0;
    goto LABEL_20;
  }
  if ( self->_ifdMethod.IFDHCreateChannel )
  {
    v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v8));
    if ( os_log_type_enabled(v13, OS_LOG_TYPE_DEBUG) )
      sub_100005BE0(v6, v5, v13);
    objc_release(v13);
    v11 = ((__int64 (__fastcall *)(__int64, __int64))self->_ifdMethod.IFDHCreateChannel)(v6, v5);
    v12 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v11));
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEBUG) )
      sub_100005B78(v11, v12);
    goto LABEL_11;
  }
  v20 = CFBundleCopyBundleURL(self->_bundle);
  v21 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v20));
  if ( os_log_type_enabled(v21, OS_LOG_TYPE_ERROR) )
    sub_100005A34(v20, v21);
  objc_release(v21);
  objc_release(v20);
  v18 = 0;
LABEL_20:
  objc_release(v9);
  return v18;
}