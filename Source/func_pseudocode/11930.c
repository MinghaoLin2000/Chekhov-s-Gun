__ZN6google8protobuf9Timestamp9MergeFromERKS1_
__int64 __fastcall google::protobuf::Timestamp::MergeFrom(__int64 this, const google::protobuf::Timestamp *a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  __int64 v5; // x8
  int v6; // w8

  v3 = this;
  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v5 = *((_QWORD *)a2 + 2);
  if ( v5 )
    *(_QWORD *)(v3 + 16) = v5;
  v6 = *((_DWORD *)a2 + 6);
  if ( v6 )
    *(_DWORD *)(v3 + 24) = v6;
  return this;
}