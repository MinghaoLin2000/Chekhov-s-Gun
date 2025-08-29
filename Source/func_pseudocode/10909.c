__ZN6google8protobuf17DescriptorBuilder26FindSymbolNotEnforcingDepsERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb
__int64 __fastcall google::protobuf::DescriptorBuilder::FindSymbolNotEnforcingDeps(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // x1
  unsigned __int64 v5; // x0
  _QWORD *i; // x8
  unsigned __int64 v7; // x9
  unsigned __int64 v9; // [xsp+8h] [xbp-28h] BYREF
  _QWORD v10[2]; // [xsp+10h] [xbp-20h] BYREF

  v10[0] = google::protobuf::DescriptorBuilder::FindSymbolNotEnforcingDepsHelper(a1, *a1, a2, a3);
  v10[1] = v4;
  v5 = sub_10007D95C(v10);
  v9 = v5;
  if ( v5 == a1[10] )
  {
LABEL_8:
    sub_10009CBA8(a1 + 15, &v9);
  }
  else
  {
    for ( i = (_QWORD *)a1[13]; i; i = (_QWORD *)*i )
    {
      v7 = i[4];
      if ( v5 >= v7 )
      {
        if ( v7 >= v5 )
          goto LABEL_8;
        ++i;
      }
    }
  }
  return v10[0];
}