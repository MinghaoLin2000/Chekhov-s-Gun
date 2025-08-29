__ZNK3TSP39LargeStringArraySegment_OptionalElement12ByteSizeLongEv
__int64 __fastcall TSP::LargeStringArraySegment_OptionalElement::ByteSizeLong(
        TSP::LargeStringArraySegment_OptionalElement *this)
{
  __int64 v1; // x1
  unsigned __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x8

  if ( (*((_BYTE *)this + 16) & 1) != 0 )
  {
    v2 = *((_QWORD *)this + 3) & 0xFFFFFFFFFFFFFFFELL;
    v3 = *(unsigned __int8 *)(v2 + 23);
    v4 = *(_QWORD *)(v2 + 8);
    if ( (v3 & 0x80u) == 0LL )
      v4 = v3;
    v1 = v4 + ((9 * (__clz(v4 | 1) ^ 0x1F) + 73) >> 6) + 1;
  }
  else
  {
    v1 = 0LL;
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize((char *)this + 8, v1, (char *)this + 20);
  *((_DWORD *)this + 5) = v1;
  return v1;
}