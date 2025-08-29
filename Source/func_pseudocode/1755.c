-[DeviceSettingsTabContentViewController .cxx_destruct]
void __cdecl -[DeviceSettingsTabContentViewController .cxx_destruct](
        DeviceSettingsTabContentViewController *self,
        SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_allCheckBoxString, 0LL);
  objc_storeStrong((id *)&self->_folderImage, 0LL);
  objc_storeStrong((id *)&self->_geniusPlaylistImage, 0LL);
  objc_storeStrong((id *)&self->_smartPlaylistImage, 0LL);
  objc_storeStrong((id *)&self->_playlistImage, 0LL);
  objc_storeStrong((id *)&self->_disableAndCheckSelectedItems, 0LL);
  objc_storeStrong(&self->_savedExpandedState, 0LL);
  objc_storeStrong((id *)&self->_identifyingObjectToNodeMap, 0LL);
  objc_storeStrong((id *)&self->_checkedItems, 0LL);
  objc_storeStrong((id *)&self->_model, 0LL);
  objc_destroyWeak((id *)&self->_tabViewItem);
  objc_destroyWeak((id *)&self->_allCheckBoxOutlineView);
  objc_destroyWeak((id *)&self->_outlineView);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_searchField);
}