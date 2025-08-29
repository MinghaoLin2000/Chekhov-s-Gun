__ZNK6google8protobuf10Descriptor14ExtensionRange6CopyToEPNS0_30DescriptorProto_ExtensionRangeE
__int64 __fastcall google::protobuf::Descriptor::ExtensionRange::CopyTo(
        google::protobuf::Descriptor::ExtensionRange *this,
        google::protobuf::DescriptorProto_ExtensionRange *a2)
{
  int v4; // w8
  int v5; // w9
  int v6; // w10
  __int64 v7; // x21
  __int64 result; // x0
  const google::protobuf::ExtensionRangeOptions *v9; // x20
  google::protobuf::ExtensionRangeOptions *v10; // x0
  __int64 v11; // x8
  _QWORD *v12; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = *(_DWORD *)this;
  v5 = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 4) = v5 | 2;
  v6 = *((_DWORD *)this + 1);
  *((_DWORD *)a2 + 4) = v5 | 6;
  *((_DWORD *)a2 + 8) = v4;
  *((_DWORD *)a2 + 9) = v6;
  v7 = *((_QWORD *)this + 1);
  result = google::protobuf::ExtensionRangeOptions::default_instance(this);
  if ( v7 != result )
  {
    v9 = (const google::protobuf::ExtensionRangeOptions *)*((_QWORD *)this + 1);
    *((_DWORD *)a2 + 4) |= 1u;
    v10 = (google::protobuf::ExtensionRangeOptions *)*((_QWORD *)a2 + 3);
    if ( !v10 )
    {
      v11 = *((_QWORD *)a2 + 1);
      v12 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v11 & 1) != 0 )
        v12 = (_QWORD *)*v12;
      v10 = (google::protobuf::ExtensionRangeOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::ExtensionRangeOptions>(v12);
      *((_QWORD *)a2 + 3) = v10;
    }
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::ExtensionRangeOptions::CopyFrom(v10, v9);
  }
  return result;
}