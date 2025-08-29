-[DeviceSetupViewController .cxx_destruct]
void __cdecl -[DeviceSetupViewController .cxx_destruct](DeviceSetupViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_deviceWarrantyViewController, 0LL);
  objc_storeStrong((id *)&self->_deviceEULAViewController, 0LL);
  objc_storeStrong((id *)&self->_deviceSetupInfo, 0LL);
  objc_storeStrong((id *)&self->_currentBackup, 0LL);
  objc_storeStrong((id *)&self->_backups, 0LL);
  objc_storeStrong((id *)&self->_sessionError, 0LL);
  objc_storeStrong((id *)&self->_responseHeaders, 0LL);
  objc_storeStrong((id *)&self->_activationFailedViewController, 0LL);
  objc_storeStrong((id *)&self->_progressViewController, 0LL);
  objc_storeStrong((id *)&self->_loadingViewController, 0LL);
  objc_storeStrong((id *)&self->_contentView, 0LL);
  objc_storeStrong((id *)&self->_currentURLString, 0LL);
  objc_storeStrong((id *)&self->_activationInfo, 0LL);
  objc_destroyWeak((id *)&self->_cancelButton);
  objc_destroyWeak((id *)&self->_continueButton);
  objc_destroyWeak((id *)&self->_backupOptionsContainerView);
  objc_destroyWeak((id *)&self->_dateAndTimeOfLastBackUpLabel);
  objc_destroyWeak((id *)&self->_backupsListPopUpButton);
  objc_destroyWeak((id *)&self->_restoreFromBackupButton);
  objc_destroyWeak((id *)&self->_setupAsNewButton);
  objc_destroyWeak((id *)&self->_explanationLabel);
  objc_destroyWeak((id *)&self->_welcomeLabel);
  objc_destroyWeak((id *)&self->_deviceImageView);
  objc_destroyWeak((id *)&self->_setupAssistantView);
  objc_destroyWeak((id *)&self->_activationWebView);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_contentViewContainer);
}