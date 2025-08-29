-[DeviceSettingsMusicViewController .cxx_destruct]
void __cdecl -[DeviceSettingsMusicViewController .cxx_destruct](DeviceSettingsMusicViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_genreNodesLookup, 0LL);
  objc_storeStrong((id *)&self->_genreNodes, 0LL);
  objc_storeStrong((id *)&self->_albumNodesLookup, 0LL);
  objc_storeStrong((id *)&self->_albumNodes, 0LL);
  objc_storeStrong((id *)&self->_artistNodesLookup, 0LL);
  objc_storeStrong((id *)&self->_artistNodes, 0LL);
  objc_storeStrong((id *)&self->_playlistNodesLookup, 0LL);
  objc_storeStrong((id *)&self->_playlistNodes, 0LL);
  objc_destroyWeak((id *)&self->_tabView);
  objc_destroyWeak((id *)&self->_autoFillFreeSpaceCheckBox);
  objc_destroyWeak((id *)&self->_includeVoiceMemosCheckBox);
  objc_destroyWeak((id *)&self->_includeDigitalBookletsCheckBox);
  objc_destroyWeak((id *)&self->_includeMusicVideosCheckBox);
  objc_destroyWeak((id *)&self->_updateSelectedRadioButton);
  objc_destroyWeak((id *)&self->_allRadioButton);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_syncOntoCheckBox);
}