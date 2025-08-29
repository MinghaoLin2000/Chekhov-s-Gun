-[TSPDatabase openDataStateBlobWithIdentifier:willWrite:error:]
sqlite3_blob *__cdecl -[TSPDatabase openDataStateBlobWithIdentifier:willWrite:error:](
        TSPDatabase *self,
        SEL a2,
        signed __int64 a3,
        bool a4,
        id *a5)
{
  __int64 v8; // x0
  int v9; // w20
  sqlite3_blob *ppBlob; // [xsp+8h] [xbp-28h] BYREF

  ppBlob = 0LL;
  v8 = sqlite3_blob_open(self->super._db, "main", "dataStates", "state", a3, a4, &ppBlob);
  v9 = TSUHandleSqlite(v8, a5, 1LL, self, a2, 568LL, CFSTR("Opening database blob"));
  if ( (v9 & 1) == 0 )
    sub_100027CD4(a5);
  if ( v9 )
    return ppBlob;
  else
    return 0LL;
}