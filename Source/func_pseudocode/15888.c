_uarpPlatformAssetCleanup
void __fastcall uarpPlatformAssetCleanup(__int64 a1, __int64 a2)
{
  void *v4; // x1
  void *v5; // x1
  void *v6; // x1
  _QWORD *v7; // x1
  _QWORD *v8; // x21
  _QWORD *v9; // x21
  _QWORD *v10; // x1
  _QWORD *v11; // x22
  _QWORD *v12; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = *(void **)(a2 + 640);
  if ( v4 && !*(_BYTE *)(a2 + 652) )
    UARPLayer2ReturnBuffer(a1, v4);
  *(_QWORD *)(a2 + 640) = 0LL;
  *(_DWORD *)(a2 + 648) = 0;
  v5 = *(void **)(a2 + 656);
  if ( v5 && !*(_BYTE *)(a2 + 668) )
    UARPLayer2ReturnBuffer(a1, v5);
  *(_QWORD *)(a2 + 656) = 0LL;
  *(_DWORD *)(a2 + 664) = 0;
  v6 = *(void **)(a2 + 672);
  if ( v6 )
  {
    UARPLayer2ReturnBuffer(a1, v6);
    *(_QWORD *)(a2 + 672) = 0LL;
  }
  *(_DWORD *)(a2 + 680) = 0;
  v7 = *(_QWORD **)(a2 + 720);
  if ( v7 )
  {
    do
    {
      v8 = (_QWORD *)v7[2];
      v7[2] = 0LL;
      UARPLayer2ReturnBuffer(a1, v7);
      v7 = v8;
    }
    while ( v8 );
  }
  *(_QWORD *)(a2 + 720) = 0LL;
  v9 = *(_QWORD **)(a2 + 632);
  if ( v9 )
  {
    do
    {
      v10 = (_QWORD *)v9[21];
      v11 = (_QWORD *)v9[22];
      if ( v10 )
      {
        do
        {
          v12 = (_QWORD *)v10[2];
          v10[2] = 0LL;
          UARPLayer2ReturnBuffer(a1, v10);
          v10 = v12;
        }
        while ( v12 );
      }
      v9[21] = 0LL;
      uarpPlatformPayloadCleanup(a1);
      UARPLayer2ReturnBuffer(a1, v9);
      v9 = v11;
    }
    while ( v11 );
  }
  uarpPlatformPayloadCleanup(a1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  UARPLayer2ReturnBuffer(a1, (void *)a2);
}