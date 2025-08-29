__ZN6google8protobuf29DescriptorProto_ReservedRange9MergeFromERKS1_
_DWORD *__fastcall google::protobuf::DescriptorProto_ReservedRange::MergeFrom(
        _DWORD *this,
        const google::protobuf::DescriptorProto_ReservedRange *a2)
{
  _DWORD *v3; // x19
  __int64 v4; // x8
  int v5; // w8

  v3 = this;
  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    this = (_DWORD *)sub_10003A25C(this + 2, (v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v5 = *((_DWORD *)a2 + 4);
  if ( (v5 & 3) != 0 )
  {
    if ( (v5 & 1) != 0 )
      v3[6] = *((_DWORD *)a2 + 6);
    if ( (v5 & 2) != 0 )
      v3[7] = *((_DWORD *)a2 + 7);
    v3[4] |= v5;
  }
  return this;
}