__ZN6google8protobuf5ValueD2Ev
void __fastcall google::protobuf::Value::~Value(google::protobuf::Value *this)
{
  if ( *((_DWORD *)this + 7) )
    google::protobuf::Value::clear_kind((__int64)this);
  sub_100037E58((char *)this + 8);
}