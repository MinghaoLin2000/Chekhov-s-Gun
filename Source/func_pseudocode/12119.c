__ZNK6google8protobuf6Option12ByteSizeLongEv
__int64 __fastcall google::protobuf::Option::ByteSizeLong(google::protobuf::Option *this)
{
  unsigned __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x8
  __int64 v5; // x20
  google::protobuf::Any *v6; // x0
  __int64 v7; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = *((_QWORD *)this + 2) & 0xFFFFFFFFFFFFFFFELL;
  v3 = *(unsigned __int8 *)(v2 + 23);
  if ( *(char *)(v2 + 23) < 0 )
  {
    if ( *(_QWORD *)(v2 + 8) )
      goto LABEL_3;
LABEL_7:
    v5 = 0LL;
    goto LABEL_8;
  }
  if ( !*(_BYTE *)(v2 + 23) )
    goto LABEL_7;
LABEL_3:
  v4 = *(_QWORD *)(v2 + 8);
  if ( (v3 & 0x80u) == 0LL )
    v4 = v3;
  v5 = v4 + ((9 * (__clz(v4 | 1) ^ 0x1F) + 73) >> 6) + 1;
LABEL_8:
  if ( this != (google::protobuf::Option *)&google::protobuf::_Option_default_instance_ )
  {
    v6 = (google::protobuf::Any *)*((_QWORD *)this + 3);
    if ( v6 )
    {
      v7 = google::protobuf::Any::ByteSizeLong(v6);
      v5 += v7 + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6) + 1;
    }
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v5, (char *)this + 32);
  }
  else
  {
    *((_DWORD *)this + 8) = v5;
    return v5;
  }
}