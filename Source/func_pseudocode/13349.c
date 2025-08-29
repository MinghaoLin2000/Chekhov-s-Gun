-[TSUZipWriter writeCentralDirectory]
void __cdecl -[TSUZipWriter writeCentralDirectory](TSUZipWriter *self, SEL a2)
{
  signed __int64 currentOffset; // x20
  NSMutableArray *v4; // x21
  void *v5; // x0
  void *v6; // x22
  __int64 v7; // x23
  void *v8; // x24
  __int128 v9; // [xsp+0h] [xbp-110h] BYREF
  __int128 v10; // [xsp+10h] [xbp-100h]
  __int128 v11; // [xsp+20h] [xbp-F0h]
  __int128 v12; // [xsp+30h] [xbp-E0h]
  _BYTE v13[128]; // [xsp+48h] [xbp-C8h] BYREF

  currentOffset = self->_currentOffset;
  v9 = 0u;
  v10 = 0u;
  v11 = 0u;
  v12 = 0u;
  v4 = objc_retain(self->_entries);
  v5 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
         v4,
         "countByEnumeratingWithState:objects:count:",
         &v9,
         v13,
         16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v10;
    do
    {
      v8 = 0LL;
      do
      {
        if ( *(_QWORD *)v10 != v7 )
          objc_enumerationMutation(v4);
        -[TSUZipWriter writeCentralFileHeaderDataForEntry:](
          self,
          "writeCentralFileHeaderDataForEntry:",
          *(_QWORD *)(*((_QWORD *)&v9 + 1) + 8LL * (_QWORD)v8),
          (_QWORD)v9);
        v8 = (char *)v8 + 1;
      }
      while ( v6 != v8 );
      v6 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
             v4,
             "countByEnumeratingWithState:objects:count:",
             &v9,
             v13,
             16LL);
    }
    while ( v6 );
  }
  objc_release(v4);
  -[TSUZipWriter writeEndOfCentralDirectoryDataWithOffset:size:entryCount:](
    self,
    "writeEndOfCentralDirectoryDataWithOffset:size:entryCount:",
    currentOffset,
    self->_currentOffset - currentOffset,
    -[NSMutableArray count](self->_entries, "count"));
}