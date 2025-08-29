__ZN6google8protobuf19EnumDescriptorProtoD2Ev
void __fastcall google::protobuf::EnumDescriptorProto::~EnumDescriptorProto(
        google::protobuf::EnumDescriptorProto *this)
{
  __int64 v2; // x20
  google::protobuf::EnumOptions *v3; // x0
  __int64 v4; // x0

  v2 = *((_QWORD *)this + 12);
  if ( (__int64 *)v2 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    operator delete(v2, 0x1012C40EC159624LL);
  }
  if ( this != (google::protobuf::EnumDescriptorProto *)&google::protobuf::_EnumDescriptorProto_default_instance_ )
  {
    v3 = (google::protobuf::EnumOptions *)*((_QWORD *)this + 13);
    if ( v3 )
    {
      google::protobuf::EnumOptions::~EnumOptions(v3);
      operator delete(v4, 0x10A1C400A6016E7LL);
    }
  }
  sub_100037E58((char *)this + 8);
  sub_1000B8A24((char *)this + 72);
  sub_100076AD0((char *)this + 48);
  sub_1000B94E0((char *)this + 24);
}