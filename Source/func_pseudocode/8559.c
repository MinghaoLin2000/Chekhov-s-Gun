-[PassKitServicesXPCService imageDataForPassUniqueIdentifier:size:completion:]
void __cdecl -[PassKitServicesXPCService imageDataForPassUniqueIdentifier:size:completion:](
        PassKitServicesXPCService *self,
        SEL a2,
        id a3,
        CGSize a4,
        id a5)
{
  id v6; // x19
  void (__fastcall **v7)(id, _QWORD); // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, _QWORD))objc_retain(a5);
  if ( v7 )
  {
    objc_msgSend(v6, "length");
    v7[2](v7, 0LL);
  }
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}