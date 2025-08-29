-[TSUZipArchive entriesCount]
unsigned __int64 __cdecl -[TSUZipArchive entriesCount](TSUZipArchive *self, SEL a2)
{
  return (unsigned __int64)-[NSMutableOrderedSet count](self->_entries, "count");
}