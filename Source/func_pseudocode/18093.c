_piston_sndmsgd
__int64 __fastcall piston_sndmsgd(int a1, __int64 *a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x10
  __int64 v5; // x11
  __int64 v6; // x19
  iovec v8; // [xsp+8h] [xbp-48h] BYREF
  __int64 v9; // [xsp+18h] [xbp-38h]
  __int64 v10; // [xsp+20h] [xbp-30h]
  __int64 v11; // [xsp+28h] [xbp-28h]
  __int64 v12; // [xsp+30h] [xbp-20h]

  v3 = *a2;
  v2 = a2[1];
  v5 = a2[2];
  v4 = a2[3];
  *((_BYTE *)a2 + 33) = (unsigned int)(v4 + v2) >> 16;
  *((_BYTE *)a2 + 34) = (unsigned __int16)(v4 + v2) >> 8;
  *((_BYTE *)a2 + 35) = v4 + v2;
  *((_BYTE *)a2 + 32) = 0;
  v8.iov_base = a2 + 4;
  v8.iov_len = 4LL;
  v9 = v3;
  v10 = v2;
  v11 = v5;
  v12 = v4;
  v6 = piston_write_v(a1 + 8, &v8, 3);
  if ( (_DWORD)v6 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    sub_10000F640(v6);
  return v6;
}