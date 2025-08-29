-[TSPPackage .cxx_destruct]
void __cdecl -[TSPPackage .cxx_destruct](TSPPackage *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_decryptionKey, 0LL);
  objc_destroyWeak((id *)&self->_fileCoordinatorDelegate);
  objc_storeStrong((id *)&self->_packageDatas, 0LL);
  objc_storeStrong((id *)&self->_lastReloadError, 0LL);
  objc_storeStrong((id *)&self->_zipArchive, 0LL);
  objc_storeStrong((id *)&self->_documentProperties, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_accessQueue, 0LL);
}