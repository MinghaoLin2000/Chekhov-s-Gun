__ZN6google8protobuf17DescriptorBuilder16ValidateMapEntryEPNS0_15FieldDescriptorERKNS0_20FieldDescriptorProtoE
__int64 __fastcall google::protobuf::DescriptorBuilder::ValidateMapEntry(
        google::protobuf::DescriptorBuilder *this,
        google::protobuf::FieldDescriptor *a2,
        const google::protobuf::FieldDescriptorProto *a3)
{
  __int64 v6; // x0
  _QWORD *v7; // x22
  __int64 v8; // x23
  std::string *v9; // x0
  __int128 v10; // q0
  bool v11; // w23
  _DWORD *v12; // x22
  google::protobuf::FieldDescriptor *v13; // x8
  unsigned __int16 *v14; // x9
  int v15; // w10
  int v16; // w10
  int v17; // w9
  unsigned int v20; // w8
  google::protobuf::FieldDescriptor *v21; // [xsp+0h] [xbp-70h]
  std::string v22; // [xsp+8h] [xbp-68h] BYREF
  void *__p[2]; // [xsp+20h] [xbp-50h] BYREF
  std::string::size_type v24; // [xsp+30h] [xbp-40h]

  v6 = google::protobuf::FieldDescriptor::message_type(a2);
  if ( *(_DWORD *)(v6 + 128) )
    return 0LL;
  if ( *((_DWORD *)a2 + 15) != 3 )
    return 0LL;
  v7 = (_QWORD *)v6;
  if ( *(_DWORD *)(v6 + 124) || *(_DWORD *)(v6 + 116) || *(_DWORD *)(v6 + 120) || *(_DWORD *)(v6 + 104) != 2 )
    return 0LL;
  v8 = *(_QWORD *)v6;
  sub_10008D8A4(&v22, *(_QWORD *)a2, 0LL);
  v9 = std::string::append(&v22, "Entry");
  v10 = *(_OWORD *)&v9->__r_.__value_.__l.__data_;
  v24 = v9->__r_.__value_.__r.__words[2];
  *(_OWORD *)__p = v10;
  v9->__r_.__value_.__l.__size_ = 0LL;
  v9->__r_.__value_.__r.__words[2] = 0LL;
  v9->__r_.__value_.__r.__words[0] = 0LL;
  v11 = (sub_10008E610(v8, __p) & 1) != 0 || *((_QWORD *)a2 + 10) != v7[3];
  if ( SHIBYTE(v24) < 0 )
    operator delete(__p[0]);
  if ( SHIBYTE(v22.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v22.__r_.__value_.__l.__data_);
  if ( v11 )
    return 0LL;
  if ( *(_BYTE *)(v7[4] + 75LL) )
  {
    v12 = (_DWORD *)v7[5];
    v13 = (google::protobuf::FieldDescriptor *)(v12 + 38);
  }
  else
  {
    v12 = 0LL;
    v13 = 0LL;
  }
  if ( v12[15] != 1 || v12[17] != 1 )
    return 0LL;
  v14 = *(unsigned __int16 **)v12;
  v15 = *(char *)(*(_QWORD *)v12 + 23LL);
  if ( v15 < 0 )
  {
    if ( *((_QWORD *)v14 + 1) != 3LL )
      return 0LL;
    v14 = *(unsigned __int16 **)v14;
  }
  else if ( v15 != 3 )
  {
    return 0LL;
  }
  v16 = *v14;
  v17 = *((unsigned __int8 *)v14 + 2);
  if ( v16 != 25963 || v17 != 121 )
    return 0LL;
  if ( *((_DWORD *)v13 + 15) != 1 )
    return 0LL;
  v21 = v13;
  if ( *((_DWORD *)v13 + 17) != 2 || (sub_100092A20(*(_QWORD *)v13, "value") & 1) != 0 )
    return 0LL;
  v20 = sub_10007DF0C(v12) - 1;
  if ( v20 <= 0xD && ((0x2E03u >> v20) & 1) != 0 )
    google::protobuf::DescriptorBuilder::AddError(
      (__int64)this,
      *((_QWORD *)a2 + 1),
      (__int64)a3,
      2LL,
      off_1001D7F30[v20]);
  if ( (unsigned int)sub_10007DF0C(v21) == 14 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(google::protobuf::FieldDescriptor::enum_type(v21) + 48) + 16LL) )
      google::protobuf::DescriptorBuilder::AddError(
        (__int64)this,
        *((_QWORD *)a2 + 1),
        (__int64)a3,
        2LL,
        "Enum value in map must define 0 as the first value.");
  }
  return 1LL;
}