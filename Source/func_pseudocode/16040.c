_uarpPlatformAssetFindByAssetContext
__int64 __fastcall uarpPlatformAssetFindByAssetContext(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v4; // x8

  result = 0LL;
  if ( a1 && a2 )
  {
    v4 = *(_QWORD *)(a1 + 568);
    if ( v4 )
    {
      result = v4;
      while ( *(_DWORD *)(result + 304) != 1 || *(_QWORD *)(result + 704) != a2 )
      {
        result = *(_QWORD *)(result + 712);
        if ( !result )
        {
          while ( v4 )
          {
            if ( !*(_DWORD *)(v4 + 304) && *(_QWORD *)(v4 + 704) == a2 )
              return v4;
            v4 = *(_QWORD *)(v4 + 712);
          }
          return 0LL;
        }
      }
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}