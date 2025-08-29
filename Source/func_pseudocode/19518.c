-[IFDBundleService setProtocol:protocol:reply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[IFDBundleService setProtocol:protocol:reply:](
        IFDBundleService *self,
        SEL a2,
        unsigned int a3,
        unsigned int a4,
        id a5)
{
  __int64 v6; // x20
  __int64 v7; // x21
  IFDBundle *bundle; // x22
  id v9; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = *(_QWORD *)&a4;
  v7 = *(_QWORD *)&a3;
  bundle = self->_bundle;
  v9 = objc_retain(a5);
  (*((void (__fastcall **)(id, void *))a5 + 2))(
    v9,
    (void *)-[IFDBundle setProtocol:protocol:](bundle, "setProtocol:protocol:", v7, v6));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}