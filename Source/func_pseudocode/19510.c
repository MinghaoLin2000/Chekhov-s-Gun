-[IFDBundleService closeChannel:reply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[IFDBundleService closeChannel:reply:](IFDBundleService *self, SEL a2, unsigned int a3, id a4)
{
  __int64 v4; // x19
  IFDBundle *bundle; // x20
  void (__fastcall **v6)(_QWORD); // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = *(_QWORD *)&a3;
  bundle = self->_bundle;
  v6 = (void (__fastcall **)(_QWORD))objc_retain(a4);
  -[IFDBundle closeChannel:](bundle, "closeChannel:", v4);
  v6[2](v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}