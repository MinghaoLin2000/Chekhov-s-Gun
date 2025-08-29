-[TSPFilePackageWriter finalizeComponentAndDataSectionWithCompletionHandler:]
void __cdecl -[TSPFilePackageWriter finalizeComponentAndDataSectionWithCompletionHandler:](
        TSPFilePackageWriter *self,
        SEL a2,
        id a3)
{
  void (__fastcall **v4)(id, _QWORD); // x19
  TSUZipFileWriter *delayedZipArchiveWriter; // x0
  NSProgress *v6; // x20
  id v7; // x22
  NSProgress *v8; // x22
  TSUZipFileWriter *v9; // x22
  unsigned __int64 v10; // x21
  __int64 v11; // x21
  void *v12; // x22
  NSString *v13; // x22
  NSString *v14; // x23
  TSUZipFileWriter *v15; // x23
  dispatch_queue_global_s *v16; // x22
  _QWORD v17[4]; // [xsp+0h] [xbp-D0h] BYREF
  id v18; // [xsp+20h] [xbp-B0h]
  TSPFilePackageWriter *v19; // [xsp+28h] [xbp-A8h]
  id v20; // [xsp+30h] [xbp-A0h]
  __int64 *v21; // [xsp+38h] [xbp-98h]
  objc_super v22; // [xsp+40h] [xbp-90h] BYREF
  _QWORD v23[6]; // [xsp+50h] [xbp-80h] BYREF
  __int64 v24; // [xsp+80h] [xbp-50h] BYREF
  __int64 *v25; // [xsp+88h] [xbp-48h]
  __int64 v26; // [xsp+90h] [xbp-40h]
  __int64 v27; // [xsp+98h] [xbp-38h]

  v4 = (void (__fastcall **)(id, _QWORD))objc_retain(a3);
  -[TSPPackageWriter closeCurrentChannel](self, "closeCurrentChannel");
  delayedZipArchiveWriter = self->_delayedZipArchiveWriter;
  if ( delayedZipArchiveWriter && -[TSUZipWriter entriesCount](delayedZipArchiveWriter, "entriesCount") )
  {
    v24 = 0LL;
    v25 = &v24;
    v26 = 0x2020000000LL;
    v27 = 0LL;
    v6 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter progress](self, "progress"));
    if ( v6 )
    {
      v7 = objc_retainAutoreleasedReturnValue(-[TSPFilePackageWriter componentZipArchiveWriter](self, "componentZipArchiveWriter"));
      v23[0] = _NSConcreteStackBlock;
      v23[1] = 3254779904LL;
      v23[2] = sub_10002406C;
      v23[3] = &unk_1001D2838;
      v23[4] = self;
      v23[5] = &v24;
      objc_msgSend(v7, "enumerateEntriesUsingBlock:", v23);
      objc_release(v7);
      if ( self->_onlyWriteToDelayedZipArchive )
      {
        -[NSProgress becomeCurrentWithPendingUnitCount:](
          v6,
          "becomeCurrentWithPendingUnitCount:",
          -[NSProgress tsu_pendingUnitCountForIncompleteProgress:](
            v6,
            "tsu_pendingUnitCountForIncompleteProgress:",
            v25[3]));
        v8 = objc_retainAutoreleasedReturnValue(+[NSProgress progressWithTotalUnitCount:](&OBJC_CLASS___NSProgress, "progressWithTotalUnitCount:", 1LL));
        -[NSProgress setCompletedUnitCount:](v8, "setCompletedUnitCount:", 1LL);
        -[NSProgress resignCurrent](v6, "resignCurrent");
        objc_release(v8);
LABEL_9:
        v22.receiver = self;
        v22.super_class = (Class)&OBJC_CLASS___TSPFilePackageWriter;
        v9 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter zipArchiveWriter](&v22, "zipArchiveWriter"));
        v10 = -[TSUZipWriter entriesCount](v9, "entriesCount");
        objc_release(v9);
        if ( v10 )
        {
          v11 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                  &OBJC_CLASS___TSUAssertionHandler,
                  "_atomicIncrementAssertCount");
          if ( TSUAssertCat_init_token != -1 )
            dispatch_once(&TSUAssertCat_init_token, &stru_1001D2868);
          v12 = TSUAssertCat_log_t;
          if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
            sub_10016B544(v11, v12);
          v13 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithUTF8String:](
                    &OBJC_CLASS___NSString,
                    "stringWithUTF8String:",
                    "-[TSPFilePackageWriter finalizeComponentAndDataSectionWithCompletionHandler:]"));
          v14 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithUTF8String:](
                    &OBJC_CLASS___NSString,
                    "stringWithUTF8String:",
                    "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/"
                    "Sources/iWorkXPC/shared/persistence/src/TSPFilePackageWriter.mm"));
          +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
            &OBJC_CLASS___TSUAssertionHandler,
            "handleFailureInFunction:file:lineNumber:isFatal:description:",
            v13,
            v14,
            247LL,
            0LL,
            "Only the delayed zip archive writer should have entries");
          objc_release(v14);
          objc_release(v13);
          +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
        }
        if ( v4 )
          v4[2](v4, 0LL);
        goto LABEL_18;
      }
    }
    else if ( self->_onlyWriteToDelayedZipArchive )
    {
      goto LABEL_9;
    }
    v15 = self->_delayedZipArchiveWriter;
    v16 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
    v17[0] = _NSConcreteStackBlock;
    v17[1] = 3254779904LL;
    v17[2] = sub_1000241E4;
    v17[3] = &unk_1001D28B8;
    v18 = objc_retain(v6);
    v21 = &v24;
    v19 = self;
    v20 = objc_retain(v4);
    -[TSUZipWriter closeWithQueue:completion:](v15, "closeWithQueue:completion:", v16, v17);
    objc_release(v16);
    objc_release(v20);
    objc_release(v18);
LABEL_18:
    objc_release(v6);
    _Block_object_dispose(&v24, 8);
    goto LABEL_19;
  }
  if ( v4 )
    v4[2](v4, 0LL);
LABEL_19:
  objc_release(v4);
}