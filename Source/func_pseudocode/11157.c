__ZN6google8protobuf22ServiceDescriptorProtoD2Ev
void __fastcall google::protobuf::ServiceDescriptorProto::~ServiceDescriptorProto(
        google::protobuf::ServiceDescriptorProto *this)
{
  __int64 v2; // x20
  google::protobuf::ServiceOptions *v3; // x0
  __int64 v4; // x0

  v2 = *((_QWORD *)this + 6);
  if ( (__int64 *)v2 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    operator delete(v2, 0x1012C40EC159624LL);
  }
  if ( this != (google::protobuf::ServiceDescriptorProto *)&google::protobuf::_ServiceDescriptorProto_default_instance_ )
  {
    v3 = (google::protobuf::ServiceOptions *)*((_QWORD *)this + 7);
    if ( v3 )
    {
      google::protobuf::ServiceOptions::~ServiceOptions(v3);
      operator delete(v4, 0x10A1C40AF389210LL);
    }
  }
  sub_100037E58((char *)this + 8);
  sub_1000B96E0((char *)this + 24);
}