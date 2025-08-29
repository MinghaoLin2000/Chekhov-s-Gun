-[TSUZipReadChannel handleFailureWithHandler:error:]
void __cdecl -[TSUZipReadChannel handleFailureWithHandler:error:](TSUZipReadChannel *self, SEL a2, id a3, id a4)
{
  void (__fastcall **v6)(id, __int64, _QWORD, id); // x19
  NSError *v7; // x0
  NSError *v8; // x20
  NSString *v9; // x21
  NSString *v10; // x21
  void *v11; // x24
  NSString *v12; // x0
  NSDictionary *v13; // x22
  const __CFString *v14; // x8
  NSDictionary *v15; // x25
  NSError *v16; // x23
  NSString *v17; // x0
  const __CFString *v18; // x8
  _QWORD v19[2]; // [xsp+8h] [xbp-78h] BYREF
  _QWORD v20[2]; // [xsp+18h] [xbp-68h] BYREF
  const __CFString *v21; // [xsp+28h] [xbp-58h] BYREF
  const __CFString *v22; // [xsp+30h] [xbp-50h] BYREF

  v6 = (void (__fastcall **)(id, __int64, _QWORD, id))objc_retain(a3);
  v7 = (NSError *)objc_retain(a4);
  if ( !v7 )
  {
    v21 = CFSTR("TSUZipArchiveErrorEntryName");
    v17 = objc_retainAutoreleasedReturnValue(-[TSUZipEntry name](self->_entry, "name"));
    v10 = v17;
    v18 = &stru_1001DFAA0;
    if ( v17 )
      v18 = (const __CFString *)v17;
    v22 = v18;
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v22,
              &v21,
              1LL));
    v8 = (NSError *)objc_retainAutoreleasedReturnValue(
                      +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
                        &OBJC_CLASS___NSError,
                        "tsu_fileReadCorruptedFileErrorWithUserInfo:",
                        v13));
    goto LABEL_9;
  }
  v8 = v7;
  v9 = objc_retainAutoreleasedReturnValue(-[NSError tsu_zipArchiveErrorEntryName](v7, "tsu_zipArchiveErrorEntryName"));
  objc_release(v9);
  if ( !v9 )
  {
    v10 = objc_retainAutoreleasedReturnValue(-[NSError domain](v8, "domain"));
    v11 = -[NSError code](v8, "code");
    v20[0] = v8;
    v19[0] = NSUnderlyingErrorKey;
    v19[1] = CFSTR("TSUZipArchiveErrorEntryName");
    v12 = objc_retainAutoreleasedReturnValue(-[TSUZipEntry name](self->_entry, "name"));
    v13 = (NSDictionary *)v12;
    v14 = &stru_1001DFAA0;
    if ( v12 )
      v14 = (const __CFString *)v12;
    v20[1] = v14;
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              v20,
              v19,
              2LL));
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              v10,
              v11,
              v15));
    objc_release(v8);
    objc_release(v15);
    v8 = v16;
LABEL_9:
    objc_release(v13);
    objc_release(v10);
  }
  v6[2](v6, 1LL, 0LL, v8);
  objc_release(v8);
  objc_release(v6);
}