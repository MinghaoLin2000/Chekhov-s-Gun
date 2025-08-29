__ZN6google8protobuf17DescriptorBuilder10BuildOneofERKNS0_20OneofDescriptorProtoEPNS0_10DescriptorEPNS0_15OneofDescriptorE
__int64 __fastcall google::protobuf::DescriptorBuilder::BuildOneof(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  std::string *NameString; // x23
  _QWORD *v9; // x24
  char *String; // x0
  char *v11; // x3
  __int64 v12; // x23
  void *__p[2]; // [xsp+8h] [xbp-58h] BYREF
  char v15; // [xsp+1Fh] [xbp-41h]
  __int64 v16[2]; // [xsp+20h] [xbp-40h] BYREF

  NameString = (std::string *)google::protobuf::DescriptorBuilder::AllocateNameString(
                                a1,
                                *(__int64 **)(a3 + 8),
                                (__int64 *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFELL));
  google::protobuf::DescriptorBuilder::ValidateSymbolName(
    a1,
    (unsigned __int8 *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFELL),
    (__int64)NameString,
    a2);
  v9 = *(_QWORD **)(a1 + 8);
  sub_10007A644(v16, *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFELL);
  String = (char *)google::protobuf::DescriptorPool::Tables::AllocateString(v9, v16[0], v16[1]);
  *(_QWORD *)a4 = String;
  *(_QWORD *)(a4 + 8) = NameString;
  *(_QWORD *)(a4 + 16) = a3;
  *(_DWORD *)(a4 + 24) = 0;
  *(_QWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 40) = 0LL;
  if ( (*(_BYTE *)(a2 + 16) & 2) != 0 )
  {
    v12 = *(_QWORD *)(a2 + 32);
    sub_10007A754((int)__p, "google.protobuf.OneofOptions");
    sub_10008DEF0(a1, v12, a4, 2LL, __p);
    if ( v15 < 0 )
      operator delete(__p[0]);
    v11 = *(char **)a4;
    NameString = *(std::string **)(a4 + 8);
  }
  else
  {
    v11 = String;
  }
  return google::protobuf::DescriptorBuilder::AddSymbol(a1, NameString, a3, v11, a2, 3LL, a4);
}