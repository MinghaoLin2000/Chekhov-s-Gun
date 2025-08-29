_uarpPlatformPayloadCleanup
void __fastcall uarpPlatformPayloadCleanup(__int64 a1, __int64 a2)
{
  void *v4; // x1
  void *v5; // x1
  void *v6; // x1
  void *v7; // x1
  void *v8; // x1
  void *v9; // x1

  v4 = *(void **)(a2 + 80);
  if ( v4 )
  {
    UARPLayer2ReturnBuffer(a1, v4);
    *(_QWORD *)(a2 + 80) = 0LL;
    *(_DWORD *)(a2 + 88) = 0;
  }
  v5 = *(void **)(a2 + 96);
  if ( v5 )
  {
    UARPLayer2ReturnBuffer(a1, v5);
    *(_QWORD *)(a2 + 96) = 0LL;
    *(_DWORD *)(a2 + 104) = 0;
  }
  v6 = *(void **)(a2 + 112);
  if ( v6 )
  {
    UARPLayer2ReturnBuffer(a1, v6);
    *(_QWORD *)(a2 + 112) = 0LL;
    *(_DWORD *)(a2 + 120) = 0;
  }
  v7 = *(void **)(a2 + 64);
  if ( v7 )
  {
    UARPLayer2ReturnBuffer(a1, v7);
    *(_QWORD *)(a2 + 64) = 0LL;
    *(_DWORD *)(a2 + 72) = 0;
  }
  v8 = *(void **)(a2 + 152);
  if ( v8 )
  {
    UARPLayer2ReturnBuffer(a1, v8);
    *(_QWORD *)(a2 + 152) = 0LL;
    *(_DWORD *)(a2 + 160) = 0;
  }
  v9 = *(void **)(a2 + 136);
  if ( v9 )
  {
    UARPLayer2ReturnBuffer(a1, v9);
    *(_QWORD *)(a2 + 136) = 0LL;
    *(_DWORD *)(a2 + 144) = 0;
  }
}