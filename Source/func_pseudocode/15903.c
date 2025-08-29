_uarpPlatformAssetRescinded
__int64 __fastcall uarpPlatformAssetRescinded(__int64 result, __int64 a2, int a3)
{
  __int64 v4; // x2
  __int64 v5; // x10

  v4 = *(_QWORD *)(result + 568);
  if ( a3 == 0xFFFF )
  {
    if ( !v4 )
      return uarpPlatformAssetRescind(result, a2, v4);
    v5 = *(_QWORD *)(result + 568);
    do
    {
      if ( !*(_DWORD *)(v5 + 304) && *(_QWORD *)(v5 + 696) == a2 )
        *(_BYTE *)(v5 + 72) = 1;
      v5 = *(_QWORD *)(v5 + 712);
    }
    while ( v5 );
  }
  if ( v4 )
  {
    while ( *(_DWORD *)(v4 + 304) || *(_QWORD *)(v4 + 696) != a2 || *(unsigned __int16 *)(v4 + 44) != a3 )
    {
      v4 = *(_QWORD *)(v4 + 712);
      if ( !v4 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    if ( a3 != 0xFFFF )
      return result;
    v4 = 0LL;
  }
  return uarpPlatformAssetRescind(result, a2, v4);
}