-[SFUZipArchive entryWithName:]
id __cdecl -[SFUZipArchive entryWithName:](SFUZipArchive *self, SEL a2, id a3)
{
  return -[NSMutableDictionary objectForKey:](self->mEntries, "objectForKey:", a3);
}