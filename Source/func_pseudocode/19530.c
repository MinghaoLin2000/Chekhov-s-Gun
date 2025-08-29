-[IFDBundle slotCount:]
// local variable allocation has failed, the output may be wrong!
int __cdecl -[IFDBundle slotCount:](IFDBundle *self, SEL a2, unsigned int a3)
{
  __int64 v3; // x19
  os_log_s *v5; // x21
  __int64 v6; // x19
  os_log_s *v7; // x20
  int v10; // [xsp+8h] [xbp-28h] BYREF
  unsigned __int8 v11; // [xsp+Fh] [xbp-21h] BYREF

  v3 = *(_QWORD *)&a3;
  v11 = 1;
  v10 = 1;
  v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(self));
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEBUG) )
    sub_100005E60(v3, v5);
  objc_release(v5);
  v6 = ((__int64 (__fastcall *)(__int64, __int64, int *, unsigned __int8 *))self->_ifdMethod.IFDHGetCapabilities)(
         v3,
         4014LL,
         &v10,
         &v11);
  v7 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v6));
  if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEBUG) )
    sub_100005DF8(&v11, v6, v7);
  objc_release(v7);
  if ( v10 == 1 && v6 == 0 )
    return v11;
  else
    return 1;
}