-[IFDBundle power:action:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[IFDBundle power:action:](IFDBundle *self, SEL a2, unsigned int a3, int a4)
{
  __int64 v4; // x21
  __int64 v5; // x19
  os_log_s *v7; // x22
  NSData *v8; // x0
  NSData *v9; // x20
  NSData *v10; // x19
  os_log_s *v11; // x21
  unsigned int v13; // [xsp+0h] [xbp-50h] BYREF
  _BYTE v14[33]; // [xsp+7h] [xbp-49h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = *(_QWORD *)&a4;
  v5 = *(_QWORD *)&a3;
  v7 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(self));
  if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEBUG) )
    sub_100006004(v5, v4, v7);
  objc_release(v7);
  v13 = 0;
  v8 = (NSData *)((__int64 (__fastcall *)(__int64, __int64, _BYTE *, unsigned int *))self->_ifdMethod.IFDHPowerICC)(
                   v5,
                   v4,
                   v14,
                   &v13);
  v9 = v8;
  v10 = 0LL;
  if ( (v4 & 0xFFFFFFFD) == 0x1F4 && !v8 )
  {
    v8 = objc_retainAutoreleasedReturnValue(+[NSData dataWithBytes:length:](&OBJC_CLASS___NSData, "dataWithBytes:length:", v14, v13));
    v10 = v8;
  }
  v11 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(v8));
  if ( os_log_type_enabled(v11, OS_LOG_TYPE_DEBUG) )
    sub_100005F9C(v10, v9, v11);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}