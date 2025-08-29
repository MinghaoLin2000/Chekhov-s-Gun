-[TSPDatabase queryFirstObjectWithStatement:error:]
id __cdecl -[TSPDatabase queryFirstObjectWithStatement:error:](TSPDatabase *self, SEL a2, sqlite3_stmt *a3, id *a4)
{
  __int64 v8; // x0
  __int64 v9; // x22
  id v10; // x0
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v8 = sqlite3_step(a3);
  if ( (_DWORD)v8 != 101 )
  {
    v9 = v8;
    if ( (_DWORD)v8 == 100 )
    {
      v10 = objc_retainAutoreleasedReturnValue(-[TSPDatabase objectFromStatement:](self, "objectFromStatement:", a3));
      goto LABEL_6;
    }
    sqlite3_sql(a3);
    TSUHandleSqlite(v9, a4, 1LL, self, a2, 287LL, CFSTR("Executing query \"%s\""));
  }
  v10 = 0LL;
LABEL_6:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}