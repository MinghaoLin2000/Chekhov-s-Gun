-[TSPDatabase queryObjectWithIdentifier:error:]
id __cdecl -[TSPDatabase queryObjectWithIdentifier:error:](TSPDatabase *self, SEL a2, signed __int64 a3, id *a4)
{
  __int64 v8; // x0
  id v9; // x0
  _BOOL4 v10; // w23
  id v11; // x22
  __int64 v12; // x0
  void *v13; // x0
  id v14; // x19
  sqlite3_stmt *pStmt; // [xsp+8h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  pStmt = 0LL;
  if ( -[TSUDatabase prepareStatement:sql:error:](
         self,
         "prepareStatement:sql:error:",
         &pStmt,
         "select identifier, class, stateType, state from objects where identifier = ?",
         a4)
    && (v8 = sqlite3_bind_int64(pStmt, 1, a3), (unsigned int)TSUHandleSqlite(v8, a4, 1LL, self, a2, 227LL, 0LL)) )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[TSPDatabase queryFirstObjectWithStatement:error:](self, "queryFirstObjectWithStatement:error:", pStmt, a4));
    v10 = v9 != 0LL;
    v11 = v9;
  }
  else
  {
    v10 = 0;
    v11 = 0LL;
  }
  v12 = sqlite3_finalize(pStmt);
  if ( ((unsigned int)TSUHandleSqlite(v12, a4, 1LL, self, a2, 234LL, CFSTR("Finalizing statement")) & v10) != 0 )
    v13 = v11;
  else
    v13 = 0LL;
  v14 = objc_retain(v13);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}