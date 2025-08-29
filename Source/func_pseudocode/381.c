-[DeviceUIServiceViewController setDevice:andMode:]
void __cdecl -[DeviceUIServiceViewController setDevice:andMode:](
        DeviceUIServiceViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v7; // x19
  id v8; // x21
  NSString *currentMode; // x0
  id v10; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  if ( !(unsigned int)objc_msgSend(v7, "isEqualTo:", self->_device)
    || ((unsigned int)objc_msgSend(v8, "isEqualToString:", self->_currentMode) & 1) == 0 )
  {
    objc_storeStrong((id *)&self->_device, a3);
    currentMode = self->_currentMode;
    self->_currentMode = (NSString *)&stru_1000BA220;
    objc_release(currentMode);
    if ( ((unsigned int)objc_msgSend(v8, "isEqualToString:", AMPDeviceViewModeDisabled) & 1) == 0
      && (((unsigned int)objc_msgSend(v7, "needsPairing") & 1) != 0 || (unsigned int)objc_msgSend(v7, "needsUnlock")) )
    {
      v10 = objc_retain(AMPDeviceViewModeUnpaired);
      objc_release(v8);
      v8 = v10;
    }
    -[DeviceUIServiceViewController setMode:](self, "setMode:", v8);
  }
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}