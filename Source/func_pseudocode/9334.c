-[TSPFilePackageWriter truncateZipAtFirstDeletedData:]
void __cdecl -[TSPFilePackageWriter truncateZipAtFirstDeletedData:](TSPFilePackageWriter *self, SEL a2, id a3)
{
  id v4; // x21
  void *v5; // x19
  id v6; // x20
  unsigned __int64 v7; // x24
  _BOOL4 onlyWriteToDelayedZipArchive; // w19
  NSArray *v9; // x23
  unsigned __int64 v10; // x26
  bool v11; // zf
  __int64 v12; // x24
  id v13; // x28
  id v14; // x0
  _BOOL4 v15; // w24
  void *v16; // x24
  void *v17; // x27
  TSUZipFileWriter *v18; // [xsp+28h] [xbp-B8h]
  objc_super v19; // [xsp+30h] [xbp-B0h] BYREF
  _QWORD v20[5]; // [xsp+40h] [xbp-A0h] BYREF
  id v21; // [xsp+68h] [xbp-78h]
  uint8_t buf[4]; // [xsp+70h] [xbp-70h] BYREF
  void *v23; // [xsp+74h] [xbp-6Ch]
  __int16 v24; // [xsp+7Ch] [xbp-64h]
  unsigned __int64 v25; // [xsp+7Eh] [xbp-62h]

  v4 = objc_retain(a3);
  v20[0] = _NSConcreteStackBlock;
  v20[1] = 3254779904LL;
  v20[2] = sub_100023538;
  v20[3] = &unk_1001D2788;
  v20[4] = self;
  v5 = objc_retain(objc_msgSend(v4, "mutableCopy"));
  v21 = v5;
  objc_msgSend(v4, "enumerateKeysAndObjectsUsingBlock:", v20);
  v6 = objc_retain(v5);
  objc_release(v4);
  v19.receiver = self;
  v19.super_class = (Class)&OBJC_CLASS___TSPFilePackageWriter;
  v18 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter zipArchiveWriter](&v19, "zipArchiveWriter"));
  v7 = -[TSUZipWriter entriesCount](v18, "entriesCount");
  onlyWriteToDelayedZipArchive = self->_onlyWriteToDelayedZipArchive;
  v9 = objc_retainAutoreleasedReturnValue(-[TSUZipWriter sortedEntries](v18, "sortedEntries"));
  v10 = 0LL;
  if ( v7 )
    v11 = !onlyWriteToDelayedZipArchive;
  else
    v11 = 1;
  if ( v11 )
    v12 = 0x7FFFFFFFFFFFFFFFLL;
  else
    v12 = 0LL;
  while ( v10 < -[NSArray count](v9, "count") && v12 == 0x7FFFFFFFFFFFFFFFLL )
  {
    v13 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v9, "objectAtIndexedSubscript:", v10));
    v14 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter dataForZipEntry:inDataToWrite:](self, "dataForZipEntry:inDataToWrite:", v13, v6));
    v15 = v14 == 0LL;
    objc_release(v14);
    if ( v15 )
    {
      if ( UnsafePointer != -1 )
        dispatch_once(&UnsafePointer, &stru_1001D27B8);
      v16 = objc_retain(UnsafePointer);
      if ( os_log_type_enabled((os_log_t)v16, OS_LOG_TYPE_DEBUG) )
      {
        v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "name"));
        *(_DWORD *)buf = 138412546;
        v23 = v17;
        v24 = 2048;
        v25 = v10;
        _os_log_debug_impl(
          (void *)&_mh_execute_header,
          (os_log_t)v16,
          OS_LOG_TYPE_DEBUG,
          "TSPData %@ not found in existing zip, will truncate at index %lu",
          buf,
          0x16u);
        objc_release(v17);
      }
      objc_release(v16);
      v12 = v10;
    }
    else
    {
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    objc_release(v13);
    ++v10;
  }
  if ( v12 != 0x7FFFFFFFFFFFFFFFLL )
    -[TSUZipWriter truncateToNumberOfEntries:completion:](
      v18,
      "truncateToNumberOfEntries:completion:",
      v12,
      &stru_1001D27F8);
  objc_release(v9);
  objc_release(v18);
  objc_release(v21);
  objc_release(v6);
  objc_release(v6);
}