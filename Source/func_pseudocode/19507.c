-[IFDBundleService deinit:]
void __cdecl -[IFDBundleService deinit:](IFDBundleService *self, SEL a2, id a3)
{
  OS_os_transaction *transaction; // x20
  void (__fastcall **v5)(_QWORD); // x21
  IFDBundle *bundle; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  transaction = self->_transaction;
  self->_transaction = 0LL;
  v5 = (void (__fastcall **)(_QWORD))objc_retain(a3);
  objc_release(transaction);
  bundle = self->_bundle;
  self->_bundle = 0LL;
  objc_release(bundle);
  v5[2](v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}