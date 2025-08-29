-[IFDBundleService control:code:data:expectedLength:reply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[IFDBundleService control:code:data:expectedLength:reply:](
        IFDBundleService *self,
        SEL a2,
        unsigned int a3,
        id a4,
        id a5,
        unsigned int a6,
        id a7)
{
  __int64 v8; // x20
  __int64 v11; // x23
  IFDBundle *bundle; // x24
  NSMutableData *outputBuffer; // x25
  id v14; // x26
  id v15; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v8 = *(_QWORD *)&a6;
  v11 = *(_QWORD *)&a3;
  bundle = self->_bundle;
  outputBuffer = self->_outputBuffer;
  v14 = objc_retain(a7);
  v15 = objc_retainAutoreleasedReturnValue(
          -[IFDBundle control:code:data:expectedLength:buffer:](
            bundle,
            "control:code:data:expectedLength:buffer:",
            v11,
            a4,
            a5,
            v8,
            outputBuffer));
  (*((void (__fastcall **)(id, id))a7 + 2))(v14, v15);
  objc_release(v14);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v15);
}