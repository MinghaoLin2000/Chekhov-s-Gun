__ZNK6google8protobuf13MethodOptions12ByteSizeLongEv
__int64 __fastcall google::protobuf::MethodOptions::ByteSizeLong(google::protobuf::MethodOptions *this)
{
  __int64 v2; // x0
  __int64 v3; // x8
  __int64 v4; // x20
  __int64 v5; // x9
  google::protobuf::UninterpretedOption **v6; // x21
  __int64 v7; // x22
  google::protobuf::UninterpretedOption *v8; // t1
  __int64 v9; // x0
  int v10; // w8
  int v11; // w8
  __int64 v12; // x10
  __int64 v13; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = google::protobuf::internal::ExtensionSet::ByteSize((google::protobuf::MethodOptions *)((char *)this + 16));
  v3 = *((int *)this + 14);
  v4 = v2 + 2 * v3;
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    v6 = (google::protobuf::UninterpretedOption **)(v5 + 8);
  else
    v6 = 0LL;
  if ( (_DWORD)v3 )
  {
    v7 = 8 * v3;
    do
    {
      v8 = *v6++;
      v9 = google::protobuf::UninterpretedOption::ByteSizeLong(v8);
      v4 += v9 + ((9 * (__clz(v9 | 1) ^ 0x1F) + 73) >> 6);
      v7 -= 8LL;
    }
    while ( v7 );
  }
  v10 = *((_DWORD *)this + 10);
  if ( (v10 & 3) != 0 )
  {
    if ( (v10 & 1) != 0 )
      v4 += 3LL;
    if ( (v10 & 2) != 0 )
    {
      v11 = *((_DWORD *)this + 19);
      v12 = ((9 * (__clz(v11 | 1) ^ 0x1F) + 73) >> 6) + 2;
      if ( v11 >= 0 )
        v13 = v12;
      else
        v13 = 12LL;
      v4 += v13;
    }
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v4, (char *)this + 44);
  }
  else
  {
    *((_DWORD *)this + 11) = v4;
    return v4;
  }
}