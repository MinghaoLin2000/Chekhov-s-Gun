-[NSProgress tsu_pendingUnitCountForIncompleteProgress:]
signed __int64 __cdecl -[NSProgress tsu_pendingUnitCountForIncompleteProgress:](
        NSProgress *self,
        SEL a2,
        signed __int64 a3)
{
  int64_t v5; // x21
  int64_t v6; // x0
  signed __int64 v7; // x8
  signed __int64 v8; // x9

  v5 = -[NSProgress totalUnitCount](self, "totalUnitCount");
  v6 = -[NSProgress completedUnitCount](self, "completedUnitCount");
  v7 = v5 - v6;
  if ( v5 - v6 < 0 )
    v7 = v6 - v5;
  v8 = (unsigned __int64)v7 >> 1;
  if ( v7 > a3 )
    v8 = a3;
  if ( (unsigned __int64)v7 < 2 && v7 < a3 )
    return 0LL;
  else
    return v8;
}