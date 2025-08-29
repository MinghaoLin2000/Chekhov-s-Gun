-[TSUZipArchive readExtraFieldsFromBuffer:extraFieldsLength:entry:dataSize:error:]
bool __cdecl -[TSUZipArchive readExtraFieldsFromBuffer:extraFieldsLength:entry:dataSize:error:](
        TSUZipArchive *self,
        SEL a2,
        const void **a3,
        unsigned __int16 a4,
        id a5,
        unsigned __int64 *a6,
        id *a7)
{
  unsigned int v9; // w21
  NSDictionary *v12; // x23
  id v13; // x22
  bool v14; // w21
  char *v15; // x28
  unsigned __int8 v16; // w26
  char *v17; // x20
  char *v18; // x2
  unsigned __int64 v19; // x8
  __int64 v20; // x3
  id v21; // x27
  NSDictionary *v22; // x25
  id v23; // x24
  __int64 v24; // x23
  void *v25; // x24
  NSString *v26; // x24
  NSString *v27; // x25
  id *v29; // [xsp+0h] [xbp-90h]
  id v30; // [xsp+8h] [xbp-88h]
  const __CFString *v31; // [xsp+18h] [xbp-78h] BYREF
  const __CFString *v32; // [xsp+20h] [xbp-70h] BYREF
  const __CFString *v33; // [xsp+28h] [xbp-68h] BYREF
  const __CFString *v34; // [xsp+30h] [xbp-60h] BYREF

  v9 = a4;
  v30 = objc_retain(a5);
  if ( *a6 < v9 )
  {
    v31 = CFSTR("TSUZipArchiveErrorDescription");
    v32 = CFSTR("Central directory too short");
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v32,
              &v31,
              1LL));
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
              &OBJC_CLASS___NSError,
              "tsu_fileReadCorruptedFileErrorWithUserInfo:",
              v12));
    objc_release(v12);
    v14 = 0;
    if ( !a7 )
      goto LABEL_22;
    goto LABEL_20;
  }
  v29 = a7;
  v13 = 0LL;
  v15 = (char *)*a3 + v9;
  v16 = 1;
  while ( 1 )
  {
    v17 = (char *)*a3;
    v18 = (char *)*a3 + 4;
    v14 = v18 > v15;
    if ( v18 > v15 )
      break;
    v19 = *a6 - 4;
    *a6 = v19;
    *a3 = v18;
    v20 = *((unsigned __int16 *)v17 + 1);
    if ( &v18[v20] > v15 )
    {
      v33 = CFSTR("TSUZipArchiveErrorDescription");
      v34 = CFSTR("Invalid Zip entry extra field length");
      v22 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v34,
                &v33,
                1LL));
      v23 = objc_retainAutoreleasedReturnValue(
              +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
                &OBJC_CLASS___NSError,
                "tsu_fileReadCorruptedFileErrorWithUserInfo:",
                v22));
      objc_release(v13);
      objc_release(v22);
      v13 = v23;
LABEL_12:
      v17 = (char *)*a3;
      break;
    }
    if ( *(unsigned __int16 *)v17 == (unsigned __int16)TSUZip64ExtraFieldSignature )
    {
      v16 = -[TSUZipArchive readZip64ExtraFieldFromBuffer:dataLength:entry:error:](
              self,
              "readZip64ExtraFieldFromBuffer:dataLength:entry:error:");
      v21 = objc_retain(v13);
      objc_release(v13);
      v20 = *((unsigned __int16 *)v17 + 1);
      v19 = *a6;
      v13 = v21;
      v18 = (char *)*a3;
    }
    *a6 = v19 - v20;
    *a3 = &v18[v20];
    if ( (v16 & 1) == 0 )
      goto LABEL_12;
  }
  if ( v17 != v15 )
  {
    v24 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD0A8);
    v25 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016F60C(v24, v25);
    v26 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUZipArchive readExtraFieldsFromBuffer:extraFieldsLength:entry:dataSize:error:]",
              a7));
    v27 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUZipArchive.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v26,
      v27,
      461LL,
      0LL,
      "Unexpected buffer position while reading extra fields.");
    objc_release(v27);
    objc_release(v26);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  a7 = v29;
  if ( v29 )
  {
LABEL_20:
    if ( !v14 )
      *a7 = objc_retainAutorelease(v13);
  }
LABEL_22:
  objc_release(v13);
  objc_release(v30);
  return v14;
}