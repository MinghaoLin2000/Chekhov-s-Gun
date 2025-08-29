_GetURLFromURLRemountInfo
__int64 __fastcall GetURLFromURLRemountInfo(__int64 a1, size_t a2, char *a3, __int64 a4)
{
  __int64 v8; // x23
  __int64 v9; // x0
  __int64 (__fastcall *v10)(__int64, size_t, char *, __int64); // x4
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = *(unsigned int *)(a1 + 2);
  if ( !sub_10000AE88(v8, &off_100018D98) && !sub_10000AE88(v8, &off_100018DC0) )
    return 45LL;
  v9 = sub_1000079B8();
  if ( v9 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, size_t, char *, __int64))(*(_QWORD *)v9 + 48LL);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v10(a1, a2, a3, a4);
  }
  else if ( *(unsigned __int8 *)(a1 + 8) > 1u || *(_BYTE *)(a1 + 10) )
  {
    return 22LL;
  }
  else if ( strlcpy(a3, (const char *)(a1 + 12), a2) >= a2 )
  {
    return 63LL;
  }
  else
  {
    return 0LL;
  }
}