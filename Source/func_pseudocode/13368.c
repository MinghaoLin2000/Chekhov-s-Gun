-[TSUZipWriter truncateToNumberOfEntriesImpl:completion:]
void __cdecl -[TSUZipWriter truncateToNumberOfEntriesImpl:completion:](
        TSUZipWriter *self,
        SEL a2,
        unsigned __int64 a3,
        id a4)
{
  void (__fastcall **v6)(id, _QWORD); // x19
  id v7; // x21
  unsigned __int64 v8; // x23
  void *v9; // x24
  NSMutableDictionary *entriesMap; // x25
  void *v11; // x26
  void *v12; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v6 = (void (__fastcall **)(id, _QWORD))objc_retain(a4);
  if ( -[TSUZipWriter entriesCountImpl](self, "entriesCountImpl") <= a3 )
  {
    if ( v6 )
      v6[2](v6, 0LL);
  }
  else
  {
    v7 = objc_retainAutoreleasedReturnValue(-[TSUZipWriter sortedEntriesImpl](self, "sortedEntriesImpl"));
    if ( (unsigned __int64)objc_msgSend(v7, "count") > a3 )
    {
      v8 = a3;
      do
      {
        v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectAtIndexedSubscript:", v8));
        -[NSMutableArray removeObject:](self->_entries, "removeObject:", v9);
        entriesMap = self->_entriesMap;
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "name"));
        -[NSMutableDictionary removeObjectForKey:](entriesMap, "removeObjectForKey:", v11);
        objc_release(v11);
        objc_release(v9);
        ++v8;
      }
      while ( v8 < (unsigned __int64)objc_msgSend(v7, "count") );
    }
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectAtIndexedSubscript:", a3));
    -[TSUZipWriter setEntryInsertionOffsetImpl:](self, "setEntryInsertionOffsetImpl:", objc_msgSend(v12, "offset"));
    -[TSUZipWriter truncateToOffsetImpl:completion:](
      self,
      "truncateToOffsetImpl:completion:",
      objc_msgSend(v12, "offset"),
      v6);
    objc_release(v12);
    objc_release(v7);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}