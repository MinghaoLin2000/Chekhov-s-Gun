-[SFUZipArchive allEntryNames]
id __cdecl -[SFUZipArchive allEntryNames](SFUZipArchive *self, SEL a2)
{
  return -[NSMutableDictionary allKeys](self->mEntries, "allKeys");
}