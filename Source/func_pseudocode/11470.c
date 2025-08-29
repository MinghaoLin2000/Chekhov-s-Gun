__ZN6google8protobuf21DynamicMessageFactoryC2Ev
google::protobuf::DynamicMessageFactory *__fastcall google::protobuf::DynamicMessageFactory::DynamicMessageFactory(
        google::protobuf::DynamicMessageFactory *this)
{
  __int64 v2; // x0

  *(_QWORD *)this = off_1001D9798;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 16) = 0;
  v2 = operator new(40LL, 0x10A0C408EF24B1CLL);
  *(_OWORD *)v2 = 0u;
  *(_OWORD *)(v2 + 16) = 0u;
  *(_DWORD *)(v2 + 32) = 1065353216;
  *((_QWORD *)this + 3) = v2;
  *((_QWORD *)this + 4) = 850045863LL;
  *(_OWORD *)((char *)this + 40) = 0u;
  *(_OWORD *)((char *)this + 56) = 0u;
  *(_OWORD *)((char *)this + 72) = 0u;
  *((_QWORD *)this + 11) = 0LL;
  return this;
}