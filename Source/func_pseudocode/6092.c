-[PAMediaConversionServiceResourceURLCollection urlForDebugDumpWithDirectoryName:inExistingParentDirectory:error:]
id __cdecl -[PAMediaConversionServiceResourceURLCollection urlForDebugDumpWithDirectoryName:inExistingParentDirectory:error:](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  id v9; // x19
  id v10; // x0
  void *v11; // x20
  NSFileManager *v12; // x22
  void *v13; // x25
  unsigned int v14; // w26
  bool v15; // zf
  void *v16; // x24
  unsigned __int8 v17; // w25
  id v18; // x25
  id v19; // x23
  void *v20; // x25
  void *v21; // x26
  NSAssertionHandler *v23; // x22
  NSAssertionHandler *v24; // x22
  NSAssertionHandler *v25; // x25
  _QWORD v26[4]; // [xsp+10h] [xbp-F0h] BYREF
  id v27; // [xsp+30h] [xbp-D0h]
  PAMediaConversionServiceResourceURLCollection *v28; // [xsp+38h] [xbp-C8h]
  __int64 *v29; // [xsp+40h] [xbp-C0h]
  __int64 *v30; // [xsp+48h] [xbp-B8h]
  __int64 v31; // [xsp+50h] [xbp-B0h] BYREF
  __int64 *v32; // [xsp+58h] [xbp-A8h]
  __int64 v33; // [xsp+60h] [xbp-A0h]
  char v34; // [xsp+68h] [xbp-98h]
  id obj; // [xsp+70h] [xbp-90h] BYREF
  __int64 v36; // [xsp+78h] [xbp-88h] BYREF
  __int64 *v37; // [xsp+80h] [xbp-80h]
  __int64 v38; // [xsp+88h] [xbp-78h]
  __int64 (__fastcall *v39)(); // [xsp+90h] [xbp-70h]
  __int64 (__fastcall *v40)(); // [xsp+98h] [xbp-68h]
  id v41; // [xsp+A0h] [xbp-60h] BYREF
  char v42; // [xsp+AFh] [xbp-51h] BYREF
  __int64 vars8; // [xsp+108h] [xbp+8h]

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = v10;
  if ( v9 )
  {
    if ( v10 )
      goto LABEL_3;
  }
  else
  {
    v23 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v23,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
      541LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("outputDirectoryName"));
    objc_release(v23);
    if ( v11 )
      goto LABEL_3;
  }
  v24 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
  -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
    v24,
    "handleFailureInMethod:object:file:lineNumber:description:",
    a2,
    self,
    CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
    542LL,
    CFSTR("Invalid parameter not satisfying: %@"),
    CFSTR("parentDirectoryURL"));
  objc_release(v24);
LABEL_3:
  v12 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v42 = 0;
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "path"));
  v14 = -[NSFileManager fileExistsAtPath:isDirectory:](v12, "fileExistsAtPath:isDirectory:", v13, &v42);
  objc_release(v13);
  if ( v14 )
    v15 = v42 == 0;
  else
    v15 = 1;
  if ( v15 )
  {
    v25 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v25,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
      546LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("exists && isDirectory"));
    objc_release(v25);
  }
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "URLByAppendingPathComponent:", v9));
  v36 = 0LL;
  v37 = &v36;
  v38 = 0x3032000000LL;
  v39 = sub_100008FD8;
  v40 = sub_100008FE8;
  v41 = 0LL;
  obj = 0LL;
  v17 = -[NSFileManager createDirectoryAtURL:withIntermediateDirectories:attributes:error:](
          v12,
          "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
          v16,
          0LL,
          0LL,
          &obj);
  objc_storeStrong(&v41, obj);
  if ( (v17 & 1) != 0 )
    goto LABEL_9;
  v20 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)v37[5], "domain"));
  if ( ((unsigned int)objc_msgSend(v20, "isEqualToString:", NSCocoaErrorDomain) & 1) == 0 )
  {
    objc_release(v20);
    if ( a5 )
      goto LABEL_15;
    goto LABEL_17;
  }
  v21 = objc_msgSend((id)v37[5], "code");
  objc_release(v20);
  if ( v21 != (void *)516 )
  {
    if ( a5 )
    {
LABEL_15:
      v19 = 0LL;
      *a5 = objc_retainAutorelease((id)v37[5]);
      goto LABEL_20;
    }
LABEL_17:
    v19 = 0LL;
    goto LABEL_20;
  }
LABEL_9:
  v31 = 0LL;
  v32 = &v31;
  v33 = 0x2020000000LL;
  v34 = 0;
  v26[0] = _NSConcreteStackBlock;
  v26[1] = 3254779904LL;
  v26[2] = sub_100008FF0;
  v26[3] = &unk_100040FE0;
  v18 = objc_retain(v16);
  v27 = v18;
  v28 = self;
  v29 = &v36;
  v30 = &v31;
  -[PAMediaConversionServiceResourceURLCollection enumerateResourceURLs:](self, "enumerateResourceURLs:", v26);
  if ( *((_BYTE *)v32 + 24) )
  {
    v19 = 0LL;
    if ( a5 )
      *a5 = objc_retainAutorelease((id)v37[5]);
  }
  else
  {
    v19 = objc_retain(v18);
  }
  objc_release(v27);
  _Block_object_dispose(&v31, 8);
LABEL_20:
  _Block_object_dispose(&v36, 8);
  objc_release(v41);
  objc_release(v16);
  objc_release(v12);
  objc_release(v11);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v19);
}