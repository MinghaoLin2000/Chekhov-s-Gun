+[NSString tsu_stringWithSqlStatement:columnIndex:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[NSString tsu_stringWithSqlStatement:columnIndex:](id a1, SEL a2, sqlite3_stmt *a3, int a4)
{
  __int64 v4; // x19
  id result; // x0
  void *v7; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = *(_QWORD *)&a4;
  result = (id)sqlite3_column_text(a3, a4);
  if ( result )
  {
    v7 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "tsu_initWithSqlStatement:columnIndex:", a3, v4);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return objc_autorelease(v7);
  }
  return result;
}