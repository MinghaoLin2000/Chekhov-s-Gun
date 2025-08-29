__ZNK6google8protobuf14DescriptorPool27NewPlaceholderWithMutexHeldENS0_11StringPieceENS1_15PlaceholderTypeE
__int64 __fastcall google::protobuf::DescriptorPool::NewPlaceholderWithMutexHeld(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        int a4)
{
  char v6; // w10
  unsigned __int8 *v7; // x8
  unsigned __int8 *v8; // x9
  int v9; // w11
  __int64 v11; // x22
  _QWORD *v12; // x21
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x3
  _QWORD *v16; // x0
  const std::string *String; // x21
  std::string::size_type v18; // x0
  std::string::size_type v19; // x23
  _QWORD *v20; // x22
  __int64 *v21; // x22
  _QWORD *v22; // x24
  std::string::__raw *v23; // x24
  size_t size; // x23
  std::string *v25; // x25
  const std::string *v26; // x1
  __int64 v27; // x25
  __int64 Bytes; // x23
  __int64 v29; // x20
  google::protobuf::EnumValueOptions *v30; // x0
  _QWORD *v31; // x19
  size_t v32; // x21
  std::string *v33; // x24
  const void *v34; // x1
  __int64 v35; // x23
  _QWORD *v36; // x0
  __int64 v38[2]; // [xsp+0h] [xbp-B0h] BYREF
  _QWORD v39[2]; // [xsp+10h] [xbp-A0h] BYREF
  __int64 v40[2]; // [xsp+20h] [xbp-90h] BYREF
  std::string v41; // [xsp+30h] [xbp-80h] BYREF
  __int64 v42[2]; // [xsp+48h] [xbp-68h] BYREF
  _QWORD v43[2]; // [xsp+58h] [xbp-58h] BYREF
  char v44; // [xsp+6Fh] [xbp-41h] BYREF

  v43[0] = a2;
  v43[1] = a3;
  if ( !a3 )
    return 0LL;
  v6 = 0;
  v7 = &a2[a3];
  v8 = a2;
  do
  {
    while ( 1 )
    {
      v9 = *v8;
      if ( (v9 & 0xFFFFFFDF) - 65 < 0x1A )
        break;
      if ( v9 == 95 || (unsigned int)(v9 - 48) < 0xA )
        break;
      v11 = 0LL;
      if ( !(v6 & 1 | (v9 != 46)) )
      {
        ++v8;
        v6 = 1;
        if ( v8 != v7 )
          continue;
      }
      return v11;
    }
    v6 = 0;
    ++v8;
  }
  while ( v8 != v7 );
  v12 = *(_QWORD **)(a1 + 32);
  if ( *a2 == 46 )
  {
    v13 = google::protobuf::StringPiece::substr((google::protobuf::StringPiece *)v43, 1uLL, 0xFFFFFFFFFFFFFFFFLL);
    v15 = v14;
    v16 = v12;
    a2 = (unsigned __int8 *)v13;
    a3 = v15;
  }
  else
  {
    v16 = *(_QWORD **)(a1 + 32);
  }
  String = (const std::string *)google::protobuf::DescriptorPool::Tables::AllocateString(v16, (__int64)a2, a3);
  v18 = std::string::rfind(String, 46, 0xFFFFFFFFFFFFFFFFLL);
  if ( v18 == -1LL )
  {
    if ( (atomic_load_explicit(google::protobuf::internal::init_protobuf_defaults_state, memory_order_acquire) & 1) == 0 )
      google::protobuf::internal::InitProtobufDefaultsSlow((google::protobuf::internal *)0xFFFFFFFFFFFFFFFFLL);
    v21 = &google::protobuf::internal::fixed_address_empty_string;
    v23 = (std::string::__raw *)String;
  }
  else
  {
    v19 = v18;
    v20 = *(_QWORD **)(a1 + 32);
    std::string::basic_string(&v41, String, 0LL, v18, (std::allocator<char> *)&v44);
    sub_10007A644(v42, &v41);
    v21 = google::protobuf::DescriptorPool::Tables::AllocateString(v20, v42[0], v42[1]);
    if ( SHIBYTE(v41.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v41.__r_.__value_.__l.__data_);
    v22 = *(_QWORD **)(a1 + 32);
    std::string::basic_string(&v41, String, v19 + 1, 0xFFFFFFFFFFFFFFFFLL, (std::allocator<char> *)&v44);
    sub_10007A644(v40, &v41);
    v23 = (std::string::__raw *)google::protobuf::DescriptorPool::Tables::AllocateString(v22, v40[0], v40[1]);
    if ( SHIBYTE(v41.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v41.__r_.__value_.__l.__data_);
  }
  if ( (String->__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
    size = HIBYTE(String->__r_.__value_.__r.__words[2]);
  else
    size = String->__r_.__value_.__l.__size_;
  v25 = &v41;
  sub_10007A5BC(&v41, size + 18, &v44);
  if ( (v41.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
    v25 = (std::string *)v41.__r_.__value_.__r.__words[0];
  if ( size )
  {
    if ( (String->__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
      v26 = String;
    else
      v26 = (const std::string *)String->__r_.__value_.__r.__words[0];
    memmove(v25, v26, size);
  }
  strcpy((char *)v25 + size, ".placeholder.proto");
  sub_10007A644(v39, &v41);
  v27 = google::protobuf::DescriptorPool::NewPlaceholderFileWithMutexHeld(a1, v39[0], v39[1]);
  if ( SHIBYTE(v41.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v41.__r_.__value_.__l.__data_);
  *(_QWORD *)(v27 + 8) = v21;
  if ( a4 == 1 )
  {
    *(_DWORD *)(v27 + 48) = 1;
    Bytes = google::protobuf::DescriptorPool::Tables::AllocateBytes(
              *(google::protobuf::DescriptorPool::Tables **)(a1 + 32),
              80);
    *(_QWORD *)(v27 + 112) = Bytes;
    *(_OWORD *)(Bytes + 24) = 0u;
    *(_OWORD *)(Bytes + 40) = 0u;
    *(_OWORD *)(Bytes + 56) = 0u;
    *(_QWORD *)(Bytes + 72) = 0LL;
    *(_QWORD *)Bytes = v23;
    *(_QWORD *)(Bytes + 8) = String;
    *(_QWORD *)(Bytes + 16) = v27;
    *(_QWORD *)(Bytes + 32) = google::protobuf::EnumOptions::default_instance((google::protobuf::EnumOptions *)Bytes);
    *(_BYTE *)(Bytes + 40) = 1;
    *(_BYTE *)(Bytes + 41) = *(_BYTE *)v43[0] != 46;
    *(_DWORD *)(Bytes + 44) = 1;
    v29 = google::protobuf::DescriptorPool::Tables::AllocateBytes(
            *(google::protobuf::DescriptorPool::Tables **)(a1 + 32),
            40);
    *(_QWORD *)(Bytes + 48) = v29;
    *(_OWORD *)v29 = 0u;
    *(_OWORD *)(v29 + 16) = 0u;
    *(_QWORD *)(v29 + 32) = 0LL;
    v30 = (google::protobuf::EnumValueOptions *)google::protobuf::DescriptorPool::Tables::AllocateString(
                                                  *(_QWORD **)(a1 + 32),
                                                  (__int64)"PLACEHOLDER_VALUE",
                                                  17LL);
    *(_QWORD *)v29 = v30;
    if ( *((char *)v21 + 23) < 0 )
    {
      if ( v21[1] )
        goto LABEL_40;
    }
    else if ( *((_BYTE *)v21 + 23) )
    {
LABEL_40:
      v31 = *(_QWORD **)(a1 + 32);
      if ( *((char *)v21 + 23) >= 0 )
        v32 = *((unsigned __int8 *)v21 + 23);
      else
        v32 = v21[1];
      v33 = &v41;
      sub_10007A5BC(&v41, v32 + 18, &v44);
      if ( (v41.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
        v33 = (std::string *)v41.__r_.__value_.__r.__words[0];
      if ( v32 )
      {
        if ( *((char *)v21 + 23) >= 0 )
          v34 = v21;
        else
          v34 = (const void *)*v21;
        memmove(v33, v34, v32);
      }
      strcpy((char *)v33 + v32, ".PLACEHOLDER_VALUE");
      sub_10007A644(v38, &v41);
      v30 = (google::protobuf::EnumValueOptions *)google::protobuf::DescriptorPool::Tables::AllocateString(
                                                    v31,
                                                    v38[0],
                                                    v38[1]);
      *(_QWORD *)(v29 + 8) = v30;
      if ( SHIBYTE(v41.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(v41.__r_.__value_.__l.__data_);
      goto LABEL_56;
    }
    *(_QWORD *)(v29 + 8) = v30;
LABEL_56:
    *(_DWORD *)(v29 + 16) = 0;
    *(_QWORD *)(v29 + 24) = Bytes;
    *(_QWORD *)(v29 + 32) = google::protobuf::EnumValueOptions::default_instance(v30);
    return 4LL;
  }
  v11 = 1LL;
  *(_DWORD *)(v27 + 44) = 1;
  v35 = google::protobuf::DescriptorPool::Tables::AllocateBytes(
          *(google::protobuf::DescriptorPool::Tables **)(a1 + 32),
          144);
  *(_QWORD *)(v27 + 104) = v35;
  *(_OWORD *)(v35 + 24) = 0u;
  *(_OWORD *)(v35 + 40) = 0u;
  *(_OWORD *)(v35 + 56) = 0u;
  *(_OWORD *)(v35 + 72) = 0u;
  *(_OWORD *)(v35 + 88) = 0u;
  *(_OWORD *)(v35 + 104) = 0u;
  *(_OWORD *)(v35 + 120) = 0u;
  *(_QWORD *)(v35 + 136) = 0LL;
  *(_QWORD *)v35 = v23;
  *(_QWORD *)(v35 + 8) = String;
  *(_QWORD *)(v35 + 16) = v27;
  *(_QWORD *)(v35 + 32) = google::protobuf::MessageOptions::default_instance((google::protobuf::MessageOptions *)v35);
  *(_BYTE *)(v35 + 140) = 1;
  *(_BYTE *)(v35 + 141) = *(_BYTE *)v43[0] != 46;
  if ( a4 == 2 )
  {
    *(_DWORD *)(v35 + 124) = 1;
    v36 = (_QWORD *)google::protobuf::DescriptorPool::Tables::AllocateBytes(
                      *(google::protobuf::DescriptorPool::Tables **)(a1 + 32),
                      16);
    *(_QWORD *)(v35 + 72) = v36;
    *v36 = 0x2000000000000001LL;
  }
  return v11;
}