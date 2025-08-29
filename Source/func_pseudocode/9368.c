-[TSPDatabase openDataStateBlobWithIdentifier:error:]
sqlite3_blob *__cdecl -[TSPDatabase openDataStateBlobWithIdentifier:error:](
        TSPDatabase *self,
        SEL a2,
        signed __int64 a3,
        id *a4)
{
  __int64 v7; // x0
  int v8; // w20
  sqlite3_blob *ppBlob; // [xsp+8h] [xbp-28h] BYREF

  ppBlob = 0LL;
  v7 = sqlite3_blob_open(self->super._db, "main", "dataStates", "state", a3, 0, &ppBlob);
  v8 = TSUHandleSqlite(v7, a4, 1LL, self, a2, 198LL, CFSTR("Opening database blob"));
  if ( (v8 & 1) == 0 )
    sub_100027CD4(a4);
  if ( v8 )
    return ppBlob;
  else
    return 0LL;
}