-[TSUDatabase closeWithError:]
bool __cdecl -[TSUDatabase closeWithError:](TSUDatabase *self, SEL a2, id *a3)
{
  sqlite3_stmt *stmt; // x0
  sqlite3_stmt *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x0
  __int64 v11; // x4
  __int64 v12; // x5
  bool result; // w0

  if ( !self->_db )
    return 1;
  do
  {
    stmt = sqlite3_next_stmt(self->_db, 0LL);
    v6 = stmt;
    if ( !stmt )
      break;
    v7 = sqlite3_finalize(stmt);
  }
  while ( (TSUHandleSqlite(v7, a3, 1LL, self, v8, v9, CFSTR("Finalizing statement")) & 1) != 0 );
  v10 = sqlite3_close(self->_db);
  result = TSUHandleSqlite(v10, a3, 1LL, self, v11, v12, CFSTR("Closing database"));
  if ( v6 )
    result = 0;
  self->_db = 0LL;
  return result;
}