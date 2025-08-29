__ZNK3TSP34ObjectSerializationDirectory_Entry12ByteSizeLongEv
unsigned __int64 __fastcall TSP::ObjectSerializationDirectory_Entry::ByteSizeLong(
        TSP::ObjectSerializationDirectory_Entry *this)
{
  unsigned __int64 v2; // x8
  __int64 v3; // x10
  __int64 v4; // x8
  unsigned __int64 v5; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (~*((_DWORD *)this + 4) & 7) != 0 )
  {
    v5 = TSP::ObjectSerializationDirectory_Entry::RequiredFieldsByteSizeFallback(this);
  }
  else
  {
    v2 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
    v3 = *(unsigned __int8 *)(v2 + 23);
    v4 = *(_QWORD *)(v2 + 8);
    if ( (v3 & 0x80u) == 0LL )
      v4 = v3;
    v5 = v4
       + ((9 * (__clz(*((_QWORD *)this + 4) | 1LL) ^ 0x3F) + 73) >> 6)
       + ((9 * (__clz(*((_QWORD *)this + 5) | 1LL) ^ 0x3F) + 73) >> 6)
       + ((9 * (__clz(v4 | 1) ^ 0x1F) + 73) >> 6)
       + 3;
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v5, (char *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 5) = v5;
    return v5;
  }
}