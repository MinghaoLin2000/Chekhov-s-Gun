_piston_alloc_desciptor
pthread_mutex_t *__fastcall piston_alloc_desciptor(__int64 a1, unsigned int a2)
{
  pthread_mutex_t *v4; // x0
  pthread_mutex_t *v5; // x19
  int v6; // w8
  int v7; // w9
  int v8; // w10
  int v9; // w11
  int v10; // w12
  int v11; // w13
  int v12; // w14
  int v13; // w15
  int v14; // w16
  int v15; // w17
  int v16; // w0
  int v17; // w1
  int v18; // w2
  int v19; // w3
  int v20; // w4
  int v21; // w5
  _DWORD v23[2]; // [xsp+0h] [xbp-90h] BYREF
  __int16 v24; // [xsp+8h] [xbp-88h]
  int v25; // [xsp+Ah] [xbp-86h]
  __int16 v26; // [xsp+Eh] [xbp-82h]
  int v27; // [xsp+10h] [xbp-80h]
  __int16 v28; // [xsp+14h] [xbp-7Ch]
  int v29; // [xsp+16h] [xbp-7Ah]
  __int16 v30; // [xsp+1Ah] [xbp-76h]
  int v31; // [xsp+1Ch] [xbp-74h]
  __int16 v32; // [xsp+20h] [xbp-70h]
  int v33; // [xsp+22h] [xbp-6Eh]
  __int16 v34; // [xsp+26h] [xbp-6Ah]
  int v35; // [xsp+28h] [xbp-68h]
  __int16 v36; // [xsp+2Ch] [xbp-64h]
  int v37; // [xsp+2Eh] [xbp-62h]
  __int16 v38; // [xsp+32h] [xbp-5Eh]
  int v39; // [xsp+34h] [xbp-5Ch]
  __int16 v40; // [xsp+38h] [xbp-58h]
  int v41; // [xsp+3Ah] [xbp-56h]
  __int16 v42; // [xsp+3Eh] [xbp-52h]
  int v43; // [xsp+40h] [xbp-50h]
  __int16 v44; // [xsp+44h] [xbp-4Ch]
  int v45; // [xsp+46h] [xbp-4Ah]
  __int16 v46; // [xsp+4Ah] [xbp-46h]
  int v47; // [xsp+4Ch] [xbp-44h]
  __int16 v48; // [xsp+50h] [xbp-40h]
  int v49; // [xsp+52h] [xbp-3Eh]
  __int16 v50; // [xsp+56h] [xbp-3Ah]
  int v51; // [xsp+58h] [xbp-38h]
  __int16 v52; // [xsp+5Ch] [xbp-34h]
  int v53; // [xsp+5Eh] [xbp-32h]

  v4 = (pthread_mutex_t *)malloc_type_malloc(0xA00uLL, 0x1030040A0416878uLL);
  v5 = v4;
  if ( v4 )
  {
    bzero(v4, 0xA00uLL);
    pthread_mutex_init(v5 + 39, 0LL);
    LODWORD(v5->__sig) = a2;
    *(_DWORD *)v5->__opaque = -1;
    *(_QWORD *)&v5->__opaque[40] = a1;
    *(_QWORD *)&v5[6].__opaque[24] = 0LL;
    *(_QWORD *)&v5[6].__opaque[32] = 0LL;
    if ( a2 )
    {
      if ( a2 <= 2 )
      {
        *(_QWORD *)&v5[3].__opaque[48] = 0x600000000LL;
        LODWORD(v5[4].__sig) = 0;
        *(_QWORD *)v5[4].__opaque = 0LL;
        *(_DWORD *)&v5[4].__opaque[8] = random();
        *(_DWORD *)&v5[4].__opaque[12] = 0;
        *(_QWORD *)&v5[4].__opaque[16] = 0LL;
        *(_DWORD *)&v5[4].__opaque[24] = random();
        *(_DWORD *)&v5[4].__opaque[28] = random();
        *(_DWORD *)&v5[4].__opaque[32] = random();
        *(_DWORD *)&v5[4].__opaque[36] = random();
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
        {
          LOWORD(v23[0]) = 0;
          _os_log_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_INFO,
            "Client GUID:\n",
            (uint8_t *)v23,
            2u);
        }
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
        {
          v6 = (unsigned __int8)v5[4].__opaque[24];
          v7 = (unsigned __int8)v5[4].__opaque[25];
          v8 = (unsigned __int8)v5[4].__opaque[26];
          v9 = (unsigned __int8)v5[4].__opaque[27];
          v10 = (unsigned __int8)v5[4].__opaque[28];
          v11 = (unsigned __int8)v5[4].__opaque[29];
          v12 = (unsigned __int8)v5[4].__opaque[30];
          v13 = (unsigned __int8)v5[4].__opaque[31];
          v14 = (unsigned __int8)v5[4].__opaque[32];
          v15 = (unsigned __int8)v5[4].__opaque[33];
          v16 = (unsigned __int8)v5[4].__opaque[34];
          v17 = (unsigned __int8)v5[4].__opaque[35];
          v18 = (unsigned __int8)v5[4].__opaque[36];
          v19 = (unsigned __int8)v5[4].__opaque[37];
          v20 = (unsigned __int8)v5[4].__opaque[38];
          v21 = (unsigned __int8)v5[4].__opaque[39];
          v23[0] = 67112960;
          v23[1] = v6;
          v24 = 1024;
          v25 = v7;
          v26 = 1024;
          v27 = v8;
          v28 = 1024;
          v29 = v9;
          v30 = 1024;
          v31 = v10;
          v32 = 1024;
          v33 = v11;
          v34 = 1024;
          v35 = v12;
          v36 = 1024;
          v37 = v13;
          v38 = 1024;
          v39 = v14;
          v40 = 1024;
          v41 = v15;
          v42 = 1024;
          v43 = v16;
          v44 = 1024;
          v45 = v17;
          v46 = 1024;
          v47 = v18;
          v48 = 1024;
          v49 = v19;
          v50 = 1024;
          v51 = v20;
          v52 = 1024;
          v53 = v21;
          _os_log_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_INFO,
            "%02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
            (uint8_t *)v23,
            0x62u);
        }
      }
    }
    else
    {
      LOBYTE(v5[2].__sig) = 24;
      WORD1(v5[2].__sig) = -14329;
      WORD2(v5[2].__sig) = random();
      HIWORD(v5[2].__sig) = -1;
    }
  }
  else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    sub_10000F1B4();
  }
  return v5;
}