-[IFDBundleService slotCount:reply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[IFDBundleService slotCount:reply:](IFDBundleService *self, SEL a2, unsigned int a3, id a4)
{
  __int64 v5; // x20
  IFDBundle *bundle; // x21
  id v7; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = *(_QWORD *)&a3;
  bundle = self->_bundle;
  v7 = objc_retain(a4);
  (*((void (__fastcall **)(id, void *))a4 + 2))(v7, (void *)-[IFDBundle slotCount:](bundle, "slotCount:", v5));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}