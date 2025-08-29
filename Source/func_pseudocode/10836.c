__ZN6google8protobuf20FileDescriptorTables20BuildLocationsByPathEPNSt3__14pairIPKS1_PKNS0_14SourceCodeInfoEEE
void __fastcall google::protobuf::FileDescriptorTables::BuildLocationsByPath(_QWORD *a1)
{
  __int64 v1; // x8
  __int64 v3; // x23
  __int64 v4; // x24
  __int64 v5; // x26
  __int64 v6; // x22
  void *__p[2]; // [xsp+8h] [xbp-68h] BYREF
  char v8; // [xsp+1Fh] [xbp-51h]
  char v9; // [xsp+27h] [xbp-49h] BYREF
  void **v10; // [xsp+28h] [xbp-48h] BYREF

  v1 = *(unsigned int *)(a1[1] + 24LL);
  if ( (int)v1 >= 1 )
  {
    v3 = 0LL;
    v4 = 8 * v1;
    do
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1[1] + 32LL) + v3 + 8);
      v6 = *a1 + 280LL;
      sub_10007D1B0((__int64 *)__p, v5 + 24, ",");
      v10 = __p;
      *(_QWORD *)(sub_10009B9CC(v6, __p, &unk_1001891C0, &v10, &v9) + 40) = v5;
      if ( v8 < 0 )
        operator delete(__p[0]);
      v3 += 8LL;
    }
    while ( v4 != v3 );
  }
}