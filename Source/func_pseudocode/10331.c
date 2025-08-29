__ZN3TSP13CFUUIDArchive9MergeFromERKS0_
__int64 __fastcall TSP::CFUUIDArchive::MergeFrom(__int64 this, const TSP::CFUUIDArchive *a2)
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
  if ( (v5 & 0x1F) != 0 )
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
        goto LABEL_16;
      }
    }
    else if ( (v5 & 2) == 0 )
    {
      goto LABEL_6;
    }
    *(_DWORD *)(v3 + 32) = *((_DWORD *)a2 + 8);
    if ( (v5 & 4) == 0 )
    {
LABEL_7:
      if ( (v5 & 8) == 0 )
        goto LABEL_8;
      goto LABEL_17;
    }
LABEL_16:
    *(_DWORD *)(v3 + 36) = *((_DWORD *)a2 + 9);
    if ( (v5 & 8) == 0 )
    {
LABEL_8:
      if ( (v5 & 0x10) == 0 )
      {
LABEL_10:
        *(_DWORD *)(v3 + 16) |= v5;
        return this;
      }
LABEL_9:
      *(_DWORD *)(v3 + 44) = *((_DWORD *)a2 + 11);
      goto LABEL_10;
    }
LABEL_17:
    *(_DWORD *)(v3 + 40) = *((_DWORD *)a2 + 10);
    if ( (v5 & 0x10) == 0 )
      goto LABEL_10;
    goto LABEL_9;
  }
  return this;
}