+[TSPFileManager linkOrCloneItemAtURL:toURL:canLink:canClone:error:]
bool __cdecl +[TSPFileManager linkOrCloneItemAtURL:toURL:canLink:canClone:error:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        bool a6,
        id *a7)
{
  _BOOL4 v8; // w24
  _BOOL4 v9; // w21
  id v12; // x19
  id v13; // x20
  NSFileManager *v14; // x21
  unsigned __int8 v15; // w26
  void *v16; // x25
  id v17; // x26
  void *v18; // x27
  void *v19; // x28
  void *v20; // x24
  void *v21; // x26
  void *v22; // x27
  void *v23; // x28
  void *v24; // x24
  void *v25; // x0
  void *v26; // x25
  void *v27; // x25
  const char *v28; // x24
  void *v29; // x27
  id v30; // x28
  int v31; // w0
  NSFileManager *v33; // [xsp+0h] [xbp-60h]
  id v34; // [xsp+8h] [xbp-58h]

  v8 = a6;
  v9 = a5;
  v12 = objc_retain(a3);
  v13 = objc_retain(a4);
  if ( v8 )
  {
    v14 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v15 = -[NSFileManager copyItemAtURL:toURL:error:](v14, "copyItemAtURL:toURL:error:", v12, v13, a7);
LABEL_18:
    objc_release(v14);
    goto LABEL_19;
  }
  if ( v9 )
  {
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "path"));
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "path"));
    v17 = objc_retainAutoreleasedReturnValue((id)UnsafePointer());
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "bundlePath"));
    v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "stringByStandardizingPath"));
    v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "precomposedStringWithCanonicalMapping"));
    objc_release(v19);
    objc_release(v18);
    objc_release(v17);
    v21 = objc_retainAutoreleasedReturnValue(-[NSFileManager stringByStandardizingPath](v14, "stringByStandardizingPath"));
    v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "precomposedStringWithCanonicalMapping"));
    v34 = v20;
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "stringByAppendingString:", CFSTR("/")));
    LOBYTE(v20) = (unsigned __int8)objc_msgSend(v22, "hasPrefix:", v23);
    objc_release(v23);
    objc_release(v22);
    objc_release(v21);
    if ( ((unsigned __int8)v20 & 1) != 0 )
    {
      if ( a7 )
      {
        v24 = v16;
        v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "errorWithDomain:code:sourcePath:targetPath:", NSCocoaErrorDomain, 257LL, v14, v16));
        v26 = v34;
        goto LABEL_12;
      }
      v15 = 0;
      v24 = v16;
    }
    else
    {
      v33 = objc_retainAutorelease(v14);
      v28 = (const char *)-[NSFileManager fileSystemRepresentation](v33, "fileSystemRepresentation");
      v29 = v16;
      v30 = objc_retainAutorelease(v16);
      v31 = link(v28, (const char *)objc_msgSend(v30, "fileSystemRepresentation"));
      v15 = v31 == 0;
      if ( a7 )
      {
        v24 = v16;
        v26 = v34;
        if ( !v31 )
        {
LABEL_17:
          objc_release(v26);
          objc_release(v24);
          goto LABEL_18;
        }
        v24 = v29;
        v25 = objc_retainAutoreleasedReturnValue(
                objc_msgSend(
                  a1,
                  "errorWithDomain:code:sourcePath:targetPath:",
                  NSPOSIXErrorDomain,
                  *__error(),
                  v33,
                  v30));
LABEL_12:
        v15 = 0;
        *a7 = objc_autorelease(v25);
        goto LABEL_17;
      }
      v24 = v16;
    }
    v26 = v34;
    goto LABEL_17;
  }
  if ( a7 )
  {
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "path"));
    v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "path"));
    *a7 = objc_autorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "errorWithDomain:code:sourcePath:targetPath:", NSCocoaErrorDomain, 257LL, v14, v27)));
    objc_release(v27);
    v15 = 0;
    goto LABEL_18;
  }
  v15 = 0;
LABEL_19:
  objc_release(v13);
  objc_release(v12);
  return v15;
}