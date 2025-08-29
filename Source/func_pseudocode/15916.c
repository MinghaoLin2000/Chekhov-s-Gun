_uarpPlatformRemoteEndpointAddEntry
__int64 __fastcall uarpPlatformRemoteEndpointAddEntry(__int64 a1, __int64 a2)
{
  int v4; // w8
  _QWORD *v5; // x9
  __int64 v6; // x10
  int v7; // w21
  __int64 result; // x0
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // [xsp+8h] [xbp-28h] BYREF

  v4 = *(_DWORD *)(a1 + 556);
  if ( v4 )
  {
    v5 = *(_QWORD **)(a1 + 560);
    v6 = *(unsigned int *)(a1 + 556);
    while ( *v5 )
    {
      ++v5;
      if ( !--v6 )
        goto LABEL_5;
    }
    result = 0LL;
    *v5 = a2;
  }
  else
  {
LABEL_5:
    v7 = v4 + 1;
    v11 = 0LL;
    result = UARPLayer2RequestBuffer(a1, &v11, 8 * (v4 + 1));
    if ( !(_DWORD)result )
    {
      v9 = *(unsigned int *)(a1 + 556);
      if ( (_DWORD)v9 )
      {
        v10 = 0LL;
        do
        {
          *(_QWORD *)(v11 + v10) = *(_QWORD *)(*(_QWORD *)(a1 + 560) + v10);
          v10 += 8LL;
        }
        while ( 8 * v9 != v10 );
      }
      else
      {
        v9 = 0LL;
      }
      *(_QWORD *)(v11 + 8 * v9) = a2;
      UARPLayer2ReturnBuffer(a1, *(void **)(a1 + 560));
      result = 0LL;
      *(_DWORD *)(a1 + 556) = v7;
      *(_QWORD *)(a1 + 560) = v11;
    }
  }
  return result;
}