_NetFSMountURLProbe
CFStringRef __cdecl NetFSMountURLProbe(CFStringRef hostname)
{
  __int64 v2; // x0
  __int64 v3; // x19
  __int64 v4; // x20
  int v5; // w21
  const char *v6; // x26
  const char *v7; // x27
  int v8; // w0
  addrinfo *v9; // x27
  int *v10; // x24
  int v11; // w0
  int v12; // w28
  int v13; // w0
  int v14; // w8
  int v15; // w22
  __int64 v16; // x24
  int v17; // w26
  unsigned __int64 v18; // x27
  int v19; // w8
  const char *v20; // x27
  int v21; // w0
  const char *v22; // x0
  __int64 v23; // x19
  int *v24; // x20
  int v25; // t1
  __int64 v26; // [xsp+0h] [xbp-540h]
  __int64 v27; // [xsp+0h] [xbp-540h]
  int v28; // [xsp+1Ch] [xbp-524h]
  int v29; // [xsp+2Ch] [xbp-514h]
  int v30; // [xsp+2Ch] [xbp-514h]
  char *__s1; // [xsp+30h] [xbp-510h]
  int v32; // [xsp+38h] [xbp-508h]
  timeval v33; // [xsp+40h] [xbp-500h] BYREF
  fd_set v34; // [xsp+50h] [xbp-4F0h] BYREF
  fd_set v35; // [xsp+D0h] [xbp-470h] BYREF
  socklen_t v36; // [xsp+150h] [xbp-3F0h] BYREF
  int v37; // [xsp+154h] [xbp-3ECh] BYREF
  addrinfo *v38; // [xsp+158h] [xbp-3E8h] BYREF
  addrinfo v39; // [xsp+160h] [xbp-3E0h] BYREF
  _OWORD v40[4]; // [xsp+190h] [xbp-3B0h] BYREF
  __int64 v41; // [xsp+1D0h] [xbp-370h]
  _DWORD v42[64]; // [xsp+1D8h] [xbp-368h]
  _DWORD v43[64]; // [xsp+2D8h] [xbp-268h] BYREF
  char buffer[256]; // [xsp+3D8h] [xbp-168h] BYREF

  v38 = 0LL;
  v36 = 0;
  memset(&v34, 0, sizeof(v34));
  v33.tv_sec = 0LL;
  *(_QWORD *)&v33.tv_usec = 0LL;
  v40[2] = off_1000146B8;
  v40[3] = unk_1000146C8;
  v41 = 0LL;
  v40[0] = *(_OWORD *)off_100014698;
  v40[1] = *(_OWORD *)algn_1000146A8;
  if ( !CFStringGetCString(hostname, buffer, 256LL, 0x8000100u) )
  {
    syslog_DARWIN_EXTSN(3, "CFStringGetCString failed");
    return 0LL;
  }
  syslog_DARWIN_EXTSN(6, "%s: host (%s)", "NetFSMountURLProbe", buffer);
  memset(&v39, 0, sizeof(v39));
  v39.ai_socktype = 1;
  v39.ai_flags = 4096;
  memset(&v35, 0, sizeof(v35));
  if ( (unsigned int)piston_init() )
  {
    syslog_DARWIN_EXTSN(3, "Couldn't initialize piston, error: %d\n");
    return 0LL;
  }
  v2 = piston_alloc_desciptor(0LL, 1LL);
  if ( !v2 )
  {
    syslog_DARWIN_EXTSN(3, "piston_alloc_desciptor returned failed\n", v26);
    return 0LL;
  }
  v3 = v2;
  if ( (unsigned int)piston_set_server(v2, buffer) )
  {
    syslog_DARWIN_EXTSN(3, "piston_set_hostname error: %d\n");
    return 0LL;
  }
  v4 = 0LL;
  v28 = 0;
  v32 = 0;
  v5 = 0;
  v29 = 0;
  v6 = "smb";
  __s1 = "smb";
  do
  {
    v7 = (const char *)*((_QWORD *)v40 + 3 * v4 + 1);
    v8 = getaddrinfo(buffer, v7, &v39, &v38);
    v37 = v8;
    if ( v8 )
    {
      v22 = gai_strerror(v8);
      syslog_DARWIN_EXTSN(3, "getaddrinfo: %s port %s: %s", buffer, v7, v22);
      goto LABEL_62;
    }
    v9 = v38;
    if ( v38 && v5 <= 63 )
    {
      v10 = (int *)&v40[1] + 6 * v4;
      do
      {
        v11 = socket(v9->ai_family, v9->ai_socktype, v9->ai_protocol);
        if ( v11 < 0 )
        {
          syslog_DARWIN_EXTSN(3, "socket: %m", v26);
        }
        else
        {
          v12 = v11;
          v43[v5] = v11;
          v42[v5++] = v4;
          v13 = fcntl(v11, 3, 0LL);
          if ( v13 < 0 )
          {
            syslog_DARWIN_EXTSN(3, "fcntl: F_GETFL: %m", v27);
          }
          else if ( fcntl(v12, 4, v13 | 4u) < 0 )
          {
            syslog_DARWIN_EXTSN(3, "fcntl: F_SETFL: %m", v26);
          }
          else if ( connect(v12, v9->ai_addr, v9->ai_addrlen) < 0 )
          {
            if ( *__error() == 36 )
            {
              if ( __darwin_check_fd_set_overflow(v12, &v35, 0) )
                v35.fds_bits[(unsigned int)v12 >> 5] |= 1 << v12;
              *v10 = v12;
              v14 = v29;
              if ( v12 > v29 )
                v14 = v12;
              v29 = v14;
            }
            else
            {
              syslog_DARWIN_EXTSN(3, "connect: F_SETFL: %m", v26);
            }
          }
          else
          {
            *v10 = v12;
            ++v32;
            if ( !strcmp(__s1, "smb") )
            {
              *(_DWORD *)(v3 + 8) = v12;
              if ( (unsigned int)piston_smb2_negotiate_easy() )
              {
                syslog_DARWIN_EXTSN(6, "piston_smb2_negotiate_easy error: %d\n");
              }
              else
              {
                v28 = 1;
                __s1 = (char *)v6;
              }
            }
          }
        }
        v9 = v9->ai_next;
      }
      while ( v9 && v5 <= 63 );
      v9 = v38;
    }
    ++v4;
    freeaddrinfo(v9);
    v6 = (const char *)*((_QWORD *)v40 + 3 * v4);
  }
  while ( v6 );
  if ( v29 )
  {
    v33.tv_sec = 0LL;
    v33.tv_usec = 500000;
    if ( (_DWORD)v4 )
    {
      v15 = 0;
      v30 = v29 + 1;
      while ( 1 )
      {
        v34 = v35;
        if ( select(v30, 0LL, &v34, 0LL, &v33) )
        {
          if ( v5 >= 1 )
            break;
        }
LABEL_59:
        if ( ++v15 == (_DWORD)v4 )
          goto LABEL_62;
      }
      v16 = 0LL;
      while ( 1 )
      {
        v17 = v43[v16];
        if ( __darwin_check_fd_set_overflow(v17, &v34, 0) )
        {
          v18 = (unsigned __int64)v17 >> 5;
          if ( (v34.fds_bits[v18] & (1 << v17)) != 0 )
          {
            v36 = 4;
            if ( getsockopt(v17, 0xFFFF, 4103, &v37, &v36) )
            {
              syslog_DARWIN_EXTSN(3, "getsockopt: SO_ERROR: %m");
            }
            else if ( v37 )
            {
              if ( v37 != 36 && __darwin_check_fd_set_overflow(v17, &v35, 0) )
                v35.fds_bits[v18] &= ~(1 << v17);
            }
            else
            {
              v19 = v42[v16];
              if ( v19 <= v15 )
              {
                ++v32;
                v20 = (const char *)*((_QWORD *)v40 + 3 * v19);
                if ( strcmp(v20, "smb") )
                {
                  syslog_DARWIN_EXTSN(6, "%s:  protocol (%s)", "NetFSMountURLProbe", v20);
LABEL_68:
                  __s1 = (char *)v20;
                  break;
                }
                if ( !v28 )
                {
                  syslog_DARWIN_EXTSN(6, "%s: smb protocol selected index(%d)", "NetFSMountURLProbe", v16);
                  *(_DWORD *)(v3 + 8) = v17;
                  v21 = piston_smb2_negotiate_easy();
                  if ( !v21 )
                    goto LABEL_68;
                  syslog_DARWIN_EXTSN(3, "piston_smb2_negotiate_easy error: %d\n", v21);
                  __s1 = (char *)v20;
                }
              }
            }
          }
        }
        if ( v5 == ++v16 )
          goto LABEL_59;
      }
    }
  }
LABEL_62:
  if ( v5 >= 1 )
  {
    v23 = (unsigned int)v5;
    v24 = v43;
    do
    {
      v25 = *v24++;
      close(v25);
      --v23;
    }
    while ( v23 );
  }
  if ( !v32 )
    return 0LL;
  return CFStringCreateWithCStringNoCopy(0LL, __s1, 0x8000100u, kCFAllocatorNull);
}