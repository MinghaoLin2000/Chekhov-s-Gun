-[AMPPHMediaObject .cxx_destruct]
void __cdecl -[AMPPHMediaObject .cxx_destruct](AMPPHMediaObject *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_userDescription, 0LL);
  objc_storeStrong((id *)&self->_modificationDate, 0LL);
  objc_storeStrong((id *)&self->_creationDate, 0LL);
  objc_storeStrong((id *)&self->_videoComplementURL, 0LL);
  objc_storeStrong((id *)&self->_thumbURL, 0LL);
  objc_storeStrong((id *)&self->_originalURL, 0LL);
  objc_storeStrong((id *)&self->_currentVersionURL, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_identifier, 0LL);
}