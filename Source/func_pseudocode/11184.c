__ZN6google8protobuf21MethodDescriptorProto9MergeFromERKS1_
__int64 __fastcall google::protobuf::MethodDescriptorProto::MergeFrom(
        __int64 this,
        const google::protobuf::MethodDescriptorProto *a2)
{
  __int64 v3; // x19
  _QWORD *v4; // x21
  __int64 v5; // x8
  int v6; // w22
  unsigned __int64 v7; // x1
  __int64 v8; // x8
  _QWORD *v9; // x2
  unsigned __int64 v10; // x1
  __int64 v11; // x8
  _QWORD *v12; // x2
  unsigned __int64 v13; // x1
  __int64 v14; // x8
  _QWORD *v15; // x2
  google::protobuf::MethodOptions *v16; // x0
  _QWORD *v17; // x0
  const google::protobuf::MethodOptions *v18; // x1

  v3 = this;
  v4 = (_QWORD *)(this + 8);
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((_DWORD *)a2 + 4);
  if ( (v6 & 0x3F) != 0 )
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
      if ( (v6 & 2) == 0 )
      {
LABEL_6:
        if ( (v6 & 4) == 0 )
          goto LABEL_7;
        goto LABEL_19;
      }
    }
    else if ( (v6 & 2) == 0 )
    {
      goto LABEL_6;
    }
    v10 = *((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFELL;
    *(_DWORD *)(v3 + 16) |= 2u;
    v11 = *(_QWORD *)(v3 + 8);
    v12 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v11 & 1) != 0 )
      v12 = (_QWORD *)*v12;
    this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 32, v10, v12);
    if ( (v6 & 4) == 0 )
    {
LABEL_7:
      if ( (v6 & 8) == 0 )
        goto LABEL_8;
      goto LABEL_22;
    }
LABEL_19:
    v13 = *((_QWORD *)a2 + 5) & 0xFFFFFFFFFFFFFFFELL;
    *(_DWORD *)(v3 + 16) |= 4u;
    v14 = *(_QWORD *)(v3 + 8);
    v15 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v14 & 1) != 0 )
      v15 = (_QWORD *)*v15;
    this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 40, v13, v15);
    if ( (v6 & 8) == 0 )
    {
LABEL_8:
      if ( (v6 & 0x10) == 0 )
        goto LABEL_9;
      goto LABEL_30;
    }
LABEL_22:
    *(_DWORD *)(v3 + 16) |= 8u;
    v16 = *(google::protobuf::MethodOptions **)(v3 + 48);
    if ( !v16 )
    {
      v17 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v17 = (_QWORD *)*v17;
      v16 = (google::protobuf::MethodOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::MethodOptions>(v17);
      *(_QWORD *)(v3 + 48) = v16;
    }
    if ( *((_QWORD *)a2 + 6) )
      v18 = (const google::protobuf::MethodOptions *)*((_QWORD *)a2 + 6);
    else
      v18 = (const google::protobuf::MethodOptions *)&google::protobuf::_MethodOptions_default_instance_;
    this = google::protobuf::MethodOptions::MergeFrom(v16, v18);
    if ( (v6 & 0x10) == 0 )
    {
LABEL_9:
      if ( (v6 & 0x20) == 0 )
      {
LABEL_11:
        *(_DWORD *)(v3 + 16) |= v6;
        return this;
      }
LABEL_10:
      *(_BYTE *)(v3 + 57) = *((_BYTE *)a2 + 57);
      goto LABEL_11;
    }
LABEL_30:
    *(_BYTE *)(v3 + 56) = *((_BYTE *)a2 + 56);
    if ( (v6 & 0x20) == 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  return this;
}