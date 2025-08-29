-[TSPDatabase insertRelationshipWithSourceIdentifier:targetIdentifier:error:]
bool __cdecl -[TSPDatabase insertRelationshipWithSourceIdentifier:targetIdentifier:error:](
        TSPDatabase *self,
        SEL a2,
        signed __int64 a3,
        signed __int64 a4,
        id *a5)
{
  sqlite3_stmt **p_insertRelationshipStatement; // x21
  __int64 v11; // x0
  __int64 v12; // x0

  p_insertRelationshipStatement = &self->_insertRelationshipStatement;
  if ( -[TSUDatabase prepareStatement:sql:error:](
         self,
         "prepareStatement:sql:error:",
         &self->_insertRelationshipStatement,
         "insert into relationships (sourceObject, targetObject) values (?, ?)") )
  {
    v11 = sqlite3_bind_int64(*p_insertRelationshipStatement, 1, a3);
    if ( (unsigned int)TSUHandleSqlite(v11, a5, 1LL, self, a2, 580LL, 0LL) )
    {
      v12 = sqlite3_bind_int64(*p_insertRelationshipStatement, 2, a4);
      if ( (unsigned int)TSUHandleSqlite(v12, a5, 1LL, self, a2, 581LL, 0LL) )
      {
        if ( -[TSUDatabase executeUpdate:shouldFinalize:error:](
               self,
               "executeUpdate:shouldFinalize:error:",
               *p_insertRelationshipStatement,
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