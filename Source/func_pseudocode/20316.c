_liteInitURF
bool __fastcall liteInitURF(void *a1, __int64 a2, int a3)
{
  void *v4; // x0
  void *v5; // x19
  void *v6; // x20
  unsigned __int64 i; // x23
  void *v8; // x27
  const char *v9; // x26
  int v10; // w0
  _BOOL4 v11; // w8
  int v12; // w8
  int v13; // w0
  unsigned __int64 v14; // x8
  int v15; // w10
  _BOOL4 v16; // w8
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x8
  unsigned __int64 j; // x19
  void *v21; // x26
  const char *v22; // x25
  int v23; // w0
  __int64 v24; // x8
  __int64 v25; // x8
  int *v26; // x9
  __int64 v27; // x10
  __int64 v28; // t1
  int v29; // w8
  unsigned __int64 v30; // x8
  bool v31; // w24
  __int64 v32; // x11
  __int64 v33; // x12
  int v34; // w13
  void *v35; // x22
  const char *v36; // x19
  int v37; // w25
  int v38; // w23
  void *v39; // x22
  const char *v40; // x19
  int v41; // w9
  int v42; // w8
  int v43; // w10
  int *v44; // x11
  int v45; // w12
  __int64 v49; // x12
  unsigned __int64 v50; // x10
  int v51; // w11
  unsigned int v52; // w12
  unsigned int v53; // w11
  _BOOL4 v55; // w10
  __int64 v56; // x14
  __int64 v57; // x13
  int v58; // w14
  unsigned int v59; // w15
  unsigned int v60; // w16
  __int64 v62; // x11
  __int64 k; // x10
  int v64; // w11
  __int64 m; // x8
  int v66; // w10
  void *v67; // x19
  const char *v68; // x22
  int v69; // w0
  void *v70; // x22
  const char *v71; // x19
  _DWORD *v72; // x22
  void *v73; // x22
  const char *v74; // x19
  void *v75; // x0
  void *v76; // x22
  unsigned __int64 n; // x23
  void *v78; // x26
  const char *v79; // x25
  double v80; // d0
  int v81; // w8
  int v82; // w10
  int v83; // w11
  bool v84; // cc
  int v85; // w9
  int v86; // w11
  int *v87; // x12
  __int64 v88; // x12
  _DWORD *v89; // x13
  void *v90; // x0
  _BOOL8 v91; // x19
  __int64 v92; // x0
  double v94; // d0
  double v95; // d1
  double v96; // d0
  double v97; // d1
  id v99; // [xsp+48h] [xbp-158h]
  id v100; // [xsp+50h] [xbp-150h]
  int v101; // [xsp+58h] [xbp-148h] BYREF
  unsigned __int16 v102; // [xsp+5Dh] [xbp-143h] BYREF
  unsigned __int8 v103; // [xsp+5Fh] [xbp-141h]
  __int64 v104; // [xsp+60h] [xbp-140h] BYREF
  _DWORD v105[50]; // [xsp+68h] [xbp-138h] BYREF

  v104 = 0LL;
  v100 = objc_retain(a1);
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v100, "objectForKeyedSubscript:", CFSTR("URF")));
  v5 = v4;
  if ( v4 )
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "componentsSeparatedByString:", CFSTR(",")));
  else
    v6 = 0LL;
  objc_release(v5);
  for ( i = 0LL; (unsigned __int64)objc_msgSend(v6, "count") > i; ++i )
  {
    v8 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectAtIndexedSubscript:", i)));
    v9 = (const char *)objc_msgSend(v8, "UTF8String");
    objc_release(v8);
    if ( !strncmp(v9, "CP", 2uLL) )
    {
      *(_DWORD *)(a2 + 128) = atoi(v9 + 2) > 1;
    }
    else if ( !strncmp(v9, "DM", 2uLL) )
    {
      v12 = v9[2];
      if ( v12 >= 49 )
      {
        *(_BYTE *)(a2 + 120) |= 1u;
        LOBYTE(v12) = v9[2];
      }
      if ( (unsigned __int8)v12 == 51 )
      {
        *(_DWORD *)(a2 + 136) = 2;
      }
      else if ( (unsigned __int8)v12 == 50 )
      {
        *(_DWORD *)(a2 + 136) = 1;
      }
    }
    else if ( !strncmp(v9, "FN", 2uLL) )
    {
      *(_DWORD *)(a2 + 140) = sub_100041238(v9 + 2, a2 + 144, 101LL);
    }
    else if ( !strncmp(v9, "IS", 2uLL) )
    {
      *(_DWORD *)(a2 + 548) = sub_100041238(v9 + 2, a2 + 752, 50LL);
    }
    else if ( !strncmp(v9, "MT", 2uLL) )
    {
      *(_DWORD *)(a2 + 1524) = sub_100041238(v9 + 2, a2 + 1528, 14LL);
    }
    else if ( !strncmp(v9, "OB", 2uLL) )
    {
      *(_DWORD *)(a2 + 1584) = sub_100041238(v9 + 2, a2 + 1788, 50LL);
    }
    else if ( !strncmp(v9, "RS", 2uLL) )
    {
      *(_DWORD *)(a2 + 2000) = sub_100041238(v9 + 2, a2 + 2020, 4LL);
    }
    else if ( !strcmp(v9, "SRGB24") )
    {
      *(_BYTE *)(a2 + 120) |= 2u;
    }
    else if ( !strncmp(v9, "ADOBERGB", 8uLL) )
    {
      v13 = sub_100041238(v9 + 8, v105, 4LL);
      if ( v13 < 1 )
      {
        v16 = 0;
      }
      else
      {
        v14 = 0LL;
        do
          v15 = v105[v14++];
        while ( v14 < (unsigned int)v13 && v15 != 48 );
        v16 = v15 == 48;
      }
      *(_DWORD *)(a2 + 2008) = v16;
    }
    else if ( !strncmp(v9, "P3E48", 5uLL) )
    {
      *(_DWORD *)(a2 + 2012) = 1;
    }
    else if ( !strncmp(v9, "WE16", 4uLL) )
    {
      *(_DWORD *)(a2 + 2016) = 1;
    }
    else if ( *v9 == 86 )
    {
      v10 = sub_100041238(v9 + 1, v105, 2LL);
      if ( v10 >= 1 )
      {
        v11 = v10 != 1;
        if ( v105[0] != 1 )
          v11 = 0;
        if ( v105[1] <= 1 )
          v11 = 0;
        if ( v105[0] > 1 || v11 )
          *(_DWORD *)(a2 + 2004) = 1;
      }
    }
  }
  v17 = *(unsigned int *)(a2 + 548);
  if ( (int)v17 >= 2 )
  {
    *(_DWORD *)(a2 + 548) = v17 + 1;
    *(_DWORD *)(a2 + 4 * v17 + 752) = 0;
  }
  v18 = *(unsigned int *)(a2 + 1524);
  if ( (int)v18 >= 2 )
  {
    *(_DWORD *)(a2 + 1524) = v18 + 1;
    *(_DWORD *)(a2 + 4 * v18 + 1528) = 0;
  }
  v19 = *(unsigned int *)(a2 + 1584);
  if ( (int)v19 >= 2 )
  {
    *(_DWORD *)(a2 + 1584) = v19 + 1;
    *(_DWORD *)(a2 + 4 * v19 + 1788) = 0;
  }
  for ( j = 0LL; (unsigned __int64)objc_msgSend(v6, "count") > j; ++j )
  {
    v21 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectAtIndexedSubscript:", j)));
    v22 = (const char *)objc_msgSend(v21, "UTF8String");
    objc_release(v21);
    if ( !strncmp(v22, "OFU", 3uLL) )
    {
      v23 = sub_100041238(v22 + 3, v105, 50LL);
      if ( v23 != 1 || v105[0] )
      {
        if ( v23 >= 1 )
        {
          v25 = (unsigned int)v23;
          v26 = v105;
          do
          {
            v28 = *v26++;
            v27 = v28;
            if ( (int)v28 <= 49 )
              *(_DWORD *)(a2 + 4 * v27 + 1588) = 1;
            --v25;
          }
          while ( v25 );
        }
      }
      else
      {
        v24 = *(unsigned int *)(a2 + 1584);
        if ( (int)v24 >= 1 )
          memset_pattern16((void *)(a2 + 1588), &unk_10006D480, 4 * v24);
      }
    }
  }
  v29 = *(_DWORD *)(a2 + 2000);
  if ( !v29 )
  {
    v29 = 1;
    *(_DWORD *)(a2 + 2000) = 1;
    *(_DWORD *)(a2 + 2020) = 300;
  }
  *(_DWORD *)(a2 + 1996) = *(_DWORD *)(a2 + 4LL * (v29 / 2) + 2020);
  v30 = *(unsigned int *)(a2 + 1524);
  if ( (int)v30 < 1 )
  {
    v31 = 1;
  }
  else if ( *(_DWORD *)(a2 + 1528) == 3 )
  {
    v31 = 0;
  }
  else
  {
    v32 = 0LL;
    do
    {
      v33 = v32;
      if ( v30 - 1 == v32 )
        break;
      v34 = *(_DWORD *)(a2 + 1532 + 4 * v32++);
    }
    while ( v34 != 3 );
    v31 = v33 + 1 >= v30;
  }
  v35 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v100, "objectForKeyedSubscript:", CFSTR("MAXSIZE"))));
  v36 = (const char *)objc_msgSend(v35, "UTF8String");
  objc_release(v35);
  if ( !v36 )
    goto LABEL_83;
  LOBYTE(v102) = 0;
  if ( sscanf(v36, "%fx%f%2s", (char *)&v104 + 4, &v104, &v102) != 3 )
    goto LABEL_83;
  if ( !(v102 ^ 0x6E69 | v103) )
  {
    v94 = *((float *)&v104 + 1);
    v95 = 2540.0;
LABEL_174:
    v38 = (int)(v94 * v95);
    v37 = (int)(*(float *)&v104 * v95);
    goto LABEL_84;
  }
  if ( !(v102 ^ 0x6D6D | v103) )
  {
    v94 = *((float *)&v104 + 1);
    v95 = 100.0;
    goto LABEL_174;
  }
LABEL_83:
  v37 = 35560;
  v38 = 21590;
LABEL_84:
  v39 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v100, "objectForKeyedSubscript:", CFSTR("MINSIZE"))));
  v40 = (const char *)objc_msgSend(v39, "UTF8String");
  objc_release(v39);
  if ( !v40 )
    goto LABEL_88;
  LOBYTE(v102) = 0;
  if ( sscanf(v40, "%fx%f%2s", (char *)&v104 + 4, &v104, &v102) != 3 )
    goto LABEL_88;
  if ( !(v102 ^ 0x6E69 | v103) )
  {
    v96 = *((float *)&v104 + 1);
    v97 = 2540.0;
LABEL_176:
    v42 = (int)(v96 * v97);
    v41 = (int)(*(float *)&v104 * v97);
    goto LABEL_89;
  }
  if ( !(v102 ^ 0x6D6D | v103) )
  {
    v96 = *((float *)&v104 + 1);
    v97 = 100.0;
    goto LABEL_176;
  }
LABEL_88:
  v41 = 27940;
  v42 = 21000;
LABEL_89:
  v43 = 0;
  v44 = &dword_10006D2A4;
  do
  {
    v45 = *(v44 - 1);
    if ( v45 >= v42 && v45 <= v38 && *v44 >= v41 && *v44 <= v37 && ((unsigned int)(v43 - 19) >= 5 || !v31) )
    {
      v49 = *(int *)(a2 + 992);
      *(_DWORD *)(a2 + 992) = v49 + 1;
      *(_DWORD *)(a2 + 4 * v49 + 996) = v43;
    }
    ++v43;
    v44 += 2;
  }
  while ( v43 != 24 );
  v50 = *(unsigned int *)(a2 + 548);
  if ( (int)v50 < 1 )
  {
    v55 = 0;
  }
  else
  {
    v51 = *(_DWORD *)(a2 + 752);
    v52 = v51 - 9;
    v53 = v51 - 40;
    if ( v52 >= 2 && v53 >= 0xA )
    {
      v56 = 0LL;
      do
      {
        v57 = v56;
        if ( v50 - 1 == v56 )
          break;
        v58 = *(_DWORD *)(a2 + 756 + 4 * v56);
        v59 = v58 - 9;
        v60 = v58 - 40;
        v56 = v57 + 1;
      }
      while ( v59 >= 2 && v60 > 9 );
      v55 = v57 + 1 < v50;
    }
    else
    {
      v55 = 1;
    }
  }
  if ( v42 != v38 || v41 != v37 )
  {
    v62 = *(int *)(a2 + 992);
    *(_DWORD *)(a2 + 992) = v62 + 1;
    *(_DWORD *)(a2 + 4 * v62 + 996) = 24;
    *(_DWORD *)(a2 + 1520) = v41;
    *(_DWORD *)(a2 + 1512) = v37;
    if ( v55 )
    {
      for ( k = (unsigned int)&dword_100000010; k != -4; k -= 4LL )
      {
        v64 = *(int *)((char *)RollWidths + k);
        if ( v64 >= v42 )
          *(_DWORD *)(a2 + 1516) = v64;
      }
      for ( m = 0LL; m != 5; ++m )
      {
        v66 = RollWidths[m];
        if ( v66 <= v38 )
          *(_DWORD *)(a2 + 1508) = v66;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 1516) = v42;
      *(_DWORD *)(a2 + 1508) = v38;
    }
  }
  v67 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v100, "objectForKeyedSubscript:", CFSTR("TEST-BORDERLESS"))));
  v68 = (const char *)objc_msgSend(v67, "UTF8String");
  objc_release(v67);
  if ( v68 )
    v69 = atoi(v68);
  else
    v69 = 0;
  *(_DWORD *)(a2 + 952) = v69;
  v70 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v100, "objectForKeyedSubscript:", CFSTR("TEST-MARGINS"))));
  v71 = (const char *)objc_msgSend(v70, "UTF8String");
  objc_release(v70);
  if ( !v71 )
  {
    *(_DWORD *)(a2 + 972) = 635;
    *(int32x2_t *)(a2 + 976) = vdup_n_s32(0x27Bu);
    v72 = (_DWORD *)(a2 + 984);
    goto LABEL_140;
  }
  v72 = (_DWORD *)(a2 + 984);
  if ( sscanf(v71, "%d%d%d%d", a2 + 972, a2 + 976, a2 + 980, a2 + 984) != 4 )
  {
    *(int32x2_t *)(a2 + 972) = vdup_n_s32(0x27Bu);
    *(_DWORD *)(a2 + 980) = 635;
LABEL_140:
    *v72 = 635;
  }
  v73 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v100, "objectForKeyedSubscript:", CFSTR("TEST-DUPLEX"))));
  v74 = (const char *)objc_msgSend(v73, "UTF8String");
  objc_release(v73);
  if ( v74 && sscanf(v74, "%d%d%d%d", a2 + 956, a2 + 960, a2 + 964, a2 + 968) != 4 )
  {
    *(_QWORD *)(a2 + 956) = 0LL;
    *(_QWORD *)(a2 + 964) = 0LL;
  }
  v75 = objc_retainAutoreleasedReturnValue(objc_msgSend(v100, "objectForKeyedSubscript:", CFSTR("TEST-MEDIA-READY")));
  if ( v75 )
  {
    v99 = v75;
    v76 = objc_retainAutoreleasedReturnValue(objc_msgSend(v75, "componentsSeparatedByString:", CFSTR(",")));
    for ( n = 0LL; (unsigned __int64)objc_msgSend(v76, "count") > n; ++n )
    {
      v78 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v76, "objectAtIndexedSubscript:", n)));
      v79 = (const char *)objc_msgSend(v78, "UTF8String");
      objc_release(v78);
      LOBYTE(v102) = 0;
      v105[0] = 0;
      v101 = 0;
      if ( sscanf(v79, "%fx%f%2s IS%d MT%d", (char *)&v104 + 4, &v104, &v102, v105, &v101) != 5 )
        break;
      v80 = 2540.0;
      if ( v102 ^ 0x6E69 | v103 )
      {
        if ( v102 ^ 0x6D6D | v103 )
          break;
        v80 = 100.0;
      }
      v81 = 0;
      v82 = (int)(v80 * *(float *)&v104);
      v83 = (int)(v80 * *((float *)&v104 + 1));
      v84 = v83 <= v82;
      if ( v83 >= v82 )
        v85 = (int)(v80 * *(float *)&v104);
      else
        v85 = (int)(v80 * *((float *)&v104 + 1));
      if ( v83 > v82 )
        v82 = (int)(v80 * *((float *)&v104 + 1));
      if ( v84 )
        v86 = 3;
      else
        v86 = 4;
      v87 = &dword_10006D2A4;
      do
      {
        if ( *(v87 - 1) == v85 && *v87 == v82 )
          break;
        ++v81;
        v87 += 2;
      }
      while ( v81 != 24 );
      v88 = *(int *)(a2 + 1096);
      v89 = (_DWORD *)(a2 + 4 * v88);
      v89[275] = v81;
      v89[325] = v105[0];
      v89[300] = v101;
      v89[350] = v86;
      *(_DWORD *)(a2 + 1096) = v88 + 1;
      if ( v81 == 24 )
      {
        *(_DWORD *)(a2 + 1500) = v85;
        *(_DWORD *)(a2 + 1504) = v82;
      }
    }
    objc_release(v76);
    v75 = v99;
  }
  objc_release(v75);
  *(_DWORD *)(a2 + 988) = 10;
  v90 = *(void **)(a2 + 2040);
  *(_QWORD *)(a2 + 2040) = CFSTR("image/urf");
  objc_release(v90);
  if ( a3 )
  {
    v91 = 1LL;
  }
  else
  {
    v92 = urfNew(sub_1000412C0, a2);
    *(_QWORD *)(a2 + 2048) = v92;
    *(_QWORD *)(a2 + 2064) = sub_1000412C8;
    *(_QWORD *)(a2 + 2072) = sub_1000412D0;
    *(_QWORD *)(a2 + 2080) = sub_100041300;
    *(_QWORD *)(a2 + 2088) = sub_100041308;
    *(_QWORD *)(a2 + 2096) = sub_100041310;
    v91 = v92 != 0;
  }
  objc_release(v6);
  objc_release(v100);
  return v91;
}