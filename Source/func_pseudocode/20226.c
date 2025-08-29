+[ipp_value_t valueWithInteger:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[ipp_value_t valueWithInteger:](id a1, SEL a2, int a3)
{
  __int64 v3; // x20
  ipp_value_t *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = *(_QWORD *)&a3;
  v4 = objc_opt_new(&OBJC_CLASS___ipp_value_t);
  -[ipp_value_t setInteger:](v4, "setInteger:", v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}