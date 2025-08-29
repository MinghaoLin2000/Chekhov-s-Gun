__ZN6google8protobuf14DescriptorPool6Tables16FindByNameHelperEPKS1_NS0_11StringPieceE
unsigned __int64 __fastcall google::protobuf::DescriptorPool::Tables::FindByNameHelper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  std::mutex *v8; // x19
  char v9; // w25
  __int64 v10; // x0
  unsigned __int64 v11; // x26
  unsigned __int64 v12; // x27
  __int64 v13; // x1
  unsigned __int64 v14; // x0
  __int64 v15; // x0
  __int64 v17; // x0
  __int64 v18; // [xsp+0h] [xbp-60h] BYREF
  __int64 v19; // [xsp+8h] [xbp-58h]

  v8 = *(std::mutex **)a2;
  if ( !*(_QWORD *)a2 )
    goto LABEL_6;
  std::mutex::lock(*(std::mutex **)a2);
  if ( !*(_QWORD *)(a1 + 88) && !*(_QWORD *)(a1 + 48) )
  {
    v18 = a3;
    v19 = a4;
    v17 = sub_100096644(a1 + 304, &v18);
    if ( v17 )
    {
      v12 = *(_QWORD *)(v17 + 32);
      if ( (_DWORD)v12 )
      {
        v11 = HIDWORD(v12);
        goto LABEL_20;
      }
    }
  }
  std::mutex::unlock(v8);
  v8 = *(std::mutex **)a2;
  if ( *(_QWORD *)a2 )
  {
    std::mutex::lock(*(std::mutex **)a2);
    v9 = 0;
  }
  else
  {
LABEL_6:
    v9 = 1;
  }
  if ( *(_QWORD *)(a2 + 8) )
  {
    sub_10009B118(a1 + 64);
    sub_10009B118(a1 + 24);
  }
  v18 = a3;
  v19 = a4;
  v10 = sub_100096644(a1 + 304, &v18);
  if ( v10 )
  {
    LODWORD(v12) = *(_DWORD *)(v10 + 32);
    v11 = *(unsigned int *)(v10 + 36);
    if ( (_DWORD)v12 )
      goto LABEL_19;
  }
  else
  {
    v11 = 0LL;
  }
  v13 = *(_QWORD *)(a2 + 24);
  if ( !v13
    || (v14 = google::protobuf::DescriptorPool::Tables::FindByNameHelper(*(_QWORD *)(v13 + 32), v13, a3, a4),
        v11 = HIDWORD(v14),
        (LODWORD(v12) = v14) == 0) )
  {
    if ( (unsigned int)google::protobuf::DescriptorPool::TryFindSymbolInFallbackDatabase(a2, a3, a4) )
    {
      v18 = a3;
      v19 = a4;
      v15 = sub_100096644(a1 + 304, &v18);
      if ( v15 )
        v12 = *(_QWORD *)(v15 + 32);
      else
        v12 = 0LL;
      v11 = HIDWORD(v12);
      if ( (v9 & 1) == 0 )
        goto LABEL_20;
      return (unsigned int)v12 | (v11 << 32);
    }
    LODWORD(v12) = 0;
  }
LABEL_19:
  if ( (v9 & 1) == 0 )
LABEL_20:
    std::mutex::unlock(v8);
  return (unsigned int)v12 | (v11 << 32);
}