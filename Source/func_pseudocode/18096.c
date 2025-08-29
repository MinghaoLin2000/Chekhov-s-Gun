_piston_smb2_readmsg
unsigned __int8 *__fastcall piston_smb2_readmsg(int a1, _DWORD *a2)
{
  char *v4; // x0
  unsigned __int8 *v5; // x20
  _BYTE *v6; // x23
  int v7; // w22
  __int64 n; // x0
  __int64 v9; // x21
  __int64 v10; // x21
  int v11; // w23
  int v12; // w24
  unsigned int v13; // w25
  __int64 v14; // x0
  size_t v15; // x21
  void *v16; // x0

  v4 = (char *)malloc_type_malloc(0x58uLL, 0x101004093A202ACuLL);
  v5 = (unsigned __int8 *)v4;
  if ( !v4 )
  {
LABEL_20:
    LODWORD(v9) = 12;
    goto LABEL_21;
  }
  *((_OWORD *)v4 + 3) = 0u;
  *((_OWORD *)v4 + 4) = 0u;
  *((_OWORD *)v4 + 1) = 0u;
  *((_OWORD *)v4 + 2) = 0u;
  *(_OWORD *)v4 = 0u;
  *((_QWORD *)v4 + 10) = 0LL;
  v6 = v4 + 80;
  v7 = a1 + 8;
  n = piston_read_n(a1 + 8, (int)v4 + 80, 4uLL);
  if ( (_DWORD)n )
  {
    v9 = n;
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_10000FC44(v9);
LABEL_5:
    free(v5);
    v5 = 0LL;
    goto LABEL_21;
  }
  v10 = (unsigned __int8)*v6;
  if ( *v6 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_10000FBC4(v10);
    free(v5);
    v5 = 0LL;
    LODWORD(v9) = 5;
    goto LABEL_21;
  }
  v11 = v5[81];
  v12 = v5[82];
  v13 = v5[83];
  v14 = piston_read_n(v7, (int)v5, 0x40uLL);
  if ( (_DWORD)v14 )
  {
    v9 = v14;
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_10000FB48(v9);
    goto LABEL_5;
  }
  v15 = ((v11 << 16) | (v12 << 8) | v13) - 64;
  v16 = malloc_type_malloc(v15, 0x75896D33uLL);
  *((_QWORD *)v5 + 8) = v16;
  if ( !v16 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_10000FA40(v15);
    free(v5);
    v5 = 0LL;
    goto LABEL_20;
  }
  *((_QWORD *)v5 + 9) = v15;
  v9 = piston_read_n(v7, (int)v16, v15);
  if ( (_DWORD)v9 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    sub_10000FABC(v5 + 72, v9);
LABEL_21:
  *a2 = v9;
  return v5;
}