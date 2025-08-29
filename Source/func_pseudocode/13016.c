-[TSUZipReadChannel processData:CRC:isDone:handler:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl -[TSUZipReadChannel processData:CRC:isDone:handler:](
        TSUZipReadChannel *self,
        SEL a2,
        id a3,
        unsigned int *a4,
        bool a5,
        id a6)
{
  _BOOL8 v7; // x22
  dispatch_data_s *v10; // x19
  void (__fastcall **v11)(id, _BOOL8, dispatch_data_s *, _QWORD); // x20
  bool v12; // w21
  void *v14; // x22
  NSString *v15; // x0
  NSString *v16; // x23
  const __CFString *v17; // x8
  NSDictionary *v18; // x24
  id v19; // x22
  _QWORD v20[5]; // [xsp+0h] [xbp-80h] BYREF
  _QWORD v21[2]; // [xsp+28h] [xbp-58h] BYREF
  _QWORD v22[2]; // [xsp+38h] [xbp-48h] BYREF

  v7 = a5;
  v10 = (dispatch_data_s *)objc_retain(a3);
  v11 = (void (__fastcall **)(id, _BOOL8, dispatch_data_s *, _QWORD))objc_retain(a6);
  if ( a4
    && self->_validateCRC
    && (v20[0] = _NSConcreteStackBlock,
        v20[1] = 3221225472LL,
        v20[2] = sub_100143488,
        v20[3] = &unk_1001DDFE8,
        v20[4] = a4,
        dispatch_data_apply(v10, v20),
        v7)
    && -[TSUZipEntry CRC](self->_entry, "CRC") != *a4 )
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001DE008);
    v14 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100171808((_DWORD)self + 8, v14);
    v22[0] = CFSTR("CRC does not match");
    v21[0] = CFSTR("TSUZipArchiveErrorDescription");
    v21[1] = CFSTR("TSUZipArchiveErrorEntryName");
    v15 = objc_retainAutoreleasedReturnValue(-[TSUZipEntry name](self->_entry, "name"));
    v16 = v15;
    v17 = &stru_1001DFAA0;
    if ( v15 )
      v17 = (const __CFString *)v15;
    v22[1] = v17;
    v18 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              v22,
              v21,
              2LL));
    v19 = objc_retainAutoreleasedReturnValue(
            +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
              &OBJC_CLASS___NSError,
              "tsu_fileReadCorruptedFileErrorWithUserInfo:",
              v18));
    objc_release(v18);
    objc_release(v16);
    -[TSUZipReadChannel handleFailureWithHandler:error:](self, "handleFailureWithHandler:error:", v11, v19);
    objc_release(v19);
    v12 = 0;
  }
  else
  {
    v11[2](v11, v7, v10, 0LL);
    v12 = 1;
  }
  objc_release(v11);
  objc_release(v10);
  return v12;
}