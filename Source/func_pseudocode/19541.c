-[IFDBundle closeChannel:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[IFDBundle closeChannel:](IFDBundle *self, SEL a2, unsigned int a3)
{
  __int64 v3; // x19
  os_log_s *v5; // x21
  __int64 v6; // x20
  os_log_s *v7; // x19

  v3 = *(_QWORD *)&a3;
  v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(self));
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEBUG) )
    sub_1000062E8(v3, v5);
  objc_release(v5);
  v6 = ((__int64 (__fastcall *)(__int64))self->_ifdMethod.IFDHCloseChannel)(v3);
  v7 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v6));
  if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEBUG) )
    sub_100006274(v6, v7);
  objc_release(v7);
}