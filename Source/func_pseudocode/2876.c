-[DeviceOptionsViewController .cxx_destruct]
void __cdecl -[DeviceOptionsViewController .cxx_destruct](DeviceOptionsViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_deviceAccessibilityPrefs, 0LL);
  objc_storeStrong((id *)&self->_convertPopUpLeadingConstraint, 0LL);
  objc_destroyWeak((id *)&self->_viewBeforeConvert);
  objc_destroyWeak((id *)&self->_deviceOptionsStackView);
  objc_destroyWeak((id *)&self->_convertStackView);
  objc_destroyWeak((id *)&self->_configureAccesibilityButton);
  objc_destroyWeak((id *)&self->_resetWarningsButton);
  objc_destroyWeak((id *)&self->_manualManageCheckBox);
  objc_destroyWeak((id *)&self->_convertHigherBitRateSongsToTrailingTextField);
  objc_destroyWeak((id *)&self->_convertHigherBitRateSongsToPopUpButton);
  objc_destroyWeak((id *)&self->_convertHigherBitRateSongsToCheckBox);
  objc_destroyWeak((id *)&self->_syncOnlyCheckedCheckBox);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_automaticallySyncCheckBox);
}