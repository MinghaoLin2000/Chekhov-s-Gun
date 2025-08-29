_uarpPlatformFindPreparedAsset
__int64 __fastcall uarpPlatformFindPreparedAsset(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned __int8 *a5)
{
  __int64 result; // x0

  if ( (a4 & 2) == 0 )
    return 0LL;
  for ( result = *(_QWORD *)(a1 + 568); result; result = *(_QWORD *)(result + 712) )
  {
    if ( !*(_DWORD *)(result + 304)
      && *(_QWORD *)(result + 696) == a2
      && !*(_WORD *)(result + 44)
      && *(unsigned __int8 *)(result + 48) == *a5
      && *(unsigned __int8 *)(result + 49) == a5[1]
      && *(unsigned __int8 *)(result + 50) == a5[2]
      && *(unsigned __int8 *)(result + 51) == a5[3] )
    {
      break;
    }
  }
  return result;
}