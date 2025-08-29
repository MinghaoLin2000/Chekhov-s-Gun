__ZNK6google8protobuf12OneofOptions12ByteSizeLongEv
__int64 __fastcall google::protobuf::OneofOptions::ByteSizeLong(google::protobuf::OneofOptions *this)
{
  __int64 v2; // x0
  __int64 v3; // x8
  __int64 v4; // x20
  __int64 v5; // x9
  google::protobuf::UninterpretedOption **v6; // x21
  __int64 v7; // x22
  google::protobuf::UninterpretedOption *v8; // t1
  __int64 v9; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = google::protobuf::internal::ExtensionSet::ByteSize((google::protobuf::OneofOptions *)((char *)this + 16));
  v3 = *((int *)this + 12);
  v4 = v2 + 2 * v3;
  v5 = *((_QWORD *)this + 7);
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
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v4, (char *)this + 64);
  }
  else
  {
    *((_DWORD *)this + 16) = v4;
    return v4;
  }
}