_uarpAssetQueryPayloadMetaData
__int64 __fastcall uarpAssetQueryPayloadMetaData(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // x0
  __int64 v5; // x8

  result = 0LL;
  if ( a1 && a2 )
  {
    if ( *(_BYTE *)(a2 + 460) && (v5 = *(_QWORD *)(a2 + 632)) != 0 )
    {
      while ( *(_DWORD *)(v5 + 124) != a3 )
      {
        v5 = *(_QWORD *)(v5 + 176);
        if ( !v5 )
          return 0LL;
      }
      return *(_QWORD *)(v5 + 168);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}