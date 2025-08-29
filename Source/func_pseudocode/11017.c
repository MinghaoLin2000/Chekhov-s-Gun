__ZN6google8protobuf30DescriptorProto_ExtensionRangeD2Ev
void __fastcall google::protobuf::DescriptorProto_ExtensionRange::~DescriptorProto_ExtensionRange(
        google::protobuf::DescriptorProto_ExtensionRange *this)
{
  google::protobuf::ExtensionRangeOptions *v2; // x0
  __int64 v3; // x0

  if ( this != (google::protobuf::DescriptorProto_ExtensionRange *)&google::protobuf::_DescriptorProto_ExtensionRange_default_instance_ )
  {
    v2 = (google::protobuf::ExtensionRangeOptions *)*((_QWORD *)this + 3);
    if ( v2 )
    {
      google::protobuf::ExtensionRangeOptions::~ExtensionRangeOptions(v2);
      operator delete(v3, 0x10A1C4075D007F8LL);
    }
  }
  sub_100037E58((char *)this + 8);
}