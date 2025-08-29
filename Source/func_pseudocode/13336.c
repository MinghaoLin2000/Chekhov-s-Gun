-[TSUZipWriter addDataImpl:queue:completion:]
void __cdecl -[TSUZipWriter addDataImpl:queue:completion:](TSUZipWriter *self, SEL a2, id a3, id a4, id a5)
{
  dispatch_data_s *v8; // x19
  dispatch_queue_s *v9; // x20
  id v10; // x0
  void (__fastcall **v11)(_QWORD, _QWORD); // x21
  NSError *v12; // x22
  size_t size; // x24
  NSMutableArray *entryDatas; // x25
  dispatch_data_s *localFileHeaderData; // x26
  OS_dispatch_data *v16; // x0
  __int64 v17; // x19
  void *v18; // x20
  NSString *v19; // x20
  NSString *v20; // x19
  __int64 v21; // x0
  _QWORD applier[5]; // [xsp+20h] [xbp-C0h] BYREF
  _QWORD v23[4]; // [xsp+48h] [xbp-98h] BYREF
  id v24; // [xsp+68h] [xbp-78h]
  _QWORD block[4]; // [xsp+70h] [xbp-70h] BYREF
  id v26; // [xsp+90h] [xbp-50h]
  id v27; // [xsp+98h] [xbp-48h]

  v8 = (dispatch_data_s *)objc_retain(a3);
  v9 = (dispatch_queue_s *)objc_retain(a4);
  v10 = objc_retain(a5);
  if ( self->_isClosed )
  {
    v17 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DEC38);
    v18 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100173724(v17, v18);
    TSUSetCrashReporterInfo(
      "Fatal Assertion failure: %{public}s %{public}s:%d Already closed.",
      "-[TSUZipWriter addDataImpl:queue:completion:]",
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/utility/TSUZipWriter.m",
      233LL);
    v19 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUZipWriter addDataImpl:queue:completion:]"));
    v20 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUZipWriter.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v19,
      v20,
      233LL,
      1LL,
      "Already closed.");
    objc_release(v20);
    objc_release(v19);
    TSUCrashBreakpoint(v21);
    abort();
  }
  v11 = (void (__fastcall **)(_QWORD, _QWORD))v10;
  v12 = objc_retain(self->_error);
  if ( v12 )
  {
    if ( v11 )
    {
      if ( v9 )
      {
        block[0] = _NSConcreteStackBlock;
        block[1] = 3254779904LL;
        block[2] = sub_100152ED0;
        block[3] = &unk_1001D19E0;
        v27 = objc_retain(v11);
        v26 = objc_retain(v12);
        dispatch_async(v9, block);
        objc_release(v26);
        objc_release(v27);
      }
      else
      {
        ((void (__fastcall **)(_QWORD, NSError *))v11)[2](v11, v12);
      }
    }
    goto LABEL_15;
  }
  size = dispatch_data_get_size(v8);
  entryDatas = self->_entryDatas;
  if ( entryDatas )
  {
    localFileHeaderData = (dispatch_data_s *)self->_localFileHeaderData;
    if ( dispatch_data_get_size(localFileHeaderData) + size + self->_entryDataSize < 0x40000 )
    {
      -[NSMutableArray addObject:](entryDatas, "addObject:", v8);
      self->_entryDataSize += size;
      if ( v11 )
      {
        if ( v9 )
        {
          v23[0] = _NSConcreteStackBlock;
          v23[1] = 3254779904LL;
          v23[2] = sub_100152EE4;
          v23[3] = &unk_1001D29A8;
          v24 = objc_retain(v11);
          dispatch_async(v9, v23);
          objc_release(v24);
        }
        else
        {
          v11[2](v11, 0LL);
        }
      }
      goto LABEL_10;
    }
    -[TSUZipWriter writeData:](self, "writeData:", localFileHeaderData);
    v16 = self->_localFileHeaderData;
    self->_localFileHeaderData = 0LL;
    objc_release(v16);
    -[TSUZipWriter flushEntryData](self, "flushEntryData");
  }
  -[TSUZipWriter writeData:queue:completion:](self, "writeData:queue:completion:", v8, v9, v11);
LABEL_10:
  if ( self->_calculateSize )
    -[TSUZipWriterEntry setSize:](
      self->_currentEntry,
      "setSize:",
      (char *)-[TSUZipWriterEntry size](self->_currentEntry, "size") + size);
  if ( self->_calculateCRC )
  {
    applier[0] = _NSConcreteStackBlock;
    applier[1] = 3254779904LL;
    applier[2] = sub_100152EF8;
    applier[3] = &unk_1001D5398;
    applier[4] = self;
    dispatch_data_apply(v8, applier);
  }
LABEL_15:
  objc_release(v12);
  objc_release(v11);
  objc_release(v9);
  objc_release(v8);
}