-[TSPDatabase newRelationshipTargetsForSourceIdentifier:error:]
void *__cdecl -[TSPDatabase newRelationshipTargetsForSourceIdentifier:error:](
        TSPDatabase *self,
        SEL a2,
        signed __int64 a3,
        id *a4)
{
  _QWORD *v8; // x19
  sqlite3_stmt **p_relationshipTargetsStatement; // x23
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x24
  int v13; // w24
  __int64 v14; // x0
  char v15; // w0
  sqlite3_int64 v17; // [xsp+8h] [xbp-38h] BYREF

  v8 = (_QWORD *)operator new(24LL, 0x1020C4062D53EE8LL);
  v8[2] = 0LL;
  v8[1] = 0LL;
  *v8 = v8 + 1;
  p_relationshipTargetsStatement = &self->_relationshipTargetsStatement;
  if ( !-[TSUDatabase prepareStatement:sql:error:](
          self,
          "prepareStatement:sql:error:",
          &self->_relationshipTargetsStatement,
          "select targetObject from relationships where sourceObject = ?",
          a4) )
    goto LABEL_8;
  v10 = sqlite3_bind_int64(*p_relationshipTargetsStatement, 1, a3);
  if ( !(unsigned int)TSUHandleSqlite(v10, a4, 1LL, self, a2, 594LL, 0LL) )
    goto LABEL_8;
  while ( 1 )
  {
    v11 = sqlite3_step(*p_relationshipTargetsStatement);
    v12 = v11;
    if ( (_DWORD)v11 != 100 )
      break;
    v17 = sqlite3_column_int64(*p_relationshipTargetsStatement, 0);
    sub_10002A9C0(v8, &v17, &v17);
  }
  if ( (_DWORD)v11 != 101 )
  {
    sqlite3_sql(*p_relationshipTargetsStatement);
    TSUHandleSqlite(v12, a4, 1LL, self, a2, 606LL, CFSTR("Executing query \"%s\""));
LABEL_8:
    v13 = 0;
    goto LABEL_9;
  }
  v13 = 1;
LABEL_9:
  v14 = sqlite3_reset(*p_relationshipTargetsStatement);
  v15 = TSUHandleSqlite(v14, a4, 1LL, self, a2, 611LL, 0LL);
  if ( !v13 || (v15 & 1) == 0 )
  {
    sub_100027CD4(a4);
    sub_10002AC6C(v8, v8[1]);
    operator delete(v8, 0x1020C4062D53EE8LL);
    return 0LL;
  }
  return v8;
}