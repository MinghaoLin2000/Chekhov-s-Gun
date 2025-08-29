-[DeviceConfigureAccessibilityViewController .cxx_destruct]
void __cdecl -[DeviceConfigureAccessibilityViewController .cxx_destruct](
        DeviceConfigureAccessibilityViewController *self,
        SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_deviceAccessibilityPrefs, 0LL);
  objc_destroyWeak((id *)&self->_cancelButton);
  objc_destroyWeak((id *)&self->_okButton);
  objc_destroyWeak((id *)&self->_showClosedCaptionsCheckBox);
  objc_destroyWeak((id *)&self->_useMonoAudioCheckBox);
  objc_destroyWeak((id *)&self->_speakAutofillTextCheckBox);
  objc_destroyWeak((id *)&self->_invertDisplayCheckBox);
  objc_destroyWeak((id *)&self->_enableZoomCheckBox);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_enableVoiceOverCheckBox);
}