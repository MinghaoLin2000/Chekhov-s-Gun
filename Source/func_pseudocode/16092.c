_uarpAssetQueryPayloadInfo
__int64 __fastcall uarpAssetQueryPayloadInfo(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // x0
  __int64 v6; // x8
  int v7; // w9
  _DWORD *v8; // x8
  int v9; // w10

  result = 30LL;
  if ( a1 && a2 )
  {
    if ( a4 )
    {
      if ( *(_BYTE *)(a2 + 460) )
      {
        v6 = *(_QWORD *)(a2 + 632);
        if ( !v6 )
          return 54LL;
        while ( *(_DWORD *)(v6 + 124) != a3 )
        {
          v6 = *(_QWORD *)(v6 + 176);
          if ( !v6 )
            return 54LL;
        }
        *(_DWORD *)a4 = *(_DWORD *)(v6 + 4);
        *(_OWORD *)(a4 + 4) = *(_OWORD *)(v6 + 8);
        v9 = *(_DWORD *)(v6 + 36);
        *(_DWORD *)(a4 + 20) = *(_DWORD *)(v6 + 28);
        *(_DWORD *)(a4 + 24) = v9;
        v8 = (_DWORD *)(v6 + 128);
        goto LABEL_14;
      }
      if ( *(_DWORD *)(a2 + 452) == a3 )
      {
        *(_DWORD *)a4 = *(_DWORD *)(a2 + 468);
        *(_OWORD *)(a4 + 4) = *(_OWORD *)(a2 + 472);
        v7 = *(_DWORD *)(a2 + 500);
        *(_DWORD *)(a4 + 20) = *(_DWORD *)(a2 + 492);
        *(_DWORD *)(a4 + 24) = v7;
        v8 = (_DWORD *)(a2 + 592);
LABEL_14:
        result = 0LL;
        *(_DWORD *)(a4 + 28) = *v8;
        return result;
      }
      return 44LL;
    }
    else
    {
      return 26LL;
    }
  }
  return result;
}