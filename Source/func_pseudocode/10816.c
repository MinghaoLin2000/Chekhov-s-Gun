__ZN6google8protobuf14DescriptorPool6TablesD2Ev
void __fastcall google::protobuf::DescriptorPool::Tables::~Tables(google::protobuf::DescriptorPool::Tables *this)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  google::protobuf::DescriptorPool::Tables *v6; // [xsp+8h] [xbp-18h] BYREF

  v2 = (void *)*((_QWORD *)this + 60);
  if ( v2 )
  {
    *((_QWORD *)this + 61) = v2;
    operator delete(v2);
  }
  v3 = (void *)*((_QWORD *)this + 57);
  if ( v3 )
  {
    *((_QWORD *)this + 58) = v3;
    operator delete(v3);
  }
  v4 = (void *)*((_QWORD *)this + 54);
  if ( v4 )
  {
    *((_QWORD *)this + 55) = v4;
    operator delete(v4);
  }
  v5 = (void *)*((_QWORD *)this + 51);
  if ( v5 )
  {
    *((_QWORD *)this + 52) = v5;
    operator delete(v5);
  }
  sub_10002AC6C((char *)this + 384, *((_QWORD *)this + 49));
  sub_1000988A4((char *)this + 344);
  sub_1000988A4((char *)this + 304);
  v6 = (google::protobuf::DescriptorPool::Tables *)((char *)this + 280);
  sub_100098C28(&v6);
  v6 = (google::protobuf::DescriptorPool::Tables *)((char *)this + 256);
  sub_100098B70(&v6);
  v6 = (google::protobuf::DescriptorPool::Tables *)((char *)this + 232);
  sub_100098AB0(&v6);
  v6 = (google::protobuf::DescriptorPool::Tables *)((char *)this + 208);
  sub_10009899C(&v6);
  v6 = (google::protobuf::DescriptorPool::Tables *)((char *)this + 184);
  sub_1000988F0(&v6);
  sub_10009881C((char *)this + 144);
  sub_1000988A4((char *)this + 104);
  sub_10009881C((char *)this + 64);
  sub_10009881C((char *)this + 24);
  v6 = this;
  sub_10009857C(&v6);
}