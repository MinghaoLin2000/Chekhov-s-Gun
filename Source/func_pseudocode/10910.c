__ZN6google8protobuf17DescriptorBuilder10FindSymbolERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb
__int64 __fastcall google::protobuf::DescriptorBuilder::FindSymbol(__int64 a1, const std::string *a2, int a3)
{
  __int64 result; // x0
  __int64 v6; // x1
  unsigned __int64 v7; // x0
  __int64 v8; // x1
  unsigned __int64 v9; // x21
  _QWORD *i; // x8
  _QWORD *v11; // x22
  unsigned __int64 v12; // x9
  _BOOL8 v13; // x0
  _QWORD *v14; // x23
  __int64 v15; // x1
  _QWORD *v16; // x9
  _QWORD *v17; // x8
  bool v18; // zf
  _QWORD v19[2]; // [xsp+0h] [xbp-40h] BYREF

  result = google::protobuf::DescriptorBuilder::FindSymbolNotEnforcingDeps((__int64 *)a1, (__int64)a2, a3);
  v19[0] = result;
  v19[1] = v6;
  if ( (_DWORD)result && *(_BYTE *)(*(_QWORD *)a1 + 40LL) )
  {
    v7 = sub_10007D95C(v19);
    v8 = *(_QWORD *)(a1 + 80);
    if ( v7 == v8 )
      return v19[0];
    v9 = v7;
    v11 = (_QWORD *)(a1 + 104);
    for ( i = *(_QWORD **)(a1 + 104); i; i = (_QWORD *)*i )
    {
      v12 = i[4];
      if ( v7 >= v12 )
      {
        if ( v12 >= v7 )
          return v19[0];
        ++i;
      }
    }
    if ( LODWORD(v19[0]) == 8 )
    {
      v13 = google::protobuf::DescriptorBuilder::IsInPackage(v7, v8, (__int64)a2);
      if ( v13 )
        return v19[0];
      v14 = *(_QWORD **)(a1 + 96);
      if ( v14 != v11 )
      {
        do
        {
          v15 = v14[4];
          if ( v15 )
          {
            LODWORD(v13) = google::protobuf::DescriptorBuilder::IsInPackage(v13, v15, (__int64)a2);
            if ( v13 )
              return v19[0];
          }
          v16 = (_QWORD *)v14[1];
          if ( v16 )
          {
            do
            {
              v17 = v16;
              v16 = (_QWORD *)*v16;
            }
            while ( v16 );
          }
          else
          {
            do
            {
              v17 = (_QWORD *)v14[2];
              v18 = *v17 == (_QWORD)v14;
              v14 = v17;
            }
            while ( !v18 );
          }
          v14 = v17;
        }
        while ( v17 != v11 );
      }
    }
    *(_QWORD *)(a1 + 144) = v9;
    std::string::operator=((std::string *)(a1 + 152), a2);
    return 0LL;
  }
  return result;
}