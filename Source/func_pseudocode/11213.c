__ZNK6google8protobuf14MessageOptions12ByteSizeLongEv
__int64 __fastcall google::protobuf::MessageOptions::ByteSizeLong(google::protobuf::MessageOptions *this)
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
  __int64 v11; // x9
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = google::protobuf::internal::ExtensionSet::ByteSize((google::protobuf::MessageOptions *)((char *)this + 16));
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
  if ( (v10 & 0xF) != 0 )
  {
    v11 = v4 + 2;
    if ( (v10 & 1) == 0 )
      v11 = v4;
    if ( (v10 & 2) != 0 )
      v11 += 2LL;
    if ( (v10 & 4) != 0 )
      v11 += 2LL;
    if ( (v10 & 8) != 0 )
      v4 = v11 + 2;
    else
      v4 = v11;
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