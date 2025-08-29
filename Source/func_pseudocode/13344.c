-[TSUZipWriter addExistingEntryImpl:]
void __cdecl -[TSUZipWriter addExistingEntryImpl:](TSUZipWriter *self, SEL a2, id a3)
{
  id v4; // x19
  TSUZipWriterEntry *v5; // x21
  void *v6; // x22
  void *v7; // x22
  void *v8; // x0
  NSMutableDictionary *entriesMap; // x22
  void *v10; // x23
  NSArray *sortedEntries; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_alloc_init(&OBJC_CLASS___TSUZipWriterEntry);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  -[TSUZipWriterEntry setName:](v5, "setName:", v6);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "lastModificationDate"));
  -[TSUZipWriterEntry setLastModificationDate:](v5, "setLastModificationDate:", v7);
  objc_release(v7);
  if ( (unsigned int)objc_msgSend(v4, "isCompressed") )
    v8 = objc_msgSend(v4, "compressedSize");
  else
    v8 = objc_msgSend(v4, "size");
  -[TSUZipWriterEntry setSize:](v5, "setSize:", v8);
  -[TSUZipWriterEntry setOffset:](v5, "setOffset:", objc_msgSend(v4, "offset"));
  -[TSUZipWriterEntry setCRC:](v5, "setCRC:", objc_msgSend(v4, "CRC"));
  -[NSMutableArray addObject:](self->_entries, "addObject:", v5);
  entriesMap = self->_entriesMap;
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](entriesMap, "setObject:forKeyedSubscript:", v5, v10);
  objc_release(v10);
  sortedEntries = self->_sortedEntries;
  self->_sortedEntries = 0LL;
  objc_release(sortedEntries);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}