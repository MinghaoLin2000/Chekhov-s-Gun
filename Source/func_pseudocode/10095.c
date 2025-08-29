-[TSPDatabaseObjectWithFileState .cxx_destruct]
void __cdecl -[TSPDatabaseObjectWithFileState .cxx_destruct](TSPDatabaseObjectWithFileState *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_packageURL, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_fileState, 0LL);
}