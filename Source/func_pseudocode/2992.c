-[DeviceOptionsShuffleViewController .cxx_destruct]
void __cdecl -[DeviceOptionsShuffleViewController .cxx_destruct](DeviceOptionsShuffleViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_destroyWeak((id *)&self->_preventLimitVolumeChangesCheckBox);
  objc_destroyWeak((id *)&self->_limitVolumeSlider);
  objc_destroyWeak((id *)&self->_limitVolumeCheckBox);
  objc_destroyWeak((id *)&self->_voiceOverLanguageExplanationText);
  objc_destroyWeak((id *)&self->_voiceOverLanguagePopUpButton);
  objc_destroyWeak((id *)&self->_voiceOverLanguageLabelText);
  objc_destroyWeak((id *)&self->_enableVoiceOverCheckBox);
  objc_destroyWeak((id *)&self->_enableDiskUseCheckBox);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_enableSoundCheckCheckBox);
}