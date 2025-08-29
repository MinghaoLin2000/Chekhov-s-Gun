_netfs_Cancel
__int64 __fastcall netfs_Cancel(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 (__fastcall *v3)(__int64); // x1
  __int64 v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = sub_100007BE8(*a1);
  if ( !v2 )
    return 45LL;
  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 88LL);
  v4 = a1[1];
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v3(v4);
}