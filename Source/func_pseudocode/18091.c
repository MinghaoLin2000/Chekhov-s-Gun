_piston_smb2_alloc_hdr
_OWORD *__fastcall piston_smb2_alloc_hdr(__int64 a1)
{
  _OWORD *v2; // x0
  _OWORD *v3; // x20
  __int64 v4; // x8
  __int64 v6; // x22

  v2 = malloc_type_malloc(0x40uLL, 0x1000040FA0F61DDuLL);
  v3 = v2;
  if ( !v2 )
    return v3;
  v2[3] = 0u;
  *(_OWORD *)((char *)v2 + 38) = 0u;
  *(_OWORD *)((char *)v2 + 22) = 0u;
  *(_OWORD *)((char *)v2 + 6) = 0u;
  *(_DWORD *)v2 = smb2_proto_component;
  *((_WORD *)v2 + 2) = 64;
  v4 = *(_QWORD *)(a1 + 48);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 8) != 0 )
      goto LABEL_4;
  }
  else
  {
    *((_DWORD *)v2 + 4) = *(_DWORD *)(a1 + 248);
    if ( (v4 & 8) != 0 )
    {
LABEL_4:
      if ( (v4 & 0x20) != 0 )
        goto LABEL_5;
LABEL_10:
      *((_DWORD *)v3 + 9) = *(_DWORD *)(a1 + 276);
      if ( (v4 & 0x40) != 0 )
        return v3;
      goto LABEL_6;
    }
  }
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 2496));
  v6 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)(a1 + 264) = v6 + 1;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 2496));
  *((_QWORD *)v3 + 3) = v6;
  v4 = *(_QWORD *)(a1 + 48);
  if ( (v4 & 0x20) == 0 )
    goto LABEL_10;
LABEL_5:
  if ( (v4 & 0x40) == 0 )
LABEL_6:
    *((_QWORD *)v3 + 5) = *(_QWORD *)(a1 + 280);
  return v3;
}