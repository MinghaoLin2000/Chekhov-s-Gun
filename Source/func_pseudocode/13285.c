-[TSUContainedZipArchive .cxx_destruct]
void __cdecl -[TSUContainedZipArchive .cxx_destruct](TSUContainedZipArchive *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_entry, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_zipArchive, 0LL);
}