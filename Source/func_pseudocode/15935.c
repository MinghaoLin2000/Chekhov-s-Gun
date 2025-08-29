_uarpApplePlatformEndpointRecvMessage
__int64 __fastcall uarpApplePlatformEndpointRecvMessage(
        __int64 a1,
        int *a2,
        __int64 a3,
        int a4,
        unsigned int *a5,
        unsigned int a6)
{
  __int64 result; // x0
  int v12; // w26
  __int64 v13; // x0
  __int64 v14; // x21
  __int64 v15; // x25
  _QWORD *v16; // x24
  __int64 v17; // x22
  _QWORD *v18; // x23
  __int64 v19; // x3
  __int64 (__fastcall *v20)(__int64, __int64, __int64, __int64, unsigned int *); // x8
  __int64 v21; // x0
  __int64 v22; // x1
  int v23; // w24
  __int64 v24; // x0
  __int64 v25; // x21
  _QWORD *v26; // x22
  _QWORD *v27; // x23
  void (__fastcall *v28)(_QWORD, _QWORD, _QWORD *, __int64); // x8
  __int64 (__fastcall *v29)(_QWORD, __int64, __int64, __int64, unsigned int *); // x8
  __int64 v30; // x24
  unsigned int v31; // w8
  __int64 (__fastcall *v32)(__int64, __int64, __int64, __int64, unsigned int *); // x8
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 (__fastcall *v35)(_QWORD, __int64, __int64, __int64, unsigned int *); // x8
  __int16 v36; // w22
  void (__fastcall **v37)(_QWORD, _QWORD, _QWORD *, __int64); // x23
  __int64 v38; // t1
  void (__fastcall *v39)(_QWORD, _QWORD, _QWORD *, __int64); // t1
  void (__fastcall *v40)(_QWORD, _QWORD, _QWORD *, __int64); // t1
  void (__fastcall *v41)(_QWORD, _QWORD, _QWORD *, __int64); // t1
  void (__fastcall *v42)(_QWORD, _QWORD, _QWORD *, __int64); // t1
  void (__fastcall *v43)(_QWORD, _QWORD, _QWORD *, __int64); // t1
  void (__fastcall *v44)(_QWORD, _QWORD, _QWORD *, __int64); // t1
  void (__fastcall *v45)(_QWORD, _QWORD, _QWORD *, __int64); // t1
  unsigned int v46; // [xsp+Ch] [xbp-44h] BYREF

  result = 30LL;
  if ( !a1 || !a2 || !a3 || !a5 )
    return result;
  word_10002AC90 = 2492;
  byte_10002AC92 = 99;
  if ( !(unsigned int)uarpOuiCompare(a3, &word_10002AC90) )
    return 9LL;
  if ( a4 != 33 )
  {
    if ( a4 == 32 && a6 >= 4 )
    {
      v12 = *a2;
      v13 = uarpAllocPrepareTransmitBuffer2(a1, a2, 0xFFFFLL, (unsigned __int16)*a2, 0LL);
      if ( !v13 )
        return 11LL;
      v14 = v13;
      v15 = *(_QWORD *)(v13 + 16);
      word_10002AC90 = 2492;
      byte_10002AC92 = 99;
      *(_WORD *)(v15 + 6) = 2492;
      *(_BYTE *)(v15 + 8) = 99;
      *(_WORD *)(v15 + 9) = uarpHtons(33LL);
      v16 = *(_QWORD **)(a1 + 40);
      v46 = 0;
      v17 = uarpNtohl(*a5);
      v18 = (_QWORD *)(v15 + 23);
      v19 = (unsigned int)(v12 - 23);
      switch ( (int)v17 )
      {
        case 1:
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[1];
          if ( !v20 )
            goto LABEL_91;
          v21 = *(_QWORD *)(a1 + 544);
          v22 = 1LL;
          goto LABEL_90;
        case 2:
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[3];
          if ( !v20 )
            goto LABEL_91;
          v21 = *(_QWORD *)(a1 + 544);
          v22 = 2LL;
          goto LABEL_90;
        case 3:
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[5];
          if ( !v20 )
            goto LABEL_91;
          v21 = *(_QWORD *)(a1 + 544);
          v22 = 3LL;
          goto LABEL_90;
        case 4:
          v29 = (__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, unsigned int *))v16[7];
          if ( !v29 )
            goto LABEL_91;
          v30 = v29(*(_QWORD *)(a1 + 544), 4LL, v15 + 23, v19, &v46);
          if ( *((unsigned __int16 *)a2 + 24) < 4u )
            break;
          v31 = v46;
          if ( v46 != 8 )
            goto LABEL_74;
LABEL_41:
          *v18 = uarpHtonll(*v18);
          break;
        case 5:
          v32 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[9];
          if ( !v32 )
            goto LABEL_91;
          v33 = *(_QWORD *)(a1 + 544);
          v34 = 5LL;
          goto LABEL_72;
        case 6:
          v32 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[11];
          if ( !v32 )
            goto LABEL_91;
          v33 = *(_QWORD *)(a1 + 544);
          v34 = 6LL;
          goto LABEL_72;
        case 7:
          v35 = (__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, unsigned int *))v16[13];
          if ( !v35 )
            goto LABEL_91;
          v30 = v35(*(_QWORD *)(a1 + 544), 7LL, v15 + 23, v19, &v46);
          if ( *((unsigned __int16 *)a2 + 24) >= 4u && v46 == 8 )
            goto LABEL_41;
          break;
        case 8:
          v32 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[17];
          if ( !v32 )
            goto LABEL_91;
          v33 = *(_QWORD *)(a1 + 544);
          v34 = 8LL;
          goto LABEL_72;
        case 9:
          v32 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[19];
          if ( !v32 )
            goto LABEL_91;
          v33 = *(_QWORD *)(a1 + 544);
          v34 = 9LL;
          goto LABEL_72;
        case 10:
          v32 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[21];
          if ( !v32 )
            goto LABEL_91;
          v33 = *(_QWORD *)(a1 + 544);
          v34 = 10LL;
          goto LABEL_72;
        case 11:
          v32 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[23];
          if ( !v32 )
            goto LABEL_91;
          v33 = *(_QWORD *)(a1 + 544);
          v34 = 11LL;
          goto LABEL_72;
        case 12:
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[25];
          if ( !v20 )
            goto LABEL_91;
          v21 = *(_QWORD *)(a1 + 544);
          v22 = 12LL;
          goto LABEL_90;
        case 13:
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[27];
          if ( !v20 )
            goto LABEL_91;
          v21 = *(_QWORD *)(a1 + 544);
          v22 = 13LL;
          goto LABEL_90;
        case 14:
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[29];
          if ( !v20 )
            goto LABEL_91;
          v21 = *(_QWORD *)(a1 + 544);
          v22 = 14LL;
          goto LABEL_90;
        case 15:
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[31];
          if ( !v20 )
            goto LABEL_91;
          v21 = *(_QWORD *)(a1 + 544);
          v22 = 15LL;
          goto LABEL_90;
        case 16:
          v32 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[33];
          if ( !v32 )
            goto LABEL_91;
          v33 = *(_QWORD *)(a1 + 544);
          v34 = 16LL;
          goto LABEL_72;
        case 17:
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[35];
          if ( !v20 )
            goto LABEL_91;
          v21 = *(_QWORD *)(a1 + 544);
          v22 = 17LL;
          goto LABEL_90;
        case 18:
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[37];
          if ( !v20 )
            goto LABEL_91;
          v21 = *(_QWORD *)(a1 + 544);
          v22 = 18LL;
          goto LABEL_90;
        case 19:
          v32 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[39];
          if ( !v32 )
            goto LABEL_91;
          v33 = *(_QWORD *)(a1 + 544);
          v34 = 19LL;
          goto LABEL_72;
        case 20:
          v32 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[41];
          if ( !v32 )
            goto LABEL_91;
          v33 = *(_QWORD *)(a1 + 544);
          v34 = 20LL;
          goto LABEL_72;
        case 21:
          v32 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[43];
          if ( !v32 )
            goto LABEL_91;
          v33 = *(_QWORD *)(a1 + 544);
          v34 = 21LL;
          goto LABEL_72;
        case 22:
          v32 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[45];
          if ( !v32 )
            goto LABEL_91;
          v33 = *(_QWORD *)(a1 + 544);
          v34 = 22LL;
LABEL_72:
          v30 = v32(v33, v34, v15 + 23, v19, &v46);
          if ( *((unsigned __int16 *)a2 + 24) < 4u )
            break;
          v31 = v46;
LABEL_74:
          if ( v31 == 4 )
            *(_DWORD *)v18 = uarpHtonl(*(unsigned int *)v18);
          break;
        case 23:
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[47];
          if ( !v20 )
            goto LABEL_91;
          v21 = *(_QWORD *)(a1 + 544);
          v22 = 23LL;
          goto LABEL_90;
        case 24:
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[49];
          if ( !v20 )
            goto LABEL_91;
          v21 = *(_QWORD *)(a1 + 544);
          v22 = 24LL;
          goto LABEL_90;
        case 25:
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[51];
          if ( !v20 )
            goto LABEL_91;
          v21 = *(_QWORD *)(a1 + 544);
          v22 = 25LL;
          goto LABEL_90;
        case 26:
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[53];
          if ( !v20 )
            goto LABEL_91;
          v21 = *(_QWORD *)(a1 + 544);
          v22 = 26LL;
          goto LABEL_90;
        case 27:
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[55];
          if ( !v20 )
            goto LABEL_91;
          v21 = *(_QWORD *)(a1 + 544);
          v22 = 27LL;
          goto LABEL_90;
        case 28:
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[57];
          if ( !v20 )
            goto LABEL_91;
          v21 = *(_QWORD *)(a1 + 544);
          v22 = 28LL;
          goto LABEL_90;
        case 29:
          v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))v16[15];
          if ( !v20 )
            goto LABEL_91;
          v21 = *(_QWORD *)(a1 + 544);
          v22 = 29LL;
LABEL_90:
          v30 = v20(v21, v22, v15 + 23, v19, &v46);
          break;
        default:
LABEL_91:
          v30 = 26LL;
          break;
      }
      *(_DWORD *)(v15 + 11) = uarpHtonl(v30);
      *(_DWORD *)(v15 + 15) = uarpHtonl(v17);
      *(_DWORD *)(v15 + 19) = uarpHtonl(v46);
      v36 = v46 + 23;
      *(_WORD *)(v15 + 2) = uarpHtons((unsigned __int16)(v46 + 17));
      *(_WORD *)(v14 + 28) = v36;
      return uarpTransmitBuffer2(a1, a2, v14);
    }
    return 9LL;
  }
  if ( a6 < 4 )
    return 9LL;
  if ( a6 < 0xC )
    return 8LL;
  v23 = uarpNtohl(a5[1]);
  v24 = uarpNtohl(a5[2]);
  if ( (int)v24 + 12 > a6 )
    return 8LL;
  v25 = v24;
  if ( (_DWORD)v24 )
    v26 = a5 + 3;
  else
    v26 = 0LL;
  v27 = *(_QWORD **)(a1 + 40);
  switch ( v23 )
  {
    case 1:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[2];
      if ( v28 )
        goto LABEL_118;
      return 1LL;
    case 2:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[4];
      if ( !v28 )
        return 1LL;
      goto LABEL_118;
    case 3:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[6];
      if ( !v28 )
        return 1LL;
      goto LABEL_118;
    case 4:
      v38 = v27[8];
      v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(v27 + 8);
      if ( !v38 )
        return 1LL;
      if ( (_DWORD)v24 == 8 )
        goto LABEL_107;
      if ( (_DWORD)v24 != 4 )
        goto LABEL_117;
      break;
    case 5:
      v39 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[10];
      v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(v27 + 10);
      v28 = v39;
      if ( !v39 )
        return 1LL;
      goto LABEL_115;
    case 6:
      v40 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[12];
      v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(v27 + 12);
      v28 = v40;
      if ( !v40 )
        return 1LL;
      goto LABEL_115;
    case 7:
      v41 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[14];
      v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(v27 + 14);
      v28 = v41;
      if ( !v41 )
        return 1LL;
      if ( (_DWORD)v24 != 8 )
        goto LABEL_118;
LABEL_107:
      *v26 = uarpNtohll(*v26);
      goto LABEL_117;
    case 8:
      v42 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[18];
      v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(v27 + 18);
      v28 = v42;
      if ( !v42 )
        return 1LL;
      goto LABEL_115;
    case 9:
      v43 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[20];
      v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(v27 + 20);
      v28 = v43;
      if ( !v43 )
        return 1LL;
      goto LABEL_115;
    case 10:
      v44 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[22];
      v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(v27 + 22);
      v28 = v44;
      if ( !v44 )
        return 1LL;
      goto LABEL_115;
    case 11:
      v45 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[24];
      v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(v27 + 24);
      v28 = v45;
      if ( !v45 )
        return 1LL;
LABEL_115:
      if ( (_DWORD)v24 == 4 )
        break;
      goto LABEL_118;
    case 12:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[26];
      if ( !v28 )
        return 1LL;
      goto LABEL_118;
    case 13:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[28];
      if ( !v28 )
        return 1LL;
      goto LABEL_118;
    case 14:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[30];
      if ( !v28 )
        return 1LL;
      goto LABEL_118;
    case 15:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[32];
      if ( !v28 )
        return 1LL;
      goto LABEL_118;
    case 16:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[34];
      if ( !v28 )
        return 1LL;
      if ( (_DWORD)v24 != 4 )
        goto LABEL_118;
      v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(v27 + 34);
      break;
    case 17:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[36];
      if ( !v28 )
        return 1LL;
      goto LABEL_118;
    case 18:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[38];
      if ( !v28 )
        return 1LL;
      goto LABEL_118;
    case 19:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[40];
      if ( !v28 )
        return 1LL;
      if ( (_DWORD)v24 != 4 )
        goto LABEL_118;
      v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(v27 + 40);
      break;
    case 20:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[42];
      if ( !v28 )
        return 1LL;
      if ( (_DWORD)v24 != 4 )
        goto LABEL_118;
      v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(v27 + 42);
      break;
    case 21:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[44];
      if ( !v28 )
        return 1LL;
      if ( (_DWORD)v24 != 4 )
        goto LABEL_118;
      v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(v27 + 44);
      break;
    case 22:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[46];
      if ( !v28 )
        return 1LL;
      if ( (_DWORD)v24 != 4 )
        goto LABEL_118;
      v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(v27 + 46);
      break;
    case 23:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[48];
      if ( !v28 )
        return 1LL;
      goto LABEL_118;
    case 24:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[50];
      if ( !v28 )
        return 1LL;
      goto LABEL_118;
    case 25:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[52];
      if ( !v28 )
        return 1LL;
      goto LABEL_118;
    case 26:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[54];
      if ( !v28 )
        return 1LL;
      goto LABEL_118;
    case 27:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[56];
      if ( !v28 )
        return 1LL;
      goto LABEL_118;
    case 28:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[58];
      if ( !v28 )
        return 1LL;
      goto LABEL_118;
    case 29:
      v28 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD *, __int64))v27[16];
      if ( !v28 )
        return 1LL;
      goto LABEL_118;
    default:
      return 1LL;
  }
  *(_DWORD *)v26 = uarpNtohl(*(unsigned int *)v26);
LABEL_117:
  v28 = *v37;
LABEL_118:
  v28(*(_QWORD *)(a1 + 544), *((_QWORD *)a2 + 5), v26, v25);
  return 0LL;
}