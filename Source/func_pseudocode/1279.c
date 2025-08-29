-[DeviceWarrantyViewController clickAgreeToCheckBox:]
void __cdecl -[DeviceWarrantyViewController clickAgreeToCheckBox:](DeviceWarrantyViewController *self, SEL a2, id a3)
{
  _BOOL8 v4; // x20
  NSButton *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_msgSend(a3, "integerValue") == (void *)1;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceWarrantyViewController continueButton](self, "continueButton"));
  -[NSButton setEnabled:](v5, "setEnabled:", v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}