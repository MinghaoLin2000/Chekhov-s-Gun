__ZNK6google8protobuf22ServiceDescriptorProto12ByteSizeLongEv
__int64 __fastcall google::protobuf::ServiceDescriptorProto::ByteSizeLong(
        google::protobuf::ServiceDescriptorProto *this)
{
  __int64 v2; // x20
  __int64 v3; // x8
  google::protobuf::MethodDescriptorProto **v4; // x21
  __int64 v5; // x22
  google::protobuf::MethodDescriptorProto *v6; // t1
  __int64 v7; // x0
  int v8; // w8
  unsigned __int64 v9; // x9
  __int64 v10; // x10
  __int64 v11; // x9
  __int64 v12; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *((int *)this + 8);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    v4 = (google::protobuf::MethodDescriptorProto **)(v3 + 8);
  else
    v4 = 0LL;
  if ( (_DWORD)v2 )
  {
    v5 = 8 * v2;
    do
    {
      v6 = *v4++;
      v7 = google::protobuf::MethodDescriptorProto::ByteSizeLong(v6);
      v2 += v7 + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6);
      v5 -= 8LL;
    }
    while ( v5 );
  }
  else
  {
    v2 = 0LL;
  }
  v8 = *((_DWORD *)this + 4);
  if ( (v8 & 3) != 0 )
  {
    if ( (v8 & 1) != 0 )
    {
      v9 = *((_QWORD *)this + 6) & 0xFFFFFFFFFFFFFFFELL;
      v10 = *(unsigned __int8 *)(v9 + 23);
      v11 = *(_QWORD *)(v9 + 8);
      if ( (v10 & 0x80u) == 0LL )
        v11 = v10;
      v2 += v11 + ((9 * (__clz(v11 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
    if ( (v8 & 2) != 0 )
    {
      v12 = google::protobuf::ServiceOptions::ByteSizeLong(*((google::protobuf::ServiceOptions **)this + 7));
      v2 += v12 + ((9 * (__clz(v12 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v2, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v2;
    return v2;
  }
}