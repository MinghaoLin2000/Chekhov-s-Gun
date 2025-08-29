-[DeviceOptionsIPodViewController .cxx_destruct]
void __cdecl -[DeviceOptionsIPodViewController .cxx_destruct](DeviceOptionsIPodViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_destroyWeak((id *)&self->_useSystemVoiceCheckBox);
  objc_destroyWeak((id *)&self->_enableSpokenMenusCheckBox);
  objc_destroyWeak((id *)&self->_enableVoiceOverCheckBox);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_enableDiskUseCheckBox);
}