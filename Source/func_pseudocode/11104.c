__ZN6google8protobuf20OneofDescriptorProto9MergeFromERKS1_
__int64 __fastcall google::protobuf::OneofDescriptorProto::MergeFrom(
        __int64 this,
        const google::protobuf::OneofDescriptorProto *a2)
{
  __int64 v3; // x20
  _QWORD *v4; // x21
  __int64 v5; // x8
  int v6; // w22
  unsigned __int64 v7; // x1
  __int64 v8; // x8
  _QWORD *v9; // x2
  google::protobuf::OneofOptions *v10; // x0
  _QWORD *v11; // x0
  const google::protobuf::OneofOptions *v12; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = this;
  v4 = (_QWORD *)(this + 8);
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((_DWORD *)a2 + 4);
  if ( (v6 & 3) != 0 )
  {
    if ( (v6 & 1) != 0 )
    {
      v7 = *((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFELL;
      *(_DWORD *)(v3 + 16) |= 1u;
      v8 = *(_QWORD *)(v3 + 8);
      v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v8 & 1) != 0 )
        v9 = (_QWORD *)*v9;
      this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 24, v7, v9);
    }
    if ( (v6 & 2) != 0 )
    {
      *(_DWORD *)(v3 + 16) |= 2u;
      v10 = *(google::protobuf::OneofOptions **)(v3 + 32);
      if ( !v10 )
      {
        v11 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v4 & 1) != 0 )
          v11 = (_QWORD *)*v11;
        v10 = (google::protobuf::OneofOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::OneofOptions>(v11);
        *(_QWORD *)(v3 + 32) = v10;
      }
      if ( *((_QWORD *)a2 + 4) )
        v12 = (const google::protobuf::OneofOptions *)*((_QWORD *)a2 + 4);
      else
        v12 = (const google::protobuf::OneofOptions *)&google::protobuf::_OneofOptions_default_instance_;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return google::protobuf::OneofOptions::MergeFrom(v10, v12);
    }
  }
  return this;
}