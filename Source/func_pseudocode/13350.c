-[TSUZipWriter localFileHeaderDataForEntry:]
id __cdecl -[TSUZipWriter localFileHeaderDataForEntry:](TSUZipWriter *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x22
  const char *v6; // x20
  size_t v7; // x22
  void *v8; // x22
  unsigned __int64 v9; // x20
  unsigned __int64 v10; // x8
  _BOOL4 v11; // w28
  unsigned int v12; // w20
  size_t v13; // x23
  _DWORD *v14; // x24
  char *v15; // x25
  void *v16; // x26
  unsigned int v17; // w27
  unsigned __int64 v18; // t2
  unsigned int v19; // w0
  unsigned int v20; // w0
  char *v21; // x20
  void *v22; // x0
  dispatch_data_t v23; // x20
  _BOOL4 v25; // [xsp+4h] [xbp-5Ch]
  const char *__src; // [xsp+8h] [xbp-58h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name")));
  v6 = (const char *)objc_msgSend(v5, "UTF8String");
  objc_release(v5);
  __src = v6;
  v7 = strlen(v6);
  if ( v7 >= 0x10000 )
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001DEDF8);
    v8 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100173B64(v8);
    v7 = 0xFFFFLL;
  }
  v9 = self->_options & 1;
  v10 = v9 | ((unsigned __int64)objc_msgSend(v4, "size") >> 32);
  v11 = v10 != 0;
  if ( v10 || self->_calculateSize )
  {
    if ( self->_force32BitSize )
      v12 = 0;
    else
      v12 = 20;
    v25 = !self->_force32BitSize;
  }
  else
  {
    v25 = 0;
    v12 = 0;
  }
  v13 = v7 + v12 + 30;
  v14 = malloc_type_malloc(v13, 0xC0E2D7D1uLL);
  v15 = (char *)v14 + 30;
  *v14 = 67324752;
  v14[1] = 20;
  *((_WORD *)v14 + 4) = 0;
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "lastModificationDate"));
  v17 = (unsigned int)objc_msgSend(v16, "tsu_DOSTime");
  objc_release(v16);
  HIDWORD(v18) = v17;
  LODWORD(v18) = v17;
  *(_DWORD *)((char *)v14 + 10) = v18 >> 16;
  *(_DWORD *)((char *)v14 + 14) = (unsigned int)objc_msgSend(v4, "CRC");
  if ( !v11 )
  {
    *(_DWORD *)((char *)v14 + 18) = (unsigned int)objc_msgSend(v4, "size");
LABEL_20:
    v20 = (unsigned int)objc_msgSend(v4, "size");
    goto LABEL_21;
  }
  if ( self->_force32BitSize )
    v19 = (unsigned int)objc_msgSend(v4, "size");
  else
    v19 = -1;
  *(_DWORD *)((char *)v14 + 18) = v19;
  if ( self->_force32BitSize )
    goto LABEL_20;
  v20 = -1;
LABEL_21:
  *(_DWORD *)((char *)v14 + 22) = v20;
  *((_WORD *)v14 + 13) = v7;
  *((_WORD *)v14 + 14) = v12;
  memcpy(v15, __src, v7);
  if ( v25 )
  {
    v21 = &v15[v7];
    *(_WORD *)v21 = TSUZip64ExtraFieldSignature;
    *((_WORD *)v21 + 1) = 16;
    v22 = objc_msgSend(v4, "size");
    *(_QWORD *)(v21 + 4) = v22;
    *(_QWORD *)(v21 + 12) = v22;
  }
  v23 = dispatch_data_create(v14, v13, 0LL, _dispatch_data_destructor_free);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v23);
}