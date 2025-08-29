__ZN3TSP43SupportMetadata_DataCollaborationProperties9MergeFromERKS0_
__int64 __fastcall TSP::SupportMetadata_DataCollaborationProperties::MergeFrom(
        __int64 this,
        const TSP::SupportMetadata_DataCollaborationProperties *a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  int v5; // w21
  unsigned __int64 v6; // x1
  __int64 v7; // x8
  _QWORD *v8; // x2

  v3 = this;
  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v5 = *((_DWORD *)a2 + 4);
  if ( (v5 & 0x7F) != 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      v6 = *((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFELL;
      *(_DWORD *)(v3 + 16) |= 1u;
      v7 = *(_QWORD *)(v3 + 8);
      v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v7 & 1) != 0 )
        v8 = (_QWORD *)*v8;
      this = google::protobuf::internal::ArenaStringPtr::Set(v3 + 24, v6, v8);
      if ( (v5 & 2) == 0 )
      {
LABEL_6:
        if ( (v5 & 4) == 0 )
          goto LABEL_7;
        goto LABEL_18;
      }
    }
    else if ( (v5 & 2) == 0 )
    {
      goto LABEL_6;
    }
    *(_BYTE *)(v3 + 32) = *((_BYTE *)a2 + 32);
    if ( (v5 & 4) == 0 )
    {
LABEL_7:
      if ( (v5 & 8) == 0 )
        goto LABEL_8;
      goto LABEL_19;
    }
LABEL_18:
    *(_BYTE *)(v3 + 33) = *((_BYTE *)a2 + 33);
    if ( (v5 & 8) == 0 )
    {
LABEL_8:
      if ( (v5 & 0x10) == 0 )
        goto LABEL_9;
      goto LABEL_20;
    }
LABEL_19:
    *(_BYTE *)(v3 + 34) = *((_BYTE *)a2 + 34);
    if ( (v5 & 0x10) == 0 )
    {
LABEL_9:
      if ( (v5 & 0x20) == 0 )
        goto LABEL_10;
      goto LABEL_21;
    }
LABEL_20:
    *(_DWORD *)(v3 + 36) = *((_DWORD *)a2 + 9);
    if ( (v5 & 0x20) == 0 )
    {
LABEL_10:
      if ( (v5 & 0x40) == 0 )
      {
LABEL_12:
        *(_DWORD *)(v3 + 16) |= v5;
        return this;
      }
LABEL_11:
      *(_DWORD *)(v3 + 44) = *((_DWORD *)a2 + 11);
      goto LABEL_12;
    }
LABEL_21:
    *(_DWORD *)(v3 + 40) = *((_DWORD *)a2 + 10);
    if ( (v5 & 0x40) == 0 )
      goto LABEL_12;
    goto LABEL_11;
  }
  return this;
}