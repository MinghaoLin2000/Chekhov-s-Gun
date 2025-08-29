__ZN6google8protobuf3Any9MergeFromERKS1_
__int64 __fastcall google::protobuf::Any::MergeFrom(__int64 this, const google::protobuf::Any *a2)
{
  __int64 v3; // x19
  _QWORD *v4; // x20
  __int64 v5; // x8
  unsigned __int64 v6; // x1
  _QWORD *v7; // x2
  unsigned __int64 v8; // x1
  _QWORD *v9; // x2
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = this;
  v4 = (_QWORD *)(this + 8);
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((_QWORD *)a2 + 2) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v6 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v6 + 8) )
      goto LABEL_10;
  }
  else if ( !*(_BYTE *)(v6 + 23) )
  {
    goto LABEL_10;
  }
  v7 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
  if ( (*v4 & 1) != 0 )
    v7 = (_QWORD *)*v7;
  this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 16, v6, v7);
LABEL_10:
  v8 = *((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v8 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v8 + 8) )
      return this;
  }
  else if ( !*(_BYTE *)(v8 + 23) )
  {
    return this;
  }
  v9 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
  if ( (*v4 & 1) != 0 )
    v9 = (_QWORD *)*v9;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return google::protobuf::internal::ArenaStringPtr::Set(v3 + 24, v8, v9);
}