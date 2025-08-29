-[DeviceSettingsMoviesViewController .cxx_destruct]
void __cdecl -[DeviceSettingsMoviesViewController .cxx_destruct](DeviceSettingsMoviesViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_movieNodesLookup, 0LL);
  objc_storeStrong((id *)&self->_movieNodes, 0LL);
  objc_storeStrong((id *)&self->_playlistNodesLookup, 0LL);
  objc_storeStrong((id *)&self->_playlistNodes, 0LL);
  objc_storeStrong((id *)&self->_deviceRentals, 0LL);
  objc_storeStrong((id *)&self->_localRentals, 0LL);
  objc_storeStrong((id *)&self->_deviceLibraryRentals, 0LL);
  objc_storeStrong((id *)&self->_libraryRentals, 0LL);
  objc_storeStrong((id *)&self->_trailingModel, 0LL);
  objc_storeStrong((id *)&self->_autoIncludeBaselineConstraint, 0LL);
  objc_storeStrong((id *)&self->_autoIncludeTrailingTextFieldLeadingIndentConstraint, 0LL);
  objc_destroyWeak((id *)&self->_autoIncludeStackView);
  objc_destroyWeak((id *)&self->_tabView);
  objc_destroyWeak((id *)&self->_autoIncludeTrailingTextField);
  objc_destroyWeak((id *)&self->_autoIncludePopUpButton);
  objc_destroyWeak((id *)&self->_autoIncludeCheckBox);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_syncOntoCheckBox);
}