__ZN6google8protobuf6StructD2Ev
void __fastcall google::protobuf::Struct::~Struct(google::protobuf::Struct *this)
{
  sub_100037E58((char *)this + 8);
  *((_QWORD *)this + 2) = off_1001DBDA0;
  sub_100113A40((char *)this + 112);
  google::protobuf::internal::MapFieldBase::~MapFieldBase((google::protobuf::Struct *)((char *)this + 16));
}