_uarpPlatformAssetRequestData
__int64 __fastcall uarpPlatformAssetRequestData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x8
  __int64 result; // x0
  int v6; // w8
  int v7; // w9
  int v8; // w3
  unsigned int v9; // w8
  unsigned int v10; // w9
  unsigned int v11; // w4

  if ( !a2 )
    return 30LL;
  v3 = *(_QWORD *)(a2 + 696);
  if ( !v3 )
    return 30LL;
  if ( *(_BYTE *)(a3 + 80) == 1 )
    return 16LL;
  if ( *(_BYTE *)(a2 + 73) == 1 || !*(_BYTE *)(v3 + 56) )
    return 31LL;
  v6 = *(_DWORD *)(a3 + 8);
  v7 = *(_DWORD *)(a3 + 84);
  v8 = v7 + v6 + *(_DWORD *)a3;
  v9 = *(_DWORD *)(a3 + 4) - (v7 + v6);
  v10 = *(_DWORD *)(a3 + 24) - v7;
  if ( v9 >= v10 )
    v9 = v10;
  *(_DWORD *)(a3 + 92) = v8;
  *(_DWORD *)(a3 + 96) = v9;
  if ( v9 >= *(_DWORD *)(*(_QWORD *)(a2 + 696) + 4LL) )
    v11 = *(_DWORD *)(*(_QWORD *)(a2 + 696) + 4LL);
  else
    v11 = v9;
  *(_DWORD *)(a3 + 96) = v11;
  result = uarpSendAssetRequestData(a1, *(_QWORD *)(a2 + 696), *(unsigned __int16 *)(a2 + 44));
  if ( !(_DWORD)result )
    *(_BYTE *)(a3 + 80) = 1;
  return result;
}