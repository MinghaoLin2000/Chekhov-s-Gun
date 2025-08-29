-[TSUZipArchive readLocalFileHeaderData:atOffset:channel:completion:]
void __cdecl -[TSUZipArchive readLocalFileHeaderData:atOffset:channel:completion:](
        TSUZipArchive *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5,
        id a6)
{
  id v10; // x19
  id v11; // x20
  dispatch_data_t v12; // x21
  unsigned __int16 *v13; // x26
  __int16 v14; // w8
  bool v15; // zf
  TSUZipEntry *v16; // x24
  void *v17; // x25
  unsigned __int64 v18; // x25
  signed __int64 v19; // x27
  TSUZipEntry *v20; // x23
  _BOOL8 v21; // x24
  const __CFString **v22; // x2
  const __CFString **v23; // x3
  NSDictionary *v24; // x25
  const __CFString **v25; // x2
  const __CFString **v26; // x3
  NSDictionary *v27; // x22
  _QWORD v28[5]; // [xsp+0h] [xbp-F0h] BYREF
  id v29; // [xsp+28h] [xbp-C8h]
  id v30; // [xsp+30h] [xbp-C0h]
  size_t size_ptr; // [xsp+38h] [xbp-B8h] BYREF
  void *buffer_ptr; // [xsp+40h] [xbp-B0h] BYREF
  const __CFString *v33; // [xsp+48h] [xbp-A8h] BYREF
  const __CFString *v34; // [xsp+50h] [xbp-A0h] BYREF
  const __CFString *v35; // [xsp+58h] [xbp-98h] BYREF
  const __CFString *v36; // [xsp+60h] [xbp-90h] BYREF
  const __CFString *v37; // [xsp+68h] [xbp-88h] BYREF
  const __CFString *v38; // [xsp+70h] [xbp-80h] BYREF
  const __CFString *v39; // [xsp+78h] [xbp-78h] BYREF
  const __CFString *v40; // [xsp+80h] [xbp-70h] BYREF
  const __CFString *v41; // [xsp+88h] [xbp-68h] BYREF
  const __CFString *v42; // [xsp+90h] [xbp-60h] BYREF

  v10 = objc_retain(a5);
  v11 = objc_retain(a6);
  size_ptr = 0LL;
  buffer_ptr = 0LL;
  v12 = dispatch_data_create_map((dispatch_data_t)a3, (const void **)&buffer_ptr, &size_ptr);
  if ( size_ptr <= 0x1D )
  {
    v41 = CFSTR("TSUZipArchiveErrorDescription");
    v42 = CFSTR("Wrong data size for TSUZipLocalFileHeaderRecord");
    v21 = 1LL;
    v22 = &v42;
    v23 = &v41;
    goto LABEL_13;
  }
  v13 = (unsigned __int16 *)buffer_ptr;
  if ( *(_DWORD *)buffer_ptr != 67324752 )
  {
    v21 = *(_DWORD *)buffer_ptr == 33639248;
    v39 = CFSTR("TSUZipArchiveErrorDescription");
    v40 = CFSTR("Local file header has bad signature");
    v22 = &v40;
    v23 = &v39;
LABEL_13:
    v24 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              v22,
              v23,
              1LL));
    v20 = (TSUZipEntry *)objc_retainAutoreleasedReturnValue(
                           +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
                             &OBJC_CLASS___NSError,
                             "tsu_fileReadCorruptedFileErrorWithUserInfo:",
                             v24));
    objc_release(v24);
    if ( -[NSMutableOrderedSet count](self->_entries, "count") )
    {
      (*((void (__fastcall **)(id, _QWORD, _QWORD, _BOOL8))v11 + 2))(v11, 0LL, 0LL, v21);
      goto LABEL_21;
    }
    goto LABEL_18;
  }
  v14 = *((_WORD *)buffer_ptr + 3);
  if ( (v14 & 1) != 0 )
  {
    v37 = CFSTR("TSUZipArchiveErrorDescription");
    v38 = CFSTR("Encrypted files are not supported");
    v25 = &v38;
    v26 = &v37;
  }
  else if ( (v14 & 8) != 0 )
  {
    v35 = CFSTR("TSUZipArchiveErrorDescription");
    v36 = CFSTR("Local file header does not have the entry CRC and size");
    v25 = &v36;
    v26 = &v35;
  }
  else
  {
    if ( *((_WORD *)buffer_ptr + 4) )
      v15 = *((unsigned __int16 *)buffer_ptr + 4) == (unsigned __int16)TSUZipDeflateCompressionMethod;
    else
      v15 = 1;
    if ( v15 )
    {
      v16 = objc_alloc_init(&OBJC_CLASS___TSUZipEntry);
      -[TSUZipEntry setCompressed:](v16, "setCompressed:", v13[4] == (unsigned __int16)TSUZipDeflateCompressionMethod);
      v17 = objc_retainAutoreleasedReturnValue(
              objc_msgSend(
                objc_alloc((Class)&OBJC_CLASS___NSDate),
                "tsu_initWithDOSTime:",
                v13[6] | ((unsigned __int64)v13[5] << 16)));
      -[TSUZipEntry setLastModificationDate:](v16, "setLastModificationDate:", v17);
      objc_release(v17);
      -[TSUZipEntry setCRC:](v16, "setCRC:", *(unsigned int *)(v13 + 7));
      -[TSUZipEntry setCompressedSize:](v16, "setCompressedSize:", *(unsigned int *)(v13 + 9));
      -[TSUZipEntry setSize:](v16, "setSize:", *(unsigned int *)(v13 + 11));
      -[TSUZipEntry setOffset:](v16, "setOffset:", a4);
      -[TSUZipEntry setNameLength:](v16, "setNameLength:", v13[13]);
      -[TSUZipEntry setExtraFieldsLength:](v16, "setExtraFieldsLength:", v13[14]);
      v18 = v13[14] + (unsigned __int64)v13[13];
      -[TSUZipEntry setFileHeaderLength:](v16, "setFileHeaderLength:", v18 + 30);
      v19 = a4 + 30;
      v28[0] = _NSConcreteStackBlock;
      v28[1] = 3254779904LL;
      v28[2] = sub_100132388;
      v28[3] = &unk_1001DD048;
      v28[4] = self;
      v29 = v16;
      v30 = objc_retain(v11);
      v20 = objc_retain(v16);
      +[TSUIOUtils readAllFromChannel:offset:length:completion:](
        &OBJC_CLASS___TSUIOUtils,
        "readAllFromChannel:offset:length:completion:",
        v10,
        v19,
        v18,
        v28);
      objc_release(v30);
      objc_release(v29);
      goto LABEL_21;
    }
    v33 = CFSTR("TSUZipArchiveErrorDescription");
    v34 = CFSTR("Unsupported compression method");
    v25 = &v34;
    v26 = &v33;
  }
  v27 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            v25,
            v26,
            1LL));
  v20 = (TSUZipEntry *)objc_retainAutoreleasedReturnValue(
                         +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
                           &OBJC_CLASS___NSError,
                           "tsu_fileReadCorruptedFileErrorWithUserInfo:",
                           v27));
  objc_release(v27);
LABEL_18:
  if ( !v20 )
    v20 = (TSUZipEntry *)objc_retainAutoreleasedReturnValue(
                           +[NSError tsu_fileReadUnknownErrorWithUserInfo:](
                             &OBJC_CLASS___NSError,
                             "tsu_fileReadUnknownErrorWithUserInfo:",
                             0LL));
  (*((void (__fastcall **)(id, _QWORD, TSUZipEntry *, _QWORD))v11 + 2))(v11, 0LL, v20, 0LL);
LABEL_21:
  objc_release(v20);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
}