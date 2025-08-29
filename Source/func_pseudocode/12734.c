-[TSUExtendedAttributeCollection initWithPath:forRemoval:options:error:]
// local variable allocation has failed, the output may be wrong!
TSUExtendedAttributeCollection *__cdecl -[TSUExtendedAttributeCollection initWithPath:forRemoval:options:error:](
        TSUExtendedAttributeCollection *self,
        SEL a2,
        id a3,
        bool a4,
        int a5,
        id *a6)
{
  __int64 v7; // x22
  _BOOL8 v8; // x23
  id v10; // x19
  const char *v11; // x0
  const char *v12; // x25
  ssize_t v13; // x0
  size_t v14; // x24
  char *v15; // x0
  char *v16; // x26
  ssize_t v17; // x0
  __int64 v18; // x27
  const char *v19; // x24
  void *v20; // x28
  os_log_s *v21; // x26
  id v22; // x0
  void *v23; // x26
  size_t v24; // x0
  __int64 v25; // x2
  TSUExtendedAttributeCollection *v26; // x22
  char *v28; // [xsp+10h] [xbp-80h]
  NSMutableArray *v29; // [xsp+18h] [xbp-78h]
  uint8_t buf[4]; // [xsp+20h] [xbp-70h] BYREF
  void *v31; // [xsp+24h] [xbp-6Ch]
  __int16 v32; // [xsp+2Ch] [xbp-64h]
  const char *v33; // [xsp+2Eh] [xbp-62h]

  v7 = *(_QWORD *)&a5;
  v8 = a4;
  v10 = objc_retainAutorelease(objc_retain(a3));
  v11 = (const char *)objc_msgSend(v10, "fileSystemRepresentation");
  if ( !v11 )
  {
    if ( !a6 )
      goto LABEL_28;
    v25 = 2LL;
LABEL_24:
    v26 = 0LL;
    *a6 = objc_autorelease(
            objc_retainAutoreleasedReturnValue(
              +[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:](
                &OBJC_CLASS___NSError,
                "tsu_fileReadPOSIXErrorWithNumber:userInfo:",
                v25,
                0LL)));
    goto LABEL_32;
  }
  v12 = v11;
  v13 = listxattr(v11, 0LL, 0LL, v7);
  if ( v13 == -1 )
  {
    if ( !a6 )
      goto LABEL_28;
    v25 = (unsigned int)*__error();
    goto LABEL_24;
  }
  v14 = v13;
  if ( v13 < 1 )
  {
    self = objc_retain(-[TSUExtendedAttributeCollection init](self, "init"));
    v26 = self;
    goto LABEL_32;
  }
  v15 = (char *)malloc_type_malloc(v13, 0x100004077774924uLL);
  if ( !v15 )
  {
    if ( a6 )
    {
      v25 = 12LL;
      goto LABEL_24;
    }
LABEL_28:
    v26 = 0LL;
    goto LABEL_32;
  }
  v16 = v15;
  v17 = listxattr(v12, v15, v14, v7);
  if ( v17 == -1 )
  {
    if ( a6 )
      *a6 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadPOSIXErrorWithNumber:userInfo:",
                  (unsigned int)*__error(),
                  0LL)));
    free(v16);
    goto LABEL_28;
  }
  v18 = v17;
  v29 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
  if ( v18 < 1 )
    goto LABEL_31;
  v28 = v16;
  v19 = v16;
  while ( 1 )
  {
    v20 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithUTF8String:", v19);
    if ( ((unsigned int)objc_msgSend(v20, "hasPrefix:", CFSTR("com.apple.security.private.")) & 1) != 0 )
    {
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001DCED8);
      v21 = (os_log_s *)TSUDefaultCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_DEBUG) )
      {
        *(_DWORD *)buf = 138412546;
        v31 = v20;
        v32 = 2080;
        v33 = v12;
        _os_log_debug_impl(
          (void *)&_mh_execute_header,
          v21,
          OS_LOG_TYPE_DEBUG,
          "Not reading the %@ xattr on \"%s\"",
          buf,
          0x16u);
      }
      goto LABEL_15;
    }
    v22 = -[TSUExtendedAttribute initFromPathFileSystemRepresentation:name:forRemoval:options:error:](
            objc_alloc(&OBJC_CLASS___TSUExtendedAttribute),
            "initFromPathFileSystemRepresentation:name:forRemoval:options:error:",
            v12,
            v20,
            v8,
            v7,
            a6);
    if ( !v22 )
      break;
    v23 = v22;
    -[NSMutableArray addObject:](v29, "addObject:", v22);
    objc_release(v23);
LABEL_15:
    v24 = strlen(v19);
    v19 += v24 + 1;
    v18 -= v24 + 1;
    objc_release(v20);
    if ( v18 <= 0 )
      goto LABEL_30;
  }
  objc_release(self);
  objc_release(v20);
  self = 0LL;
LABEL_30:
  v16 = v28;
LABEL_31:
  free(v16);
  self = objc_retain(-[TSUExtendedAttributeCollection initWithAttributes:](self, "initWithAttributes:", v29));
  objc_release(v29);
  v26 = self;
LABEL_32:
  objc_release(v10);
  objc_release(self);
  return v26;
}