__ZN6google8protobuf8internal12MapFieldBaseD2Ev
void __fastcall google::protobuf::internal::MapFieldBase::~MapFieldBase(google::protobuf::internal::MapFieldBase *this)
{
  __int64 v2; // x20

  *(_QWORD *)this = off_1001D9CA0;
  v2 = *((_QWORD *)this + 2);
  if ( v2 && !*((_QWORD *)this + 1) )
  {
    sub_1000C09A0(*((_QWORD *)this + 2));
    operator delete(v2, 0x1020C4014030ADELL);
  }
  std::mutex::~mutex((std::mutex *)((char *)this + 24));
}