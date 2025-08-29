_sqlite3_blob_open
int __cdecl sqlite3_blob_open(
        sqlite3 *a1,
        const char *zDb,
        const char *zTable,
        const char *zColumn,
        sqlite3_int64 iRow,
        int flags,
        sqlite3_blob **ppBlob)
{
  return _sqlite3_blob_open(a1, zDb, zTable, zColumn, iRow, flags, ppBlob);
}