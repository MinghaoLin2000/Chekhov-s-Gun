-[TSUDatabase rollbackTransactionWithError:]
bool __cdecl -[TSUDatabase rollbackTransactionWithError:](TSUDatabase *self, SEL a2, id *a3)
{
  _BOOL4 v5; // w0
  sqlite3_stmt *rollbackTransactionStatement; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = -[TSUDatabase prepareStatement:sql:error:](
         self,
         "prepareStatement:sql:error:",
         &self->_rollbackTransactionStatement,
         "rollback",
         a3);
  if ( v5 )
  {
    rollbackTransactionStatement = self->_rollbackTransactionStatement;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    LOBYTE(v5) = -[TSUDatabase executeUpdate:shouldFinalize:error:](
                   self,
                   "executeUpdate:shouldFinalize:error:",
                   rollbackTransactionStatement,
                   0LL,
                   a3);
  }
  return v5;
}