__ZN6google8protobuf11FileOptions9MergeFromERKS1_
__int64 __fastcall google::protobuf::FileOptions::MergeFrom(
        google::protobuf::FileOptions *this,
        const google::protobuf::FileOptions *a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x21
  __int64 v7; // x23
  __int64 v8; // x0
  int *v9; // x8
  int v10; // w10
  int v11; // w9
  int v12; // w21
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
  unsigned __int64 v31; // x1
  __int64 v32; // x8
  _QWORD *v33; // x2
  unsigned __int64 v34; // x1
  __int64 v35; // x8
  _QWORD *v36; // x2
  unsigned __int64 v37; // x1
  __int64 v38; // x8
  _QWORD *v39; // x2
  unsigned __int64 v40; // x1
  __int64 v41; // x8
  _QWORD *v42; // x2

  result = google::protobuf::internal::ExtensionSet::MergeFrom(
             (google::protobuf::FileOptions *)((char *)this + 16),
             (const google::protobuf::FileOptions *)((char *)a2 + 16));
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    result = sub_10003A25C((char *)this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((unsigned int *)a2 + 14);
  if ( (_DWORD)v6 )
  {
    v7 = *((_QWORD *)a2 + 8) + 8LL;
    v8 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
           (google::protobuf::FileOptions *)((char *)this + 48),
           *((_DWORD *)a2 + 14));
    result = sub_1000B9420(
               (char *)this + 48,
               v8,
               v7,
               v6,
               (unsigned int)(**((_DWORD **)this + 8) - *((_DWORD *)this + 14)));
    v9 = (int *)*((_QWORD *)this + 8);
    v10 = *v9;
    v11 = *((_DWORD *)this + 14) + v6;
    *((_DWORD *)this + 14) = v11;
    if ( v10 < v11 )
      *v9 = v11;
  }
  v12 = *((_DWORD *)a2 + 10);
  if ( !(_BYTE)v12 )
    goto LABEL_40;
  if ( (v12 & 1) != 0 )
  {
    v13 = *((_QWORD *)a2 + 9) & 0xFFFFFFFFFFFFFFFELL;
    *((_DWORD *)this + 10) |= 1u;
    v14 = *((_QWORD *)this + 1);
    v15 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v14 & 1) != 0 )
      v15 = (_QWORD *)*v15;
    result = google::protobuf::internal::ArenaStringPtr::Set((char *)this + 72, v13, v15);
    if ( (v12 & 2) == 0 )
    {
LABEL_9:
      if ( (v12 & 4) == 0 )
        goto LABEL_10;
      goto LABEL_22;
    }
  }
  else if ( (v12 & 2) == 0 )
  {
    goto LABEL_9;
  }
  v16 = *((_QWORD *)a2 + 10) & 0xFFFFFFFFFFFFFFFELL;
  *((_DWORD *)this + 10) |= 2u;
  v17 = *((_QWORD *)this + 1);
  v18 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v17 & 1) != 0 )
    v18 = (_QWORD *)*v18;
  result = google::protobuf::internal::ArenaStringPtr::Set((char *)this + 80, v16, v18);
  if ( (v12 & 4) == 0 )
  {
LABEL_10:
    if ( (v12 & 8) == 0 )
      goto LABEL_11;
    goto LABEL_25;
  }
LABEL_22:
  v19 = *((_QWORD *)a2 + 11) & 0xFFFFFFFFFFFFFFFELL;
  *((_DWORD *)this + 10) |= 4u;
  v20 = *((_QWORD *)this + 1);
  v21 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v20 & 1) != 0 )
    v21 = (_QWORD *)*v21;
  result = google::protobuf::internal::ArenaStringPtr::Set((char *)this + 88, v19, v21);
  if ( (v12 & 8) == 0 )
  {
LABEL_11:
    if ( (v12 & 0x10) == 0 )
      goto LABEL_12;
    goto LABEL_28;
  }
LABEL_25:
  v22 = *((_QWORD *)a2 + 12) & 0xFFFFFFFFFFFFFFFELL;
  *((_DWORD *)this + 10) |= 8u;
  v23 = *((_QWORD *)this + 1);
  v24 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v23 & 1) != 0 )
    v24 = (_QWORD *)*v24;
  result = google::protobuf::internal::ArenaStringPtr::Set((char *)this + 96, v22, v24);
  if ( (v12 & 0x10) == 0 )
  {
LABEL_12:
    if ( (v12 & 0x20) == 0 )
      goto LABEL_13;
LABEL_31:
    v28 = *((_QWORD *)a2 + 14) & 0xFFFFFFFFFFFFFFFELL;
    *((_DWORD *)this + 10) |= 0x20u;
    v29 = *((_QWORD *)this + 1);
    v30 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v29 & 1) != 0 )
      v30 = (_QWORD *)*v30;
    result = google::protobuf::internal::ArenaStringPtr::Set((char *)this + 112, v28, v30);
    if ( (v12 & 0x40) == 0 )
    {
LABEL_14:
      if ( (v12 & 0x80) == 0 )
        goto LABEL_40;
      goto LABEL_37;
    }
    goto LABEL_34;
  }
LABEL_28:
  v25 = *((_QWORD *)a2 + 13) & 0xFFFFFFFFFFFFFFFELL;
  *((_DWORD *)this + 10) |= 0x10u;
  v26 = *((_QWORD *)this + 1);
  v27 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v26 & 1) != 0 )
    v27 = (_QWORD *)*v27;
  result = google::protobuf::internal::ArenaStringPtr::Set((char *)this + 104, v25, v27);
  if ( (v12 & 0x20) != 0 )
    goto LABEL_31;
LABEL_13:
  if ( (v12 & 0x40) == 0 )
    goto LABEL_14;
LABEL_34:
  v31 = *((_QWORD *)a2 + 15) & 0xFFFFFFFFFFFFFFFELL;
  *((_DWORD *)this + 10) |= 0x40u;
  v32 = *((_QWORD *)this + 1);
  v33 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v32 & 1) != 0 )
    v33 = (_QWORD *)*v33;
  result = google::protobuf::internal::ArenaStringPtr::Set((char *)this + 120, v31, v33);
  if ( (v12 & 0x80) != 0 )
  {
LABEL_37:
    v34 = *((_QWORD *)a2 + 16) & 0xFFFFFFFFFFFFFFFELL;
    *((_DWORD *)this + 10) |= 0x80u;
    v35 = *((_QWORD *)this + 1);
    v36 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v35 & 1) != 0 )
      v36 = (_QWORD *)*v36;
    result = google::protobuf::internal::ArenaStringPtr::Set((char *)this + 128, v34, v36);
  }
LABEL_40:
  if ( (v12 & 0xFF00) == 0 )
    goto LABEL_51;
  if ( (v12 & 0x100) != 0 )
  {
    v37 = *((_QWORD *)a2 + 17) & 0xFFFFFFFFFFFFFFFELL;
    *((_DWORD *)this + 10) |= 0x100u;
    v38 = *((_QWORD *)this + 1);
    v39 = (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v38 & 1) != 0 )
      v39 = (_QWORD *)*v39;
    result = google::protobuf::internal::ArenaStringPtr::Set((char *)this + 136, v37, v39);
    if ( (v12 & 0x200) == 0 )
    {
LABEL_43:
      if ( (v12 & 0x400) == 0 )
        goto LABEL_44;
      goto LABEL_65;
    }
  }
  else if ( (v12 & 0x200) == 0 )
  {
    goto LABEL_43;
  }
  v40 = *((_QWORD *)a2 + 18) & 0xFFFFFFFFFFFFFFFELL;
  *((_DWORD *)this + 10) |= 0x200u;
  v41 = *((_QWORD *)this + 1);
  v42 = (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v41 & 1) != 0 )
    v42 = (_QWORD *)*v42;
  result = google::protobuf::internal::ArenaStringPtr::Set((char *)this + 144, v40, v42);
  if ( (v12 & 0x400) == 0 )
  {
LABEL_44:
    if ( (v12 & 0x800) == 0 )
      goto LABEL_45;
    goto LABEL_66;
  }
LABEL_65:
  *((_BYTE *)this + 152) = *((_BYTE *)a2 + 152);
  if ( (v12 & 0x800) == 0 )
  {
LABEL_45:
    if ( (v12 & 0x1000) == 0 )
      goto LABEL_46;
    goto LABEL_67;
  }
LABEL_66:
  *((_BYTE *)this + 153) = *((_BYTE *)a2 + 153);
  if ( (v12 & 0x1000) == 0 )
  {
LABEL_46:
    if ( (v12 & 0x2000) == 0 )
      goto LABEL_47;
    goto LABEL_68;
  }
LABEL_67:
  *((_BYTE *)this + 154) = *((_BYTE *)a2 + 154);
  if ( (v12 & 0x2000) == 0 )
  {
LABEL_47:
    if ( (v12 & 0x4000) == 0 )
      goto LABEL_48;
LABEL_69:
    *((_BYTE *)this + 156) = *((_BYTE *)a2 + 156);
    if ( (v12 & 0x8000) == 0 )
      goto LABEL_50;
    goto LABEL_49;
  }
LABEL_68:
  *((_BYTE *)this + 155) = *((_BYTE *)a2 + 155);
  if ( (v12 & 0x4000) != 0 )
    goto LABEL_69;
LABEL_48:
  if ( (v12 & 0x8000) != 0 )
LABEL_49:
    *((_BYTE *)this + 157) = *((_BYTE *)a2 + 157);
LABEL_50:
  *((_DWORD *)this + 10) |= v12;
LABEL_51:
  if ( (v12 & 0xF0000) == 0 )
    return result;
  if ( (v12 & 0x10000) != 0 )
  {
    *((_BYTE *)this + 158) = *((_BYTE *)a2 + 158);
    if ( (v12 & 0x20000) == 0 )
    {
LABEL_54:
      if ( (v12 & 0x40000) == 0 )
        goto LABEL_55;
LABEL_73:
      *((_DWORD *)this + 40) = *((_DWORD *)a2 + 40);
      if ( (v12 & 0x80000) == 0 )
        goto LABEL_57;
      goto LABEL_56;
    }
  }
  else if ( (v12 & 0x20000) == 0 )
  {
    goto LABEL_54;
  }
  *((_BYTE *)this + 159) = *((_BYTE *)a2 + 159);
  if ( (v12 & 0x40000) != 0 )
    goto LABEL_73;
LABEL_55:
  if ( (v12 & 0x80000) != 0 )
LABEL_56:
    *((_BYTE *)this + 164) = *((_BYTE *)a2 + 164);
LABEL_57:
  *((_DWORD *)this + 10) |= v12;
  return result;
}