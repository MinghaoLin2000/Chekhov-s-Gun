+[ipp_value_t valueWithBoolean:]
id __cdecl +[ipp_value_t valueWithBoolean:](id a1, SEL a2, int a3)
{
  ipp_value_t *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_opt_new(&OBJC_CLASS___ipp_value_t);
  -[ipp_value_t setBoolean:](v4, "setBoolean:", a3 != 0);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}