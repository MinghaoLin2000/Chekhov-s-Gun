__ZN6google8protobuf14DescriptorPool6Tables13AllocateBytesEi
__int64 __fastcall google::protobuf::DescriptorPool::Tables::AllocateBytes(
        google::protobuf::DescriptorPool::Tables *this,
        int a2)
{
  unsigned __int64 v3; // x20
  __int64 v4; // x0
  int v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = a2;
  if ( !a2 )
    return 0LL;
  v3 = *((_QWORD *)this + 24);
  if ( v3 >= *((_QWORD *)this + 25) )
  {
    v4 = sub_10009B744((char *)this + 184, &v6);
  }
  else
  {
    sub_10009B84C(*((_QWORD *)this + 24));
    v4 = v3 + 24;
    *((_QWORD *)this + 24) = v3 + 24;
  }
  *((_QWORD *)this + 24) = v4;
  return *(_QWORD *)(v4 - 24);
}