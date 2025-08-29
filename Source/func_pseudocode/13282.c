-[TSUContainedZipArchive archiveLength]
unsigned __int64 __cdecl -[TSUContainedZipArchive archiveLength](TSUContainedZipArchive *self, SEL a2)
{
  return -[TSUZipEntry size](self->_entry, "size");
}