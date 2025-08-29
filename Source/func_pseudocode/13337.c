-[TSUZipWriter flushEntryData]
void __cdecl -[TSUZipWriter flushEntryData](TSUZipWriter *self, SEL a2)
{
  NSMutableArray *v3; // x20
  void *v4; // x0
  void *v5; // x21
  __int64 v6; // x22
  void *v7; // x23
  NSMutableArray *entryDatas; // x0
  __int128 v9; // [xsp+0h] [xbp-100h] BYREF
  __int128 v10; // [xsp+10h] [xbp-F0h]
  __int128 v11; // [xsp+20h] [xbp-E0h]
  __int128 v12; // [xsp+30h] [xbp-D0h]
  _BYTE v13[128]; // [xsp+48h] [xbp-B8h] BYREF

  v9 = 0u;
  v10 = 0u;
  v11 = 0u;
  v12 = 0u;
  v3 = objc_retain(self->_entryDatas);
  v4 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
         v3,
         "countByEnumeratingWithState:objects:count:",
         &v9,
         v13,
         16LL);
  if ( v4 )
  {
    v5 = v4;
    v6 = *(_QWORD *)v10;
    do
    {
      v7 = 0LL;
      do
      {
        if ( *(_QWORD *)v10 != v6 )
          objc_enumerationMutation(v3);
        -[TSUZipWriter writeData:](self, "writeData:", *(_QWORD *)(*((_QWORD *)&v9 + 1) + 8LL * (_QWORD)v7), (_QWORD)v9);
        v7 = (char *)v7 + 1;
      }
      while ( v5 != v7 );
      v5 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
             v3,
             "countByEnumeratingWithState:objects:count:",
             &v9,
             v13,
             16LL);
    }
    while ( v5 );
  }
  objc_release(v3);
  entryDatas = self->_entryDatas;
  self->_entryDatas = 0LL;
  objc_release(entryDatas);
  self->_entryDataSize = 0LL;
}