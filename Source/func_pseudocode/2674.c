-[DeviceAutofillPlacardViewController .cxx_destruct]
void __cdecl -[DeviceAutofillPlacardViewController .cxx_destruct](DeviceAutofillPlacardViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_itLibrary, 0LL);
  objc_storeStrong((id *)&self->_autoFillPrefs, 0LL);
  objc_storeStrong((id *)&self->_device, 0LL);
  objc_storeStrong((id *)&self->_devicesClient, 0LL);
  objc_destroyWeak((id *)&self->_autofillButton);
  objc_destroyWeak((id *)&self->_settingsButton);
  objc_destroyWeak((id *)&self->_autofillPopUpButton);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_autofillFromTextField);
}