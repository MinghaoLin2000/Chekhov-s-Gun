-[TSUZipArchive readLocalFileHeaderFilenameAndExtraFieldsData:forEntry:error:]
bool __cdecl -[TSUZipArchive readLocalFileHeaderFilenameAndExtraFieldsData:forEntry:error:](
        TSUZipArchive *self,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  id v8; // x19
  dispatch_data_t v9; // x20
  size_t v10; // x24
  unsigned int v11; // w22
  NSDictionary *v12; // x22
  NSDictionary *v13; // x24
  bool v14; // w23
  unsigned int v15; // w24
  id v17; // [xsp+8h] [xbp-68h] BYREF
  id v18; // [xsp+10h] [xbp-60h] BYREF
  size_t size_ptr; // [xsp+18h] [xbp-58h] BYREF
  void *buffer_ptr; // [xsp+20h] [xbp-50h] BYREF
  const __CFString *v21; // [xsp+28h] [xbp-48h] BYREF
  const __CFString *v22; // [xsp+30h] [xbp-40h] BYREF

  v8 = objc_retain(a4);
  size_ptr = 0LL;
  buffer_ptr = 0LL;
  v9 = dispatch_data_create_map((dispatch_data_t)a3, (const void **)&buffer_ptr, &size_ptr);
  v10 = size_ptr;
  v11 = (unsigned int)objc_msgSend(v8, "nameLength");
  if ( v10 >= (unsigned int)objc_msgSend(v8, "extraFieldsLength") + (unsigned __int64)v11 )
  {
    v18 = 0LL;
    v15 = -[TSUZipArchive readFilenameFromBuffer:nameLength:entry:dataSize:error:](
            self,
            "readFilenameFromBuffer:nameLength:entry:dataSize:error:",
            &buffer_ptr,
            objc_msgSend(v8, "nameLength"),
            v8,
            &size_ptr,
            &v18);
    v12 = (NSDictionary *)objc_retain(v18);
    if ( !v15 )
    {
      v14 = 0;
      if ( !a5 )
        goto LABEL_11;
      goto LABEL_9;
    }
    if ( !(unsigned int)objc_msgSend(v8, "extraFieldsLength") )
    {
      v14 = 1;
      goto LABEL_11;
    }
    v17 = v12;
    v14 = -[TSUZipArchive readExtraFieldsFromBuffer:extraFieldsLength:entry:dataSize:error:](
            self,
            "readExtraFieldsFromBuffer:extraFieldsLength:entry:dataSize:error:",
            &buffer_ptr,
            objc_msgSend(v8, "extraFieldsLength"),
            v8,
            &size_ptr,
            &v17);
    v13 = (NSDictionary *)objc_retain(v17);
  }
  else
  {
    v21 = CFSTR("TSUZipArchiveErrorDescription");
    v22 = CFSTR("Wrong data size for TSUZipLocalFileHeaderRecord filename and extra fields");
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v22,
              &v21,
              1LL));
    v13 = (NSDictionary *)objc_retainAutoreleasedReturnValue(
                            +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
                              &OBJC_CLASS___NSError,
                              "tsu_fileReadCorruptedFileErrorWithUserInfo:",
                              v12));
    v14 = 0;
  }
  objc_release(v12);
  v12 = v13;
  if ( !a5 )
    goto LABEL_11;
LABEL_9:
  if ( !v14 )
  {
    v12 = objc_retainAutorelease(v12);
    v14 = 0;
    *a5 = v12;
  }
LABEL_11:
  objc_release(v12);
  objc_release(v9);
  objc_release(v8);
  return v14;
}