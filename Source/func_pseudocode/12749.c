-[TSUZipArchive readEndOfCentralDirectoryData:eocdOffset:channel:completion:]
void __cdecl -[TSUZipArchive readEndOfCentralDirectoryData:eocdOffset:channel:completion:](
        TSUZipArchive *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5,
        id a6)
{
  id v10; // x19
  void (__fastcall **v11)(id, id); // x20
  dispatch_data_t v12; // x21
  const __CFString **v13; // x2
  const __CFString **v14; // x3
  NSDictionary *v15; // x22
  NSDictionary *v16; // x24
  id v17; // x23
  void *v18; // x0
  id v19; // x22
  size_t size_ptr; // [xsp+18h] [xbp-78h] BYREF
  void *buffer_ptr; // [xsp+20h] [xbp-70h] BYREF
  const __CFString *v24; // [xsp+28h] [xbp-68h] BYREF
  const __CFString *v25; // [xsp+30h] [xbp-60h] BYREF
  const __CFString *v26; // [xsp+38h] [xbp-58h] BYREF
  const __CFString *v27; // [xsp+40h] [xbp-50h] BYREF
  const __CFString *v28; // [xsp+48h] [xbp-48h] BYREF
  NSDictionary *v29; // [xsp+50h] [xbp-40h] BYREF

  v10 = objc_retain(a5);
  v11 = (void (__fastcall **)(id, id))objc_retain(a6);
  size_ptr = 0LL;
  buffer_ptr = 0LL;
  v12 = dispatch_data_create_map((dispatch_data_t)a3, (const void **)&buffer_ptr, &size_ptr);
  if ( size_ptr <= 0x15 )
  {
    v28 = CFSTR("TSUZipArchiveErrorDescription");
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("Wrong data size (%zu) for TSUZipEndOfCentralDirectoryRecord (size: %zu)"),
              size_ptr,
              22LL));
    v29 = v15;
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v29,
              &v28,
              1LL));
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
              &OBJC_CLASS___NSError,
              "tsu_fileReadCorruptedFileErrorWithUserInfo:",
              v16));
    objc_release(v16);
LABEL_9:
    objc_release(v15);
    if ( v17 )
    {
      v11[2](v11, v17);
      v18 = v17;
    }
    else
    {
      v19 = objc_retainAutoreleasedReturnValue(
              +[NSError tsu_fileReadUnknownErrorWithUserInfo:](
                &OBJC_CLASS___NSError,
                "tsu_fileReadUnknownErrorWithUserInfo:",
                0LL));
      v11[2](v11, v19);
      v18 = v19;
    }
    objc_release(v18);
    goto LABEL_13;
  }
  if ( *(_DWORD *)buffer_ptr != 101010256 )
  {
    v26 = CFSTR("TSUZipArchiveErrorDescription");
    v27 = CFSTR("Don't support end of central directory comments");
    v13 = &v27;
    v14 = &v26;
    goto LABEL_8;
  }
  if ( *((_WORD *)buffer_ptr + 2) || *((_WORD *)buffer_ptr + 3) )
  {
    v24 = CFSTR("TSUZipArchiveErrorDescription");
    v25 = CFSTR("Don't support multi-disk");
    v13 = &v25;
    v14 = &v24;
LABEL_8:
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              v13,
              v14,
              1LL));
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
              &OBJC_CLASS___NSError,
              "tsu_fileReadCorruptedFileErrorWithUserInfo:",
              v15));
    goto LABEL_9;
  }
  if ( *((unsigned __int16 *)buffer_ptr + 5) == 0xFFFFLL
    || *((_DWORD *)buffer_ptr + 4) == -1
    || *((_DWORD *)buffer_ptr + 3) == -1 )
  {
    -[TSUZipArchive readZip64EndOfCentralDirectoryLocatorWithChannel:eocdOffset:completion:](
      self,
      "readZip64EndOfCentralDirectoryLocatorWithChannel:eocdOffset:completion:",
      v10,
      a4,
      v11);
  }
  else
  {
    -[TSUZipArchive readCentralDirectoryWithEntryCount:offset:size:channel:completion:](
      self,
      "readCentralDirectoryWithEntryCount:offset:size:channel:completion:");
  }
LABEL_13:
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
}