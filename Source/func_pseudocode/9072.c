-[TSPPackageWriter writtenPackageWithURL:]
id __cdecl -[TSPPackageWriter writtenPackageWithURL:](TSPPackageWriter *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x21
  TSUZipFileArchive *v6; // x20
  TSUZipFileWriter *v7; // x23
  void *v8; // x24
  TSUZipFileArchive *v9; // x21
  id v10; // x20
  void *v11; // x23
  TSPPackage *writtenPackage; // x24
  id WeakRetained; // x23
  TSPPackage *v14; // x22
  void *v16; // x24
  objc_class *v17; // x0
  NSString *v18; // x25
  void *v19; // x26
  void *v20; // x0
  id v21; // [xsp+8h] [xbp-88h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-80h] BYREF
  void *v23; // [xsp+14h] [xbp-7Ch]
  __int16 v24; // [xsp+1Ch] [xbp-74h]
  NSString *v25; // [xsp+1Eh] [xbp-72h]
  __int16 v26; // [xsp+26h] [xbp-6Ah]
  void *v27; // [xsp+28h] [xbp-68h]
  __int16 v28; // [xsp+30h] [xbp-60h]
  void *v29; // [xsp+32h] [xbp-5Eh]
  __int16 v30; // [xsp+3Ah] [xbp-56h]
  id v31; // [xsp+3Ch] [xbp-54h]

  v4 = objc_retain(a3);
  v5 = (void *)objc_opt_class(self->_writtenPackage);
  v6 = objc_alloc(&OBJC_CLASS___TSUZipFileArchive);
  v7 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter zipArchiveWriter](self, "zipArchiveWriter"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "zipArchiveURLFromPackageURL:", v4));
  v21 = 0LL;
  v9 = -[TSUZipFileArchive initWithWriter:forReadingFromURL:options:error:](
         v6,
         "initWithWriter:forReadingFromURL:options:error:",
         v7,
         v8,
         objc_msgSend(v5, "zipArchiveOptions"),
         &v21);
  v10 = objc_retain(v21);
  objc_release(v8);
  objc_release(v7);
  if ( !v9 )
  {
    if ( UnsafePointer != -1 )
      dispatch_once(&UnsafePointer, &stru_1001D1428);
    v11 = objc_retain(UnsafePointer);
    if ( os_log_type_enabled((os_log_t)v11, OS_LOG_TYPE_ERROR) )
    {
      v16 = objc_retain(objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "path")));
      v17 = (objc_class *)objc_opt_class(v10);
      v18 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v17)));
      v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "domain"));
      v20 = objc_msgSend(v10, "code");
      *(_DWORD *)buf = 138413314;
      v23 = v16;
      v24 = 2114;
      v25 = v18;
      v26 = 2114;
      v27 = v19;
      v28 = 2048;
      v29 = v20;
      v30 = 2112;
      v31 = v10;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v11,
        OS_LOG_TYPE_ERROR,
        "Failed to load written zip archive: %@. errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
        buf,
        0x34u);
      objc_release(v18);
      objc_release(v16);
      objc_release(v19);
      objc_release(v18);
      objc_release(v16);
    }
    objc_release(v11);
  }
  writtenPackage = self->_writtenPackage;
  WeakRetained = objc_loadWeakRetained((id *)&self->_fileCoordinatorDelegate);
  -[TSPPackage setZipArchive:fileCoordinatorDelegate:](
    writtenPackage,
    "setZipArchive:fileCoordinatorDelegate:",
    v9,
    WeakRetained);
  objc_release(WeakRetained);
  v14 = objc_retainAutoreleaseReturnValue(self->_writtenPackage);
  objc_release(v9);
  objc_release(v10);
  objc_release(v4);
  return v14;
}