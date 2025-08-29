__ZN6google8protobuf20FieldDescriptorProto9MergeFromERKS1_
__int64 __fastcall google::protobuf::FieldDescriptorProto::MergeFrom(
        __int64 this,
        const google::protobuf::FieldDescriptorProto *a2)
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
  unsigned __int64 v16; // x1
  __int64 v17; // x8
  _QWORD *v18; // x2
  unsigned __int64 v19; // x1
  __int64 v20; // x8
  _QWORD *v21; // x2
  google::protobuf::FieldOptions *v22; // x0
  _QWORD *v23; // x0
  const google::protobuf::FieldOptions *v24; // x1

  v3 = this;
  v4 = (_QWORD *)(this + 8);
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((_DWORD *)a2 + 4);
  if ( (_BYTE)v6 )
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
        goto LABEL_27;
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
      goto LABEL_30;
    }
LABEL_27:
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
      goto LABEL_33;
    }
LABEL_30:
    v16 = *((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFFELL;
    *(_DWORD *)(v3 + 16) |= 8u;
    v17 = *(_QWORD *)(v3 + 8);
    v18 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v17 & 1) != 0 )
      v18 = (_QWORD *)*v18;
    this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 48, v16, v18);
    if ( (v6 & 0x10) == 0 )
    {
LABEL_9:
      if ( (v6 & 0x20) == 0 )
        goto LABEL_10;
      goto LABEL_36;
    }
LABEL_33:
    v19 = *((_QWORD *)a2 + 7) & 0xFFFFFFFFFFFFFFFELL;
    *(_DWORD *)(v3 + 16) |= 0x10u;
    v20 = *(_QWORD *)(v3 + 8);
    v21 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v20 & 1) != 0 )
      v21 = (_QWORD *)*v21;
    this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 56, v19, v21);
    if ( (v6 & 0x20) == 0 )
    {
LABEL_10:
      if ( (v6 & 0x40) == 0 )
        goto LABEL_11;
      goto LABEL_44;
    }
LABEL_36:
    *(_DWORD *)(v3 + 16) |= 0x20u;
    v22 = *(google::protobuf::FieldOptions **)(v3 + 64);
    if ( !v22 )
    {
      v23 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v23 = (_QWORD *)*v23;
      v22 = (google::protobuf::FieldOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::FieldOptions>(v23);
      *(_QWORD *)(v3 + 64) = v22;
    }
    if ( *((_QWORD *)a2 + 8) )
      v24 = (const google::protobuf::FieldOptions *)*((_QWORD *)a2 + 8);
    else
      v24 = (const google::protobuf::FieldOptions *)&google::protobuf::_FieldOptions_default_instance_;
    this = google::protobuf::FieldOptions::MergeFrom(v22, v24);
    if ( (v6 & 0x40) == 0 )
    {
LABEL_11:
      if ( (v6 & 0x80) == 0 )
      {
LABEL_13:
        *(_DWORD *)(v3 + 16) |= v6;
        goto LABEL_14;
      }
LABEL_12:
      *(_DWORD *)(v3 + 76) = *((_DWORD *)a2 + 19);
      goto LABEL_13;
    }
LABEL_44:
    *(_DWORD *)(v3 + 72) = *((_DWORD *)a2 + 18);
    if ( (v6 & 0x80) == 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
LABEL_14:
  if ( (v6 & 0x700) == 0 )
    return this;
  if ( (v6 & 0x100) == 0 )
  {
    if ( (v6 & 0x200) == 0 )
      goto LABEL_17;
LABEL_47:
    *(_DWORD *)(v3 + 84) = *((_DWORD *)a2 + 21);
    if ( (v6 & 0x400) == 0 )
      goto LABEL_19;
    goto LABEL_18;
  }
  *(_BYTE *)(v3 + 80) = *((_BYTE *)a2 + 80);
  if ( (v6 & 0x200) != 0 )
    goto LABEL_47;
LABEL_17:
  if ( (v6 & 0x400) != 0 )
LABEL_18:
    *(_DWORD *)(v3 + 88) = *((_DWORD *)a2 + 22);
LABEL_19:
  *(_DWORD *)(v3 + 16) |= v6;
  return this;
}