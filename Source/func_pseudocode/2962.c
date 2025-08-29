-[DeviceEnterCurrentPasswordViewController .cxx_destruct]
void __cdecl -[DeviceEnterCurrentPasswordViewController .cxx_destruct](
        DeviceEnterCurrentPasswordViewController *self,
        SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_passwordPromptTitle, 0LL);
  objc_storeStrong((id *)&self->_cancelButtonTitle, 0LL);
  objc_storeStrong((id *)&self->_okButtonTitle, 0LL);
  objc_storeStrong((id *)&self->_password, 0LL);
  objc_destroyWeak((id *)&self->_okButton);
  objc_destroyWeak((id *)&self->_cancelButton);
  objc_destroyWeak((id *)&self->_passwordEntry);
  objc_destroyWeak((id *)&self->_passwordLabel);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_enterPasswordPrompt);
}