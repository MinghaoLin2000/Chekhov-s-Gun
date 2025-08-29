-[TSUZipArchive readCentralDirectoryData:entryCount:completion:]
void __cdecl -[TSUZipArchive readCentralDirectoryData:entryCount:completion:](
        TSUZipArchive *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id a5)
{
  void (__fastcall **v8)(id, id); // x19
  dispatch_data_t v9; // x20
  id v10; // x21
  unsigned __int64 v11; // x26
  void *v12; // x25
  unsigned int v13; // w24
  id v15; // [xsp+8h] [xbp-58h] BYREF
  size_t size_ptr; // [xsp+10h] [xbp-50h] BYREF
  void *buffer_ptr; // [xsp+18h] [xbp-48h] BYREF

  v8 = (void (__fastcall **)(id, id))objc_retain(a5);
  size_ptr = 0LL;
  buffer_ptr = 0LL;
  v9 = dispatch_data_create_map((dispatch_data_t)a3, (const void **)&buffer_ptr, &size_ptr);
  v10 = 0LL;
  if ( !a4 )
    goto LABEL_7;
  v11 = 1LL;
  do
  {
    v12 = v10;
    v15 = v10;
    v13 = -[TSUZipArchive readCentralFileHeaderWithBuffer:dataSize:error:](
            self,
            "readCentralFileHeaderWithBuffer:dataSize:error:",
            &buffer_ptr,
            &size_ptr,
            &v15);
    v10 = objc_retain(v15);
    objc_release(v12);
    if ( !v13 )
      break;
  }
  while ( v11++ < a4 );
  if ( (v13 & 1) == 0 )
  {
    if ( !v10 )
      v10 = objc_retainAutoreleasedReturnValue(
              +[NSError tsu_fileReadUnknownErrorWithUserInfo:](
                &OBJC_CLASS___NSError,
                "tsu_fileReadUnknownErrorWithUserInfo:",
                0LL));
    v8[2](v8, v10);
  }
  else
  {
LABEL_7:
    v8[2](v8, 0LL);
  }
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
}