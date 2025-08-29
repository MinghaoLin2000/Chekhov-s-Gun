-[IFDBundle synchronizationLevel:]
// local variable allocation has failed, the output may be wrong!
int __cdecl -[IFDBundle synchronizationLevel:](IFDBundle *self, SEL a2, unsigned int a3)
{
  __int64 v3; // x19
  os_log_s *v5; // x21
  __int64 v6; // x21
  os_log_s *v7; // x22
  int result; // w0
  os_log_s *v9; // x21
  __int64 v10; // x19
  os_log_s *v11; // x20
  bool v12; // zf
  int v14; // [xsp+8h] [xbp-28h] BYREF
  char v15; // [xsp+Fh] [xbp-21h] BYREF

  v3 = *(_QWORD *)&a3;
  v15 = 0;
  v14 = 1;
  v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(self));
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEBUG) )
    sub_100005D90(v3, v5);
  objc_release(v5);
  v6 = ((__int64 (__fastcall *)(__int64, __int64, int *, char *))self->_ifdMethod.IFDHGetCapabilities)(
         v3,
         4013LL,
         &v14,
         &v15);
  v7 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v6));
  if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEBUG) )
    sub_100005AA8(&v15, v6, v7);
  objc_release(v7);
  result = 2;
  if ( !v6 && v14 == 1 && v15 )
  {
    v14 = 1;
    v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(2LL));
    if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEBUG) )
      sub_100005D28(v3, v9);
    objc_release(v9);
    v10 = ((__int64 (__fastcall *)(__int64, __int64, int *, char *))self->_ifdMethod.IFDHGetCapabilities)(
            v3,
            4012LL,
            &v14,
            &v15);
    v11 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v10));
    if ( os_log_type_enabled(v11, OS_LOG_TYPE_DEBUG) )
      sub_100005AA8(&v15, v10, v11);
    objc_release(v11);
    if ( v10 )
      v12 = 0;
    else
      v12 = v14 == 1;
    return !v12 || v15 == 0;
  }
  return result;
}