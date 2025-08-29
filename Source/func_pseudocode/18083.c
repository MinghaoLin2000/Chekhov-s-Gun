_piston_smb1_alloc_hdr
char *__fastcall piston_smb1_alloc_hdr(__int64 a1)
{
  char *v2; // x0
  char *v3; // x20
  __int64 v4; // x8
  __int16 v5; // w22

  v2 = (char *)malloc_type_malloc(0x20uLL, 0x1000040E0EAB150uLL);
  v3 = v2;
  if ( !v2 )
    return v3;
  *((_DWORD *)v2 + 7) = 0;
  *(_QWORD *)(v2 + 20) = 0LL;
  *(_QWORD *)(v2 + 12) = 0LL;
  *(_QWORD *)(v2 + 4) = 0LL;
  *(_DWORD *)v2 = smb1_proto_component;
  v4 = *(_QWORD *)(a1 + 48);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 2) != 0 )
      goto LABEL_4;
  }
  else
  {
    v2[9] = 24;
    if ( (v4 & 2) != 0 )
    {
LABEL_4:
      if ( (v4 & 4) != 0 )
        goto LABEL_5;
      goto LABEL_12;
    }
  }
  *((_WORD *)v2 + 5) = -14329;
  if ( (v4 & 4) != 0 )
  {
LABEL_5:
    if ( (v4 & 0x20) != 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_12:
  *((_WORD *)v2 + 13) = *(_WORD *)(a1 + 132);
  if ( (v4 & 0x20) != 0 )
  {
LABEL_6:
    if ( (v4 & 0x40) != 0 )
      goto LABEL_7;
LABEL_14:
    *((_WORD *)v2 + 14) = *(_WORD *)(a1 + 138);
    if ( (v4 & 0x80) != 0 )
      return v3;
    goto LABEL_8;
  }
LABEL_13:
  *((_WORD *)v2 + 12) = *(_WORD *)(a1 + 134);
  if ( (v4 & 0x40) == 0 )
    goto LABEL_14;
LABEL_7:
  if ( (v4 & 0x80) == 0 )
  {
LABEL_8:
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 2496));
    v5 = *(_WORD *)(a1 + 136);
    *(_WORD *)(a1 + 136) = v5 + 1;
    pthread_mutex_unlock((pthread_mutex_t *)(a1 + 2496));
    *((_WORD *)v3 + 15) = v5;
  }
  return v3;
}