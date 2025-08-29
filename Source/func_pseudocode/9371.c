-[TSPDatabase queryObjectsWithMessageTypes:messageTypesCount:error:]
id __cdecl -[TSPDatabase queryObjectsWithMessageTypes:messageTypesCount:error:](
        TSPDatabase *self,
        SEL a2,
        const int *a3,
        int a4,
        id *a5)
{
  void *v10; // x19
  NSMutableString *v11; // x20
  int v12; // w28
  NSString *v13; // x25
  const char *v14; // x27
  unsigned int v15; // w25
  __int64 v16; // x8
  __int64 v17; // x27
  __int64 v18; // x26
  __int64 v19; // x0
  __int64 v20; // x24
  id v21; // x26
  __int64 v22; // x0
  void *v23; // x21
  sqlite3_stmt *pStmt; // [xsp+8h] [xbp-58h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v10 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  pStmt = 0LL;
  v11 = objc_retainAutoreleasedReturnValue(+[NSMutableString stringWithString:](&OBJC_CLASS___NSMutableString, "stringWithString:", CFSTR("(")));
  if ( a4 >= 1 )
  {
    v12 = 0;
    do
    {
      if ( v12 )
        -[NSMutableString appendString:](v11, "appendString:", CFSTR(", "));
      -[NSMutableString appendString:](v11, "appendString:", CFSTR("?"));
      ++v12;
    }
    while ( a4 != v12 );
  }
  -[NSMutableString appendString:](v11, "appendString:", CFSTR(")"));
  v13 = objc_retainAutorelease(
          objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("select identifier, class, stateType, state from objects where class in %@"),
              v11)));
  v14 = -[NSString UTF8String](v13, "UTF8String");
  objc_release(v13);
  v15 = -[TSUDatabase prepareStatement:sql:error:](self, "prepareStatement:sql:error:", &pStmt, v14, a5);
  if ( a4 >= 1 )
  {
    v16 = 0LL;
    v17 = (unsigned int)a4;
    do
    {
      if ( (v15 & 1) != 0 )
      {
        v18 = v16 + 1;
        v19 = sqlite3_bind_int64(pStmt, v16 + 1, a3[v16]);
        v15 = TSUHandleSqlite(v19, a5, 1LL, self, a2, 260LL, 0LL);
        v16 = v18;
      }
      else
      {
        v15 = 0;
        ++v16;
      }
    }
    while ( v16 != v17 );
  }
  v20 = sqlite3_step(pStmt);
  while ( (_DWORD)v20 == 100 )
  {
    v21 = objc_retainAutoreleasedReturnValue(-[TSPDatabase objectFromStatement:](self, "objectFromStatement:", pStmt));
    objc_msgSend(v10, "addObject:", v21);
    v20 = sqlite3_step(pStmt);
    objc_release(v21);
  }
  if ( (_DWORD)v20 != 101 )
  {
    sqlite3_sql(pStmt);
    TSUHandleSqlite(v20, a5, 1LL, self, a2, 273LL, CFSTR("Executing query \"%s\""));
    v15 = 0;
  }
  v22 = sqlite3_finalize(pStmt);
  if ( ((unsigned int)TSUHandleSqlite(v22, a5, 1LL, self, a2, 277LL, CFSTR("Finalizing statement")) & v15) == 1 )
    v23 = objc_msgSend(v10, "copy");
  else
    v23 = 0LL;
  objc_release(v11);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v23);
}