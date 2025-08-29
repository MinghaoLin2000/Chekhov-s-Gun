-[IFDBundleService createChannel:name:channel:reply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[IFDBundleService createChannel:name:channel:reply:](
        IFDBundleService *self,
        SEL a2,
        unsigned int a3,
        id a4,
        unsigned int a5,
        id a6)
{
  __int64 v7; // x20
  __int64 v9; // x22
  IFDBundle *bundle; // x23
  id v11; // x24
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v7 = *(_QWORD *)&a5;
  v9 = *(_QWORD *)&a3;
  bundle = self->_bundle;
  v11 = objc_retain(a6);
  (*((void (__fastcall **)(id, bool))a6 + 2))(
    v11,
    -[IFDBundle createChannel:name:channel:](bundle, "createChannel:name:channel:", v9, a4, v7));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v11);
}