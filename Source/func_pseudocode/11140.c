__ZN6google8protobuf24EnumValueDescriptorProtoD2Ev
void __fastcall google::protobuf::EnumValueDescriptorProto::~EnumValueDescriptorProto(
        google::protobuf::EnumValueDescriptorProto *this)
{
  __int64 v2; // x20
  google::protobuf::EnumValueOptions *v3; // x0
  __int64 v4; // x0

  v2 = *((_QWORD *)this + 3);
  if ( (__int64 *)v2 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    operator delete(v2, 0x1012C40EC159624LL);
  }
  if ( this != (google::protobuf::EnumValueDescriptorProto *)&google::protobuf::_EnumValueDescriptorProto_default_instance_ )
  {
    v3 = (google::protobuf::EnumValueOptions *)*((_QWORD *)this + 4);
    if ( v3 )
    {
      google::protobuf::EnumValueOptions::~EnumValueOptions(v3);
      operator delete(v4, 0x10A1C40AF389210LL);
    }
  }
  sub_100037E58((char *)this + 8);
}