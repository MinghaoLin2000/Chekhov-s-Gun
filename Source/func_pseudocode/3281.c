-[DeviceAutofillSettingsViewController .cxx_destruct]
void __cdecl -[DeviceAutofillSettingsViewController .cxx_destruct](DeviceAutofillSettingsViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_autofillPrefs, 0LL);
  objc_destroyWeak((id *)&self->_okButton);
  objc_destroyWeak((id *)&self->_cancelButton);
  objc_destroyWeak((id *)&self->_helpButton);
  objc_destroyWeak((id *)&self->_diskSpaceMaximumTextField);
  objc_destroyWeak((id *)&self->_diskSpaceMinimumTextField);
  objc_destroyWeak((id *)&self->_diskSpaceSlider);
  objc_destroyWeak((id *)&self->_reserveSpaceForDiskUseValueTextField);
  objc_destroyWeak((id *)&self->_reserveSpaceForDiskUseTitleTextField);
  objc_destroyWeak((id *)&self->_chooseHigherRatedCheckBox);
  objc_destroyWeak((id *)&self->_chooseRandomlyCheckBox);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_replaceAllItemsCheckBox);
}