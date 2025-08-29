+[ipp_value_t valueWithString:]
id __cdecl +[ipp_value_t valueWithString:](id a1, SEL a2, id a3)
{
  id v3; // x19
  ipp_value_t *v4; // x20
  id v5; // x0
  void *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_opt_new(&OBJC_CLASS___ipp_value_t);
  v5 = objc_retain(v3);
  v6 = v5;
  if ( v4 )
    -[ipp_value_t setString:](v4, "setString:", 0LL, v5);
  else
    objc_release(v5);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}