_uarpTransmitQueueService
__int64 __fastcall uarpTransmitQueueService(__int64 a1, __int64 a2)
{
  int v2; // w10
  __int64 v4; // x20
  __int64 v5; // x8
  __int64 v6; // x21
  bool v7; // zf
  int v8; // w0
  __int64 v9; // x22
  unsigned int v10; // w8
  __int64 active; // x0

  v2 = *(unsigned __int16 *)(a2 + 112);
  if ( !*(_WORD *)(a2 + 112) )
    return 0LL;
  v4 = a1;
  while ( 1 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8 * v5);
        if ( v6 )
          break;
        if ( ++v5 == v2 )
          return 0LL;
      }
      if ( *(_BYTE *)(v6 + 32) != 1 )
        break;
      ++v5;
      if ( *(_QWORD *)(v4 + 296) )
        v7 = 1;
      else
        v7 = v5 == v2;
      if ( v7 )
        return 0LL;
    }
    if ( *(_BYTE *)(v6 + 33) == 1 )
      goto LABEL_21;
    v8 = uarpNtohs(**(unsigned __int16 **)(v6 + 16));
    if ( v8 != 0xFFFF )
      break;
    a1 = UARPLayer2VendorSpecificCheckValidToSend(v4, a2);
    if ( (_DWORD)a1 )
      goto LABEL_23;
LABEL_21:
    a1 = uarpTransmitQueuePendingEntryComplete(a1, a2, v6);
    v9 = 0LL;
    v2 = *(unsigned __int16 *)(a2 + 112);
    if ( !*(_WORD *)(a2 + 112) )
      return v9;
  }
  if ( v8 == 3
    && (unsigned int)uarpNtohl(*(unsigned int *)(*(_QWORD *)(v6 + 16) + 6LL)) == 9
    && *(unsigned __int16 *)(a2 + 48) <= 2u )
  {
    a1 = UARPLayer2FriendlyNameResponse(v4, a2);
    goto LABEL_21;
  }
LABEL_23:
  if ( *(_BYTE *)(a2 + 50) == 1 )
    return 0LL;
  v10 = *(unsigned __int8 *)(v6 + 30);
  if ( *(unsigned __int16 *)(a2 + 18) >= v10 )
  {
    *(_BYTE *)(v6 + 30) = v10 + 1;
    *(_BYTE *)(v6 + 32) = 1;
    if ( *(_BYTE *)(v6 + 31) == 1 )
      UARPLayer2WatchdogSet(v4, a2);
    *(_WORD *)(*(_QWORD *)(v6 + 16) + 4LL) = uarpHtons(*(unsigned __int16 *)(a2 + 58));
    ++*(_WORD *)(a2 + 58);
    v9 = UARPLayer2SendMessage(
           v4,
           a2,
           *(_QWORD *)v6,
           *(unsigned __int16 *)(a2 + 30) + (unsigned int)*(unsigned __int16 *)(v6 + 28));
    UARPLayer2LogPacket(v4, a2);
    if ( (_DWORD)v9 )
    {
      *(_BYTE *)(v6 + 32) = 0;
      uarpPlatformEndpointSendMessageCompleteInternal(v4, a2, *(_QWORD *)(v6 + 16));
    }
  }
  else
  {
    active = uarpNtohs(**(unsigned __int16 **)(v6 + 16));
    switch ( (_DWORD)active )
    {
      case 0xFFFF:
        active = UARPLayer2VendorSpecificExceededRetries(v4, a2);
        break;
      case 3:
        active = uarpNtohl(*(unsigned int *)(*(_QWORD *)(v6 + 16) + 6LL));
        switch ( (int)active )
        {
          case 1:
            active = UARPLayer2ManufacturerNameResponse(v4, a2);
            break;
          case 2:
            active = UARPLayer2ModelNameResponse(v4, a2);
            break;
          case 3:
            active = UARPLayer2SerialNumberResponse(v4, a2);
            break;
          case 4:
            active = UARPLayer2HardwareVersionResponse(v4, a2);
            break;
          case 5:
            active = UARPLayer2ActiveFirmwareVersionResponse(v4, a2);
            break;
          case 6:
            active = UARPLayer2StagedFirmwareVersionResponse(v4, a2);
            break;
          case 7:
            active = UARPLayer2StatisticsResponse(v4, a2);
            break;
          case 8:
            active = UARPLayer2LastErrorResponse(v4, a2);
            break;
          case 9:
            active = UARPLayer2FriendlyNameResponse(v4, a2);
            break;
          default:
            goto LABEL_34;
        }
        break;
      case 1:
        *(_WORD *)(a2 + 48) = 0;
        active = UARPLayer2ProtocolVersion(v4, a2);
        break;
    }
LABEL_34:
    uarpTransmitQueuePendingEntryComplete(active, a2, v6);
    uarpTransmitQueueService(v4, a2);
    return 0LL;
  }
  return v9;
}