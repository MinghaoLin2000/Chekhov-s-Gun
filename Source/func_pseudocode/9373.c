-[TSPDatabase objectFromStatement:]
id __cdecl -[TSPDatabase objectFromStatement:](TSPDatabase *self, SEL a2, sqlite3_stmt *a3)
{
  sqlite3_int64 v5; // x19
  __int64 v6; // x20
  void *v7; // x22
  TSPDatabaseObject *v8; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = sqlite3_column_int64(a3, 0);
  v6 = sqlite3_column_int(a3, 1);
  if ( sqlite3_column_int(a3, 2) )
  {
    v7 = objc_msgSend(
           objc_alloc((Class)&OBJC_CLASS___NSString),
           "initWithCString:encoding:",
           sqlite3_column_text(a3, 3),
           4LL);
    v8 = objc_retainAutoreleasedReturnValue(
           +[TSPDatabaseObject databaseObjectWithIdentifier:classType:fileState:packageURL:](
             &OBJC_CLASS___TSPDatabaseObject,
             "databaseObjectWithIdentifier:classType:fileState:packageURL:",
             v5,
             v6,
             v7,
             self->_packageURL));
    objc_release(v7);
  }
  else
  {
    v8 = objc_retainAutoreleasedReturnValue(
           +[TSPDatabaseObject databaseObjectWithIdentifier:classType:dataState:](
             &OBJC_CLASS___TSPDatabaseObject,
             "databaseObjectWithIdentifier:classType:dataState:",
             v5,
             v6,
             sqlite3_column_int64(a3, 3)));
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}