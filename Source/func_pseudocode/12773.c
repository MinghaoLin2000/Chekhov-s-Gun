-[TSUZipArchive sortedEntriesUsingComparator:]
id __cdecl -[TSUZipArchive sortedEntriesUsingComparator:](TSUZipArchive *self, SEL a2, id a3)
{
  return -[NSMutableOrderedSet sortedArrayUsingComparator:](self->_entries, "sortedArrayUsingComparator:", a3);
}