_piston_smb2_negotiate_easy
__int64 __fastcall piston_smb2_negotiate_easy(__int64 a1, _DWORD *a2)
{
  _OWORD *v4; // x0
  void *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x21
  unsigned __int8 *v9; // x0
  unsigned __int8 *v10; // x21
  int v11; // w23
  unsigned __int16 *v12; // x22
  int v13; // w8
  int v14; // w8
  int v15; // w8
  int v16; // w8
  int v17; // w9
  int v18; // w10
  int v19; // w11
  int v20; // w12
  int v21; // w13
  int v22; // w14
  int v23; // w15
  int v24; // w16
  int v25; // w17
  int v26; // w0
  int v27; // w1
  int v28; // w2
  int v29; // w3
  int v30; // w4
  int v31; // w5
  int v32; // w8
  int v33; // w8
  int v34; // w8
  int v35; // w8
  __int64 v36; // x8
  __int64 v37; // x8
  int v38; // w8
  int v39; // w8
  __int64 v40; // x8
  unsigned __int64 v41; // x9
  __int64 v42; // x10
  size_t v43; // x2
  void *v44; // x0
  unsigned int v45; // [xsp+Ch] [xbp-124h] BYREF
  _QWORD v46[3]; // [xsp+10h] [xbp-120h] BYREF
  int v47; // [xsp+28h] [xbp-108h]
  int v48; // [xsp+2Ch] [xbp-104h]
  uint8_t buf[4]; // [xsp+30h] [xbp-100h] BYREF
  _BYTE v50[10]; // [xsp+34h] [xbp-FCh]
  _BYTE v51[6]; // [xsp+3Eh] [xbp-F2h]
  char v52; // [xsp+44h] [xbp-ECh]
  char v53; // [xsp+45h] [xbp-EBh]
  int v54; // [xsp+46h] [xbp-EAh]
  __int16 v55; // [xsp+4Ah] [xbp-E6h]
  int v56; // [xsp+4Ch] [xbp-E4h]
  __int16 v57; // [xsp+50h] [xbp-E0h]
  int v58; // [xsp+52h] [xbp-DEh]
  __int16 v59; // [xsp+56h] [xbp-DAh]
  int v60; // [xsp+58h] [xbp-D8h]
  __int16 v61; // [xsp+5Ch] [xbp-D4h]
  int v62; // [xsp+5Eh] [xbp-D2h]
  __int16 v63; // [xsp+62h] [xbp-CEh]
  int v64; // [xsp+64h] [xbp-CCh]
  __int16 v65; // [xsp+68h] [xbp-C8h]
  int v66; // [xsp+6Ah] [xbp-C6h]
  __int16 v67; // [xsp+6Eh] [xbp-C2h]
  int v68; // [xsp+70h] [xbp-C0h]
  __int16 v69; // [xsp+74h] [xbp-BCh]
  int v70; // [xsp+76h] [xbp-BAh]
  __int16 v71; // [xsp+7Ah] [xbp-B6h]
  int v72; // [xsp+7Ch] [xbp-B4h]
  __int16 v73; // [xsp+80h] [xbp-B0h]
  int v74; // [xsp+82h] [xbp-AEh]
  __int16 v75; // [xsp+86h] [xbp-AAh]
  int v76; // [xsp+88h] [xbp-A8h]
  __int16 v77; // [xsp+8Ch] [xbp-A4h]
  int v78; // [xsp+8Eh] [xbp-A2h]
  _QWORD v79[4]; // [xsp+A0h] [xbp-90h] BYREF
  int v80; // [xsp+C4h] [xbp-6Ch] BYREF
  __int16 v81; // [xsp+C8h] [xbp-68h]
  _WORD v82[15]; // [xsp+CAh] [xbp-66h] BYREF

  *a2 = 0;
  v45 = 0;
  v4 = piston_smb2_alloc_hdr(a1);
  if ( !v4 )
    return 12;
  v5 = v4;
  v48 = 0;
  *((_DWORD *)v4 + 3) = 0x200000;
  v46[0] = v4;
  v46[1] = 64LL;
  v47 = 2;
  memset(v82, 0, sizeof(v82));
  v80 = 262180;
  v81 = 1;
  *(_DWORD *)&v82[1] = *(_DWORD *)(a1 + 252);
  *(_OWORD *)&v82[3] = *(_OWORD *)(a1 + 288);
  v79[0] = &v80;
  v79[1] = 36LL;
  v79[2] = &smb2_dialectb;
  v79[3] = 8LL;
  v46[2] = v79;
  v6 = piston_sndmsgbufs(a1, (__int64)v46);
  v45 = v6;
  if ( (_DWORD)v6 )
  {
    v7 = v6;
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_10000FE3C(v7);
LABEL_5:
    piston_smb2_free_hdr(v5);
    return v45;
  }
  v9 = piston_smb2_readmsg(a1, &v45);
  if ( !v9 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_10000FDBC(&v45);
    goto LABEL_5;
  }
  v10 = v9;
  if ( *((_WORD *)v9 + 7) )
    smb2_add_credits_granted(a1);
  v11 = *((_DWORD *)v10 + 2);
  if ( v11 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315394;
      *(_QWORD *)v50 = "piston_smb2_negotiate_easy";
      *(_WORD *)&v50[8] = 1024;
      *(_DWORD *)v51 = v11;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "%s: Negotiate failed, Reply status: 0x%x\n",
        buf,
        0x12u);
      v11 = *((_DWORD *)v10 + 2);
    }
    v45 = 5;
    *a2 = v11;
  }
  else
  {
    v12 = (unsigned __int16 *)*((_QWORD *)v10 + 8);
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      *(_WORD *)buf = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "\n*** SMB2 Negotiate Fields ***\n",
        buf,
        2u);
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v13 = *v12;
      *(_DWORD *)buf = 67109120;
      *(_DWORD *)v50 = v13;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "struct_size: %u\n",
        buf,
        8u);
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v14 = v12[1];
      *(_DWORD *)buf = 67109120;
      *(_DWORD *)v50 = v14;
      _os_log_impl((void *)&_mh_execute_header, (os_log_t)&_os_log_default, OS_LOG_TYPE_INFO, "sec_mode: %u\n", buf, 8u);
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v15 = v12[2];
      *(_DWORD *)buf = 67109120;
      *(_DWORD *)v50 = v15;
      _os_log_impl((void *)&_mh_execute_header, (os_log_t)&_os_log_default, OS_LOG_TYPE_INFO, "dialect: %x\n", buf, 8u);
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v16 = *((unsigned __int8 *)v12 + 8);
      v17 = *((unsigned __int8 *)v12 + 9);
      v18 = *((unsigned __int8 *)v12 + 10);
      v19 = *((unsigned __int8 *)v12 + 11);
      v20 = *((unsigned __int8 *)v12 + 12);
      v21 = *((unsigned __int8 *)v12 + 13);
      v22 = *((unsigned __int8 *)v12 + 14);
      v23 = *((unsigned __int8 *)v12 + 15);
      v24 = *((unsigned __int8 *)v12 + 16);
      v25 = *((unsigned __int8 *)v12 + 17);
      v26 = *((unsigned __int8 *)v12 + 18);
      v27 = *((unsigned __int8 *)v12 + 19);
      v28 = *((unsigned __int8 *)v12 + 20);
      v29 = *((unsigned __int8 *)v12 + 21);
      v30 = *((unsigned __int8 *)v12 + 22);
      v31 = *((unsigned __int8 *)v12 + 23);
      *(_DWORD *)buf = 67112960;
      *(_DWORD *)v50 = v16;
      *(_WORD *)&v50[4] = 1024;
      *(_DWORD *)&v50[6] = v17;
      *(_WORD *)v51 = 1024;
      *(_DWORD *)&v51[2] = v18;
      v52 = 0;
      v53 = 4;
      v54 = v19;
      v55 = 1024;
      v56 = v20;
      v57 = 1024;
      v58 = v21;
      v59 = 1024;
      v60 = v22;
      v61 = 1024;
      v62 = v23;
      v63 = 1024;
      v64 = v24;
      v65 = 1024;
      v66 = v25;
      v67 = 1024;
      v68 = v26;
      v69 = 1024;
      v70 = v27;
      v71 = 1024;
      v72 = v28;
      v73 = 1024;
      v74 = v29;
      v75 = 1024;
      v76 = v30;
      v77 = 1024;
      v78 = v31;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "Server GUID: %02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x\n",
        buf,
        0x62u);
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v32 = *((_DWORD *)v12 + 6);
      *(_DWORD *)buf = 67109120;
      *(_DWORD *)v50 = v32;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "server_caps: 0x%x\n",
        buf,
        8u);
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v33 = *((_DWORD *)v12 + 7);
      *(_DWORD *)buf = 67109120;
      *(_DWORD *)v50 = v33;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "max_transact_size: %u\n",
        buf,
        8u);
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v34 = *((_DWORD *)v12 + 8);
      *(_DWORD *)buf = 67109120;
      *(_DWORD *)v50 = v34;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "max_read_size: %u\n",
        buf,
        8u);
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v35 = *((_DWORD *)v12 + 9);
      *(_DWORD *)buf = 67109120;
      *(_DWORD *)v50 = v35;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "max_write_size: %u\n",
        buf,
        8u);
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v36 = *((_QWORD *)v12 + 5);
      *(_DWORD *)buf = 134217984;
      *(_QWORD *)v50 = v36;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "system_time: 0x%llx\n",
        buf,
        0xCu);
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v37 = *((_QWORD *)v12 + 6);
      *(_DWORD *)buf = 134217984;
      *(_QWORD *)v50 = v37;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "server_start_time: 0x%llx\n",
        buf,
        0xCu);
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v38 = v12[28];
      *(_DWORD *)buf = 67109120;
      *(_DWORD *)v50 = v38;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "secbuf_offest: %u\n",
        buf,
        8u);
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v39 = v12[29];
      *(_DWORD *)buf = 67109120;
      *(_DWORD *)v50 = v39;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "secbuf_len: %u\n",
        buf,
        8u);
    }
    *(_DWORD *)(a1 + 304) = *(_DWORD *)(v12 + 1);
    *(_OWORD *)(a1 + 308) = *(_OWORD *)(v12 + 4);
    smb2_add_credits_granted(a1);
    *(_QWORD *)(a1 + 328) = *(_QWORD *)(v12 + 14);
    *(_DWORD *)(a1 + 336) = *((_DWORD *)v12 + 9);
    *(_QWORD *)(a1 + 344) = *((_QWORD *)v12 + 5);
    v40 = *((_QWORD *)v10 + 8);
    v41 = *((_QWORD *)v10 + 9);
    v42 = v41 - 64;
    if ( v41 - 64 >= 0x400 )
      v42 = 1024LL;
    if ( v41 <= 0x3F )
      v43 = 0LL;
    else
      v43 = v42;
    *(_QWORD *)(a1 + 1456) = v43;
    if ( v43 )
      memcpy((void *)(a1 + 432), (const void *)(v40 + 64), v43);
  }
  piston_smb2_free_hdr(v5);
  v44 = (void *)*((_QWORD *)v10 + 8);
  if ( v44 )
    free(v44);
  return v45;
}