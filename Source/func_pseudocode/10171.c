__ZN3TSP6Pose3D9MergeFromERKS0_
_DWORD *__fastcall TSP::Pose3D::MergeFrom(_DWORD *this, const TSP::Pose3D *a2)
{
  _DWORD *v3; // x19
  __int64 v4; // x8
  int v5; // w8

  v3 = this;
  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    this = (_DWORD *)sub_10003A25C(this + 2, (v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v5 = *((_DWORD *)a2 + 4);
  if ( (v5 & 7) != 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      v3[6] = *((_DWORD *)a2 + 6);
      if ( (v5 & 2) == 0 )
      {
LABEL_6:
        if ( (v5 & 4) == 0 )
        {
LABEL_8:
          v3[4] |= v5;
          return this;
        }
LABEL_7:
        v3[8] = *((_DWORD *)a2 + 8);
        goto LABEL_8;
      }
    }
    else if ( (v5 & 2) == 0 )
    {
      goto LABEL_6;
    }
    v3[7] = *((_DWORD *)a2 + 7);
    if ( (v5 & 4) == 0 )
      goto LABEL_8;
    goto LABEL_7;
  }
  return this;
}