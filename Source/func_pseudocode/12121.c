__ZN6google8protobuf6Option9MergeFromERKS1_
__int64 __fastcall google::protobuf::Option::MergeFrom(__int64 this, const google::protobuf::Option *a2)
{
  __int64 v3; // x20
  _QWORD *v4; // x21
  __int64 v5; // x8
  unsigned __int64 v6; // x1
  _QWORD *v7; // x2
  const google::protobuf::Any *v8; // x8
  __int64 v9; // x0
  const google::protobuf::Any *v10; // x1
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
  if ( a2 != (const google::protobuf::Option *)&google::protobuf::_Option_default_instance_ )
  {
    v8 = (const google::protobuf::Any *)*((_QWORD *)a2 + 3);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v3 + 24);
      if ( !v9 )
      {
        v9 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::Any>();
        *(_QWORD *)(v3 + 24) = v9;
        v8 = (const google::protobuf::Any *)*((_QWORD *)a2 + 3);
      }
      if ( v8 )
        v10 = v8;
      else
        v10 = (const google::protobuf::Any *)&google::protobuf::_Any_default_instance_;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return google::protobuf::Any::MergeFrom(v9, v10);
    }
  }
  return this;
}