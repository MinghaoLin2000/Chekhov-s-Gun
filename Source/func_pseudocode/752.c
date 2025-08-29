-[DeviceBlueButton updateLayer]
void __cdecl -[DeviceBlueButton updateLayer](DeviceBlueButton *self, SEL a2)
{
  id v3; // x20
  void *v4; // x21
  void *v5; // x22
  void *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[DeviceBlueButton currentFillColor](self, "currentFillColor")));
  v4 = objc_msgSend(v3, "CGColor");
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceBlueButton layer](self, "layer"));
  objc_msgSend(v5, "setBackgroundColor:", v4);
  objc_release(v5);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceBlueButton layer](self, "layer"));
  objc_msgSend(v6, "setCornerRadius:", 4.0);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}