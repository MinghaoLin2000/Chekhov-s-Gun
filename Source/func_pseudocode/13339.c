-[TSUZipWriter finishEntry]
void __cdecl -[TSUZipWriter finishEntry](TSUZipWriter *self, SEL a2)
{
  TSUZipWriterEntry *currentEntry; // x2
  void *v4; // x20
  id v5; // x20
  void *v6; // x0
  unsigned int v7; // w0
  id v8; // x20
  OS_dispatch_data *localFileHeaderData; // x0
  TSUZipWriterEntry *v10; // x20
  NSMutableDictionary *entriesMap; // x21
  NSString *v12; // x22
  NSArray *sortedEntries; // x0
  TSUZipWriterEntry *v14; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  currentEntry = self->_currentEntry;
  if ( !currentEntry )
    return;
  if ( self->_calculateSize || self->_calculateCRC )
  {
    if ( self->_force32BitSize )
    {
      if ( -[TSUZipWriterEntry size](self->_currentEntry, "size") >> 32 )
      {
        if ( TSUDefaultCat_init_token != -1 )
          dispatch_once(&TSUDefaultCat_init_token, &stru_1001DECC8);
        v4 = TSUDefaultCat_log_t;
        if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
          sub_1001738BC(v4);
        v5 = objc_retainAutoreleasedReturnValue(
               +[NSError tsu_fileWriteUnknownErrorWithUserInfo:](
                 &OBJC_CLASS___NSError,
                 "tsu_fileWriteUnknownErrorWithUserInfo:",
                 0LL));
        -[TSUZipWriter handleWriteError:](self, "handleWriteError:", v5);
        objc_release(v5);
        return;
      }
      currentEntry = self->_currentEntry;
    }
    if ( self->_lastModificationDateIfSizeAndCRCMatches )
    {
      v6 = -[TSUZipWriterEntry size](currentEntry, "size");
      currentEntry = self->_currentEntry;
      if ( v6 == (void *)self->_sizeToMatch )
      {
        v7 = -[TSUZipWriterEntry CRC](self->_currentEntry, "CRC");
        currentEntry = self->_currentEntry;
        if ( v7 == self->_CRCToMatch )
        {
          -[TSUZipWriterEntry setLastModificationDate:](
            self->_currentEntry,
            "setLastModificationDate:",
            self->_lastModificationDateIfSizeAndCRCMatches);
          currentEntry = self->_currentEntry;
        }
      }
    }
    v8 = objc_retainAutoreleasedReturnValue(-[TSUZipWriter localFileHeaderDataForEntry:](self, "localFileHeaderDataForEntry:", currentEntry));
    if ( self->_entryDatas )
    {
      -[TSUZipWriter writeData:](self, "writeData:", v8);
      localFileHeaderData = self->_localFileHeaderData;
      self->_localFileHeaderData = 0LL;
      objc_release(localFileHeaderData);
      -[TSUZipWriter flushEntryData](self, "flushEntryData");
    }
    else
    {
      -[TSUZipWriter writeData:offset:](
        self,
        "writeData:offset:",
        v8,
        -[TSUZipWriterEntry offset](self->_currentEntry, "offset"));
    }
    objc_release(v8);
    currentEntry = self->_currentEntry;
  }
  -[NSMutableArray addObject:](self->_entries, "addObject:", currentEntry);
  entriesMap = self->_entriesMap;
  v10 = self->_currentEntry;
  v12 = objc_retainAutoreleasedReturnValue(-[TSUZipWriterEntry name](v10, "name"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](entriesMap, "setObject:forKeyedSubscript:", v10, v12);
  objc_release(v12);
  sortedEntries = self->_sortedEntries;
  self->_sortedEntries = 0LL;
  objc_release(sortedEntries);
  v14 = self->_currentEntry;
  self->_currentEntry = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v14);
}