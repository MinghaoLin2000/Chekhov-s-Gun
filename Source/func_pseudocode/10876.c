__ZNK6google8protobuf19EnumValueDescriptor6CopyToEPNS0_24EnumValueDescriptorProtoE
__int64 __fastcall google::protobuf::EnumValueDescriptor::CopyTo(
        google::protobuf::EnumValueDescriptor *this,
        google::protobuf::EnumValueDescriptorProto *a2)
{
  __int64 v4; // x1
  __int64 v5; // x8
  _QWORD *v6; // x2
  google::protobuf::EnumValueOptions *v7; // x0
  int v8; // w8
  __int64 v9; // x21
  __int64 result; // x0
  google::protobuf::EnumValueOptions *v11; // x0
  __int64 v12; // x8
  _QWORD *v13; // x0
  const google::protobuf::EnumValueOptions *v14; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = *(_QWORD *)this;
  *((_DWORD *)a2 + 4) |= 1u;
  v5 = *((_QWORD *)a2 + 1);
  v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v5 & 1) != 0 )
    v6 = (_QWORD *)*v6;
  v7 = (google::protobuf::EnumValueOptions *)google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 24, v4, v6);
  v8 = *((_DWORD *)this + 4);
  *((_DWORD *)a2 + 4) |= 4u;
  *((_DWORD *)a2 + 10) = v8;
  v9 = *((_QWORD *)this + 4);
  result = google::protobuf::EnumValueOptions::default_instance(v7);
  if ( v9 != result )
  {
    *((_DWORD *)a2 + 4) |= 2u;
    v11 = (google::protobuf::EnumValueOptions *)*((_QWORD *)a2 + 4);
    if ( !v11 )
    {
      v12 = *((_QWORD *)a2 + 1);
      v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v12 & 1) != 0 )
        v13 = (_QWORD *)*v13;
      v11 = (google::protobuf::EnumValueOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::EnumValueOptions>(v13);
      *((_QWORD *)a2 + 4) = v11;
    }
    v14 = (const google::protobuf::EnumValueOptions *)*((_QWORD *)this + 4);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::EnumValueOptions::CopyFrom(v11, v14);
  }
  return result;
}