-[TSUZipReadChannel readFileHeaderFromData:headerLength:error:]
bool __cdecl -[TSUZipReadChannel readFileHeaderFromData:headerLength:error:](
        TSUZipReadChannel *self,
        SEL a2,
        id a3,
        unsigned __int64 *a4,
        id *a5)
{
  dispatch_data_s *v8; // x19
  size_t size; // x0
  dispatch_data_s *subrange; // x0
  void *v11; // x21
  dispatch_data_t v12; // x22
  unsigned __int16 *v13; // x25
  int v14; // w8
  bool v15; // zf
  id v16; // x24
  bool v17; // w23
  void *v18; // x24
  NSString *v19; // x0
  NSString *v20; // x23
  const __CFString *v21; // x8
  _QWORD *v22; // x2
  _QWORD *v23; // x3
  void *v24; // x24
  NSString *v25; // x0
  const __CFString *v26; // x8
  NSDictionary *v27; // x25
  void *v28; // x22
  NSString *v29; // x0
  const __CFString *v30; // x8
  NSDictionary *v31; // x23
  size_t size_ptr; // [xsp+8h] [xbp-C8h] BYREF
  void *buffer_ptr; // [xsp+10h] [xbp-C0h] BYREF
  _QWORD v35[2]; // [xsp+18h] [xbp-B8h] BYREF
  _QWORD v36[2]; // [xsp+28h] [xbp-A8h] BYREF
  _QWORD v37[2]; // [xsp+38h] [xbp-98h] BYREF
  _QWORD v38[2]; // [xsp+48h] [xbp-88h] BYREF
  _QWORD v39[2]; // [xsp+58h] [xbp-78h] BYREF
  _QWORD v40[2]; // [xsp+68h] [xbp-68h] BYREF

  v8 = (dispatch_data_s *)objc_retain(a3);
  size = dispatch_data_get_size(v8);
  if ( size == 30 )
  {
    subrange = objc_retain(v8);
    goto LABEL_5;
  }
  if ( size < 0x1F )
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001DDF38);
    v28 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
    {
      sub_10017172C((int)self, v28);
      if ( a5 )
        goto LABEL_33;
    }
    else if ( a5 )
    {
LABEL_33:
      v40[0] = CFSTR("Read was less than record size");
      v39[0] = CFSTR("TSUZipArchiveErrorDescription");
      v39[1] = CFSTR("TSUZipArchiveErrorEntryName");
      v29 = objc_retainAutoreleasedReturnValue(-[TSUZipEntry name](self->_entry, "name"));
      v11 = v29;
      v30 = &stru_1001DFAA0;
      if ( v29 )
        v30 = (const __CFString *)v29;
      v40[1] = v30;
      v31 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                v40,
                v39,
                2LL));
      *a5 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadCorruptedFileErrorWithUserInfo:",
                  v31)));
      objc_release(v31);
      v17 = 0;
      goto LABEL_38;
    }
    v17 = 0;
    goto LABEL_39;
  }
  subrange = dispatch_data_create_subrange(v8, 0LL, 0x1EuLL);
LABEL_5:
  v11 = subrange;
  size_ptr = 0LL;
  buffer_ptr = 0LL;
  v12 = dispatch_data_create_map(subrange, (const void **)&buffer_ptr, &size_ptr);
  v13 = (unsigned __int16 *)buffer_ptr;
  if ( *(_DWORD *)buffer_ptr != 67324752 )
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001DDF58);
    v18 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100171678((int)self, v18);
    v38[0] = CFSTR("Local file header has bad signature");
    v37[0] = CFSTR("TSUZipArchiveErrorDescription");
    v37[1] = CFSTR("TSUZipArchiveErrorEntryName");
    v19 = objc_retainAutoreleasedReturnValue(-[TSUZipEntry name](self->_entry, "name"));
    v20 = v19;
    v21 = &stru_1001DFAA0;
    if ( v19 )
      v21 = (const __CFString *)v19;
    v38[1] = v21;
    v22 = v38;
    v23 = v37;
    goto LABEL_27;
  }
  v14 = *((unsigned __int16 *)buffer_ptr + 4);
  if ( *((_WORD *)buffer_ptr + 4) )
    v15 = v14 == (unsigned __int16)TSUZipDeflateCompressionMethod;
  else
    v15 = 1;
  if ( !v15
    || (((v14 != (unsigned __int16)TSUZipDeflateCompressionMethod) ^ -[TSUZipEntry isCompressed](
                                                                       self->_entry,
                                                                       "isCompressed")) & 1) == 0 )
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001DDF78);
    v24 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_1001715C4((int)self, v24);
    v36[0] = CFSTR("Local file header doesn't match compression method from central directory file header");
    v35[0] = CFSTR("TSUZipArchiveErrorDescription");
    v35[1] = CFSTR("TSUZipArchiveErrorEntryName");
    v25 = objc_retainAutoreleasedReturnValue(-[TSUZipEntry name](self->_entry, "name"));
    v20 = v25;
    v26 = &stru_1001DFAA0;
    if ( v25 )
      v26 = (const __CFString *)v25;
    v36[1] = v26;
    v22 = v36;
    v23 = v35;
LABEL_27:
    v27 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              v22,
              v23,
              2LL));
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
              &OBJC_CLASS___NSError,
              "tsu_fileReadCorruptedFileErrorWithUserInfo:",
              v27));
    objc_release(v27);
    objc_release(v20);
    if ( a5 )
    {
      v16 = objc_retainAutorelease(v16);
      v17 = 0;
      *a5 = v16;
    }
    else
    {
      v17 = 0;
    }
    goto LABEL_37;
  }
  *a4 = v13[13] + (unsigned __int64)v13[14] + 30;
  -[TSUZipEntry setFileHeaderLength:](self->_entry, "setFileHeaderLength:");
  v16 = 0LL;
  v17 = 1;
LABEL_37:
  objc_release(v16);
  objc_release(v12);
LABEL_38:
  objc_release(v11);
LABEL_39:
  objc_release(v8);
  return v17;
}