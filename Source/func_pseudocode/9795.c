__ZN3TSP8DataInfo9MergeFromERKS0_
__int64 __fastcall TSP::DataInfo::MergeFrom(__int64 this, const TSP::DataInfo *a2)
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
  unsigned __int64 v22; // x1
  __int64 v23; // x8
  _QWORD *v24; // x2
  unsigned __int64 v25; // x1
  __int64 v26; // x8
  _QWORD *v27; // x2
  unsigned __int64 v28; // x1
  __int64 v29; // x8
  _QWORD *v30; // x2
  TSP::DataAttributes *v31; // x0
  _QWORD *v32; // x0
  const TSP::DataAttributes *v33; // x1
  TSP::EncryptionInfo *v34; // x0
  _QWORD *v35; // x0
  const TSP::EncryptionInfo *v36; // x1
  TSP::IndexSet *v37; // x0
  _QWORD *v38; // x0
  const TSP::IndexSet *v39; // x1

  v3 = this;
  v4 = (_QWORD *)(this + 8);
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((_DWORD *)a2 + 4);
  if ( !(_BYTE)v6 )
    goto LABEL_37;
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
    goto LABEL_25;
  }
LABEL_22:
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
LABEL_28:
    v22 = *((_QWORD *)a2 + 8) & 0xFFFFFFFFFFFFFFFELL;
    *(_DWORD *)(v3 + 16) |= 0x20u;
    v23 = *(_QWORD *)(v3 + 8);
    v24 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v23 & 1) != 0 )
      v24 = (_QWORD *)*v24;
    this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 64, v22, v24);
    if ( (v6 & 0x40) == 0 )
    {
LABEL_11:
      if ( (v6 & 0x80) == 0 )
        goto LABEL_37;
      goto LABEL_34;
    }
    goto LABEL_31;
  }
LABEL_25:
  v19 = *((_QWORD *)a2 + 7) & 0xFFFFFFFFFFFFFFFELL;
  *(_DWORD *)(v3 + 16) |= 0x10u;
  v20 = *(_QWORD *)(v3 + 8);
  v21 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v20 & 1) != 0 )
    v21 = (_QWORD *)*v21;
  this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 56, v19, v21);
  if ( (v6 & 0x20) != 0 )
    goto LABEL_28;
LABEL_10:
  if ( (v6 & 0x40) == 0 )
    goto LABEL_11;
LABEL_31:
  v25 = *((_QWORD *)a2 + 9) & 0xFFFFFFFFFFFFFFFELL;
  *(_DWORD *)(v3 + 16) |= 0x40u;
  v26 = *(_QWORD *)(v3 + 8);
  v27 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v26 & 1) != 0 )
    v27 = (_QWORD *)*v27;
  this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 72, v25, v27);
  if ( (v6 & 0x80) != 0 )
  {
LABEL_34:
    v28 = *((_QWORD *)a2 + 10) & 0xFFFFFFFFFFFFFFFELL;
    *(_DWORD *)(v3 + 16) |= 0x80u;
    v29 = *(_QWORD *)(v3 + 8);
    v30 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v29 & 1) != 0 )
      v30 = (_QWORD *)*v30;
    this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 80, v28, v30);
  }
LABEL_37:
  if ( (v6 & 0xFF00) == 0 )
    goto LABEL_48;
  if ( (v6 & 0x100) != 0 )
  {
    *(_DWORD *)(v3 + 16) |= 0x100u;
    v31 = *(TSP::DataAttributes **)(v3 + 88);
    if ( !v31 )
    {
      v32 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v32 = (_QWORD *)*v32;
      v31 = (TSP::DataAttributes *)google::protobuf::Arena::CreateMaybeMessage<TSP::DataAttributes>(v32);
      *(_QWORD *)(v3 + 88) = v31;
    }
    if ( *((_QWORD *)a2 + 11) )
      v33 = (const TSP::DataAttributes *)*((_QWORD *)a2 + 11);
    else
      v33 = (const TSP::DataAttributes *)&TSP::_DataAttributes_default_instance_;
    this = TSP::DataAttributes::MergeFrom(v31, v33);
    if ( (v6 & 0x200) == 0 )
    {
LABEL_40:
      if ( (v6 & 0x400) == 0 )
        goto LABEL_41;
      goto LABEL_71;
    }
  }
  else if ( (v6 & 0x200) == 0 )
  {
    goto LABEL_40;
  }
  *(_DWORD *)(v3 + 16) |= 0x200u;
  v34 = *(TSP::EncryptionInfo **)(v3 + 96);
  if ( !v34 )
  {
    v35 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
    if ( (*v4 & 1) != 0 )
      v35 = (_QWORD *)*v35;
    v34 = (TSP::EncryptionInfo *)google::protobuf::Arena::CreateMaybeMessage<TSP::EncryptionInfo>(v35);
    *(_QWORD *)(v3 + 96) = v34;
  }
  if ( *((_QWORD *)a2 + 12) )
    v36 = (const TSP::EncryptionInfo *)*((_QWORD *)a2 + 12);
  else
    v36 = (const TSP::EncryptionInfo *)&TSP::_EncryptionInfo_default_instance_;
  this = TSP::EncryptionInfo::MergeFrom(v34, v36);
  if ( (v6 & 0x400) == 0 )
  {
LABEL_41:
    if ( (v6 & 0x800) == 0 )
      goto LABEL_42;
    goto LABEL_79;
  }
LABEL_71:
  *(_DWORD *)(v3 + 16) |= 0x400u;
  v37 = *(TSP::IndexSet **)(v3 + 104);
  if ( !v37 )
  {
    v38 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
    if ( (*v4 & 1) != 0 )
      v38 = (_QWORD *)*v38;
    v37 = (TSP::IndexSet *)google::protobuf::Arena::CreateMaybeMessage<TSP::IndexSet>(v38);
    *(_QWORD *)(v3 + 104) = v37;
  }
  if ( *((_QWORD *)a2 + 13) )
    v39 = (const TSP::IndexSet *)*((_QWORD *)a2 + 13);
  else
    v39 = (const TSP::IndexSet *)&TSP::_IndexSet_default_instance_;
  this = TSP::IndexSet::MergeFrom(v37, v39);
  if ( (v6 & 0x800) == 0 )
  {
LABEL_42:
    if ( (v6 & 0x1000) == 0 )
      goto LABEL_43;
    goto LABEL_80;
  }
LABEL_79:
  *(_QWORD *)(v3 + 112) = *((_QWORD *)a2 + 14);
  if ( (v6 & 0x1000) == 0 )
  {
LABEL_43:
    if ( (v6 & 0x2000) == 0 )
      goto LABEL_44;
    goto LABEL_81;
  }
LABEL_80:
  *(_BYTE *)(v3 + 120) = *((_BYTE *)a2 + 120);
  if ( (v6 & 0x2000) == 0 )
  {
LABEL_44:
    if ( (v6 & 0x4000) == 0 )
      goto LABEL_45;
LABEL_82:
    *(_DWORD *)(v3 + 124) = *((_DWORD *)a2 + 31);
    if ( (v6 & 0x8000) == 0 )
      goto LABEL_47;
    goto LABEL_46;
  }
LABEL_81:
  *(_BYTE *)(v3 + 121) = *((_BYTE *)a2 + 121);
  if ( (v6 & 0x4000) != 0 )
    goto LABEL_82;
LABEL_45:
  if ( (v6 & 0x8000) != 0 )
LABEL_46:
    *(_QWORD *)(v3 + 128) = *((_QWORD *)a2 + 16);
LABEL_47:
  *(_DWORD *)(v3 + 16) |= v6;
LABEL_48:
  if ( (v6 & 0x70000) == 0 )
    return this;
  if ( (v6 & 0x10000) == 0 )
  {
    if ( (v6 & 0x20000) == 0 )
      goto LABEL_51;
LABEL_85:
    *(_QWORD *)(v3 + 144) = *((_QWORD *)a2 + 18);
    if ( (v6 & 0x40000) == 0 )
      goto LABEL_53;
    goto LABEL_52;
  }
  *(_QWORD *)(v3 + 136) = *((_QWORD *)a2 + 17);
  if ( (v6 & 0x20000) != 0 )
    goto LABEL_85;
LABEL_51:
  if ( (v6 & 0x40000) != 0 )
LABEL_52:
    *(_DWORD *)(v3 + 152) = *((_DWORD *)a2 + 38);
LABEL_53:
  *(_DWORD *)(v3 + 16) |= v6;
  return this;
}