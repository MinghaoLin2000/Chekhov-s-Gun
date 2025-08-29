-[SFUFileInputStream initWithPath:offset:length:]
SFUFileInputStream *__cdecl -[SFUFileInputStream initWithPath:offset:length:](
        SFUFileInputStream *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        signed __int64 a5)
{
  SFUFileInputStream *v8; // x0
  SFUFileInputStream *v9; // x19

  v8 = -[SFUFileInputStream p_init](self, "p_init");
  v9 = v8;
  if ( v8
    && !-[SFUFileInputStream p_configureWithPath:offset:length:](v8, "p_configureWithPath:offset:length:", a3, a4, a5) )
  {
    objc_release(v9);
    return 0LL;
  }
  return v9;
}