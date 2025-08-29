__ZNK6google8protobuf17FileDescriptorSet12ByteSizeLongEv
__int64 __fastcall google::protobuf::FileDescriptorSet::ByteSizeLong(google::protobuf::FileDescriptorSet *this)
{
  __int64 v2; // x20
  __int64 v3; // x8
  google::protobuf::FileDescriptorProto **v4; // x21
  __int64 v5; // x22
  google::protobuf::FileDescriptorProto *v6; // t1
  __int64 v7; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((int *)this + 6);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    v4 = (google::protobuf::FileDescriptorProto **)(v3 + 8);
  else
    v4 = 0LL;
  if ( (_DWORD)v2 )
  {
    v5 = 8 * v2;
    do
    {
      v6 = *v4++;
      v7 = google::protobuf::FileDescriptorProto::ByteSizeLong(v6);
      v2 += v7 + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6);
      v5 -= 8LL;
    }
    while ( v5 );
  }
  else
  {
    v2 = 0LL;
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v2, (char *)this + 40);
  }
  else
  {
    *((_DWORD *)this + 10) = v2;
    return v2;
  }
}