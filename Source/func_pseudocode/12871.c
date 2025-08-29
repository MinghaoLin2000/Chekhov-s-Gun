-[NSString tsu_initWithSqlStatement:columnIndex:]
id __cdecl -[NSString tsu_initWithSqlStatement:columnIndex:](NSString *self, SEL a2, sqlite3_stmt *a3, int a4)
{
  const unsigned __int8 *v8; // x2
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( sqlite3_column_type(a3, a4) == 5 )
  {
    objc_release(self);
    return 0LL;
  }
  else
  {
    v8 = sqlite3_column_text(a3, a4);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return -[NSString initWithUTF8String:](self, "initWithUTF8String:", v8);
  }
}