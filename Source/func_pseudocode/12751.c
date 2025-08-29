-[TSUZipArchive readZip64EndOfCentralDirectoryLocatorData:channel:completion:]
void __cdecl -[TSUZipArchive readZip64EndOfCentralDirectoryLocatorData:channel:completion:](
        TSUZipArchive *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  void (__fastcall **v9)(id, id); // x20
  dispatch_data_t v10; // x21
  const __CFString **v11; // x2
  const __CFString **v12; // x3
  NSDictionary *v13; // x22
  id v14; // x23
  void *v15; // x0
  id v16; // x22
  size_t size_ptr; // [xsp+8h] [xbp-78h] BYREF
  void *buffer_ptr; // [xsp+10h] [xbp-70h] BYREF
  const __CFString *v19; // [xsp+18h] [xbp-68h] BYREF
  const __CFString *v20; // [xsp+20h] [xbp-60h] BYREF
  const __CFString *v21; // [xsp+28h] [xbp-58h] BYREF
  const __CFString *v22; // [xsp+30h] [xbp-50h] BYREF
  const __CFString *v23; // [xsp+38h] [xbp-48h] BYREF
  const __CFString *v24; // [xsp+40h] [xbp-40h] BYREF

  v8 = objc_retain(a4);
  v9 = (void (__fastcall **)(id, id))objc_retain(a5);
  size_ptr = 0LL;
  buffer_ptr = 0LL;
  v10 = dispatch_data_create_map((dispatch_data_t)a3, (const void **)&buffer_ptr, &size_ptr);
  if ( size_ptr <= 0x13 )
  {
    v23 = CFSTR("TSUZipArchiveErrorDescription");
    v24 = CFSTR("Wrong data size for TSUZip64EndOfCentralDirectoryLocatorRecord");
    v11 = &v24;
    v12 = &v23;
  }
  else if ( *(_DWORD *)buffer_ptr == 117853008 )
  {
    if ( !*((_DWORD *)buffer_ptr + 1) && *((_DWORD *)buffer_ptr + 4) == 1 )
    {
      -[TSUZipArchive readZip64EndOfCentralDirectoryWithChannel:offset:completion:](
        self,
        "readZip64EndOfCentralDirectoryWithChannel:offset:completion:",
        v8,
        *((_QWORD *)buffer_ptr + 1),
        v9);
      goto LABEL_13;
    }
    v19 = CFSTR("TSUZipArchiveErrorDescription");
    v20 = CFSTR("Multi-disk is not supported");
    v11 = &v20;
    v12 = &v19;
  }
  else
  {
    v21 = CFSTR("TSUZipArchiveErrorDescription");
    v22 = CFSTR("Zip64 end of central directory locator record signature not found");
    v11 = &v22;
    v12 = &v21;
  }
  v13 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            v11,
            v12,
            1LL));
  v14 = objc_retainAutoreleasedReturnValue(
          +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
            &OBJC_CLASS___NSError,
            "tsu_fileReadCorruptedFileErrorWithUserInfo:",
            v13));
  objc_release(v13);
  if ( v14 )
  {
    v9[2](v9, v14);
    v15 = v14;
  }
  else
  {
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSError tsu_fileReadUnknownErrorWithUserInfo:](
              &OBJC_CLASS___NSError,
              "tsu_fileReadUnknownErrorWithUserInfo:",
              0LL));
    v9[2](v9, v16);
    v15 = v16;
  }
  objc_release(v15);
LABEL_13:
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
}