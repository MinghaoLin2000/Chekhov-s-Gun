-[DeviceEULAViewController .cxx_destruct]
void __cdecl -[DeviceEULAViewController .cxx_destruct](DeviceEULAViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_destroyWeak((id *)&self->_saveButton);
  objc_destroyWeak((id *)&self->_cancelButton);
  objc_destroyWeak((id *)&self->_continueButton);
  objc_destroyWeak((id *)&self->_miniDividerLine);
  objc_destroyWeak((id *)&self->_agreeToCheckBox);
  objc_destroyWeak((id *)&self->_bottomDividerLine);
  objc_destroyWeak((id *)&self->_textView);
  objc_destroyWeak((id *)&self->_topDividerLine);
  objc_destroyWeak((id *)&self->_descriptionTextField);
  objc_destroyWeak((id *)&self->_titleTextField);
  objc_storeStrong(&self->_cancelButtonAction, 0LL);
  objc_storeStrong(&self->_continueButtonAction, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_licenseAgreementText, 0LL);
}