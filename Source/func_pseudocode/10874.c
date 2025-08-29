__ZNK6google8protobuf15OneofDescriptor6CopyToEPNS0_20OneofDescriptorProtoE
__int64 __fastcall google::protobuf::OneofDescriptor::CopyTo(
        google::protobuf::OneofDescriptor *this,
        google::protobuf::OneofDescriptorProto *a2)
{
  __int64 v4; // x1
  __int64 v5; // x8
  _QWORD *v6; // x2
  google::protobuf::OneofOptions *v7; // x0
  __int64 v8; // x21
  __int64 result; // x0
  google::protobuf::OneofOptions *v10; // x0
  __int64 v11; // x8
  _QWORD *v12; // x0
  const google::protobuf::OneofOptions *v13; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = *(_QWORD *)this;
  *((_DWORD *)a2 + 4) |= 1u;
  v5 = *((_QWORD *)a2 + 1);
  v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v5 & 1) != 0 )
    v6 = (_QWORD *)*v6;
  v7 = (google::protobuf::OneofOptions *)google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 24, v4, v6);
  v8 = *((_QWORD *)this + 5);
  result = google::protobuf::OneofOptions::default_instance(v7);
  if ( v8 != result )
  {
    *((_DWORD *)a2 + 4) |= 2u;
    v10 = (google::protobuf::OneofOptions *)*((_QWORD *)a2 + 4);
    if ( !v10 )
    {
      v11 = *((_QWORD *)a2 + 1);
      v12 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v11 & 1) != 0 )
        v12 = (_QWORD *)*v12;
      v10 = (google::protobuf::OneofOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::OneofOptions>(v12);
      *((_QWORD *)a2 + 4) = v10;
    }
    v13 = (const google::protobuf::OneofOptions *)*((_QWORD *)this + 5);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::OneofOptions::CopyFrom(v10, v13);
  }
  return result;
}