-[TSPDatabase filterIdentifiers:error:]
void *__cdecl -[TSPDatabase filterIdentifiers:error:](TSPDatabase *self, SEL a2, const void *a3, id *a4)
{
  char *v4; // x24
  id v9; // x19
  char *v10; // x25
  char *v11; // x9
  char *v12; // x8
  bool v13; // zf
  void *v14; // x23
  _QWORD *v15; // x24
  __int64 i; // x25
  int v17; // w25
  __int64 v18; // x0
  sqlite3_int64 v20; // [xsp+10h] [xbp-50h] BYREF
  sqlite3_stmt *pStmt; // [xsp+18h] [xbp-48h] BYREF

  v4 = (char *)a3 + 8;
  if ( *(const void **)a3 == (char *)a3 + 8 )
  {
    v15 = (_QWORD *)operator new(24LL, 0x1020C4062D53EE8LL);
    v15[2] = 0LL;
    v15[1] = 0LL;
    *v15 = v15 + 1;
  }
  else
  {
    v9 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableString);
    v10 = *(char **)a3;
    if ( *(char **)a3 != v4 )
    {
      do
      {
        objc_msgSend(v9, "appendFormat:", CFSTR("%llu,"), *((_QWORD *)v10 + 4));
        v11 = (char *)*((_QWORD *)v10 + 1);
        if ( v11 )
        {
          do
          {
            v12 = v11;
            v11 = *(char **)v11;
          }
          while ( v11 );
        }
        else
        {
          do
          {
            v12 = (char *)*((_QWORD *)v10 + 2);
            v13 = *(_QWORD *)v12 == (_QWORD)v10;
            v10 = v12;
          }
          while ( !v13 );
        }
        v10 = v12;
      }
      while ( v12 != v4 );
    }
    if ( objc_msgSend(v9, "length") )
      objc_msgSend(v9, "deleteCharactersInRange:", (char *)objc_msgSend(v9, "length") - 1, 1LL);
    pStmt = 0LL;
    v14 = objc_retainAutorelease(
            objc_msgSend(
              objc_alloc((Class)&OBJC_CLASS___NSString),
              "initWithFormat:",
              CFSTR("select identifier from objects where identifier in (%@)"),
              v9));
    if ( -[TSUDatabase prepareStatement:sql:error:](
           self,
           "prepareStatement:sql:error:",
           &pStmt,
           objc_msgSend(v14, "cStringUsingEncoding:", 4LL),
           a4) )
    {
      v15 = (_QWORD *)operator new(24LL, 0x1020C4062D53EE8LL);
      v15[2] = 0LL;
      v15[1] = 0LL;
      *v15 = v15 + 1;
      for ( i = sqlite3_step(pStmt); (_DWORD)i == 100; i = sqlite3_step(pStmt) )
      {
        v20 = sqlite3_column_int64(pStmt, 0);
        sub_10002A9C0(v15, &v20, &v20);
      }
      if ( (_DWORD)i == 101 )
      {
        v17 = 1;
      }
      else
      {
        sqlite3_sql(pStmt);
        TSUHandleSqlite(i, a4, 1LL, self, a2, 176LL, CFSTR("Executing query \"%s\""));
        v17 = 0;
      }
    }
    else
    {
      v17 = 0;
      v15 = 0LL;
    }
    v18 = sqlite3_finalize(pStmt);
    if ( ((unsigned int)TSUHandleSqlite(v18, a4, 1LL, self, a2, 181LL, 0LL) & v17 & 1) == 0 )
    {
      sub_100027CD4(a4);
      if ( v15 )
      {
        sub_10002AC6C(v15, v15[1]);
        operator delete(v15, 0x1020C4062D53EE8LL);
        v15 = 0LL;
      }
    }
    objc_release(v14);
    objc_release(v9);
  }
  return v15;
}