__ZNK6google8protobuf16MethodDescriptor6CopyToEPNS0_21MethodDescriptorProtoE
__int64 __fastcall google::protobuf::MethodDescriptor::CopyTo(
        google::protobuf::MethodDescriptor *this,
        google::protobuf::MethodDescriptorProto *a2)
{
  __int64 v4; // x1
  __int64 v5; // x8
  _QWORD *v6; // x2
  __int64 v7; // x8
  _QWORD *v8; // x2
  __int64 v9; // x8
  _QWORD *v10; // x1
  std::string *v11; // x22
  __int64 v12; // x8
  int v13; // w10
  const std::string::value_type *v14; // x1
  std::string::size_type v15; // x2
  __int64 v16; // x8
  _QWORD *v17; // x2
  __int64 v18; // x8
  _QWORD *v19; // x1
  std::string *v20; // x22
  __int64 v21; // x8
  int v22; // w10
  const std::string::value_type *v23; // x1
  std::string::size_type v24; // x2
  std::string *v25; // x0
  __int64 v26; // x21
  __int64 result; // x0
  google::protobuf::MethodOptions *v28; // x0
  __int64 v29; // x8
  _QWORD *v30; // x0
  void *__p[2]; // [xsp+8h] [xbp-38h] BYREF
  char v32; // [xsp+1Fh] [xbp-21h]

  v4 = *(_QWORD *)this;
  *((_DWORD *)a2 + 4) |= 1u;
  v5 = *((_QWORD *)a2 + 1);
  v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v5 & 1) != 0 )
    v6 = (_QWORD *)*v6;
  google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 24, v4, v6);
  google::protobuf::internal::LazyDescriptor::Once((google::protobuf::MethodDescriptor *)((char *)this + 24));
  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 141LL) )
  {
    *((_DWORD *)a2 + 4) |= 2u;
    sub_10007A754((int)__p, ".");
    v7 = *((_QWORD *)a2 + 1);
    v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v7 & 1) != 0 )
      v8 = (_QWORD *)*v8;
    google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 32, __p, v8);
    if ( v32 < 0 )
      operator delete(__p[0]);
  }
  *((_DWORD *)a2 + 4) |= 2u;
  v9 = *((_QWORD *)a2 + 1);
  v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v9 & 1) != 0 )
    v10 = (_QWORD *)*v10;
  v11 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable((char *)a2 + 32, v10);
  google::protobuf::internal::LazyDescriptor::Once((google::protobuf::MethodDescriptor *)((char *)this + 24));
  v12 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL);
  v13 = *(char *)(v12 + 23);
  if ( v13 >= 0 )
    v14 = *(const std::string::value_type **)(*((_QWORD *)this + 3) + 8LL);
  else
    v14 = *(const std::string::value_type **)v12;
  if ( v13 >= 0 )
    v15 = *(unsigned __int8 *)(v12 + 23);
  else
    v15 = *(_QWORD *)(v12 + 8);
  std::string::append(v11, v14, v15);
  google::protobuf::internal::LazyDescriptor::Once((google::protobuf::MethodDescriptor *)((char *)this + 56));
  if ( !*(_BYTE *)(*((_QWORD *)this + 7) + 141LL) )
  {
    *((_DWORD *)a2 + 4) |= 4u;
    sub_10007A754((int)__p, ".");
    v16 = *((_QWORD *)a2 + 1);
    v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v16 & 1) != 0 )
      v17 = (_QWORD *)*v17;
    google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 40, __p, v17);
    if ( v32 < 0 )
      operator delete(__p[0]);
  }
  *((_DWORD *)a2 + 4) |= 4u;
  v18 = *((_QWORD *)a2 + 1);
  v19 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v18 & 1) != 0 )
    v19 = (_QWORD *)*v19;
  v20 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable((char *)a2 + 40, v19);
  google::protobuf::internal::LazyDescriptor::Once((google::protobuf::MethodDescriptor *)((char *)this + 56));
  v21 = *(_QWORD *)(*((_QWORD *)this + 7) + 8LL);
  v22 = *(char *)(v21 + 23);
  if ( v22 >= 0 )
    v23 = *(const std::string::value_type **)(*((_QWORD *)this + 7) + 8LL);
  else
    v23 = *(const std::string::value_type **)v21;
  if ( v22 >= 0 )
    v24 = *(unsigned __int8 *)(v21 + 23);
  else
    v24 = *(_QWORD *)(v21 + 8);
  v25 = std::string::append(v20, v23, v24);
  v26 = *((_QWORD *)this + 11);
  result = google::protobuf::MethodOptions::default_instance((google::protobuf::MethodOptions *)v25);
  if ( v26 != result )
  {
    *((_DWORD *)a2 + 4) |= 8u;
    v28 = (google::protobuf::MethodOptions *)*((_QWORD *)a2 + 6);
    if ( !v28 )
    {
      v29 = *((_QWORD *)a2 + 1);
      v30 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v29 & 1) != 0 )
        v30 = (_QWORD *)*v30;
      v28 = (google::protobuf::MethodOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::MethodOptions>(v30);
      *((_QWORD *)a2 + 6) = v28;
    }
    result = google::protobuf::MethodOptions::CopyFrom(v28, *((const google::protobuf::MethodOptions **)this + 11));
  }
  if ( *((_BYTE *)this + 96) )
  {
    *((_DWORD *)a2 + 4) |= 0x10u;
    *((_BYTE *)a2 + 56) = 1;
  }
  if ( *((_BYTE *)this + 97) )
  {
    *((_DWORD *)a2 + 4) |= 0x20u;
    *((_BYTE *)a2 + 57) = 1;
  }
  return result;
}