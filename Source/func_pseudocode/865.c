-[DeviceSettingsViewController .cxx_destruct]
void __cdecl -[DeviceSettingsViewController .cxx_destruct](DeviceSettingsViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_syncOntoFormat, 0LL);
  objc_destroyWeak((id *)&self->_tabView);
  objc_destroyWeak((id *)&self->_syncOntoCheckBox);
  objc_storeStrong((id *)&self->_queue, 0LL);
  objc_storeStrong((id *)&self->_folderImage, 0LL);
  objc_storeStrong((id *)&self->_geniusPlaylistImage, 0LL);
  objc_storeStrong((id *)&self->_smartPlaylistImage, 0LL);
  objc_storeStrong((id *)&self->_playlistImage, 0LL);
  objc_storeStrong((id *)&self->_checkedItems, 0LL);
  objc_storeStrong((id *)&self->_dataNodesLookup, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_dataNodes, 0LL);
}