-[DeviceBackUpSettingsViewController .cxx_destruct]
void __cdecl -[DeviceBackUpSettingsViewController .cxx_destruct](DeviceBackUpSettingsViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_changePasswordTrailingConstraint, 0LL);
  objc_storeStrong((id *)&self->_encryptBaselineConstraint, 0LL);
  objc_destroyWeak((id *)&self->_encryptLocalBackupStackView);
  objc_destroyWeak((id *)&self->_backupButtonsStackView);
  objc_destroyWeak((id *)&self->_backupInfoStackView);
  objc_destroyWeak((id *)&self->_backupControlStackView);
  objc_destroyWeak((id *)&self->_encryptChangePasswordStackView);
  objc_destroyWeak((id *)&self->_changePasswordButton);
  objc_destroyWeak((id *)&self->_lastBackupTitleTextField);
  objc_destroyWeak((id *)&self->_manageBackupsButton);
  objc_destroyWeak((id *)&self->_restoreBackUpButton);
  objc_destroyWeak((id *)&self->_backUpNowButton);
  objc_destroyWeak((id *)&self->_encryptBackupCheckBox);
  objc_destroyWeak((id *)&self->_backUpToComputerRadio);
  objc_destroyWeak((id *)&self->_backUpToCloudRadio);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_dateAndTimeOfLastBackUpLabel);
}