-[TSUZipReadChannel readFromOffset:length:handler:]
void __cdecl -[TSUZipReadChannel readFromOffset:length:handler:](
        TSUZipReadChannel *self,
        SEL a2,
        signed __int64 a3,
        unsigned __int64 a4,
        id a5)
{
  void (__fastcall **v8)(id, __int64, dispatch_data_s *, _QWORD); // x19
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x22
  void *v11; // x23
  unsigned __int64 v12; // x0
  TSUReadChannel *archiveReadChannel; // x24
  unsigned __int64 v14; // x25
  TSUZipEntry *entry; // x21
  os_log_s *v16; // x23
  NSString *v17; // x21
  _QWORD v18[5]; // [xsp+0h] [xbp-B0h] BYREF
  id v19; // [xsp+28h] [xbp-88h]
  signed __int64 v20; // [xsp+30h] [xbp-80h]
  unsigned __int64 v21; // [xsp+38h] [xbp-78h]
  uint8_t buf[4]; // [xsp+40h] [xbp-70h] BYREF
  NSString *v23; // [xsp+44h] [xbp-6Ch]
  __int16 v24; // [xsp+4Ch] [xbp-64h]
  unsigned __int64 v25; // [xsp+4Eh] [xbp-62h]
  __int16 v26; // [xsp+56h] [xbp-5Ah]
  signed __int64 v27; // [xsp+58h] [xbp-58h]

  v8 = (void (__fastcall **)(id, __int64, dispatch_data_s *, _QWORD))objc_retain(a5);
  v9 = -[TSUZipEntry compressedSize](self->_entry, "compressedSize");
  v10 = v9;
  if ( a3 < 0 || v9 < a3 )
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001DDEE8);
    v11 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
    {
      entry = self->_entry;
      v16 = objc_retain(v11);
      v17 = objc_retainAutoreleasedReturnValue(-[TSUZipEntry name](entry, "name"));
      *(_DWORD *)buf = 138412802;
      v23 = v17;
      v24 = 2048;
      v25 = v10;
      v26 = 2048;
      v27 = a3;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v16,
        OS_LOG_TYPE_ERROR,
        "Requested range is not within the entry: %@. Size: %llu. Requested offset: %llu",
        buf,
        0x20u);
      objc_release(v17);
      objc_release(v16);
    }
    v8[2](v8, 1LL, &_dispatch_data_empty, 0LL);
  }
  else
  {
    if ( v9 - a3 < a4 )
      a4 = v9 - a3;
    if ( a3 || a4 != v9 )
    {
      v12 = -[TSUZipEntry fileHeaderLength](self->_entry, "fileHeaderLength");
      if ( v12 )
      {
        -[TSUReadChannel readFromOffset:length:handler:](
          self->_archiveReadChannel,
          "readFromOffset:length:handler:",
          (char *)-[TSUZipEntry offset](self->_entry, "offset") + v12 + a3,
          a4,
          v8);
      }
      else
      {
        archiveReadChannel = self->_archiveReadChannel;
        v14 = -[TSUZipEntry offset](self->_entry, "offset");
        v18[0] = _NSConcreteStackBlock;
        v18[1] = 3254779904LL;
        v18[2] = sub_10014295C;
        v18[3] = &unk_1001DDF08;
        v18[4] = self;
        v20 = a3;
        v21 = a4;
        v19 = objc_retain(v8);
        +[TSUIOUtils readAllFromChannel:offset:length:completion:](
          &OBJC_CLASS___TSUIOUtils,
          "readAllFromChannel:offset:length:completion:",
          archiveReadChannel,
          v14,
          30LL,
          v18);
        objc_release(v19);
      }
    }
    else
    {
      -[TSUZipReadChannel readWithHandler:](self, "readWithHandler:", v8);
    }
  }
  objc_release(v8);
}