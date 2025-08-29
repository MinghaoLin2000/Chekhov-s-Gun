-[TSUContainedZipArchive newArchiveReadChannel]
id __cdecl -[TSUContainedZipArchive newArchiveReadChannel](TSUContainedZipArchive *self, SEL a2)
{
  return objc_retainAutoreleasedReturnValue(
           -[TSUZipArchive readChannelForEntry:validateCRC:](
             self->_zipArchive,
             "readChannelForEntry:validateCRC:",
             self->_entry,
             1LL));
}