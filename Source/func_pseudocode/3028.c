-[DeviceChooseBackupViewController .cxx_destruct]
void __cdecl -[DeviceChooseBackupViewController .cxx_destruct](DeviceChooseBackupViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_backupPassword, 0LL);
  objc_storeStrong((id *)&self->_currentBackup, 0LL);
  objc_storeStrong((id *)&self->_backups, 0LL);
  objc_destroyWeak((id *)&self->_restoreButton);
  objc_destroyWeak((id *)&self->_passwordEntryTextField);
  objc_destroyWeak((id *)&self->_passwordPromptTextField);
  objc_destroyWeak((id *)&self->_dateAndTimeOfBackupTextField);
  objc_destroyWeak((id *)&self->_backupsListPopUpButton);
  objc_destroyWeak((id *)&self->_deviceNameTextField);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_dialogTextField);
}