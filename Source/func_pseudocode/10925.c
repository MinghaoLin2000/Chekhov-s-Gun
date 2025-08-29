__ZN6google8protobuf17DescriptorBuilder12BuildServiceERKNS0_22ServiceDescriptorProtoEPKvPNS0_17ServiceDescriptorE
__int64 __fastcall google::protobuf::DescriptorBuilder::BuildService(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 NameString; // x22
  _QWORD *v8; // x23
  int v9; // w8
  __int64 v10; // x22
  __int64 v11; // x23
  __int64 v12; // x22
  void *__p[2]; // [xsp+8h] [xbp-58h] BYREF
  char v15; // [xsp+1Fh] [xbp-41h]
  __int64 v16[2]; // [xsp+20h] [xbp-40h] BYREF

  NameString = google::protobuf::DescriptorBuilder::AllocateNameString(
                 a1,
                 *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL),
                 *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFFELL);
  google::protobuf::DescriptorBuilder::ValidateSymbolName(
    a1,
    (unsigned __int8 *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFFELL),
    NameString,
    a2);
  v8 = *(_QWORD **)(a1 + 8);
  sub_10007A644(v16, *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFFELL);
  *(_QWORD *)a4 = google::protobuf::DescriptorPool::Tables::AllocateString(v8, v16[0], v16[1]);
  *(_QWORD *)(a4 + 8) = NameString;
  *(_QWORD *)(a4 + 16) = *(_QWORD *)(a1 + 80);
  v9 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a4 + 40) = v9;
  *(_QWORD *)(a4 + 32) = google::protobuf::DescriptorPool::Tables::AllocateBytes(
                           *(google::protobuf::DescriptorPool::Tables **)(a1 + 8),
                           104 * v9);
  if ( *(int *)(a2 + 32) >= 1 )
  {
    v10 = 0LL;
    v11 = 0LL;
    do
    {
      google::protobuf::DescriptorBuilder::BuildMethod(
        (google::protobuf::DescriptorBuilder *)a1,
        *(const google::protobuf::MethodDescriptorProto **)(*(_QWORD *)(a2 + 40) + 8 * v11++ + 8),
        (const google::protobuf::ServiceDescriptor *)a4,
        (google::protobuf::MethodDescriptor *)(*(_QWORD *)(a4 + 32) + v10));
      v10 += 104LL;
    }
    while ( v11 < *(int *)(a2 + 32) );
  }
  *(_QWORD *)(a4 + 24) = 0LL;
  if ( (*(_BYTE *)(a2 + 16) & 2) != 0 )
  {
    v12 = *(_QWORD *)(a2 + 56);
    sub_10007A754((int)__p, "google.protobuf.ServiceOptions");
    sub_10008EFFC(a1, v12, a4, 3LL, __p);
    if ( v15 < 0 )
      operator delete(__p[0]);
  }
  return google::protobuf::DescriptorBuilder::AddSymbol(a1, *(std::string **)(a4 + 8), 0LL, *(char **)a4, a2, 6LL, a4);
}