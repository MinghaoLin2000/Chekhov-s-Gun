+[TSPDatabaseObject databaseObjectWithIdentifier:classType:dataState:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[TSPDatabaseObject databaseObjectWithIdentifier:classType:dataState:](
        id a1,
        SEL a2,
        signed __int64 a3,
        int a4,
        signed __int64 a5)
{
  TSPDatabaseObjectWithDataState *v5; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = -[TSPDatabaseObjectWithDataState initWithIdentifier:classType:dataState:](
         objc_alloc(&OBJC_CLASS___TSPDatabaseObjectWithDataState),
         "initWithIdentifier:classType:dataState:",
         a3,
         *(_QWORD *)&a4,
         a5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}