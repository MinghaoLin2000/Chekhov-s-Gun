_netfs_ParseURL
__int64 __fastcall netfs_ParseURL(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x0
  __int64 (__fastcall *v6)(__int64, __int64); // x2
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v7 = 0LL;
  result = sub_10000894C(a1, &v7);
  if ( !(_DWORD)result )
  {
    v5 = sub_100007BE8(v7);
    if ( v5 )
    {
      v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return v6(a1, a2);
    }
    else
    {
      return 45LL;
    }
  }
  return result;
}