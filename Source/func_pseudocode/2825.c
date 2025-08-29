-[DeviceSettingsNode .cxx_destruct]
void __cdecl -[DeviceSettingsNode .cxx_destruct](DeviceSettingsNode *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_searchTerm, 0LL);
  objc_storeStrong((id *)&self->_filteredChildren, 0LL);
  objc_storeStrong((id *)&self->_parentID, 0LL);
  objc_storeStrong((id *)&self->_persistentID, 0LL);
  objc_storeStrong((id *)&self->_identifier, 0LL);
  objc_storeStrong((id *)&self->_children, 0LL);
  objc_destroyWeak((id *)&self->_parent);
  objc_storeStrong((id *)&self->_totalTime, 0LL);
  objc_storeStrong((id *)&self->_expirationDate, 0LL);
  objc_storeStrong((id *)&self->_fileSize, 0LL);
  objc_storeStrong((id *)&self->_image, 0LL);
  objc_storeStrong((id *)&self->_addedDate, 0LL);
  objc_storeStrong((id *)&self->_purchaseDate, 0LL);
  objc_storeStrong((id *)&self->_releaseDate, 0LL);
  objc_storeStrong((id *)&self->_sortArtistName, 0LL);
  objc_storeStrong((id *)&self->_artistName, 0LL);
  objc_storeStrong((id *)&self->_sortName, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_name, 0LL);
}