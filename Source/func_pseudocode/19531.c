-[IFDBundle maxInputSize:]
// local variable allocation has failed, the output may be wrong!
unsigned int __cdecl -[IFDBundle maxInputSize:](IFDBundle *self, SEL a2, unsigned int a3)
{
  __int64 v3; // x19
  os_log_s *v5; // x21
  __int64 v6; // x19
  os_log_s *v7; // x20
  int v10; // [xsp+8h] [xbp-28h] BYREF
  unsigned int v11; // [xsp+Ch] [xbp-24h] BYREF

  v3 = *(_QWORD *)&a3;
  v10 = 4;
  v11 = 0;
  v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(self));
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEBUG) )
    sub_100005F34(v3, v5);
  objc_release(v5);
  v6 = ((__int64 (__fastcall *)(__int64, __int64, int *, unsigned int *))self->_ifdMethod.IFDHGetCapabilities)(
         v3,
         499719LL,
         &v10,
         &v11);
  v7 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v6));
  if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEBUG) )
    sub_100005EC8(&v11, v6, v7);
  objc_release(v7);
  if ( v10 == 4 && v6 == 0 )
    return v11;
  else
    return 261;
}