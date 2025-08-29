_uarpAllocPrepareTransmitBuffer2
__int64 __fastcall uarpAllocPrepareTransmitBuffer2(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v10; // x24
  size_t v11; // x1
  __int16 v12; // w0
  __int64 v13; // x8
  __int16 v14; // w25
  unsigned int v15; // w24
  unsigned __int16 v16; // w25
  __int64 v17; // x26
  _QWORD *TransmitBuffer2; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  __int64 v22; // [xsp+0h] [xbp-60h] BYREF
  __int64 v23; // [xsp+8h] [xbp-58h] BYREF

  v10 = sub_100013A74(a1, a2);
  if ( v10 )
    goto LABEL_2;
  v14 = *(_WORD *)(a2 + 96);
  v23 = 0LL;
  v15 = 16 * (v14 & 0x7FFF);
  if ( (unsigned int)UARPLayer2RequestBuffer(a1, &v23, v15) )
    return 0LL;
  v16 = 2 * v14;
  v17 = *(unsigned __int16 *)(a2 + 96);
  if ( (unsigned int)v17 < v16 )
  {
    do
    {
      TransmitBuffer2 = uarpAllocateTransmitBuffer2(a1, a2, 0);
      *(_QWORD *)(v23 + 8 * v17++) = TransmitBuffer2;
    }
    while ( v16 != v17 );
  }
  *(_WORD *)(a2 + 96) = v16;
  UARPLayer2ReturnBuffer(a1, *(void **)(a2 + 104));
  *(_QWORD *)(a2 + 104) = v23;
  v22 = 0LL;
  if ( (unsigned int)UARPLayer2RequestBuffer(a1, &v22, v15) )
    return 0LL;
  if ( *(_WORD *)(a2 + 112) )
  {
    v20 = 0LL;
    v21 = 8LL * *(unsigned __int16 *)(a2 + 112);
    do
    {
      *(_QWORD *)(v22 + v20) = *(_QWORD *)(*(_QWORD *)(a2 + 120) + v20);
      v20 += 8LL;
    }
    while ( v21 != v20 );
  }
  *(_WORD *)(a2 + 112) = v16;
  UARPLayer2ReturnBuffer(a1, *(void **)(a2 + 120));
  *(_QWORD *)(a2 + 120) = v22;
  v10 = sub_100013A74(a1, a2);
  if ( v10 )
  {
LABEL_2:
    v11 = *(unsigned int *)(v10 + 24);
    if ( (unsigned int)v11 >= a4 )
    {
      *(_WORD *)(v10 + 28) = a4;
      *(_BYTE *)(v10 + 31) = a5;
      bzero(*(void **)(v10 + 16), v11);
      **(_WORD **)(v10 + 16) = uarpHtons(a3);
      v12 = uarpHtons((unsigned __int16)(a4 - 6));
      v13 = *(_QWORD *)(v10 + 16);
      *(_WORD *)(v13 + 2) = v12;
      *(_WORD *)(v13 + 4) = 0;
      return v10;
    }
    return 0LL;
  }
  return v10;
}