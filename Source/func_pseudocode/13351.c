-[TSUZipWriter writeCentralFileHeaderDataForEntry:]
void __cdecl -[TSUZipWriter writeCentralFileHeaderDataForEntry:](TSUZipWriter *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x22
  const char *v6; // x21
  size_t v7; // x22
  void *v8; // x22
  unsigned __int64 v9; // x20
  unsigned __int64 v10; // x28
  unsigned __int64 v11; // x8
  unsigned int v12; // w9
  _BOOL4 v13; // w21
  __int64 v14; // x20
  size_t v15; // x23
  char *v16; // x24
  char *v17; // x25
  void *v18; // x26
  unsigned int v19; // w27
  unsigned __int64 v20; // t2
  unsigned int v21; // w0
  _BOOL4 v22; // w26
  char *v23; // x21
  char *v24; // x20
  char *v25; // x22
  dispatch_data_t v26; // x21
  const char *__src; // [xsp+10h] [xbp-60h]
  TSUZipWriter *v28; // [xsp+18h] [xbp-58h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name")));
  v6 = (const char *)objc_msgSend(v5, "UTF8String");
  objc_release(v5);
  __src = v6;
  v7 = strlen(v6);
  if ( v7 >= 0x10000 )
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001DEE18);
    v8 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100173B64(v8);
    v7 = 0xFFFFLL;
  }
  v28 = self;
  v9 = self->_options & 2;
  v10 = v9 | ((unsigned __int64)objc_msgSend(v4, "size") >> 32);
  v11 = v9 | ((unsigned __int64)objc_msgSend(v4, "offset") >> 32);
  v12 = 4 * ((v10 | v11) != 0);
  if ( v10 )
    v12 = 20;
  v13 = v11 != 0;
  if ( v11 )
    v14 = v12 | 8;
  else
    v14 = v12;
  v15 = v7 + v14 + 46;
  v16 = (char *)malloc_type_malloc(v15, 0xB4837524uLL);
  v17 = v16 + 46;
  *(_DWORD *)v16 = 33639248;
  *(_QWORD *)(v16 + 4) = 1310782LL;
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "lastModificationDate"));
  v19 = (unsigned int)objc_msgSend(v18, "tsu_DOSTime");
  objc_release(v18);
  HIDWORD(v20) = v19;
  LODWORD(v20) = v19;
  *((_DWORD *)v16 + 3) = v20 >> 16;
  *((_DWORD *)v16 + 4) = (unsigned int)objc_msgSend(v4, "CRC");
  if ( v10 )
  {
    v21 = -1;
    *((_DWORD *)v16 + 5) = -1;
  }
  else
  {
    *((_DWORD *)v16 + 5) = (unsigned int)objc_msgSend(v4, "size");
    v21 = (unsigned int)objc_msgSend(v4, "size");
  }
  *((_DWORD *)v16 + 6) = v21;
  *((_WORD *)v16 + 14) = v7;
  *((_WORD *)v16 + 15) = v14;
  *((_QWORD *)v16 + 4) = 0LL;
  *((_WORD *)v16 + 20) = 0;
  v22 = v13;
  if ( v13 )
  {
    *(_DWORD *)(v16 + 42) = -1;
    memcpy(v17, __src, v7);
    *(_WORD *)&v17[v7] = TSUZip64ExtraFieldSignature;
    v23 = &v17[v7 + 4];
    *(_WORD *)&v17[v7 + 2] = 0;
    v24 = &v17[v7 + 2];
    if ( !v10 )
      goto LABEL_22;
  }
  else
  {
    *(_DWORD *)(v16 + 42) = (unsigned int)objc_msgSend(v4, "offset");
    memcpy(v17, __src, v7);
    if ( !v10 )
      goto LABEL_23;
    v23 = &v17[v7 + 4];
    *(_WORD *)&v17[v7] = TSUZip64ExtraFieldSignature;
    v24 = &v17[v7 + 2];
  }
  v25 = &v17[v7];
  *(_WORD *)v24 = 16;
  *(_QWORD *)v23 = objc_msgSend(v4, "size");
  *(_QWORD *)(v25 + 12) = objc_msgSend(v4, "size");
  if ( v22 )
  {
    v23 = v25 + 20;
LABEL_22:
    *(_WORD *)v24 += 8;
    *(_QWORD *)v23 = objc_msgSend(v4, "offset");
  }
LABEL_23:
  v26 = dispatch_data_create(v16, v15, 0LL, _dispatch_data_destructor_free);
  -[TSUZipWriter writeData:](v28, "writeData:", v26);
  objc_release(v26);
  objc_release(v4);
}