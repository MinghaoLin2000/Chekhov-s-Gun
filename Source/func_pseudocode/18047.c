_netfs_OpenSession
__int64 __fastcall netfs_OpenSession(CFURLRef anURL, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // x0
  __int64 v9; // x0
  __int64 (__fastcall *v10)(CFURLRef, __int64, __int64, __int64); // x4
  __int64 v11; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  result = sub_100008A3C(*a2, anURL);
  if ( !(_DWORD)result )
  {
    v9 = sub_100007BE8(*a2);
    if ( v9 )
    {
      v10 = *(__int64 (__fastcall **)(CFURLRef, __int64, __int64, __int64))(*(_QWORD *)v9 + 64LL);
      v11 = a2[1];
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return v10(anURL, v11, a3, a4);
    }
    else
    {
      return 45LL;
    }
  }
  return result;
}