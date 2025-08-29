-[TSUDatabase startSingleResultQuery:error:]
bool __cdecl -[TSUDatabase startSingleResultQuery:error:](TSUDatabase *self, SEL a2, sqlite3_stmt *a3, id *a4)
{
  return -[TSUDatabase startSingleResultQuery:shouldLogErrors:error:](
           self,
           "startSingleResultQuery:shouldLogErrors:error:",
           a3,
           1LL,
           a4);
}