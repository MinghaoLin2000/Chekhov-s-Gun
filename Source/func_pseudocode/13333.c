-[TSUZipWriter beginEntryWithNameImpl:force32BitSize:lastModificationDate:size:CRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[TSUZipWriter beginEntryWithNameImpl:force32BitSize:lastModificationDate:size:CRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:](
        TSUZipWriter *self,
        SEL a2,
        id a3,
        bool a4,
        id a5,
        unsigned __int64 a6,
        unsigned int a7,
        bool a8)
{
  _BOOL4 v8; // w24
  __int64 v9; // x22
  id v14; // x19
  NSDate *v15; // x0
  NSDate *v16; // x20
  void *v17; // x26
  int v18; // w21
  os_log_s *v19; // x22
  NSString *v20; // x22
  NSString *v21; // x23
  TSUZipWriterEntry *v22; // x0
  TSUZipWriterEntry *currentEntry; // x8
  _BOOL4 v24; // w8
  unsigned __int64 v25; // x2
  bool v26; // w8
  _BOOL4 v27; // w8
  __int64 v28; // x2
  NSDate *v29; // x8
  NSDate *lastModificationDateIfSizeAndCRCMatches; // x0
  NSDate *newEntryLastModificationDate; // x2
  id v32; // x22
  NSMutableArray *v33; // x8
  NSMutableArray *entryDatas; // x0
  OS_dispatch_data *localFileHeaderData; // x0
  __int64 v36; // x19
  void *v37; // x20
  NSString *v38; // x20
  NSString *v39; // x19
  __int64 v40; // x0

  v8 = a8;
  v9 = *(_QWORD *)&a7;
  v14 = objc_retain(a3);
  v15 = (NSDate *)objc_retain(a5);
  if ( self->_isClosed )
  {
    v36 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DEBC8);
    v37 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10017369C(v36, v37);
    TSUSetCrashReporterInfo(
      "Fatal Assertion failure: %{public}s %{public}s:%d Already closed.",
      "-[TSUZipWriter beginEntryWithNameImpl:force32BitSize:lastModificationDate:size:CRC:forceCalculatingSizeAndCRCForPr"
      "eservingLastModificationDate:]",
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/utility/TSUZipWriter.m",
      157LL);
    v38 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUZipWriter beginEntryWithNameImpl:force32BitSize:lastModificationDate:size:CRC:forceCalculatingSizeAnd"
              "CRCForPreservingLastModificationDate:]"));
    v39 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUZipWriter.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v38,
      v39,
      157LL,
      1LL,
      "Already closed.");
    objc_release(v39);
    objc_release(v38);
    TSUCrashBreakpoint(v40);
    abort();
  }
  v16 = v15;
  if ( !self->_error )
  {
    -[TSUZipWriter finishEntry](self, "finishEntry");
    v17 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_entriesMap, "objectForKeyedSubscript:", v14));
    objc_release(v17);
    if ( v17 )
    {
      v18 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001DEBE8);
      v19 = (os_log_s *)TSUAssertCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_1001735E0((int)v14, v18, v19);
      v20 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSUZipWriter beginEntryWithNameImpl:force32BitSize:lastModificationDate:size:CRC:forceCalculatingSizeA"
                "ndCRCForPreservingLastModificationDate:]"));
      v21 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/utility/TSUZipWriter.m"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v20,
        v21,
        166LL,
        0LL,
        "Already have an entry with name: %@",
        v14);
      objc_release(v21);
      objc_release(v20);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    else
    {
      v22 = objc_alloc_init(&OBJC_CLASS___TSUZipWriterEntry);
      currentEntry = self->_currentEntry;
      self->_currentEntry = v22;
      objc_release(currentEntry);
      -[TSUZipWriterEntry setName:](self->_currentEntry, "setName:", v14);
      -[TSUZipWriterEntry setOffset:](self->_currentEntry, "setOffset:", self->_currentOffset);
      if ( a6 )
        v24 = v8;
      else
        v24 = 1;
      self->_calculateSize = v24;
      if ( v24 )
        v25 = 0LL;
      else
        v25 = a6;
      -[TSUZipWriterEntry setSize:](self->_currentEntry, "setSize:", v25);
      v26 = self->_calculateSize && a4;
      self->_force32BitSize = v26;
      if ( (_DWORD)v9 )
        v27 = v8;
      else
        v27 = 1;
      self->_calculateCRC = v27;
      v28 = v9;
      if ( v27 )
        v28 = crc32(0, 0LL, 0LL);
      -[TSUZipWriterEntry setCRC:](self->_currentEntry, "setCRC:", v28);
      if ( v8 )
      {
        -[TSUZipWriterEntry setLastModificationDate:](
          self->_currentEntry,
          "setLastModificationDate:",
          self->_newEntryLastModificationDate);
        self->_sizeToMatch = a6;
        self->_CRCToMatch = v9;
        v29 = objc_retain(v16);
        lastModificationDateIfSizeAndCRCMatches = self->_lastModificationDateIfSizeAndCRCMatches;
        self->_lastModificationDateIfSizeAndCRCMatches = v29;
      }
      else
      {
        newEntryLastModificationDate = v16;
        if ( !v16 )
          newEntryLastModificationDate = self->_newEntryLastModificationDate;
        -[TSUZipWriterEntry setLastModificationDate:](
          self->_currentEntry,
          "setLastModificationDate:",
          newEntryLastModificationDate);
        self->_sizeToMatch = 0LL;
        self->_CRCToMatch = 0;
        lastModificationDateIfSizeAndCRCMatches = self->_lastModificationDateIfSizeAndCRCMatches;
        self->_lastModificationDateIfSizeAndCRCMatches = 0LL;
      }
      objc_release(lastModificationDateIfSizeAndCRCMatches);
      v32 = objc_retainAutoreleasedReturnValue(-[TSUZipWriter localFileHeaderDataForEntry:](self, "localFileHeaderDataForEntry:", self->_currentEntry));
      if ( (self->_calculateSize || self->_calculateCRC) && (self->_options & 8) == 0 )
      {
        objc_storeStrong((id *)&self->_localFileHeaderData, v32);
        v33 = (NSMutableArray *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
        entryDatas = self->_entryDatas;
        self->_entryDatas = v33;
      }
      else
      {
        -[TSUZipWriter writeData:](self, "writeData:", v32);
        localFileHeaderData = self->_localFileHeaderData;
        self->_localFileHeaderData = 0LL;
        objc_release(localFileHeaderData);
        entryDatas = self->_entryDatas;
        self->_entryDatas = 0LL;
      }
      objc_release(entryDatas);
      self->_entryDataSize = 0LL;
      objc_release(v32);
    }
  }
  objc_release(v16);
  objc_release(v14);
}