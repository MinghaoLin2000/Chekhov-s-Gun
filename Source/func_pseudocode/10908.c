__ZN6google8protobuf17DescriptorBuilder32FindSymbolNotEnforcingDepsHelperEPKNS0_14DescriptorPoolERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb
unsigned __int64 __fastcall google::protobuf::DescriptorBuilder::FindSymbolNotEnforcingDepsHelper(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  std::mutex *v8; // x19
  char v9; // w25
  __int64 v10; // x23
  __int64 v11; // x0
  unsigned __int64 v12; // x26
  unsigned __int64 v13; // x27
  __int64 v14; // x1
  unsigned __int64 SymbolNotEnforcingDepsHelper; // x0
  __int64 v16; // x21
  __int64 v17; // x0
  __int128 v19; // [xsp+0h] [xbp-90h] BYREF
  __int64 v20[2]; // [xsp+10h] [xbp-80h] BYREF
  __int128 v21; // [xsp+20h] [xbp-70h] BYREF
  __int128 v22; // [xsp+30h] [xbp-60h] BYREF

  if ( *a1 == a2 )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = *(std::mutex **)a2;
    if ( *(_QWORD *)a2 )
    {
      std::mutex::lock(*(std::mutex **)a2);
      v9 = 0;
      goto LABEL_6;
    }
  }
  v9 = 1;
LABEL_6:
  v10 = *(_QWORD *)(a2 + 32);
  sub_10007A644(&v21, a3);
  v22 = v21;
  v11 = sub_100096644(v10 + 304, &v22);
  if ( v11 )
  {
    LODWORD(v13) = *(_DWORD *)(v11 + 32);
    v12 = *(unsigned int *)(v11 + 36);
    if ( (_DWORD)v13 )
      goto LABEL_19;
  }
  else
  {
    v12 = 0LL;
  }
  v14 = *(_QWORD *)(a2 + 24);
  if ( v14 )
  {
    SymbolNotEnforcingDepsHelper = google::protobuf::DescriptorBuilder::FindSymbolNotEnforcingDepsHelper(
                                     a1,
                                     v14,
                                     a3,
                                     1LL);
    v12 = HIDWORD(SymbolNotEnforcingDepsHelper);
    LODWORD(v13) = SymbolNotEnforcingDepsHelper;
    if ( (_DWORD)SymbolNotEnforcingDepsHelper )
      goto LABEL_19;
  }
  else
  {
    LODWORD(v13) = 0;
  }
  if ( a4 )
  {
    sub_10007A644(v20, a3);
    if ( (unsigned int)google::protobuf::DescriptorPool::TryFindSymbolInFallbackDatabase(
                         (google::protobuf::DescriptorPool *)a2,
                         v20[0],
                         v20[1]) )
    {
      v16 = *(_QWORD *)(a2 + 32);
      sub_10007A644(&v19, a3);
      v22 = v19;
      v17 = sub_100096644(v16 + 304, &v22);
      if ( v17 )
        v13 = *(_QWORD *)(v17 + 32);
      else
        v13 = 0LL;
      v12 = HIDWORD(v13);
      if ( (v9 & 1) == 0 )
        goto LABEL_20;
      return (unsigned int)v13 | (v12 << 32);
    }
    LODWORD(v13) = 0;
  }
LABEL_19:
  if ( (v9 & 1) == 0 )
LABEL_20:
    std::mutex::unlock(v8);
  return (unsigned int)v13 | (v12 << 32);
}