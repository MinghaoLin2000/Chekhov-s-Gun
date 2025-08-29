_uarpTransmitQueueProcessRecv
__int64 __fastcall uarpTransmitQueueProcessRecv(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int16 a4)
{
  __int64 v8; // x27
  unsigned __int8 *v9; // x23
  unsigned __int8 *v10; // x24
  int v11; // w28
  __int64 v12; // x25
  int v13; // w26
  int v14; // w0
  __int64 v18; // x8
  int v19; // w9
  int v20; // w8
  unsigned __int8 *v21; // x1
  unsigned __int8 *v22; // x0
  __int64 v23; // x0
  int v25; // [xsp+Ch] [xbp-54h]

  if ( *(_WORD *)(a2 + 112) )
  {
    v8 = 0LL;
    v9 = (unsigned __int8 *)(a3 + 3);
    v10 = (unsigned __int8 *)(a3 + 5);
    v25 = a4 & 0xFFF8;
    v11 = a4 & 0xFFF0;
    while ( 1 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8 * v8);
      if ( !v12 )
        goto LABEL_38;
      v13 = uarpNtohs(*a3);
      v14 = uarpNtohs(**(unsigned __int16 **)(v12 + 16));
      if ( v13 == 4 && v14 == 3 )
      {
        if ( !v11 )
          goto LABEL_38;
        v19 = *((_DWORD *)a3 + 2);
        v20 = *(_DWORD *)(*(_QWORD *)(v12 + 16) + 6LL);
        goto LABEL_37;
      }
      if ( v13 == 7 && v14 == 6 )
      {
        if ( a4 < 0x12u )
          goto LABEL_38;
        v18 = *(_QWORD *)(v12 + 16);
        if ( a3[4] != *(unsigned __int16 *)(v18 + 6) || *(_DWORD *)v10 != *(_DWORD *)(v18 + 8) )
          goto LABEL_38;
        v19 = a3[7];
        goto LABEL_26;
      }
      if ( v13 == 11 && v14 == 10 )
      {
LABEL_63:
        v23 = UARPLayer2WatchdogCancel(a1, a2);
        uarpTransmitQueuePendingEntryComplete(v23, a2, v12);
        return 0LL;
      }
      if ( v13 == 13 && v14 == 5 )
      {
        if ( a4 < 0x24u )
          goto LABEL_38;
        v18 = *(_QWORD *)(v12 + 16);
        v19 = a3[6];
LABEL_26:
        v20 = *(unsigned __int16 *)(v18 + 12);
        goto LABEL_37;
      }
      if ( v13 == 14 && v14 == 8 )
        goto LABEL_63;
      if ( v13 == 15 && v14 == 9 )
      {
        if ( a4 < 0xAu )
          goto LABEL_38;
        goto LABEL_36;
      }
      if ( v13 == 16 && v14 == 12 )
      {
        if ( !v25 )
          goto LABEL_38;
LABEL_36:
        v19 = *(unsigned __int16 *)v9;
        v20 = *(unsigned __int16 *)(*(_QWORD *)(v12 + 16) + 6LL);
LABEL_37:
        if ( v19 == v20 )
          goto LABEL_63;
        goto LABEL_38;
      }
      if ( v13 == 18 && v14 == 17 )
        break;
      if ( v13 == 20 && v14 == 19 )
      {
        if ( a4 < 0xCu )
          goto LABEL_38;
        v21 = (unsigned __int8 *)(*(_QWORD *)(v12 + 16) + 6LL);
        v22 = v9;
LABEL_48:
        if ( uarpAssetTagCompare(v22, v21) )
          goto LABEL_63;
        goto LABEL_38;
      }
      if ( v13 == 22 && v14 == 21
        || v13 == 24 && v14 == 23
        || v13 == 26 && v14 == 25
        || v13 == 28 && v14 == 27
        || v13 == 30 && v14 == 29
        || v13 == 0xFFFF && v14 == 0xFFFF && (unsigned int)UARPLayer2VendorSpecificCheckExpectedResponse(a1, a2) == 1 )
      {
        goto LABEL_63;
      }
LABEL_38:
      if ( ++v8 >= (unsigned __int64)*(unsigned __int16 *)(a2 + 112) )
        return 0LL;
    }
    if ( a4 < 0xEu )
      goto LABEL_38;
    v21 = (unsigned __int8 *)(*(_QWORD *)(v12 + 16) + 6LL);
    v22 = v10;
    goto LABEL_48;
  }
  return 0LL;
}