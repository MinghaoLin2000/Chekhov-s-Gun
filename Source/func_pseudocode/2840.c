-[DeviceOptionsViewController clickConvertHigherBitRateSongsToCheckBox:]
void __cdecl -[DeviceOptionsViewController clickConvertHigherBitRateSongsToCheckBox:](
        DeviceOptionsViewController *self,
        SEL a2,
        id a3)
{
  _BOOL8 v4; // x20
  NSPopUpButton *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_msgSend(a3, "state") == (void *)1;
  v5 = objc_retainAutoreleasedReturnValue(
         -[DeviceOptionsViewController convertHigherBitRateSongsToPopUpButton](
           self,
           "convertHigherBitRateSongsToPopUpButton"));
  -[NSPopUpButton setEnabled:](v5, "setEnabled:", v4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
}