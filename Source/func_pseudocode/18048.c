_netfs_EnumerateShares
__int64 __fastcall netfs_EnumerateShares(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // x3
  __int64 v8; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = sub_100007BE8(*a1);
  if ( !v6 )
    return 45LL;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 72LL);
  v8 = a1[1];
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v7(v8, a2, a3);
}