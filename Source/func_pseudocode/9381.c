-[TSPDatabase updateDataStateWithIdentifier:size:error:]
bool __cdecl -[TSPDatabase updateDataStateWithIdentifier:size:error:](
        TSPDatabase *self,
        SEL a2,
        signed __int64 a3,
        int a4,
        id *a5)
{
  sqlite3_stmt **p_updateDataStateStatement; // x21
  __int64 v11; // x0
  __int64 v12; // x0

  p_updateDataStateStatement = &self->_updateDataStateStatement;
  if ( -[TSUDatabase prepareStatement:sql:error:](
         self,
         "prepareStatement:sql:error:",
         &self->_updateDataStateStatement,
         "update dataStates set state = ? where identifier = ?") )
  {
    v11 = sqlite3_bind_zeroblob(*p_updateDataStateStatement, 1, a4);
    if ( (unsigned int)TSUHandleSqlite(v11, a5, 1LL, self, a2, 557LL, 0LL) )
    {
      v12 = sqlite3_bind_int64(*p_updateDataStateStatement, 2, a3);
      if ( (unsigned int)TSUHandleSqlite(v12, a5, 1LL, self, a2, 558LL, 0LL) )
      {
        if ( -[TSUDatabase executeUpdate:shouldFinalize:error:](
               self,
               "executeUpdate:shouldFinalize:error:",
               *p_updateDataStateStatement,
               0LL,
               a5) )
        {
          return 1;
        }
      }
    }
  }
  sub_100027CD4(a5);
  return 0;
}