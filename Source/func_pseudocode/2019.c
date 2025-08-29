-[DeviceSettingsPodcastsViewController .cxx_destruct]
void __cdecl -[DeviceSettingsPodcastsViewController .cxx_destruct](DeviceSettingsPodcastsViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_detailsCheckedItems, 0LL);
  objc_storeStrong((id *)&self->_detailsModelDict, 0LL);
  objc_storeStrong((id *)&self->_playlistNodesLookup, 0LL);
  objc_storeStrong((id *)&self->_playlistNodes, 0LL);
  objc_storeStrong((id *)&self->_podcastEpisodes, 0LL);
  objc_storeStrong((id *)&self->_podcastNodesLookup, 0LL);
  objc_storeStrong((id *)&self->_podcastNodes, 0LL);
  objc_storeStrong((id *)&self->_episodesOfIndentConstraint, 0LL);
  objc_destroyWeak((id *)&self->_autoIncludeStackView);
  objc_destroyWeak((id *)&self->_tabView);
  objc_destroyWeak((id *)&self->_autoIncludeTrailingPopUpButton);
  objc_destroyWeak((id *)&self->_autoIncludeTrailingTextField);
  objc_destroyWeak((id *)&self->_autoIncludePopUpButton);
  objc_destroyWeak((id *)&self->_autoIncludeCheckBox);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_syncOntoCheckBox);
}