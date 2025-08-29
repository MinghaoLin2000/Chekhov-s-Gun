_netfs_CreateSessionRef
__int64 __fastcall netfs_CreateSessionRef(__int64 a1, _QWORD *a2)
{
  __int64 result; // x0
  __int64 v4; // x0
  __int64 v5; // [xsp+8h] [xbp-18h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = 0LL;
  result = sub_10000894C(a1, &v5);
  if ( !(_DWORD)result )
  {
    v4 = v5;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return netfs_CreateSessionRefForEntry(v4, a2);
  }
  return result;
}