__ZN6google8protobuf17DescriptorBuilder11BuildMethodERKNS0_21MethodDescriptorProtoEPKNS0_17ServiceDescriptorEPNS0_16MethodDescriptorE
__int64 __fastcall google::protobuf::DescriptorBuilder::BuildMethod(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // x23
  __int64 *String; // x0
  void **NameString; // x0
  __int64 v11; // x23
  void *__p[2]; // [xsp+8h] [xbp-58h] BYREF
  char v14; // [xsp+1Fh] [xbp-41h]
  __int64 v15[2]; // [xsp+20h] [xbp-40h] BYREF

  v8 = *(_QWORD **)(a1 + 8);
  sub_10007A644(v15, *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFELL);
  String = google::protobuf::DescriptorPool::Tables::AllocateString(v8, v15[0], v15[1]);
  *(_QWORD *)a4 = String;
  *(_QWORD *)(a4 + 16) = a3;
  NameString = google::protobuf::DescriptorBuilder::AllocateNameString(a1, *(__int64 **)(a3 + 8), String);
  *(_QWORD *)(a4 + 8) = NameString;
  google::protobuf::DescriptorBuilder::ValidateSymbolName(
    a1,
    (unsigned __int8 *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFELL),
    (__int64)NameString,
    a2);
  *(_QWORD *)(a4 + 88) = 0LL;
  *(_OWORD *)(a4 + 72) = 0u;
  *(_OWORD *)(a4 + 56) = 0u;
  *(_OWORD *)(a4 + 40) = 0u;
  *(_OWORD *)(a4 + 24) = 0u;
  if ( (*(_BYTE *)(a2 + 16) & 8) != 0 )
  {
    v11 = *(_QWORD *)(a2 + 48);
    sub_10007A754((int)__p, "google.protobuf.MethodOptions");
    sub_10008F160(a1, v11, a4, 4LL, __p);
    if ( v14 < 0 )
      operator delete(__p[0]);
  }
  *(_WORD *)(a4 + 96) = *(_WORD *)(a2 + 56);
  return google::protobuf::DescriptorBuilder::AddSymbol(a1, *(std::string **)(a4 + 8), a3, *(char **)a4, a2, 7LL, a4);
}