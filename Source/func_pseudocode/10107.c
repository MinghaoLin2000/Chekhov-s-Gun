__ZN3TSP9Reference9MergeFromERKS0_
__int64 __fastcall TSP::Reference::MergeFrom(__int64 this, const TSP::Reference *a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  int v5; // w8

  v3 = this;
  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v5 = *((_DWORD *)a2 + 4);
  if ( (v5 & 7) != 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      *(_QWORD *)(v3 + 24) = *((_QWORD *)a2 + 3);
      if ( (v5 & 2) == 0 )
      {
LABEL_6:
        if ( (v5 & 4) == 0 )
        {
LABEL_8:
          *(_DWORD *)(v3 + 16) |= v5;
          return this;
        }
LABEL_7:
        *(_BYTE *)(v3 + 36) = *((_BYTE *)a2 + 36);
        goto LABEL_8;
      }
    }
    else if ( (v5 & 2) == 0 )
    {
      goto LABEL_6;
    }
    *(_DWORD *)(v3 + 32) = *((_DWORD *)a2 + 8);
    if ( (v5 & 4) == 0 )
      goto LABEL_8;
    goto LABEL_7;
  }
  return this;
}