__ZN6google8protobuf22ServiceDescriptorProto9MergeFromERKS1_
__int64 __fastcall google::protobuf::ServiceDescriptorProto::MergeFrom(
        __int64 this,
        const google::protobuf::ServiceDescriptorProto *a2)
{
  __int64 v3; // x20
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x22
  __int64 v7; // x24
  __int64 v8; // x0
  int *v9; // x8
  int v10; // w10
  int v11; // w9
  int v12; // w22
  unsigned __int64 v13; // x1
  __int64 v14; // x8
  _QWORD *v15; // x2
  google::protobuf::ServiceOptions *v16; // x0
  _QWORD *v17; // x0
  const google::protobuf::ServiceOptions *v18; // x1
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = this;
  v4 = (_QWORD *)(this + 8);
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((unsigned int *)a2 + 8);
  if ( (_DWORD)v6 )
  {
    v7 = *((_QWORD *)a2 + 5) + 8LL;
    v8 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
           (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 24),
           *((_DWORD *)a2 + 8));
    this = sub_1000B9760(v3 + 24, v8, v7, v6, (unsigned int)(**(_DWORD **)(v3 + 40) - *(_DWORD *)(v3 + 32)));
    v9 = *(int **)(v3 + 40);
    v10 = *v9;
    v11 = *(_DWORD *)(v3 + 32) + v6;
    *(_DWORD *)(v3 + 32) = v11;
    if ( v10 < v11 )
      *v9 = v11;
  }
  v12 = *((_DWORD *)a2 + 4);
  if ( (v12 & 3) != 0 )
  {
    if ( (v12 & 1) != 0 )
    {
      v13 = *((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFFELL;
      *(_DWORD *)(v3 + 16) |= 1u;
      v14 = *(_QWORD *)(v3 + 8);
      v15 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v14 & 1) != 0 )
        v15 = (_QWORD *)*v15;
      this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 48, v13, v15);
    }
    if ( (v12 & 2) != 0 )
    {
      *(_DWORD *)(v3 + 16) |= 2u;
      v16 = *(google::protobuf::ServiceOptions **)(v3 + 56);
      if ( !v16 )
      {
        v17 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v4 & 1) != 0 )
          v17 = (_QWORD *)*v17;
        v16 = (google::protobuf::ServiceOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::ServiceOptions>(v17);
        *(_QWORD *)(v3 + 56) = v16;
      }
      if ( *((_QWORD *)a2 + 7) )
        v18 = (const google::protobuf::ServiceOptions *)*((_QWORD *)a2 + 7);
      else
        v18 = (const google::protobuf::ServiceOptions *)&google::protobuf::_ServiceOptions_default_instance_;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return google::protobuf::ServiceOptions::MergeFrom(v16, v18);
    }
  }
  return this;
}