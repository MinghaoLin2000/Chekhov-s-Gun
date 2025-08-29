-[AMPPHMediaGroup .cxx_destruct]
void __cdecl -[AMPPHMediaGroup .cxx_destruct](AMPPHMediaGroup *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_childGroups, 0LL);
  objc_storeStrong((id *)&self->_mediaObjects, 0LL);
  objc_storeStrong((id *)&self->_mediaLibraryTypeIdentifier, 0LL);
  objc_storeStrong((id *)&self->_name, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_identifier, 0LL);
}