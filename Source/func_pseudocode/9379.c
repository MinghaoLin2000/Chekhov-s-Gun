-[TSPDatabase insertObjectWithIdentifier:stateIdentifier:classType:error:]
bool __cdecl -[TSPDatabase insertObjectWithIdentifier:stateIdentifier:classType:error:](
        TSPDatabase *self,
        SEL a2,
        signed __int64 a3,
        const ObjectStateIdentifier *a4,
        int a5,
        id *a6)
{
  int hasDataState; // w24
  sqlite3_stmt **p_insertObjectStatement; // x21
  unsigned int v14; // w0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  sqlite3_stmt *v18; // x24
  sqlite3_int64 v19; // x0
  __int64 v20; // x0
  id v21; // x23
  void *v22; // x25
  const char *v23; // x24
  __int64 v24; // x0
  char v25; // w22

  hasDataState = TSP::ObjectStateIdentifier::hasDataState((TSP::ObjectStateIdentifier *)a4);
  p_insertObjectStatement = &self->_insertObjectStatement;
  v14 = -[TSUDatabase prepareStatement:sql:error:](
          self,
          "prepareStatement:sql:error:",
          &self->_insertObjectStatement,
          "insert into objects (identifier, class, stateType, state) values (?, ?, ?, ?)",
          a6);
  if ( v14 )
  {
    v15 = sqlite3_bind_int64(*p_insertObjectStatement, 1, a3);
    v14 = TSUHandleSqlite(v15, a6, 1LL, self, a2, 509LL, 0LL);
    if ( v14 )
    {
      v16 = sqlite3_bind_int(*p_insertObjectStatement, 2, a5);
      v14 = TSUHandleSqlite(v16, a6, 1LL, self, a2, 510LL, 0LL);
      if ( v14 )
      {
        v17 = sqlite3_bind_int(*p_insertObjectStatement, 3, hasDataState ^ 1);
        v14 = TSUHandleSqlite(v17, a6, 1LL, self, a2, 511LL, 0LL);
      }
    }
  }
  if ( hasDataState )
  {
    if ( (v14 & 1) == 0 )
      goto LABEL_13;
    v18 = *p_insertObjectStatement;
    v19 = TSP::ObjectStateIdentifier::dataState((TSP::ObjectStateIdentifier *)a4);
    v20 = sqlite3_bind_int64(v18, 4, v19);
    if ( !(unsigned int)TSUHandleSqlite(v20, a6, 1LL, self, a2, 515LL, 0LL) )
      goto LABEL_13;
  }
  else
  {
    if ( !v14 )
      goto LABEL_13;
    v21 = objc_retainAutoreleasedReturnValue((id)TSP::ObjectStateIdentifier::fileState((TSP::ObjectStateIdentifier *)a4));
    v22 = objc_msgSend(v21, "maximumLengthOfBytesUsingEncoding:", 4LL);
    v23 = (const char *)malloc_type_malloc((size_t)v22, 0xC1DB4E20uLL);
    objc_msgSend(v21, "getCString:maxLength:encoding:", v23, v22, 4LL);
    v24 = sqlite3_bind_text(*p_insertObjectStatement, 4, v23, -1, (void (__cdecl *)(void *))&_free);
    v25 = TSUHandleSqlite(v24, a6, 1LL, self, a2, 525LL, 0LL);
    objc_release(v21);
    if ( (v25 & 1) == 0 )
      goto LABEL_13;
  }
  if ( -[TSUDatabase executeUpdate:shouldFinalize:error:](
         self,
         "executeUpdate:shouldFinalize:error:",
         *p_insertObjectStatement,
         0LL,
         a6) )
  {
    return 1;
  }
LABEL_13:
  sub_100027CD4(a6);
  return 0;
}