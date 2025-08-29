-[TSUZipArchive initWithOptions:]
TSUZipArchive *__cdecl -[TSUZipArchive initWithOptions:](TSUZipArchive *self, SEL a2, unsigned __int64 a3)
{
  TSUZipArchive *v4; // x0
  TSUZipArchive *v5; // x19
  NSMutableDictionary *v6; // x0
  NSMutableDictionary *entriesMap; // x8
  NSMutableOrderedSet *v8; // x0
  NSMutableOrderedSet *entries; // x8
  objc_super v11; // [xsp+0h] [xbp-20h] BYREF

  v11.receiver = self;
  v11.super_class = (Class)&OBJC_CLASS___TSUZipArchive;
  v4 = -[TSUZipArchive init](&v11, "init");
  v5 = v4;
  if ( v4 )
  {
    v4->_options = a3;
    v6 = (NSMutableDictionary *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
    entriesMap = v5->_entriesMap;
    v5->_entriesMap = v6;
    objc_release(entriesMap);
    v8 = (NSMutableOrderedSet *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableOrderedSet);
    entries = v5->_entries;
    v5->_entries = v8;
    objc_release(entries);
  }
  return v5;
}