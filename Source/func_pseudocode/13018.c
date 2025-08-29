-[TSUZipReadChannel close]
void __cdecl -[TSUZipReadChannel close](TSUZipReadChannel *self, SEL a2)
{
  TSUReadChannel *archiveReadChannel; // x0
  TSUZipEntry *entry; // x0
  TSUZipArchive *archive; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[TSUReadChannel close](self->_archiveReadChannel, "close");
  archiveReadChannel = self->_archiveReadChannel;
  self->_archiveReadChannel = 0LL;
  objc_release(archiveReadChannel);
  entry = self->_entry;
  self->_entry = 0LL;
  objc_release(entry);
  archive = self->_archive;
  self->_archive = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(archive);
}