-[SFUFileInputStream initWithFileDescriptor:offset:length:]
// local variable allocation has failed, the output may be wrong!
SFUFileInputStream *__cdecl -[SFUFileInputStream initWithFileDescriptor:offset:length:](
        SFUFileInputStream *self,
        SEL a2,
        int a3,
        signed __int64 a4,
        signed __int64 a5)
{
  __int64 v7; // x22
  SFUFileInputStream *v8; // x0
  SFUFileInputStream *v9; // x19

  v7 = *(_QWORD *)&a3;
  v8 = -[SFUFileInputStream p_init](self, "p_init");
  v9 = v8;
  if ( v8
    && !-[SFUFileInputStream p_configureWithFileDescriptor:offset:length:](
          v8,
          "p_configureWithFileDescriptor:offset:length:",
          v7,
          a4,
          a5) )
  {
    objc_release(v9);
    return 0LL;
  }
  return v9;
}