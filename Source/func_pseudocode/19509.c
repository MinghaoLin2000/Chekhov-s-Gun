-[IFDBundleService deallocateLun:name:reply:]
void __cdecl -[IFDBundleService deallocateLun:name:reply:](IFDBundleService *self, SEL a2, id a3, id a4, id a5)
{
  IFDBundle *bundle; // x21
  void (__fastcall **v8)(_QWORD); // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  bundle = self->_bundle;
  v8 = (void (__fastcall **)(_QWORD))objc_retain(a5);
  -[IFDBundle deallocateLun:name:](bundle, "deallocateLun:name:", a3, a4);
  v8[2](v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}