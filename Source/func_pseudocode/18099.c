_piston_smb1_negotiate_easy
__int64 __fastcall piston_smb1_negotiate_easy(__int64 a1, _DWORD *a2)
{
  char *v4; // x0
  char *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x21
  unsigned __int8 *v9; // x0
  unsigned __int8 *v10; // x21
  int v11; // w23
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x9
  void *v15; // x0
  unsigned int v16; // [xsp+4h] [xbp-9Ch] BYREF
  _QWORD v17[3]; // [xsp+8h] [xbp-98h] BYREF
  int v18; // [xsp+20h] [xbp-80h]
  int v19; // [xsp+24h] [xbp-7Ch]
  char v20; // [xsp+2Dh] [xbp-73h] BYREF
  __int16 v21; // [xsp+2Eh] [xbp-72h]
  uint8_t buf[4]; // [xsp+30h] [xbp-70h] BYREF
  const char *v23; // [xsp+34h] [xbp-6Ch]
  __int16 v24; // [xsp+3Ch] [xbp-64h]
  int v25; // [xsp+3Eh] [xbp-62h]
  _QWORD v26[4]; // [xsp+48h] [xbp-58h] BYREF

  *a2 = 0;
  v4 = piston_smb1_alloc_hdr(a1);
  if ( !v4 )
    return 12;
  v5 = v4;
  v19 = 0;
  v4[4] = 114;
  v17[0] = v4;
  v17[1] = 32LL;
  v18 = 2;
  v20 = 0;
  v21 = 12;
  v26[0] = &v20;
  v26[1] = 3LL;
  v26[2] = &smb1_dialectb;
  v26[3] = 12LL;
  v17[2] = v26;
  v6 = piston_sndmsgbufs(a1, (__int64)v17);
  v16 = v6;
  if ( (_DWORD)v6 )
  {
    v7 = v6;
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_10000FD40(v7);
LABEL_5:
    piston_smb1_free_hdr(v5);
    return v16;
  }
  v9 = piston_smb1_readmsg(a1, &v16);
  if ( !v9 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_10000FCC0(&v16);
    goto LABEL_5;
  }
  v10 = v9;
  v11 = *(_DWORD *)(v9 + 5);
  if ( v11 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315394;
      v23 = "piston_smb1_negotiate_easy";
      v24 = 1024;
      v25 = v11;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "%s: Negotiate failed, Reply status: 0x%x\n",
        buf,
        0x12u);
      v11 = *(_DWORD *)(v10 + 5);
    }
    v16 = 5;
    *a2 = v11;
  }
  else
  {
    v12 = *((_QWORD *)v9 + 4);
    *(_BYTE *)(a1 + 145) = *(_BYTE *)(v12 + 3);
    *(_DWORD *)(a1 + 148) = *(unsigned __int16 *)(v12 + 4);
    *(_BYTE *)(a1 + 152) = *(_BYTE *)(v12 + 6);
    *(_OWORD *)(a1 + 156) = *(_OWORD *)(v12 + 8);
    *(_QWORD *)(a1 + 176) = *(_QWORD *)(v12 + 24);
    *(_WORD *)(a1 + 184) = *(_WORD *)(v12 + 32);
    *(_OWORD *)(a1 + 98) = *(_OWORD *)(v12 + 37);
    v13 = *((_QWORD *)v9 + 4);
    v14 = *((_QWORD *)v9 + 5);
    *(_QWORD *)(a1 + 1456) = v14 - 53;
    if ( v14 != 53 )
      memcpy((void *)(a1 + 432), (const void *)(v13 + 53), v14 - 53);
  }
  piston_smb1_free_hdr(v5);
  v15 = (void *)*((_QWORD *)v10 + 4);
  if ( v15 )
    free(v15);
  return v16;
}