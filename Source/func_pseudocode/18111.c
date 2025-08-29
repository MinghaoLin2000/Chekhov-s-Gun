_piston_dump_smb1_header
void __fastcall piston_dump_smb1_header(unsigned __int8 *a1)
{
  int v2; // w8
  int v3; // w9
  int v4; // w10
  int v5; // w11
  int v6; // w8
  int v7; // w8
  int v8; // w8
  int v9; // w8
  int v10; // w8
  int v11; // w8
  int v12; // w9
  int v13; // w10
  int v14; // w11
  int v15; // w12
  int v16; // w13
  int v17; // w14
  int v18; // w15
  int v19; // w8
  int v20; // w8
  int v21; // w8
  int v22; // w8
  int v23; // [xsp+0h] [xbp-60h] BYREF
  int v24; // [xsp+4h] [xbp-5Ch]
  __int16 v25; // [xsp+8h] [xbp-58h]
  int v26; // [xsp+Ah] [xbp-56h]
  __int16 v27; // [xsp+Eh] [xbp-52h]
  int v28; // [xsp+10h] [xbp-50h]
  __int16 v29; // [xsp+14h] [xbp-4Ch]
  int v30; // [xsp+16h] [xbp-4Ah]
  __int16 v31; // [xsp+1Ah] [xbp-46h]
  int v32; // [xsp+1Ch] [xbp-44h]
  __int16 v33; // [xsp+20h] [xbp-40h]
  int v34; // [xsp+22h] [xbp-3Eh]
  __int16 v35; // [xsp+26h] [xbp-3Ah]
  int v36; // [xsp+28h] [xbp-38h]
  __int16 v37; // [xsp+2Ch] [xbp-34h]
  int v38; // [xsp+2Eh] [xbp-32h]

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    LOWORD(v23) = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "\n*** SMB1 HEADER ***\n",
      (uint8_t *)&v23,
      2u);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v2 = *a1;
    v3 = a1[1];
    v4 = a1[2];
    v5 = a1[3];
    v23 = 67109888;
    v24 = v2;
    v25 = 1024;
    v26 = v3;
    v27 = 1024;
    v28 = v4;
    v29 = 1024;
    v30 = v5;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Protocol: 0x%02x %c%c%c\n",
      (uint8_t *)&v23,
      0x1Au);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v6 = a1[4];
    v23 = 67109376;
    v24 = v6;
    v25 = 1024;
    v26 = v6;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Command: %u (0x%02x)\n",
      (uint8_t *)&v23,
      0xEu);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v7 = *(_DWORD *)(a1 + 5);
    v23 = 67109120;
    v24 = v7;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Status: 0x%08x\n",
      (uint8_t *)&v23,
      8u);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v8 = a1[9];
    v23 = 67109120;
    v24 = v8;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Flags: 0x%02x\n",
      (uint8_t *)&v23,
      8u);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v9 = *((unsigned __int16 *)a1 + 5);
    v23 = 67109120;
    v24 = v9;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Flags2: 0x%04x\n",
      (uint8_t *)&v23,
      8u);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v10 = *((unsigned __int16 *)a1 + 6);
    v23 = 67109376;
    v24 = v10;
    v25 = 1024;
    v26 = v10;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "PID High: %u (0x%04x)\n",
      (uint8_t *)&v23,
      0xEu);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v11 = a1[14];
    v12 = a1[15];
    v13 = a1[16];
    v14 = a1[17];
    v15 = a1[18];
    v16 = a1[19];
    v17 = a1[20];
    v18 = a1[21];
    v23 = 67110912;
    v24 = v11;
    v25 = 1024;
    v26 = v12;
    v27 = 1024;
    v28 = v13;
    v29 = 1024;
    v30 = v14;
    v31 = 1024;
    v32 = v15;
    v33 = 1024;
    v34 = v16;
    v35 = 1024;
    v36 = v17;
    v37 = 1024;
    v38 = v18;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Signature: %02x %02x %02x %02x %02x %02x %02x %02x\n",
      (uint8_t *)&v23,
      0x32u);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v19 = *((unsigned __int16 *)a1 + 12);
    v23 = 67109376;
    v24 = v19;
    v25 = 1024;
    v26 = v19;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "TID: %u (0x%04x)\n",
      (uint8_t *)&v23,
      0xEu);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v20 = *((unsigned __int16 *)a1 + 13);
    v23 = 67109376;
    v24 = v20;
    v25 = 1024;
    v26 = v20;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "PID Low: %u (0x%04x)\n",
      (uint8_t *)&v23,
      0xEu);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v21 = *((unsigned __int16 *)a1 + 14);
    v23 = 67109376;
    v24 = v21;
    v25 = 1024;
    v26 = v21;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "UID: %u (0x%04x)\n",
      (uint8_t *)&v23,
      0xEu);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v22 = *((unsigned __int16 *)a1 + 15);
    v23 = 67109376;
    v24 = v22;
    v25 = 1024;
    v26 = v22;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "MID: %u (0x%04x)\n",
      (uint8_t *)&v23,
      0xEu);
  }
}