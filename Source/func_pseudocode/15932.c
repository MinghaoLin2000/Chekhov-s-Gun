_uarpPlatformEndpointRecvMessage
__int64 __fastcall uarpPlatformEndpointRecvMessage(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  __int64 v4; // x23
  unsigned __int16 v9; // w0
  bool v10; // cf
  __int64 v11; // x0
  unsigned int v12; // w8
  __int64 v13; // x24
  __int64 v14; // x23
  unsigned int v15; // w0
  unsigned int v16; // w8
  __int16 v17; // w2
  int v18; // w0
  __int64 v19; // x0
  __int64 v20; // x23
  __int64 v21; // x25
  int updated; // w0
  unsigned __int16 v23; // w24
  __int16 v24; // w26
  __int64 v25; // x23
  int v26; // w24
  unsigned int v27; // w0
  __int64 v28; // x24
  __int64 v29; // x25
  __int64 v30; // x23
  __int64 v31; // x26
  __int64 v32; // x0
  __int64 v33; // x27
  __int64 v34; // x28
  __int64 v35; // x0
  __int64 PreparedAsset; // x23
  __int16 v37; // w8
  unsigned int v38; // w0
  unsigned __int16 v39; // w26
  int v40; // w24
  int v41; // w25
  __int64 v42; // x0
  __int64 v43; // x27
  unsigned __int16 v44; // w0
  __int16 v45; // w24
  int v46; // w0
  __int64 v47; // x0
  __int64 v48; // x23
  __int64 v49; // x24
  int v50; // w25
  int v51; // w26
  size_t v52; // x0
  unsigned int v53; // w0
  char v54; // w24
  __int64 v55; // x0
  __int64 v56; // x23
  __int64 v57; // x24
  __int64 v58; // x0
  _QWORD *v59; // x25
  __int16 v60; // w27
  __int64 v61; // x0
  __int64 v62; // x26
  __int64 v63; // x28
  unsigned __int64 v64; // x8
  unsigned __int16 v65; // w25
  __int64 v66; // x0
  __int64 v67; // x24
  __int64 v68; // x23
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  int v72; // w24
  __int64 v73; // x0
  char v74; // w0
  int v75; // w24
  __int64 v76; // x0
  __int64 v77; // x24
  int v78; // w0
  __int64 v79; // x0
  __int64 v80; // x24
  int v81; // w25
  __int64 v82; // x0
  __int64 v83; // x23
  __int64 v84; // x26
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x23
  __int64 v89; // x24
  int v90; // w8
  __int64 v91; // x0
  __int64 v92; // x23
  __int64 v93; // x24
  __int64 v94; // x0
  _QWORD *v95; // x24
  __int64 v96; // x0
  __int64 v97; // x23
  int v98; // w0
  __int64 v99; // x24
  __int64 v100; // x25
  __int64 v101; // x0
  __int64 v102; // x0
  int v103; // w0
  __int64 v104; // x0
  __int64 v105; // x23
  __int64 v106; // x24
  __int64 v107; // x0
  __int64 v108; // x23
  __int64 v109; // x24
  int v110; // w0
  __int64 v111; // x0
  __int64 v112; // x23
  int v113; // w0
  __int64 v114; // x24
  __int64 v115; // x25
  __int64 v116; // x0
  unsigned int v117; // w0
  unsigned int v118; // w8
  unsigned int v119; // w8
  __int64 v120; // x24
  __int64 v121; // x23
  int v122; // w8
  __int16 v123; // w26
  void (*v125)(_QWORD, __int64, const char *, ...); // x8
  unsigned __int64 v126; // x9
  __int64 v127; // x0
  __int128 v128; // [xsp+8h] [xbp-68h] BYREF
  int v129; // [xsp+1Ch] [xbp-54h] BYREF

  v4 = 30LL;
  if ( !a1 || !a2 || !a3 )
    return v4;
  UARPLayer2LogPacket(a1, a2);
  if ( (unsigned int)a4 < 6 )
    return 9LL;
  *a3 = uarpNtohs(*a3);
  a3[1] = uarpNtohs(a3[1]);
  v9 = uarpNtohs(a3[2]);
  a3[2] = v9;
  *(_WORD *)(a2 + 60) = v9;
  if ( a3[1] + 6 != (_DWORD)a4 )
    return 9LL;
  v4 = 1LL;
  *(_BYTE *)(a1 + 580) = 1;
  switch ( *a3 )
  {
    case 0u:
      if ( !*(_DWORD *)(a1 + 552) )
      {
        uarpPlatformEndpointSendSyncMsg(a1, a2);
        goto LABEL_183;
      }
      v12 = *(unsigned __int16 *)(a2 + 112);
      if ( !*(_WORD *)(a2 + 112) )
        goto LABEL_165;
      v13 = 0LL;
      while ( 1 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8 * v13);
        if ( v14 )
        {
          if ( !(unsigned int)uarpNtohs(**(unsigned __int16 **)(v14 + 16)) )
          {
            UARPLayer2WatchdogCancel(a1, a2);
            uarpTransmitQueuePendingEntryComplete(a1, a2, v14);
LABEL_165:
            *(_QWORD *)(a2 + 146) = 0LL;
            *(_QWORD *)(a2 + 138) = 0LL;
            *(_QWORD *)(a2 + 162) = 0LL;
            *(_QWORD *)(a2 + 154) = 0LL;
            v122 = *(_DWORD *)(a1 + 552);
            if ( v122 == 1
              || v122 == 2
              && !(unsigned int)uarpPlatformEndpointIsMessageTypePending(a1, a2, 1LL)
              && *(_QWORD *)(a1 + 296) )
            {
              uarpSendVersionDiscoveryRequest(a1, a2, *(unsigned __int16 *)(a2 + 12));
            }
            if ( *(_BYTE *)(a2 + 14) == 1 )
              uarpPlatformReOfferFirmware(a1, a2);
            goto LABEL_183;
          }
          v12 = *(unsigned __int16 *)(a2 + 112);
        }
        if ( ++v13 >= (unsigned __int64)v12 )
          goto LABEL_165;
      }
    case 1u:
      if ( (unsigned int)a4 < 8 )
        goto LABEL_94;
      v15 = uarpNtohs(a3[3]);
      v16 = *(unsigned __int16 *)(a1 + 12);
      if ( v15 < v16 )
        v16 = v15;
      if ( v16 <= 1 )
        v17 = 1;
      else
        v17 = v16;
      *(_WORD *)(a2 + 48) = v17;
      UARPLayer2ProtocolVersion(a1, a2);
      uarpSendVersionDiscoveryResponse(a1, a2, *(_WORD *)(a2 + 48));
      goto LABEL_183;
    case 2u:
      if ( (unsigned int)a4 < 0xA )
        goto LABEL_94;
      v18 = uarpNtohs(a3[3]);
      a3[3] = v18;
      if ( v18 )
      {
        v4 = 2LL;
        goto LABEL_184;
      }
      v117 = uarpNtohs(a3[4]);
      if ( v117 <= 1 )
        v118 = 1;
      else
        v118 = v117;
      if ( v118 >= 4 )
        LOWORD(v118) = 4;
      *(_WORD *)(a2 + 48) = v118;
      v119 = *(unsigned __int16 *)(a2 + 112);
      if ( !*(_WORD *)(a2 + 112) )
        goto LABEL_182;
      v120 = 0LL;
      break;
    case 3u:
      if ( (unsigned int)a4 < 0xA )
        goto LABEL_94;
      v19 = uarpAllocPrepareTransmitBuffer2(a1, a2, 4LL, 16LL, 0LL);
      if ( !v19 )
        goto LABEL_147;
      v20 = v19;
      v21 = *(_QWORD *)(v19 + 16);
      *(_DWORD *)(v21 + 8) = uarpNtohl(*(unsigned int *)(a3 + 3));
      *(_DWORD *)(v21 + 12) = *(_DWORD *)(v20 + 24) - 16;
      updated = uarpCallbackUpdateInformationTLV(a1, a2, (unsigned int *)(v21 + 8));
      v23 = updated;
      if ( updated )
      {
        v24 = 16;
      }
      else
      {
        v123 = *(_WORD *)(v21 + 12);
        *(_WORD *)(v21 + 2) = uarpHtons((unsigned __int16)(v123 + 10));
        *(_DWORD *)(v21 + 8) = uarpHtonl(*(unsigned int *)(v21 + 8));
        *(_DWORD *)(v21 + 12) = uarpHtonl(*(unsigned int *)(v21 + 12));
        v24 = v123 + 16;
      }
      *(_WORD *)(v21 + 6) = uarpHtons(v23);
      *(_WORD *)(v20 + 28) = v24;
      goto LABEL_175;
    case 4u:
      if ( (unsigned int)a4 < 8 )
        goto LABEL_94;
      v25 = uarpNtohs(a3[3]);
      v26 = uarpNtohl(*((unsigned int *)a3 + 2));
      v27 = uarpNtohl(*((unsigned int *)a3 + 3));
      uarpPlatformResponseAccessoryInfo(a1, a2, v25, v26, v27, (unsigned int *)a3 + 4);
      goto LABEL_183;
    case 5u:
      if ( (unsigned int)a4 < 0x24 )
        goto LABEL_94;
      v129 = 0;
      uarpTagStructUnpack32(*(unsigned int *)(a3 + 3), &v129);
      v28 = uarpNtohs(a3[5]);
      v29 = uarpNtohs(a3[6]);
      v128 = 0uLL;
      uarpVersionEndianSwap(a3 + 7, &v128);
      v30 = uarpNtohl(*(unsigned int *)(a3 + 15));
      v31 = uarpNtohs(a3[17]);
      v32 = uarpAllocPrepareTransmitBuffer2(a1, a2, 13LL, 36LL, 0LL);
      if ( !v32 )
        goto LABEL_147;
      v33 = v32;
      v34 = *(_QWORD *)(v32 + 16);
      *(_DWORD *)(v34 + 6) = uarpTagStructPack32(&v129);
      *(_WORD *)(v34 + 10) = uarpHtons(v28);
      *(_WORD *)(v34 + 12) = uarpHtons(v29);
      uarpVersionEndianSwap(&v128, v34 + 14);
      *(_DWORD *)(v34 + 30) = uarpHtonl(v30);
      *(_WORD *)(v34 + 34) = uarpHtons(v31);
      v4 = uarpTransmitBuffer2(a1, a2, v33);
      if ( (_DWORD)v4 )
        goto LABEL_184;
      v35 = uarpPlatformAssetFindByAssetID(a1, a2, 0, v29);
      if ( v35 && !*(_DWORD *)(v35 + 8) )
        goto LABEL_183;
      PreparedAsset = uarpPlatformFindPreparedAsset(a1, a2, v29, v28, (unsigned __int8 *)&v129);
      if ( !PreparedAsset )
      {
        PreparedAsset = uarpPlatformCreateRxAsset(a1, a2);
        if ( !PreparedAsset )
          goto LABEL_147;
      }
      *(_QWORD *)(PreparedAsset + 452) = -1LL;
      *(_DWORD *)(PreparedAsset + 448) = uarpNtohs(a3[17]);
      *(_WORD *)(PreparedAsset + 44) = v29;
      *(_WORD *)(PreparedAsset + 46) = v28;
      *(_DWORD *)(PreparedAsset + 48) = v129;
      *(_OWORD *)(PreparedAsset + 52) = v128;
      *(_DWORD *)(PreparedAsset + 68) = uarpNtohl(*(unsigned int *)(a3 + 15));
      v37 = *(_WORD *)(PreparedAsset + 46);
      if ( (v37 & 1) != 0 )
      {
        UARPLayer2SuperBinaryOffered(a1, a2);
      }
      else
      {
        if ( (v37 & 2) == 0 )
        {
          v4 = 22LL;
          goto LABEL_184;
        }
        UARPLayer2DynamicAssetOffered(a1, a2);
      }
      goto LABEL_183;
    case 6u:
      if ( (unsigned int)a4 < 0xE )
        goto LABEL_94;
      v38 = uarpNtohs(a3[6]);
      if ( *(_DWORD *)a2 >= v38 )
        v39 = v38;
      else
        v39 = *(_DWORD *)a2;
      LOWORD(v128) = v39;
      v40 = uarpNtohl(*((unsigned int *)a3 + 2));
      v41 = uarpNtohs(a3[3]);
      v42 = uarpAllocPrepareTransmitBuffer2(a1, a2, 7LL, (unsigned __int16)(v39 + 18), 0LL);
      if ( !v42 )
        goto LABEL_147;
      v20 = v42;
      v43 = *(_QWORD *)(v42 + 16);
      v44 = uarpPlatformAssetDataRequest(a1, a2, v41, v39, v40, (void *)(v43 + 18));
      *(_WORD *)(v43 + 6) = uarpHtons(v44);
      *(_WORD *)(v43 + 8) = a3[3];
      *(_DWORD *)(v43 + 10) = *((_DWORD *)a3 + 2);
      *(_WORD *)(v43 + 14) = a3[6];
      *(_WORD *)(v43 + 16) = uarpHtons((unsigned __int16)v128);
      v45 = v128 + 18;
      *(_WORD *)(v43 + 2) = uarpHtons((unsigned __int16)(v128 + 12));
      *(_WORD *)(v20 + 28) = v45;
LABEL_175:
      v69 = a1;
      v70 = a2;
      v71 = v20;
LABEL_176:
      v11 = uarpTransmitBuffer2(v69, v70, v71);
      goto LABEL_177;
    case 7u:
      if ( (unsigned int)a4 < 0x12 )
        goto LABEL_94;
      v46 = uarpNtohs(a3[4]);
      v47 = uarpPlatformAssetFindByAssetID(a1, a2, 0, v46);
      if ( !v47 )
        goto LABEL_149;
      v48 = v47;
      v49 = uarpNtohs(a3[3]);
      v50 = uarpNtohl(*(unsigned int *)(a3 + 5));
      v51 = uarpNtohs(a3[7]);
      v52 = uarpNtohs(a3[8]);
      v53 = uarpPlatformAssetResponseData(a1, v48, v49, a3 + 9, v50, v51, v52);
      if ( v53 == 29 )
        v4 = 0LL;
      else
        v4 = v53;
      goto LABEL_184;
    case 8u:
      if ( (unsigned int)a4 < 8 )
        goto LABEL_94;
      v54 = uarpNtohs(a3[3]);
      v55 = uarpAllocPrepareTransmitBuffer2(a1, a2, 14LL, 8LL, 0LL);
      if ( !v55 )
        goto LABEL_147;
      *(_WORD *)(*(_QWORD *)(v55 + 16) + 6LL) = a3[3];
      v4 = uarpTransmitBuffer2(a1, a2, v55);
      if ( (_DWORD)v4 )
        goto LABEL_184;
      if ( (v54 & 1) != 0 && *(_BYTE *)(a2 + 56) == 1 )
      {
        *(_BYTE *)(a2 + 56) = 0;
        v11 = UARPLayer2DataTransferPause(a1, a2);
        goto LABEL_177;
      }
      if ( (v54 & 2) == 0 || *(_BYTE *)(a2 + 56) )
      {
        v4 = 33LL;
        goto LABEL_184;
      }
      *(_BYTE *)(a2 + 56) = 1;
      v11 = uarpPlatformDataTransferResume(a1, a2);
      goto LABEL_177;
    case 9u:
      if ( (unsigned int)a4 < 0xA )
        goto LABEL_94;
      v56 = uarpNtohs(a3[3]);
      v57 = uarpNtohs(a3[4]);
      v58 = uarpPlatformAssetFindByAssetID(a1, a2, 1, v56);
      if ( !v58 )
        goto LABEL_183;
      v59 = (_QWORD *)v58;
      LODWORD(v128) = *(_DWORD *)(v58 + 48);
      v60 = *(_WORD *)(v58 + 46);
      v61 = uarpAllocPrepareTransmitBuffer2(a1, a2, 15LL, 10LL, 0LL);
      if ( !v61 )
        goto LABEL_147;
      v62 = v61;
      v63 = *(_QWORD *)(v61 + 16);
      *(_WORD *)(v63 + 6) = uarpHtons(v56);
      *(_WORD *)(v63 + 8) = uarpHtons(v57);
      v4 = uarpTransmitBuffer2(a1, a2, v62);
      if ( (_DWORD)v4 )
        goto LABEL_184;
      v4 = UARPLayer2AssetProcessingNotification2(a1, a2, v59, v57);
      if ( (_DWORD)v4 )
        goto LABEL_184;
      if ( (v60 & 2) != 0 && *(_QWORD *)(a2 + 80) && (unsigned int)uarp4ccCompare(&v128) )
      {
        if ( *(_WORD *)(a2 + 28) == 1 )
        {
          v64 = 0LL;
        }
        else
        {
          v126 = 0LL;
          do
          {
            *(_DWORD *)(*(_QWORD *)(a2 + 80) + 4 * v126) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 4 * v126 + 4);
            v64 = (unsigned int)*(unsigned __int16 *)(a2 + 28) - 1;
            ++v126;
          }
          while ( v126 < v64 );
        }
        v127 = *(_QWORD *)(a2 + 80);
        *(_DWORD *)(v127 + 4 * v64) = 0;
        if ( (unsigned int)uarpAssetTagIsValid(v127) )
          goto LABEL_189;
      }
      goto LABEL_183;
    case 0xAu:
      LOWORD(v128) = 0;
      v65 = UARPLayer2ApplyStagedAssets(a1, a2);
      v4 = 11LL;
      v66 = uarpAllocPrepareTransmitBuffer2(a1, a2, 11LL, 10LL, 0LL);
      if ( !v66 )
        goto LABEL_184;
      v67 = v66;
      v68 = *(_QWORD *)(v66 + 16);
      *(_WORD *)(v68 + 6) = uarpHtons(v65);
      *(_WORD *)(v68 + 8) = uarpHtons((unsigned __int16)v128);
      v69 = a1;
      v70 = a2;
      v71 = v67;
      goto LABEL_176;
    case 0xBu:
      if ( (unsigned int)a4 < 0xA )
        goto LABEL_131;
      uarpNtohs(a3[3]);
      uarpNtohs(a3[4]);
      v11 = UARPLayer2ApplyStagedAssetsResponse(a1, a2);
      goto LABEL_177;
    case 0xCu:
      if ( (unsigned int)a4 < 8 )
        goto LABEL_94;
      v72 = uarpNtohs(a3[3]);
      v73 = uarpAllocPrepareTransmitBuffer2(a1, a2, 16LL, 8LL, 0LL);
      if ( !v73 )
        goto LABEL_147;
      *(_WORD *)(*(_QWORD *)(v73 + 16) + 6LL) = a3[3];
      v4 = uarpTransmitBuffer2(a1, a2, v73);
      if ( !(_DWORD)v4 )
        uarpPlatformAssetRescinded(a1, a2, v72);
      goto LABEL_184;
    case 0xDu:
      v10 = (unsigned int)a4 >= 0x24;
      goto LABEL_109;
    case 0xEu:
      if ( (unsigned int)a4 < 8 )
        goto LABEL_131;
      v74 = uarpNtohs(a3[3]);
      if ( (v74 & 1) != 0 )
      {
        v11 = UARPLayer2DataTransferPauseAck(a1, a2);
      }
      else
      {
        if ( (v74 & 2) == 0 )
        {
          v4 = 26LL;
          goto LABEL_184;
        }
        v11 = UARPLayer2DataTransferResumeAck(a1, a2);
      }
      goto LABEL_177;
    case 0xFu:
      if ( (unsigned int)a4 < 0xA )
        goto LABEL_131;
      v75 = uarpNtohs(a3[3]);
      uarpNtohs(a3[4]);
      v76 = uarpPlatformAssetFindByAssetID(a1, a2, 0, v75);
      if ( !v76 )
        goto LABEL_183;
      v77 = v76;
      v4 = UARPLayer2AssetProcessingNotificationAck(a1, a2, v76);
      *(_BYTE *)(v77 + 72) = 1;
      goto LABEL_184;
    case 0x10u:
      if ( (unsigned int)a4 < 8 )
        goto LABEL_131;
      v78 = uarpNtohs(a3[3]);
      if ( v78 == 0xFFFF )
      {
        UARPLayer2RescindAllAssetsAck(a1, a2, 0LL);
        goto LABEL_183;
      }
      v79 = uarpPlatformAssetFindByAssetID(a1, a2, 0, v78);
      if ( v79 )
      {
        UARPLayer2AssetRescindedAck(a1, a2, v79);
        goto LABEL_183;
      }
LABEL_149:
      v4 = 17LL;
      goto LABEL_184;
    case 0x11u:
      if ( (unsigned int)a4 < 0xA )
      {
LABEL_94:
        v4 = 9LL;
        goto LABEL_184;
      }
      v107 = uarpAllocPrepareTransmitBuffer2(a1, a2, 18LL, 14LL, 0LL);
      if ( !v107 )
      {
LABEL_147:
        v4 = 11LL;
        goto LABEL_184;
      }
      v108 = v107;
      v109 = *(_QWORD *)(v107 + 16);
      *(_DWORD *)(v109 + 6) = uarpHtonl(0LL);
      *(_DWORD *)(v109 + 10) = *(_DWORD *)(a3 + 3);
      v4 = uarpTransmitBuffer2(a1, a2, v108);
      if ( (_DWORD)v4 )
        goto LABEL_184;
      LODWORD(v128) = *(_DWORD *)(a3 + 3);
      v110 = uarpAssetQueueSolicitation(a1, a2, &v128);
      if ( v110 == 1 )
      {
LABEL_189:
        UARPLayer2AssetSolicitation(a1, a2);
      }
      else if ( v110 == 2 )
      {
        uarpSendDynamicAssetPreProcessingStatus(a1, a2, &v128, 2u, 3328);
      }
      goto LABEL_183;
    case 0x12u:
      v10 = (unsigned int)a4 >= 0xE;
      goto LABEL_109;
    case 0x13u:
      if ( (unsigned int)a4 < 0xC )
        goto LABEL_131;
      v80 = uarpNtohs(a3[5]);
      v81 = *(_DWORD *)(a3 + 3);
      LODWORD(v128) = v81;
      v82 = uarpAllocPrepareTransmitBuffer2(a1, a2, 20LL, 12LL, 0LL);
      if ( !v82 )
        goto LABEL_147;
      v83 = v82;
      v84 = *(_QWORD *)(v82 + 16);
      *(_DWORD *)(v84 + 6) = v81;
      *(_WORD *)(v84 + 10) = uarpHtons(v80);
      v4 = uarpTransmitBuffer2(a1, a2, v83);
      if ( (_DWORD)v4 )
        goto LABEL_184;
      v85 = uarpPlatformAssetFindByTag(a1, a2, 0, (__int64)&v128);
      if ( v85 )
      {
        *(_BYTE *)(v85 + 72) = 1;
        v11 = UARPLayer2AssetPreProcessingNotification(a1, a2, v85);
        goto LABEL_177;
      }
      v4 = 3LL;
      goto LABEL_184;
    case 0x14u:
      if ( (unsigned int)a4 < 0xC )
        goto LABEL_131;
      uarpNtohs(a3[5]);
      LODWORD(v128) = *(_DWORD *)(a3 + 3);
      v86 = uarpPlatformAssetFindByTag(a1, a2, 1, (__int64)&v128);
      if ( v86 )
      {
        *(_BYTE *)(v86 + 72) = 1;
        v4 = UARPLayer2AssetPreProcessingNotificationAck(a1, a2, v86);
        if ( (_DWORD)v4 != 3 )
          goto LABEL_184;
      }
      goto LABEL_183;
    case 0x15u:
      v87 = uarpAllocPrepareTransmitBuffer2(a1, a2, 22LL, 8LL, 0LL);
      if ( !v87 )
        goto LABEL_147;
      v88 = v87;
      v89 = *(_QWORD *)(v87 + 16);
      *(_WORD *)(v89 + 6) = uarpHtons(0LL);
      v4 = uarpTransmitBuffer2(a1, a2, v88);
      if ( (_DWORD)v4 )
        goto LABEL_184;
      v11 = fUarpLayer3DownstreamEndpointDiscovery(a1, a2);
      goto LABEL_177;
    case 0x16u:
      v10 = (unsigned int)a4 >= 8;
      goto LABEL_109;
    case 0x17u:
      if ( (unsigned int)a4 < 8 )
        goto LABEL_131;
      v91 = uarpAllocPrepareTransmitBuffer2(a1, a2, 24LL, 10LL, 0LL);
      if ( !v91 )
        goto LABEL_147;
      v92 = v91;
      v93 = *(_QWORD *)(v91 + 16);
      *(_WORD *)(v93 + 6) = uarpHtons(0LL);
      *(_WORD *)(v93 + 8) = a3[3];
      v4 = uarpTransmitBuffer2(a1, a2, v92);
      if ( (_DWORD)v4 )
        goto LABEL_184;
      v94 = uarpPlatformRemoteEndpointAlloc(a1);
      if ( !v94 )
        goto LABEL_147;
      v95 = (_QWORD *)v94;
      *(_WORD *)(v94 + 136) = uarpNtohs(a3[3]);
      v95[22] = a2;
      v4 = fUarpLayer3DownstreamEndpointReachable(a1, a2);
      if ( (_DWORD)v4 )
        UARPLayer2ReturnBuffer(a1, v95);
      goto LABEL_184;
    case 0x18u:
    case 0x1Cu:
      v10 = (unsigned int)a4 >= 0xA;
LABEL_109:
      v90 = !v10;
      v4 = (unsigned int)(8 * v90);
      goto LABEL_184;
    case 0x19u:
      if ( (unsigned int)a4 < 8 )
        goto LABEL_131;
      v96 = uarpAllocPrepareTransmitBuffer2(a1, a2, 26LL, 10LL, 0LL);
      if ( !v96 )
        goto LABEL_147;
      v97 = v96;
      v98 = uarpNtohs(a3[3]);
      v99 = UARPPlatformDownstreamEndpointByID(a1, a2, v98);
      v100 = *(_QWORD *)(v97 + 16);
      if ( v99 )
        v101 = 0LL;
      else
        v101 = 58LL;
      *(_WORD *)(v100 + 6) = uarpHtons(v101);
      *(_WORD *)(v100 + 8) = a3[3];
      v102 = uarpTransmitBuffer2(a1, a2, v97);
      v4 = v102;
      if ( !v99 || (_DWORD)v102 )
        goto LABEL_184;
      v11 = fUarpLayer3DownstreamEndpointUnreachable(a1, a2);
      goto LABEL_177;
    case 0x1Au:
      if ( (unsigned int)a4 < 0xA )
        goto LABEL_131;
      v103 = uarpHtons(a3[4]);
      if ( !UARPPlatformDownstreamEndpointByID(a1, a2, v103) )
        goto LABEL_194;
      fUarpLayer3DownstreamEndpointReleased(a1, a2);
      goto LABEL_183;
    case 0x1Bu:
      if ( (unsigned int)a4 < 0xE )
        goto LABEL_131;
      v111 = uarpAllocPrepareTransmitBuffer2(a1, a2, 28LL, 10LL, 0LL);
      if ( !v111 )
        goto LABEL_147;
      v112 = v111;
      v113 = uarpNtohs(a3[3]);
      v114 = UARPPlatformDownstreamEndpointByID(a1, a2, v113);
      v115 = *(_QWORD *)(v112 + 16);
      if ( v114 )
        v116 = 0LL;
      else
        v116 = 58LL;
      *(_WORD *)(v115 + 6) = uarpHtons(v116);
      *(_WORD *)(v115 + 8) = a3[3];
      v4 = uarpTransmitBuffer2(a1, a2, v112);
      if ( (_DWORD)v4 )
        goto LABEL_184;
      if ( v114 )
      {
        v11 = fUarpLayer3DownstreamEndpointRecvMessage(a1, a2, v114);
        goto LABEL_177;
      }
      v125 = *(void (**)(_QWORD, __int64, const char *, ...))(a1 + 400);
      if ( v125 )
        v125(
          *(_QWORD *)(a1 + 544),
          8LL,
          "UARP.LAYER2 <%s> Cannot find downstream endpoint",
          "uarpMsgRecvDownstreamEndpointMessage");
      else
        uarpLogError(8, "UARP.LAYER2 <%s> Cannot find downstream endpoint");
LABEL_194:
      v4 = 58LL;
      goto LABEL_184;
    case 0x1Du:
      v104 = uarpAllocPrepareTransmitBuffer2(a1, a2, 30LL, 8LL, 0LL);
      if ( !v104 )
        goto LABEL_147;
      v105 = v104;
      v106 = *(_QWORD *)(v104 + 16);
      *(_WORD *)(v106 + 6) = uarpHtons(0LL);
      v4 = uarpTransmitBuffer2(a1, a2, v105);
      if ( !(_DWORD)v4 )
        fUarpLayer3NoFirmwareUpdateAvailable(a1, a2);
      goto LABEL_184;
    case 0x1Eu:
      goto LABEL_183;
    default:
      if ( *a3 != 0xFFFF )
        goto LABEL_184;
      if ( (unsigned int)a4 < 0xB )
      {
LABEL_131:
        v4 = 8LL;
      }
      else
      {
        uarpNtohs(*(unsigned __int16 *)((char *)a3 + 9));
        v11 = UARPLayer2VendorSpecificRecvMessage((_QWORD *)a1, a2);
LABEL_177:
        v4 = v11;
      }
      goto LABEL_184;
  }
  while ( 1 )
  {
    v121 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8 * v120);
    if ( v121 )
      break;
LABEL_161:
    if ( ++v120 >= (unsigned __int64)v119 )
      goto LABEL_182;
  }
  if ( (unsigned int)uarpNtohs(**(unsigned __int16 **)(v121 + 16)) != 1 )
  {
    v119 = *(unsigned __int16 *)(a2 + 112);
    goto LABEL_161;
  }
  UARPLayer2WatchdogCancel(a1, a2);
  uarpTransmitQueuePendingEntryComplete(a1, a2, v121);
LABEL_182:
  UARPLayer2ProtocolVersion(a1, a2);
LABEL_183:
  v4 = 0LL;
LABEL_184:
  *a3 = uarpHtons(*a3);
  a3[1] = uarpHtons(a3[1]);
  a3[2] = uarpHtons(a3[2]);
  uarpTransmitQueueProcessRecv(a1, a2, a3, a4);
  *(_BYTE *)(a1 + 580) = 0;
  uarpTransmitQueueService(a1, a2);
  uarpPlatformGarbageCollection();
  return v4;
}