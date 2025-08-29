-[DeviceWarrantyViewController clickContinueButton:]
void __cdecl -[DeviceWarrantyViewController clickContinueButton:](DeviceWarrantyViewController *self, SEL a2, id a3)
{
  id v4; // x20
  void (**v5)(void); // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceWarrantyViewController continueButtonAction](self, "continueButtonAction", a3));
  objc_release(v4);
  if ( v4 )
  {
    v5 = (void (**)(void))objc_retainAutoreleasedReturnValue(-[DeviceWarrantyViewController continueButtonAction](self, "continueButtonAction"));
    v5[2]();
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v5);
  }
}