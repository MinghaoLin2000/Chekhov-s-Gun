-[TSUZipArchive entryForName:]
id __cdecl -[TSUZipArchive entryForName:](TSUZipArchive *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x20
  id v6; // x21
  void *v7; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( v4 )
  {
    v5 = v4;
    v6 = objc_retainAutoreleasedReturnValue(-[TSUZipArchive normalizeEntryName:](self, "normalizeEntryName:", v4));
    objc_release(v5);
    v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_entriesMap, "objectForKeyedSubscript:", v6));
    objc_release(v6);
  }
  else
  {
    v7 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}