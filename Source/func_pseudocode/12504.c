+[NSThread tsu_currentThreadName]
id __cdecl +[NSThread tsu_currentThreadName](id a1, SEL a2)
{
  unsigned int v2; // w0
  char v3; // w20
  __CFString *v4; // x19
  __CFString *v5; // x0
  __CFString *v6; // x0
  NSOperationQueue *v7; // x20
  const char *label; // x0
  NSString *v9; // x20
  _opaque_pthread_t *v10; // x0
  NSString *v11; // x20
  NSThread *v12; // x20
  __CFString *v13; // x21
  NSThread *v14; // x20
  __CFString *v15; // x21
  __int128 v17; // [xsp+0h] [xbp-170h] BYREF
  __int128 v18; // [xsp+10h] [xbp-160h]
  __int128 v19; // [xsp+20h] [xbp-150h]
  __int128 v20; // [xsp+30h] [xbp-140h]
  __int128 v21; // [xsp+40h] [xbp-130h]
  __int128 v22; // [xsp+50h] [xbp-120h]
  __int128 v23; // [xsp+60h] [xbp-110h]
  __int128 v24; // [xsp+70h] [xbp-100h]
  __int128 v25; // [xsp+80h] [xbp-F0h]
  __int128 v26; // [xsp+90h] [xbp-E0h]
  __int128 v27; // [xsp+A0h] [xbp-D0h]
  __int128 v28; // [xsp+B0h] [xbp-C0h]
  __int128 v29; // [xsp+C0h] [xbp-B0h]
  __int128 v30; // [xsp+D0h] [xbp-A0h]
  __int128 v31; // [xsp+E0h] [xbp-90h]
  __int128 v32; // [xsp+F0h] [xbp-80h]
  __int128 v33; // [xsp+100h] [xbp-70h]
  _OWORD v34[2]; // [xsp+110h] [xbp-60h] BYREF
  __int64 vars8; // [xsp+178h] [xbp+8h]

  v2 = +[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread");
  v3 = v2;
  v4 = CFSTR("MT");
  if ( v2 )
    v5 = CFSTR("MT");
  else
    v5 = 0LL;
  v6 = objc_retain(v5);
  if ( (v3 & 1) == 0
    && (v7 = objc_retainAutoreleasedReturnValue(+[NSOperationQueue currentQueue](&OBJC_CLASS___NSOperationQueue, "currentQueue")),
        v4 = objc_retainAutoreleasedReturnValue(-[NSOperationQueue name](v7, "name")),
        objc_release(v7),
        !v4)
    || !-[__CFString length](v4, "length") )
  {
    label = dispatch_queue_get_label(0LL);
    if ( label )
    {
      v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithCString:encoding:](&OBJC_CLASS___NSString, "stringWithCString:encoding:", label, 1LL));
      objc_release(v4);
      v4 = (__CFString *)v9;
    }
    if ( !v4 )
      goto LABEL_13;
  }
  if ( !-[__CFString length](v4, "length") )
  {
LABEL_13:
    v33 = 0u;
    memset(v34, 0, 28);
    v31 = 0u;
    v32 = 0u;
    v29 = 0u;
    v30 = 0u;
    v27 = 0u;
    v28 = 0u;
    v25 = 0u;
    v26 = 0u;
    v23 = 0u;
    v24 = 0u;
    v21 = 0u;
    v22 = 0u;
    v19 = 0u;
    v20 = 0u;
    v17 = 0u;
    v18 = 0u;
    v10 = pthread_self();
    pthread_getname_np(v10, (char *)&v17, 0x12CuLL);
    if ( (_BYTE)v17 )
    {
      v11 = objc_retainAutoreleasedReturnValue(+[NSString stringWithCString:encoding:](&OBJC_CLASS___NSString, "stringWithCString:encoding:", &v17, 1LL));
      objc_release(v4);
      v4 = (__CFString *)v11;
    }
    if ( !v4 )
      goto LABEL_23;
  }
  if ( !-[__CFString length](
          v4,
          "length",
          v17,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34[0],
          *(_QWORD *)&v34[1],
          *((_QWORD *)&v34[1] + 1)) )
  {
LABEL_23:
    v12 = objc_retainAutoreleasedReturnValue(+[NSThread currentThread](&OBJC_CLASS___NSThread, "currentThread", (_QWORD)v17));
    v13 = objc_retainAutoreleasedReturnValue(-[NSThread name](v12, "name"));
    objc_release(v4);
    objc_release(v12);
    v4 = v13;
    if ( !v13 )
      goto LABEL_17;
  }
  if ( !-[__CFString length](v4, "length") )
  {
LABEL_17:
    v14 = objc_retainAutoreleasedReturnValue(+[NSThread currentThread](&OBJC_CLASS___NSThread, "currentThread"));
    v15 = objc_retainAutoreleasedReturnValue(-[NSThread description](v14, "description"));
    objc_release(v4);
    objc_release(v14);
    v4 = v15;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}