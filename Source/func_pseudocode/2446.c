-[DeviceSoftwareUpdatesViewController .cxx_destruct]
void __cdecl -[DeviceSoftwareUpdatesViewController .cxx_destruct](DeviceSoftwareUpdatesViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_deviceSoftwareInfo, 0LL);
  objc_destroyWeak((id *)&self->_statusValueTextField);
  objc_destroyWeak((id *)&self->_statusLabelTextField);
  objc_destroyWeak((id *)&self->_statusHorizontalLine);
  objc_destroyWeak((id *)&self->_statusStackView);
  objc_destroyWeak((id *)&self->_buttonsStackView);
  objc_destroyWeak((id *)&self->_updateRestoreProgressBar);
  objc_destroyWeak((id *)&self->_updateRestoreProgressMessage);
  objc_destroyWeak((id *)&self->_restoreButton);
  objc_destroyWeak((id *)&self->_updateButton);
  objc_destroyWeak((id *)&self->_softwareStatusLabel);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_softwareVersionButton);
}