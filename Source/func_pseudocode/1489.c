-[DeviceMoreIdentifiersViewController .cxx_destruct]
void __cdecl -[DeviceMoreIdentifiersViewController .cxx_destruct](DeviceMoreIdentifiersViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_destroyWeak((id *)&self->_aboutThisDeviceTextField);
  objc_destroyWeak((id *)&self->_serialNumberValueTextField);
  objc_destroyWeak((id *)&self->_serialNumberPrompt);
  objc_destroyWeak((id *)&self->_phoneNumberValue2);
  objc_destroyWeak((id *)&self->_phoneNumberValue1);
  objc_destroyWeak((id *)&self->_phoneNumberPrompt2);
  objc_destroyWeak((id *)&self->_phoneNumberPrompt1);
  objc_destroyWeak((id *)&self->_phoneNumber2Container);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_phoneNumber1Container);
}