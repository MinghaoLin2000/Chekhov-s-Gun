-[IFDBundle setProtocol:protocol:]
// local variable allocation has failed, the output may be wrong!
int __cdecl -[IFDBundle setProtocol:protocol:](IFDBundle *self, SEL a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // x19
  __int64 v5; // x20
  os_log_s *v7; // x22
  __int64 v8; // x19
  os_log_s *v9; // x20
  int v10; // w8

  if ( !self->_ifdMethod.IFDHSetProtocolParameters )
    return 1;
  v4 = *(_QWORD *)&a4;
  v5 = *(_QWORD *)&a3;
  v7 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(self));
  if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEBUG) )
    sub_1000060D4(v5, v4, v7);
  objc_release(v7);
  v8 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))self->_ifdMethod.IFDHSetProtocolParameters)(
         v5,
         v4,
         0LL,
         0LL,
         0LL,
         0LL);
  v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v8));
  if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEBUG) )
    sub_10000606C(v8, v9);
  objc_release(v9);
  if ( v8 == 614 )
    v10 = 1;
  else
    v10 = 2;
  if ( v8 )
    return v10;
  else
    return 0;
}