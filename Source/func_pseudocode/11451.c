__ZNK6google8protobuf25EncodedDescriptorDatabase15DescriptorIndex18FindSymbolOnlyFlatENS0_11StringPieceE
__int64 __fastcall google::protobuf::EncodedDescriptorDatabase::DescriptorIndex::FindSymbolOnlyFlat(
        __int64 a1,
        void *a2,
        void *a3)
{
  int *v4; // x21
  int *v5; // x9
  unsigned __int64 v6; // x23
  int *v7; // x8
  int *v8; // x9
  __int64 v9; // x9
  int *v10; // x20
  __int64 v11; // x19
  void *__p[2]; // [xsp+8h] [xbp-68h] BYREF
  char v14; // [xsp+1Fh] [xbp-51h]
  void *v15[2]; // [xsp+20h] [xbp-50h] BYREF
  void *v16[2]; // [xsp+30h] [xbp-40h] BYREF

  v16[0] = a2;
  v16[1] = a3;
  v4 = *(int **)(a1 + 112);
  v5 = *(int **)(a1 + 120);
  __p[0] = *(void **)(a1 + 104);
  if ( v5 == v4 )
  {
    v7 = v4;
    v8 = v4;
  }
  else
  {
    v6 = ((char *)v5 - (char *)v4) >> 5;
    do
    {
      if ( (unsigned int)sub_1000BE038(__p, v16, &v4[8 * (v6 >> 1)]) )
      {
        v6 >>= 1;
      }
      else
      {
        v4 += 8 * (v6 >> 1) + 8;
        v6 += ~(v6 >> 1);
      }
    }
    while ( v6 );
    v8 = *(int **)(a1 + 112);
    v7 = *(int **)(a1 + 120);
  }
  if ( v4 == v8 )
    v9 = 0LL;
  else
    v9 = -1LL;
  v10 = &v4[8 * v9];
  if ( v10 == v7 )
    return 0LL;
  sub_1000BC080(__p, &v4[8 * v9], a1);
  sub_10007A644(v15, __p);
  if ( (unsigned int)sub_1000BC4E8(v15[0], (size_t)v15[1], v16[0]) )
    v11 = *(_QWORD *)(*(_QWORD *)a1 + 40LL * *v10);
  else
    v11 = 0LL;
  if ( v14 < 0 )
    operator delete(__p[0]);
  return v11;
}