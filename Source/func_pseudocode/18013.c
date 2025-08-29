_NetFSGetSupportedSchemes
CFArrayRef NetFSGetSupportedSchemes()
{
  void **v0; // x8
  __int64 v1; // x19
  void **v2; // x8
  CFStringRef *v3; // x0
  CFStringRef *v4; // x20
  _QWORD *v5; // x23
  __int64 v6; // x21
  unsigned __int64 v7; // x8
  __int64 v8; // x24
  __int64 v9; // x25
  CFStringRef *v10; // x0
  __int64 v11; // x9
  unsigned __int64 v12; // x10
  CFArrayRef v13; // x19
  _QWORD *v14; // x22
  unsigned __int64 v15; // x8
  __int64 v16; // x23
  __int64 v17; // x24
  CFStringRef *v18; // x0
  __int64 v19; // x9
  unsigned __int64 v20; // x10
  __int64 v21; // x21
  __int64 v22; // x22
  CFStringRef *v23; // x23

  sub_100004E9C(&off_100018D98);
  sub_100004E9C(&off_100018DC0);
  v0 = (void **)off_100018DB0;
  if ( off_100018DB0 )
  {
    v1 = 0LL;
    do
    {
      v1 += *((unsigned int *)v0 + 33);
      v0 = (void **)*v0;
    }
    while ( v0 );
  }
  else
  {
    v1 = 0LL;
  }
  v2 = (void **)off_100018DD8;
  if ( off_100018DD8 )
  {
    do
    {
      v1 += *((unsigned int *)v2 + 33);
      v2 = (void **)*v2;
    }
    while ( v2 );
  }
  v3 = (CFStringRef *)malloc_type_malloc(8 * v1, 0x6004044C4A2DFuLL);
  if ( !v3 )
    return 0LL;
  v4 = v3;
  v5 = off_100018DB0;
  if ( off_100018DB0 )
  {
    v6 = 0LL;
    do
    {
      v7 = *((unsigned int *)v5 + 33);
      if ( (_DWORD)v7 )
      {
        v8 = v6;
        v9 = 17LL;
        while ( 1 )
        {
          if ( v6 + v9 - 17 >= v1 )
          {
            v10 = (CFStringRef *)malloc_type_realloc(v4, v8 * 8 + 8, 0x6004044C4A2DFuLL);
            if ( !v10 )
            {
LABEL_38:
              v13 = 0LL;
              goto LABEL_39;
            }
            v1 = v6 + v9 - 16;
            v7 = *((unsigned int *)v5 + 33);
            v4 = v10;
          }
          v4[v8] = (CFStringRef)v5[v9];
          v11 = v9 + 1;
          v12 = v9 - 16;
          ++v8;
          ++v9;
          if ( v12 >= v7 )
          {
            v6 = v6 + v11 - 17;
            break;
          }
        }
      }
      v5 = (_QWORD *)*v5;
    }
    while ( v5 );
  }
  else
  {
    v6 = 0LL;
  }
  v14 = off_100018DD8;
  if ( off_100018DD8 )
  {
    do
    {
      v15 = *((unsigned int *)v14 + 33);
      if ( (_DWORD)v15 )
      {
        v16 = v6;
        v17 = 17LL;
        do
        {
          if ( v6 + v17 - 17 >= v1 )
          {
            v18 = (CFStringRef *)malloc_type_realloc(v4, v16 * 8 + 8, 0x6004044C4A2DFuLL);
            if ( !v18 )
              goto LABEL_38;
            v1 = v6 + v17 - 16;
            v15 = *((unsigned int *)v14 + 33);
            v4 = v18;
          }
          v4[v16] = (CFStringRef)v14[v17];
          v19 = v17 + 1;
          v20 = v17 - 16;
          ++v16;
          ++v17;
        }
        while ( v20 < v15 );
        v6 = v6 + v19 - 17;
      }
      v14 = (_QWORD *)*v14;
    }
    while ( v14 );
  }
  qsort(v4, v1, 8uLL, (int (__cdecl *)(const void *, const void *))sub_1000054B0);
  if ( v1 >= 2 )
  {
    v21 = 0LL;
    v22 = v1 - 1;
    v23 = v4 + 1;
    do
    {
      if ( CFStringCompare(v4[v21], *v23, 1uLL) )
        v4[++v21] = *v23;
      else
        --v1;
      ++v23;
      --v22;
    }
    while ( v22 );
  }
  v13 = CFArrayCreate(kCFAllocatorDefault, (const void **)v4, v1, &kCFTypeArrayCallBacks);
LABEL_39:
  free(v4);
  return v13;
}