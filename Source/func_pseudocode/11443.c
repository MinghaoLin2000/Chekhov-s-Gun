__ZN6google8protobuf25EncodedDescriptorDatabase15DescriptorIndex8FindFileENS0_11StringPieceE
__int64 __fastcall google::protobuf::EncodedDescriptorDatabase::DescriptorIndex::FindFile(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x0
  int *v7; // x20
  void *__s2; // [xsp+8h] [xbp-38h] BYREF
  __int64 v10; // [xsp+10h] [xbp-30h]
  char v11; // [xsp+1Fh] [xbp-21h] BYREF
  void *__s1; // [xsp+20h] [xbp-20h] BYREF
  size_t __n; // [xsp+28h] [xbp-18h]

  __s2 = a2;
  v10 = a3;
  google::protobuf::EncodedDescriptorDatabase::DescriptorIndex::EnsureFlat((google::protobuf::EncodedDescriptorDatabase::DescriptorIndex *)a1);
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 64);
  __s1 = *(void **)(a1 + 48);
  v11 = 0;
  v6 = sub_1000BECBC(v4, v5, &__s2, &__s1, &v11);
  if ( *(_QWORD *)(a1 + 64) != v6
    && (v7 = (int *)v6, sub_10007A644(&__s1, v6 + 8), __n == v10)
    && ((__int64)__n < 1 || __s1 == __s2 || !memcmp(__s1, __s2, __n)) )
  {
    return *(_QWORD *)(*(_QWORD *)a1 + 40LL * *v7);
  }
  else
  {
    return 0LL;
  }
}