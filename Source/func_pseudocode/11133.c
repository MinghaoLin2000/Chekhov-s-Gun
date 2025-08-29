__ZN6google8protobuf19EnumDescriptorProto9MergeFromERKS1_
__int64 __fastcall google::protobuf::EnumDescriptorProto::MergeFrom(
        __int64 this,
        const google::protobuf::EnumDescriptorProto *a2)
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
  __int64 v12; // x22
  __int64 v13; // x24
  __int64 v14; // x0
  int *v15; // x8
  int v16; // w10
  int v17; // w9
  __int64 v18; // x22
  __int64 v19; // x24
  __int64 v20; // x0
  int *v21; // x8
  int v22; // w10
  int v23; // w9
  int v24; // w22
  unsigned __int64 v25; // x1
  __int64 v26; // x8
  _QWORD *v27; // x2
  google::protobuf::EnumOptions *v28; // x0
  _QWORD *v29; // x0
  const google::protobuf::EnumOptions *v30; // x1
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
    this = sub_1000B9560(v3 + 24, v8, v7, v6, (unsigned int)(**(_DWORD **)(v3 + 40) - *(_DWORD *)(v3 + 32)));
    v9 = *(int **)(v3 + 40);
    v10 = *v9;
    v11 = *(_DWORD *)(v3 + 32) + v6;
    *(_DWORD *)(v3 + 32) = v11;
    if ( v10 < v11 )
      *v9 = v11;
  }
  v12 = *((unsigned int *)a2 + 14);
  if ( (_DWORD)v12 )
  {
    v13 = *((_QWORD *)a2 + 8) + 8LL;
    v14 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 48),
            *((_DWORD *)a2 + 14));
    this = sub_1000B9620(v3 + 48, v14, v13, v12, (unsigned int)(**(_DWORD **)(v3 + 64) - *(_DWORD *)(v3 + 56)));
    v15 = *(int **)(v3 + 64);
    v16 = *v15;
    v17 = *(_DWORD *)(v3 + 56) + v12;
    *(_DWORD *)(v3 + 56) = v17;
    if ( v16 < v17 )
      *v15 = v17;
  }
  v18 = *((unsigned int *)a2 + 20);
  if ( (_DWORD)v18 )
  {
    v19 = *((_QWORD *)a2 + 11) + 8LL;
    v20 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 72),
            *((_DWORD *)a2 + 20));
    this = sub_1000B8CB4(v3 + 72, v20, v19, v18, (unsigned int)(**(_DWORD **)(v3 + 88) - *(_DWORD *)(v3 + 80)));
    v21 = *(int **)(v3 + 88);
    v22 = *v21;
    v23 = *(_DWORD *)(v3 + 80) + v18;
    *(_DWORD *)(v3 + 80) = v23;
    if ( v22 < v23 )
      *v21 = v23;
  }
  v24 = *((_DWORD *)a2 + 4);
  if ( (v24 & 3) != 0 )
  {
    if ( (v24 & 1) != 0 )
    {
      v25 = *((_QWORD *)a2 + 12) & 0xFFFFFFFFFFFFFFFELL;
      *(_DWORD *)(v3 + 16) |= 1u;
      v26 = *(_QWORD *)(v3 + 8);
      v27 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v26 & 1) != 0 )
        v27 = (_QWORD *)*v27;
      this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 96, v25, v27);
    }
    if ( (v24 & 2) != 0 )
    {
      *(_DWORD *)(v3 + 16) |= 2u;
      v28 = *(google::protobuf::EnumOptions **)(v3 + 104);
      if ( !v28 )
      {
        v29 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v4 & 1) != 0 )
          v29 = (_QWORD *)*v29;
        v28 = (google::protobuf::EnumOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::EnumOptions>(v29);
        *(_QWORD *)(v3 + 104) = v28;
      }
      if ( *((_QWORD *)a2 + 13) )
        v30 = (const google::protobuf::EnumOptions *)*((_QWORD *)a2 + 13);
      else
        v30 = (const google::protobuf::EnumOptions *)&google::protobuf::_EnumOptions_default_instance_;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return google::protobuf::EnumOptions::MergeFrom(v28, v30);
    }
  }
  return this;
}