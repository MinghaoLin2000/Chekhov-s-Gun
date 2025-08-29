__ZN6google8protobuf17DescriptorBuilder19ValidateProto3FieldEPNS0_15FieldDescriptorERKNS0_20FieldDescriptorProtoE
void __fastcall google::protobuf::DescriptorBuilder::ValidateProto3Field(
        google::protobuf::DescriptorBuilder *this,
        google::protobuf::FieldDescriptor *a2,
        const google::protobuf::FieldDescriptorProto *a3)
{
  __int64 v6; // x22
  std::once_flag::_State_type *v7; // x0
  __int64 v8; // x22
  __int64 v9; // x0
  std::string *v10; // x0
  __int128 v11; // q0
  __int64 v12; // x8
  int v13; // w10
  const std::string::value_type *v14; // x1
  std::string::size_type v15; // x2
  std::string *v16; // x0
  __int128 v17; // q0
  std::string *v18; // x0
  __int128 v19; // q0
  std::once_flag::_State_type *v20; // x0
  void (__fastcall *v21)(const void *); // x23
  const void *v22; // x2
  std::string v23; // [xsp+8h] [xbp-A8h] BYREF
  std::string v24; // [xsp+20h] [xbp-90h] BYREF
  std::string v25; // [xsp+40h] [xbp-70h] BYREF
  __int128 v26; // [xsp+60h] [xbp-50h] BYREF
  std::string::size_type v27; // [xsp+70h] [xbp-40h]

  if ( *((_BYTE *)a2 + 67) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)a2 + 10) + 8LL);
    if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1001F7A28, memory_order_acquire) & 1) == 0
      && __cxa_guard_acquire(&qword_1001F7A28) )
    {
      v21 = (void (__fastcall *)(const void *))sub_100097BF4();
      google::protobuf::internal::OnShutdownRun(
        (google::protobuf::internal *)google::protobuf::internal::OnShutdownDelete<std::set<std::string>>(std::set<std::string> *)::{lambda(void const*)#1}::__invoke,
        v21,
        v22);
      qword_1001F7A20 = (__int64)v21;
      __cxa_guard_release(&qword_1001F7A28);
    }
    if ( qword_1001F7A20 + 8 == sub_100098054(qword_1001F7A20, v6) )
      google::protobuf::DescriptorBuilder::AddError(
        (__int64)this,
        *((_QWORD *)a2 + 1),
        (__int64)a3,
        3LL,
        "Extensions in proto3 are only allowed for defining options.");
  }
  if ( *((_DWORD *)a2 + 15) == 2 )
    google::protobuf::DescriptorBuilder::AddError(
      (__int64)this,
      *((_QWORD *)a2 + 1),
      (__int64)a3,
      2LL,
      "Required fields are not allowed in proto3.");
  if ( *((_BYTE *)a2 + 64) )
    google::protobuf::DescriptorBuilder::AddError(
      (__int64)this,
      *((_QWORD *)a2 + 1),
      (__int64)a3,
      4LL,
      "Explicit default values are not allowed in proto3.");
  v7 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
  if ( v7 )
  {
    v24.__r_.__value_.__r.__words[0] = (std::string::size_type)google::protobuf::FieldDescriptor::TypeOnceInit;
    v23.__r_.__value_.__r.__words[0] = (std::string::size_type)a2;
    if ( atomic_load_explicit((atomic_ullong *volatile)v7, memory_order_acquire) != -1LL )
    {
      *(_QWORD *)&v26 = &v24;
      *((_QWORD *)&v26 + 1) = &v23;
      v25.__r_.__value_.__r.__words[0] = (std::string::size_type)&v26;
      std::__call_once(v7, &v25, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( *((_DWORD *)a2 + 14) == 14
    && google::protobuf::FieldDescriptor::enum_type(a2)
    && *(_DWORD *)(*(_QWORD *)(google::protobuf::FieldDescriptor::enum_type(a2) + 16) + 60LL) != 3
    && *(_DWORD *)(*(_QWORD *)(google::protobuf::FieldDescriptor::enum_type(a2) + 16) + 60LL) )
  {
    v8 = *((_QWORD *)a2 + 1);
    v9 = google::protobuf::FieldDescriptor::enum_type(a2);
    std::operator+<char>("Enum type \"", *(_QWORD *)(v9 + 8));
    v10 = std::string::append(&v23, "\" is not a proto3 enum, but is used in \"");
    v11 = *(_OWORD *)&v10->__r_.__value_.__l.__data_;
    v24.__r_.__value_.__r.__words[2] = v10->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v24.__r_.__value_.__l.__data_ = v11;
    v10->__r_.__value_.__l.__size_ = 0LL;
    v10->__r_.__value_.__r.__words[2] = 0LL;
    v10->__r_.__value_.__r.__words[0] = 0LL;
    v12 = *(_QWORD *)(*((_QWORD *)a2 + 10) + 8LL);
    v13 = *(char *)(v12 + 23);
    if ( v13 >= 0 )
      v14 = *(const std::string::value_type **)(*((_QWORD *)a2 + 10) + 8LL);
    else
      v14 = *(const std::string::value_type **)v12;
    if ( v13 >= 0 )
      v15 = *(unsigned __int8 *)(v12 + 23);
    else
      v15 = *(_QWORD *)(v12 + 8);
    v16 = std::string::append(&v24, v14, v15);
    v17 = *(_OWORD *)&v16->__r_.__value_.__l.__data_;
    v25.__r_.__value_.__r.__words[2] = v16->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v25.__r_.__value_.__l.__data_ = v17;
    v16->__r_.__value_.__l.__size_ = 0LL;
    v16->__r_.__value_.__r.__words[2] = 0LL;
    v16->__r_.__value_.__r.__words[0] = 0LL;
    v18 = std::string::append(&v25, "\" which is a proto3 message type.");
    v19 = *(_OWORD *)&v18->__r_.__value_.__l.__data_;
    v27 = v18->__r_.__value_.__r.__words[2];
    v26 = v19;
    v18->__r_.__value_.__l.__size_ = 0LL;
    v18->__r_.__value_.__r.__words[2] = 0LL;
    v18->__r_.__value_.__r.__words[0] = 0LL;
    google::protobuf::DescriptorBuilder::AddError((__int64)this, v8, (__int64)a3, 2LL, (__int64)&v26);
    if ( SHIBYTE(v27) < 0 )
      operator delete((void *)v26);
    if ( SHIBYTE(v25.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v25.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v24.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v24.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v23.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v23.__r_.__value_.__l.__data_);
  }
  v20 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
  if ( v20 )
  {
    v24.__r_.__value_.__r.__words[0] = (std::string::size_type)google::protobuf::FieldDescriptor::TypeOnceInit;
    v23.__r_.__value_.__r.__words[0] = (std::string::size_type)a2;
    if ( atomic_load_explicit((atomic_ullong *volatile)v20, memory_order_acquire) != -1LL )
    {
      *(_QWORD *)&v26 = &v24;
      *((_QWORD *)&v26 + 1) = &v23;
      v25.__r_.__value_.__r.__words[0] = (std::string::size_type)&v26;
      std::__call_once(v20, &v25, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( *((_DWORD *)a2 + 14) == 10 )
    google::protobuf::DescriptorBuilder::AddError(
      (__int64)this,
      *((_QWORD *)a2 + 1),
      (__int64)a3,
      2LL,
      "Groups are not supported in proto3 syntax.");
}