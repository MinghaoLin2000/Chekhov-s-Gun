_netfs_setXPCPlugInState
__int64 __fastcall netfs_setXPCPlugInState(__int64 a1)
{
  bool v2; // zf
  __int64 (__fastcall *v4)(__int64, __int64); // x2
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  pthread_mutex_lock(&stru_100018F48);
  if ( !a1 || (*(_QWORD *)(a1 + 104) ? (v2 = qword_100018FF0 == 0) : (v2 = 1), v2) )
  {
    pthread_mutex_unlock(&stru_100018F48);
    return 22LL;
  }
  else
  {
    pthread_mutex_unlock(&stru_100018F48);
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(**(_QWORD **)(a1 + 104) + 32LL);
    v5 = qword_100018FF0;
    v6 = *(_QWORD *)(a1 + 136);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v4(v5, v6);
  }
}