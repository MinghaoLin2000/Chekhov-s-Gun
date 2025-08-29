__ZN6google8protobuf14DescriptorPoolD2Ev
void __fastcall google::protobuf::DescriptorPool::~DescriptorPool(std::mutex **this)
{
  std::mutex *v2; // x0
  __int64 v3; // x0

  v2 = *this;
  if ( v2 )
  {
    std::mutex::~mutex(v2);
    operator delete(v3, 0x1000C40FA0F61DDLL);
  }
  sub_10009BDBC(this + 6, this[7]);
  sub_10009BD6C(this + 4, 0LL);
}