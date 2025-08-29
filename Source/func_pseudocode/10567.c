__ZN3TSP39LargeStringArraySegment_OptionalElement9MergeFromERKS0_
__int64 __fastcall TSP::LargeStringArraySegment_OptionalElement::MergeFrom(
        __int64 this,
        const TSP::LargeStringArraySegment_OptionalElement *a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  unsigned __int64 v5; // x1
  __int64 v6; // x8
  _QWORD *v7; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = this;
  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
  {
    v5 = *((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFELL;
    *(_DWORD *)(v3 + 16) |= 1u;
    v6 = *(_QWORD *)(v3 + 8);
    v7 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v6 & 1) != 0 )
      v7 = (_QWORD *)*v7;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ArenaStringPtr::Set(v3 + 24, v5, v7);
  }
  return this;
}