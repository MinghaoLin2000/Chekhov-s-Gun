+[TSPDatabaseObject databaseObjectWithIdentifier:classType:fileState:packageURL:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[TSPDatabaseObject databaseObjectWithIdentifier:classType:fileState:packageURL:](
        id a1,
        SEL a2,
        signed __int64 a3,
        int a4,
        id a5,
        id a6)
{
  __int64 v7; // x21
  id v9; // x19
  id v10; // x20
  TSPDatabaseObjectWithFileState *v11; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v7 = *(_QWORD *)&a4;
  v9 = objc_retain(a5);
  v10 = objc_retain(a6);
  v11 = -[TSPDatabaseObjectWithFileState initWithIdentifier:classType:fileState:packageURL:](
          objc_alloc(&OBJC_CLASS___TSPDatabaseObjectWithFileState),
          "initWithIdentifier:classType:fileState:packageURL:",
          a3,
          v7,
          v9,
          v10);
  objc_release(v10);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}