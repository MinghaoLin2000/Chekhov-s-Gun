__ZN3TSP5Color9MergeFromERKS0_
_DWORD *__fastcall TSP::Color::MergeFrom(_DWORD *this, const TSP::Color *a2)
{
  _DWORD *v3; // x19
  __int64 v4; // x8
  int v5; // w8

  v3 = this;
  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    this = (_DWORD *)sub_10003A25C(this + 2, (v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v5 = *((_DWORD *)a2 + 4);
  if ( (_BYTE)v5 )
  {
    if ( (v5 & 1) != 0 )
    {
      v3[6] = *((_DWORD *)a2 + 6);
      if ( (v5 & 2) == 0 )
      {
LABEL_6:
        if ( (v5 & 4) == 0 )
          goto LABEL_7;
        goto LABEL_23;
      }
    }
    else if ( (v5 & 2) == 0 )
    {
      goto LABEL_6;
    }
    v3[7] = *((_DWORD *)a2 + 7);
    if ( (v5 & 4) == 0 )
    {
LABEL_7:
      if ( (v5 & 8) == 0 )
        goto LABEL_8;
      goto LABEL_24;
    }
LABEL_23:
    v3[8] = *((_DWORD *)a2 + 8);
    if ( (v5 & 8) == 0 )
    {
LABEL_8:
      if ( (v5 & 0x10) == 0 )
        goto LABEL_9;
      goto LABEL_25;
    }
LABEL_24:
    v3[9] = *((_DWORD *)a2 + 9);
    if ( (v5 & 0x10) == 0 )
    {
LABEL_9:
      if ( (v5 & 0x20) == 0 )
        goto LABEL_10;
      goto LABEL_26;
    }
LABEL_25:
    v3[10] = *((_DWORD *)a2 + 10);
    if ( (v5 & 0x20) == 0 )
    {
LABEL_10:
      if ( (v5 & 0x40) == 0 )
        goto LABEL_11;
      goto LABEL_27;
    }
LABEL_26:
    v3[11] = *((_DWORD *)a2 + 11);
    if ( (v5 & 0x40) == 0 )
    {
LABEL_11:
      if ( (v5 & 0x80) == 0 )
      {
LABEL_13:
        v3[4] |= v5;
        goto LABEL_14;
      }
LABEL_12:
      v3[13] = *((_DWORD *)a2 + 13);
      goto LABEL_13;
    }
LABEL_27:
    v3[12] = *((_DWORD *)a2 + 12);
    if ( (v5 & 0x80) == 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
LABEL_14:
  if ( (v5 & 0x700) == 0 )
    return this;
  if ( (v5 & 0x100) == 0 )
  {
    if ( (v5 & 0x200) == 0 )
      goto LABEL_17;
LABEL_30:
    v3[15] = *((_DWORD *)a2 + 15);
    if ( (v5 & 0x400) == 0 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v3[14] = *((_DWORD *)a2 + 14);
  if ( (v5 & 0x200) != 0 )
    goto LABEL_30;
LABEL_17:
  if ( (v5 & 0x400) != 0 )
LABEL_18:
    v3[16] = *((_DWORD *)a2 + 16);
LABEL_19:
  v3[4] |= v5;
  return this;
}