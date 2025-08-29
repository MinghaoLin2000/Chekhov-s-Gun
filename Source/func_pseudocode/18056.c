_NetFSGetMountInfoByFSID
__int64 __fastcall NetFSGetMountInfoByFSID(__int64 a1, void *a2)
{
  int v4; // w0
  unsigned int v5; // w22
  int v6; // w23
  statfs *v7; // x0
  statfs *v8; // x20
  __int64 v9; // x0
  char *v10; // x9
  __int64 v11; // x10
  __int64 v12; // x23

  v4 = getfsstat(0LL, 0, 2);
  if ( v4 < 1 )
    return 0xFFFFFFFFLL;
  v5 = v4;
  v6 = 2168 * v4;
  v7 = (statfs *)malloc_type_malloc(2168 * v4, 0xFB7EB85AuLL);
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v8 = v7;
  v9 = getfsstat(v7, v6, 2);
  if ( (int)v9 < 1 )
  {
    v12 = v9;
  }
  else
  {
    v10 = (char *)&v8->f_fsid + 4;
    v11 = v5;
    do
    {
      if ( *(_QWORD *)(v10 - 4) == a1 )
      {
        memcpy(a2, v10 - 52, 0x878uLL);
        v12 = 0LL;
        goto LABEL_11;
      }
      v10 += 2168;
      --v11;
    }
    while ( v11 );
    v12 = 0xFFFFFFFFLL;
  }
LABEL_11:
  free(v8);
  return v12;
}