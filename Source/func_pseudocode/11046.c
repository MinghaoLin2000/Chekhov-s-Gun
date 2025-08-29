__ZN6google8protobuf15DescriptorProtoD2Ev
void __fastcall google::protobuf::DescriptorProto::~DescriptorProto(google::protobuf::DescriptorProto *this)
{
  __int64 v2; // x20
  google::protobuf::MessageOptions *v3; // x0
  __int64 v4; // x0

  v2 = *((_QWORD *)this + 27);
  if ( (__int64 *)v2 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    operator delete(v2, 0x1012C40EC159624LL);
  }
  if ( this != (google::protobuf::DescriptorProto *)&google::protobuf::_DescriptorProto_default_instance_ )
  {
    v3 = (google::protobuf::MessageOptions *)*((_QWORD *)this + 28);
    if ( v3 )
    {
      google::protobuf::MessageOptions::~MessageOptions(v3);
      operator delete(v4, 0x10A1C40813C779CLL);
    }
  }
  sub_100037E58((char *)this + 8);
  sub_1000B8A24((char *)this + 192);
  sub_100076AD0((char *)this + 168);
  sub_1000B90E0((char *)this + 144);
  sub_1000B8C34((char *)this + 120);
  sub_1000B9060((char *)this + 96);
  sub_1000B8B34((char *)this + 72);
  sub_1000B8AB4((char *)this + 48);
  sub_1000B8C34((char *)this + 24);
}