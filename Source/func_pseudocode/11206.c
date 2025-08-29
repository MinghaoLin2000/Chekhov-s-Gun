__ZN6google8protobuf14MessageOptionsD2Ev
void __fastcall google::protobuf::MessageOptions::~MessageOptions(google::protobuf::MessageOptions *this)
{
  sub_100037E58((char *)this + 8);
  sub_1000B93A0((char *)this + 48);
  google::protobuf::internal::ExtensionSet::~ExtensionSet((google::protobuf::MessageOptions *)((char *)this + 16));
}