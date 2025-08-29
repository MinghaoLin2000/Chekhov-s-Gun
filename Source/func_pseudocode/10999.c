__ZN6google8protobuf19FileDescriptorProtoD2Ev
void __fastcall google::protobuf::FileDescriptorProto::~FileDescriptorProto(
        google::protobuf::FileDescriptorProto *this)
{
  __int64 v2; // x0
  void *v3; // x0
  __int64 v4; // t1
  __int64 v5; // x0
  void *v6; // x0
  __int64 v7; // t1

  sub_1000A1560();
  sub_100037E58((char *)this + 8);
  if ( *((int *)this + 41) >= 1 )
  {
    v2 = *((_QWORD *)this + 21);
    v4 = *(_QWORD *)(v2 - 8);
    v3 = (void *)(v2 - 8);
    if ( !v4 )
      operator delete(v3);
  }
  if ( *((int *)this + 37) >= 1 )
  {
    v5 = *((_QWORD *)this + 19);
    v7 = *(_QWORD *)(v5 - 8);
    v6 = (void *)(v5 - 8);
    if ( !v7 )
      operator delete(v6);
  }
  sub_1000B8C34((char *)this + 120);
  sub_1000B8BB4((char *)this + 96);
  sub_1000B8B34((char *)this + 72);
  sub_1000B8AB4((char *)this + 48);
  sub_1000B8A24((char *)this + 24);
}