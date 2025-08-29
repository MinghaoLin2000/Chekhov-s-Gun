-[DeviceBackupChangePasswordViewController .cxx_destruct]
void __cdecl -[DeviceBackupChangePasswordViewController .cxx_destruct](
        DeviceBackupChangePasswordViewController *self,
        SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_oldPassword, 0LL);
  objc_storeStrong((id *)&self->_password, 0LL);
  objc_storeStrong((id *)&self->_parameters, 0LL);
  objc_destroyWeak((id *)&self->_cancelButton);
  objc_destroyWeak((id *)&self->_okayButton);
  objc_destroyWeak((id *)&self->_rememberPasswordCheckbox);
  objc_destroyWeak((id *)&self->_verifyStackView);
  objc_destroyWeak((id *)&self->_passwordStackView);
  objc_destroyWeak((id *)&self->_userNameStackView);
  objc_destroyWeak((id *)&self->_passwordPromptSecondary);
  objc_destroyWeak((id *)&self->_passwordPrompt);
  objc_destroyWeak((id *)&self->_oldPasswordLabel);
  objc_destroyWeak((id *)&self->_oldPasswordEntry);
  objc_destroyWeak((id *)&self->_passwordEntrySecondary);
  objc_destroyWeak((id *)&self->_passwordEntry);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_enterPasswordPrompt);
}