_piston_open_sock
__int64 __fastcall piston_open_sock(__int64 a1)
{
  __int64 v2; // x22
  __int64 v3; // x0
  __int64 v4; // x20
  addrinfo *v5; // x23
  int v6; // w0
  int v8; // w21
  __int64 v9; // x0
  char *v10; // x0
  char *v11; // x22
  void *v12; // x0
  addrinfo *v13; // [xsp+8h] [xbp-68h] BYREF
  addrinfo v14; // [xsp+10h] [xbp-60h] BYREF

  *(_DWORD *)a1 = -1;
  v13 = 0LL;
  v14.ai_flags = 0;
  memset(&v14.ai_addrlen, 0, 32);
  *(_QWORD *)&v14.ai_family = 0x100000002LL;
  v14.ai_protocol = 6;
  v2 = a1 + 8;
  v3 = getaddrinfo(*(const char **)(a1 + 8), "microsoft-ds", &v14, &v13);
  if ( (_DWORD)v3 )
  {
    v4 = v3;
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_10001010C(v4);
    goto LABEL_10;
  }
  v5 = v13;
  if ( v13 )
  {
    while ( 1 )
    {
      v6 = socket(v5->ai_family, v5->ai_socktype, v5->ai_protocol);
      if ( (v6 & 0x80000000) == 0 )
        break;
      v5 = v5->ai_next;
      if ( !v5 )
        goto LABEL_7;
    }
    v8 = v6;
    v9 = connect(v6, v5->ai_addr, v5->ai_addrlen);
    if ( (v9 & 0x80000000) != 0 )
    {
      v4 = (unsigned int)*__error();
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        sub_10000FF50(v2);
      *(_DWORD *)a1 = -1;
    }
    else
    {
      v4 = v9;
      if ( v5->ai_family != 2 )
      {
LABEL_28:
        *(_DWORD *)a1 = v8;
        goto LABEL_10;
      }
      v10 = (char *)malloc_type_malloc(0x400uLL, 0x26385762uLL);
      if ( v10 )
      {
        v11 = v10;
        bzero(v10, 0x400uLL);
        v12 = *(void **)(a1 + 16);
        if ( v12 )
        {
          free(v12);
          *(_QWORD *)(a1 + 16) = 0LL;
        }
        if ( inet_ntop(v5->ai_family, &v5->ai_addr->sa_data[2], v11, 0x400u) )
        {
          *(_QWORD *)(a1 + 16) = v11;
          printf("SMB Server address is %s\n", v11);
        }
        else
        {
          if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
            sub_100010088();
          free(v11);
        }
        goto LABEL_28;
      }
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        sub_100010004();
    }
  }
  else
  {
LABEL_7:
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_10000FEB8(v2);
    v4 = 0LL;
  }
LABEL_10:
  if ( v13 )
    freeaddrinfo(v13);
  return v4;
}