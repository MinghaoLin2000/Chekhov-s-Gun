-[IFDBundleService transmit:protocol:data:reply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[IFDBundleService transmit:protocol:data:reply:](
        IFDBundleService *self,
        SEL a2,
        unsigned int a3,
        unsigned int a4,
        id a5,
        id a6)
{
  __int64 v8; // x21
  __int64 v9; // x22
  IFDBundle *bundle; // x23
  NSMutableData *outputBuffer; // x24
  id v12; // x25
  id v13; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v8 = *(_QWORD *)&a4;
  v9 = *(_QWORD *)&a3;
  bundle = self->_bundle;
  outputBuffer = self->_outputBuffer;
  v12 = objc_retain(a6);
  v13 = objc_retainAutoreleasedReturnValue(
          -[IFDBundle transmit:protocol:data:buffer:](
            bundle,
            "transmit:protocol:data:buffer:",
            v9,
            v8,
            a5,
            outputBuffer));
  (*((void (__fastcall **)(id, id))a6 + 2))(v12, v13);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v13);
}