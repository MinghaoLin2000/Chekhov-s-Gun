_TSUHandleSqlite
bool __fastcall TSUHandleSqlite(
        __int64 a1,
        _QWORD *a2,
        int a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  const __CFString *v13; // x21
  const char *v14; // x22
  os_log_s *v15; // x23
  __int64 v16; // x23
  __int64 v17; // x23
  void *v18; // x24
  void *v19; // x24
  _BYTE v21[12]; // [xsp+0h] [xbp-70h] BYREF
  __int16 v22; // [xsp+Ch] [xbp-64h]
  const char *v23; // [xsp+Eh] [xbp-62h]
  __int16 v24; // [xsp+16h] [xbp-5Ah]
  int v25; // [xsp+18h] [xbp-58h]

  if ( !(_DWORD)a1 )
    return (_DWORD)a1 == 0;
  if ( a7 )
  {
    *(_QWORD *)v21 = &a9;
    v13 = objc_autorelease(objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithFormat:arguments:", a7, &a9));
  }
  else
  {
    v13 = CFSTR("SQLite error");
  }
  if ( (_DWORD)a1 == 101 )
  {
    v14 = "not enough rows returned";
    if ( !a3 )
      goto LABEL_12;
  }
  else
  {
    v14 = sqlite3_errmsg((sqlite3 *)objc_msgSend(a4, "_sqliteDatabase"));
    if ( !a3 )
      goto LABEL_12;
  }
  if ( TSUDefaultCat_init_token != -1 )
    dispatch_once(&TSUDefaultCat_init_token, &stru_1001DD6D0);
  v15 = (os_log_s *)TSUDefaultCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)v21 = 138412802;
    *(_QWORD *)&v21[4] = v13;
    v22 = 2080;
    v23 = v14;
    v24 = 1024;
    v25 = a1;
    _os_log_error_impl((void *)&_mh_execute_header, v15, OS_LOG_TYPE_ERROR, "%@: %s (%d)", v21, 0x1Cu);
    if ( !a2 )
      return (_DWORD)a1 == 0;
    goto LABEL_13;
  }
LABEL_12:
  if ( !a2 )
    return (_DWORD)a1 == 0;
LABEL_13:
  if ( *a2 )
    return (_DWORD)a1 == 0;
  v16 = 0LL;
  if ( (int)a1 > 265 )
  {
    if ( (_DWORD)a1 == 266 || (_DWORD)a1 == 522 )
      goto LABEL_28;
    if ( (_DWORD)a1 != 778 )
      goto LABEL_30;
    goto LABEL_29;
  }
  if ( (unsigned int)a1 > 0x19 )
    goto LABEL_30;
  if ( ((1 << a1) & 0x27A0000) != 0 )
  {
    v17 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DD6F0);
    v18 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016FD58(v17, v18);
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "BOOL TSUHandleSqlite(int, NSError **, BOOL, TSUDatabase *, SEL, long, NSString *, ...)",
        *(_QWORD *)v21),
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/utility/TSUDatabase.m"),
      370LL,
      0LL,
      "SQLite misused");
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v16 = 0LL;
    goto LABEL_30;
  }
  if ( (_DWORD)a1 == 13 )
  {
LABEL_29:
    v16 = 2LL;
    goto LABEL_30;
  }
  if ( (_DWORD)a1 == 14 )
LABEL_28:
    v16 = 1LL;
LABEL_30:
  v19 = +[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary", *(_QWORD *)v21);
  objc_msgSend(
    v19,
    "setObject:forKeyedSubscript:",
    +[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", a1),
    CFSTR("TSUDatabaseSqliteErrorCode"));
  if ( v13 )
    objc_msgSend(v19, "setObject:forKeyedSubscript:", v13, CFSTR("TSUDatabaseErrorMessage"));
  if ( v14 )
    objc_msgSend(
      v19,
      "setObject:forKeyedSubscript:",
      +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v14),
      CFSTR("TSUDatabaseSqliteErrorMessage"));
  *a2 = +[NSError tsu_errorWithCode:userInfo:](&OBJC_CLASS___NSError, "tsu_errorWithCode:userInfo:", v16, v19);
  return (_DWORD)a1 == 0;
}