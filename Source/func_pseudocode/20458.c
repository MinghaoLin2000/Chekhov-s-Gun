__Z30liteInitializeLiteDriverStructP25JobRequestAttributes_BaseP22ipp_value_resolution_tU13block_pointerFvPKcEP13lite_driver_si
__int64 __fastcall liteInitializeLiteDriverStruct(__int64 a1, int a2, id a3, __int64 a4, unsigned int a5)
{
  void (__fastcall **v8)(id, void *); // x19
  int v9; // w0
  id v10; // x8
  NSString *v11; // x21
  __int64 v12; // x22
  int v13; // w8
  int v14; // w8
  char v15; // w8
  int v16; // w9
  int v17; // w8
  int v18; // w10
  unsigned int v19; // w8
  __int64 v20; // x13
  signed int v21; // w12
  int *v22; // x11
  __int64 v23; // x13
  int v24; // t1
  unsigned int v25; // w8
  char v26; // w8
  __int64 v27; // x8
  _DWORD *v28; // x8
  __int64 v29; // x21
  __int64 v30; // x24
  _OWORD *v31; // x8
  char **v32; // x0
  __int64 v33; // x8
  unsigned int v34; // w9
  unsigned int v35; // s0
  __int64 v36; // x9
  char v37; // w0
  id v38; // x0
  void *v39; // x25
  __int64 v40; // x28
  const char *v41; // x27
  id v42; // x26
  NSString *v43; // x26
  void *v44; // x26
  __int64 v45; // x23
  const char *v46; // x28
  id v47; // x27
  NSString *v48; // x28
  int v49; // w8
  int *v50; // x9
  int v51; // w10
  int v52; // w10
  unsigned int (__fastcall *v53)(__int64, _QWORD); // x8
  _BYTE *v54; // x25
  int v55; // w8
  unsigned __int8 v56; // w9
  unsigned __int64 v57; // x8
  __int64 v58; // x9
  NSString *v59; // x23
  NSString *v60; // x24
  NSString *v61; // x24
  NSString *v62; // x24
  NSString *v63; // x24
  NSString *v64; // x24
  NSString *v65; // x24
  NSString *v66; // x24
  NSString *v67; // x24
  NSString *v68; // x24
  NSString *v69; // x24
  NSString *v70; // x24
  NSString *v71; // x24
  NSString *v72; // x24
  __int128 v73; // q1
  NSString *v74; // x24
  id v76; // [xsp+28h] [xbp-128h]
  id v77; // [xsp+30h] [xbp-120h]
  id v78; // [xsp+38h] [xbp-118h]
  unsigned int v79; // [xsp+44h] [xbp-10Ch] BYREF
  int v80[2]; // [xsp+48h] [xbp-108h] BYREF
  unsigned int v81; // [xsp+50h] [xbp-100h]
  unsigned int v82; // [xsp+54h] [xbp-FCh]
  __int64 v83; // [xsp+58h] [xbp-F8h]
  char v84[144]; // [xsp+60h] [xbp-F0h] BYREF

  v8 = (void (__fastcall **)(id, void *))objc_retain(a3);
  v79 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  if ( v9 )
  {
    if ( *(_DWORD *)(a4 + 128) && v9 <= 255 && *(_DWORD *)(a4 + 132) )
    {
      *(_DWORD *)(a4 + 88) = 1;
    }
    else
    {
      *(_DWORD *)(a4 + 88) = v9;
      LOBYTE(v9) = 1;
    }
  }
  else
  {
    LOBYTE(v9) = 1;
    *(_DWORD *)(a4 + 88) = 1;
  }
  *(_BYTE *)(a4 + 23) = v9;
  v10 = objc_retainAutoreleasedReturnValue((id)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 544LL))(a1));
  if ( !v10 )
  {
    v10 = objc_retainAutoreleasedReturnValue((id)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 448LL))(a1));
    if ( !v10 )
    {
      v78 = 0LL;
      v13 = (*(unsigned __int8 *)(a4 + 120) >> 1) & 1;
      goto LABEL_24;
    }
  }
  v78 = v10;
  if ( !(unsigned int)objc_msgSend(v10, "compare:", CFSTR("monochrome"))
    || !(unsigned int)objc_msgSend(v78, "compare:", CFSTR("auto-monochrome"))
    || !(unsigned int)objc_msgSend(v78, "compare:", CFSTR("process-monochrome")) )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 584LL))(a1)
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 576LL))(a1) == 5
      && *(_DWORD *)(a4 + 2016) )
    {
      LOBYTE(v13) = 8;
LABEL_24:
      *(_BYTE *)(a4 + 17) = v13;
      if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 584LL))(a1)
        || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 576LL))(a1) != 5
        || *(_BYTE *)(a4 + 17) != 1 )
      {
        goto LABEL_35;
      }
      v14 = *(_DWORD *)(a4 + 2012);
      if ( *(_DWORD *)(a4 + 2008) )
      {
        if ( !v14 )
        {
          v15 = 3;
LABEL_34:
          *(_BYTE *)(a4 + 17) = v15;
LABEL_35:
          v16 = *(unsigned __int8 *)(a4 + 19);
          if ( v16 == 5 )
            v17 = 1440;
          else
            v17 = 720;
          if ( v16 == 3 )
            v18 = 360;
          else
            v18 = v17;
          v19 = *(_DWORD *)(a4 + 2020);
          *(_DWORD *)(a4 + 36) = v19;
          v20 = *(unsigned int *)(a4 + 2000);
          if ( (int)v20 >= 2 )
          {
            v21 = *(_DWORD *)(a4 + 2024);
            if ( v21 <= v18 )
            {
              v22 = (int *)(a4 + 2028);
              v23 = v20 - 2;
              do
              {
                v19 = v21;
                *(_DWORD *)(a4 + 36) = v21;
                if ( !v23 )
                  break;
                v24 = *v22++;
                v21 = v24;
                --v23;
              }
              while ( v24 <= v18 );
            }
          }
          if ( v16 == 3 )
          {
            if ( v19 >= 0x169 )
            {
              v25 = v19 >> 1;
              *(_DWORD *)(a4 + 112) = v25;
              *(_DWORD *)(a4 + 116) = v25;
              *(_DWORD *)(a4 + 36) = v25;
              goto LABEL_54;
            }
          }
          else if ( v16 != 5 )
          {
            *(_DWORD *)(a4 + 112) = v19;
            if ( v19 >= 0x169 )
              v19 = (int)v19 / 2;
            goto LABEL_53;
          }
          *(_DWORD *)(a4 + 112) = v19;
LABEL_53:
          *(_DWORD *)(a4 + 116) = v19;
LABEL_54:
          v77 = objc_retainAutoreleasedReturnValue((id)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 672LL))(a1));
          if ( v77 )
          {
            if ( a5 == 1 || !(unsigned int)objc_msgSend(v77, "compare:", CFSTR("one-sided")) )
            {
              v26 = 1;
              goto LABEL_63;
            }
            if ( (*(_BYTE *)(a4 + 120) & 1) != 0 )
            {
              if ( !(unsigned int)objc_msgSend(v77, "compare:", CFSTR("two-sided-long-edge")) )
              {
                v26 = 3;
                goto LABEL_63;
              }
              if ( (*(_BYTE *)(a4 + 120) & 1) != 0
                && !(unsigned int)objc_msgSend(v77, "compare:", CFSTR("two-sided-short-edge")) )
              {
                v26 = 2;
LABEL_63:
                *(_BYTE *)(a4 + 18) = v26;
              }
            }
          }
          v27 = *(unsigned int *)(a4 + 988);
          *(_DWORD *)(a4 + 80) = v27;
          v28 = (_DWORD *)((char *)&MediaSizes + 8 * v27);
          LODWORD(v30) = *v28;
          LODWORD(v29) = v28[1];
          v79 = 0;
          if ( *(unsigned __int8 *)(a4 + 18) >= 2u
            && *(_DWORD *)(a4 + 956)
            && *(_DWORD *)(a4 + 960)
            && *(_DWORD *)(a4 + 964)
            && *(_DWORD *)(a4 + 968) )
          {
            v31 = (_OWORD *)(a4 + 956);
          }
          else
          {
            v31 = (_OWORD *)(a4 + 972);
          }
          *(_OWORD *)(a4 + 96) = *v31;
          if ( !(unsigned int)pwgInitSize((__int64)v80, a1, &v79) )
            goto LABEL_77;
          v32 = pwgMediaForSize(v80[0], v80[1], (__int64)v84);
          v30 = *((unsigned int *)v32 + 6);
          v29 = *((unsigned int *)v32 + 7);
          v33 = v81;
          if ( v79 )
          {
            v34 = v82;
            *(_DWORD *)(a4 + 96) = v81;
            *(_DWORD *)(a4 + 100) = v34;
            v35 = v83;
            *(_QWORD *)(a4 + 104) = v83;
            v36 = v35;
          }
          else
          {
            v36 = (unsigned int)v83;
          }
          if ( (int)v36 + (int)v33 >= (int)v30 )
          {
            v59 = objc_retainAutorelease(
                    objc_retainAutoreleasedReturnValue(
                      +[NSString stringWithFormat:](
                        &OBJC_CLASS___NSString,
                        "stringWithFormat:",
                        CFSTR("Unsupported margin/width combination: left:%d right:%d width:%d."),
                        v33,
                        v36,
                        v30)));
            v8[2](v8, (void *)-[NSString UTF8String](v59, "UTF8String"));
          }
          else
          {
            if ( (int)(HIDWORD(v83) + v82) < (int)v29 )
            {
LABEL_77:
              v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 640LL))(a1);
              *(_DWORD *)(a4 + 84) = validate_enum<ipp_orient_e,unsigned char>(v37);
              v38 = objc_retainAutoreleasedReturnValue((id)(**(__int64 (__fastcall ***)(__int64))a1)(a1));
              v76 = v38;
              if ( v38 )
              {
                v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v38, "mediaSource"));
                if ( v39 )
                {
                  v40 = 0LL;
                  while ( 1 )
                  {
                    v41 = (&MediaSourceStrings)[v40];
                    v42 = objc_retainAutorelease(v39);
                    if ( !strcmp((const char *)objc_msgSend(v42, "UTF8String"), v41) )
                      break;
                    if ( ++v40 == 50 )
                    {
                      v43 = objc_retainAutorelease(
                              objc_retainAutoreleasedReturnValue(
                                +[NSString stringWithFormat:](
                                  &OBJC_CLASS___NSString,
                                  "stringWithFormat:",
                                  CFSTR("Unsupported URF media-source \"%@\"."),
                                  v42)));
                      v8[2](v8, (void *)-[NSString UTF8String](v43, "UTF8String"));
                      objc_release(v43);
                      LOBYTE(v40) = 0;
                      break;
                    }
                  }
                  *(_BYTE *)(a4 + 21) = v40;
                }
                v44 = objc_retainAutoreleasedReturnValue(objc_msgSend(v76, "mediaType"));
                if ( v44 )
                {
                  v45 = 0LL;
                  while ( 1 )
                  {
                    v46 = (&MediaTypeStrings)[v45];
                    v47 = objc_retainAutorelease(v44);
                    if ( !strcmp((const char *)objc_msgSend(v47, "UTF8String"), v46) )
                      break;
                    if ( ++v45 == 14 )
                    {
                      v48 = objc_retainAutorelease(
                              objc_retainAutoreleasedReturnValue(
                                +[NSString stringWithFormat:](
                                  &OBJC_CLASS___NSString,
                                  "stringWithFormat:",
                                  CFSTR("Unsupported URF media-type \"%@\"."),
                                  v47)));
                      v8[2](v8, (void *)-[NSString UTF8String](v48, "UTF8String"));
                      objc_release(v48);
                      LOBYTE(v45) = 0;
                      break;
                    }
                  }
                  *(_BYTE *)(a4 + 20) = v45;
                }
                objc_release(v44);
                objc_release(v39);
              }
              if ( (int)v30 >= 1 && (int)v29 >= 1 )
              {
                v49 = 0;
                v50 = &dword_10006D2A4;
                do
                {
                  v51 = v30 - *(v50 - 1);
                  if ( v51 < 0 )
                    v51 = *(v50 - 1) - v30;
                  if ( (unsigned int)v51 <= 0xAF )
                  {
                    v52 = v29 - *v50;
                    if ( v52 < 0 )
                      v52 = *v50 - v29;
                    if ( (unsigned int)v52 < 0xB0 )
                      break;
                  }
                  ++v49;
                  v50 += 2;
                }
                while ( v49 != 24 );
                *(_DWORD *)(a4 + 80) = v49;
                *(_DWORD *)(a4 + 92) = 1;
              }
              if ( !v79 && *(_DWORD *)(a4 + 952) && (*(_BYTE *)(a4 + 19) == 5 || *(int *)(a4 + 80) <= 7) )
              {
                *(_QWORD *)(a4 + 96) = 0LL;
                *(_QWORD *)(a4 + 104) = 0LL;
              }
              v53 = *(unsigned int (__fastcall **)(__int64, _QWORD))(a4 + 2056);
              if ( v53 && !v53(a4, a5) )
              {
                v74 = objc_retainAutorelease(
                        objc_retainAutoreleasedReturnValue(
                          +[NSString stringWithFormat:](
                            &OBJC_CLASS___NSString,
                            "stringWithFormat:",
                            CFSTR("prepjob method returned 0, aborting."))));
                v8[2](v8, (void *)-[NSString UTF8String](v74, "UTF8String"));
                objc_release(v74);
                v12 = 0LL;
              }
              else
              {
                v54 = (_BYTE *)(a4 + 16);
                v55 = *(_DWORD *)(a4 + 36);
                *(_DWORD *)(a4 + 28) = v55 * (int)v30 / 0x9ECu;
                *(_DWORD *)(a4 + 32) = v55 * (int)v29 / 0x9ECu;
                v56 = *(_BYTE *)(a4 + 17) - 1;
                if ( v56 > 7u )
                {
                  LOBYTE(v57) = 8;
                  v58 = 8LL;
                }
                else
                {
                  v57 = 0x1030080808300818uLL >> (8 * v56);
                  v58 = dword_10006D958[(char)v56];
                }
                *v54 = v57;
                v60 = objc_retainAutorelease(
                        objc_retainAutoreleasedReturnValue(
                          +[NSString stringWithFormat:](
                            &OBJC_CLASS___NSString,
                            "stringWithFormat:",
                            CFSTR("header.bitsPerPixel = %u"),
                            v58)));
                v8[2](v8, (void *)-[NSString UTF8String](v60, "UTF8String"));
                objc_release(v60);
                v61 = objc_retainAutorelease(
                        objc_retainAutoreleasedReturnValue(
                          +[NSString stringWithFormat:](
                            &OBJC_CLASS___NSString,
                            "stringWithFormat:",
                            CFSTR("header.colorSpace = %u"),
                            *(unsigned __int8 *)(a4 + 17))));
                v8[2](v8, (void *)-[NSString UTF8String](v61, "UTF8String"));
                objc_release(v61);
                v62 = objc_retainAutorelease(
                        objc_retainAutoreleasedReturnValue(
                          +[NSString stringWithFormat:](
                            &OBJC_CLASS___NSString,
                            "stringWithFormat:",
                            CFSTR("header.duplexMode = %u"),
                            *(unsigned __int8 *)(a4 + 18))));
                v8[2](v8, (void *)-[NSString UTF8String](v62, "UTF8String"));
                objc_release(v62);
                v63 = objc_retainAutorelease(
                        objc_retainAutoreleasedReturnValue(
                          +[NSString stringWithFormat:](
                            &OBJC_CLASS___NSString,
                            "stringWithFormat:",
                            CFSTR("header.printQuality = %u"),
                            *(unsigned __int8 *)(a4 + 19))));
                v8[2](v8, (void *)-[NSString UTF8String](v63, "UTF8String"));
                objc_release(v63);
                v64 = objc_retainAutorelease(
                        objc_retainAutoreleasedReturnValue(
                          +[NSString stringWithFormat:](
                            &OBJC_CLASS___NSString,
                            "stringWithFormat:",
                            CFSTR("header.mediaType = %u"),
                            *(unsigned __int8 *)(a4 + 20))));
                v8[2](v8, (void *)-[NSString UTF8String](v64, "UTF8String"));
                objc_release(v64);
                v65 = objc_retainAutorelease(
                        objc_retainAutoreleasedReturnValue(
                          +[NSString stringWithFormat:](
                            &OBJC_CLASS___NSString,
                            "stringWithFormat:",
                            CFSTR("header.inputSlot = %u"),
                            *(unsigned __int8 *)(a4 + 21))));
                v8[2](v8, (void *)-[NSString UTF8String](v65, "UTF8String"));
                objc_release(v65);
                v66 = objc_retainAutorelease(
                        objc_retainAutoreleasedReturnValue(
                          +[NSString stringWithFormat:](
                            &OBJC_CLASS___NSString,
                            "stringWithFormat:",
                            CFSTR("header.outputBin = %u"),
                            *(unsigned __int8 *)(a4 + 22))));
                v8[2](v8, (void *)-[NSString UTF8String](v66, "UTF8String"));
                objc_release(v66);
                v67 = objc_retainAutorelease(
                        objc_retainAutoreleasedReturnValue(
                          +[NSString stringWithFormat:](
                            &OBJC_CLASS___NSString,
                            "stringWithFormat:",
                            CFSTR("header.finishings = %u %u %u %u"),
                            *(unsigned __int8 *)(a4 + 24),
                            *(unsigned __int8 *)(a4 + 25),
                            *(unsigned __int8 *)(a4 + 26),
                            *(unsigned __int8 *)(a4 + 27))));
                v8[2](v8, (void *)-[NSString UTF8String](v67, "UTF8String"));
                objc_release(v67);
                v68 = objc_retainAutorelease(
                        objc_retainAutoreleasedReturnValue(
                          +[NSString stringWithFormat:](
                            &OBJC_CLASS___NSString,
                            "stringWithFormat:",
                            CFSTR("header.width = %u"),
                            *(unsigned int *)(a4 + 28))));
                v8[2](v8, (void *)-[NSString UTF8String](v68, "UTF8String"));
                objc_release(v68);
                v69 = objc_retainAutorelease(
                        objc_retainAutoreleasedReturnValue(
                          +[NSString stringWithFormat:](
                            &OBJC_CLASS___NSString,
                            "stringWithFormat:",
                            CFSTR("header.height = %u"),
                            *(unsigned int *)(a4 + 32))));
                v8[2](v8, (void *)-[NSString UTF8String](v69, "UTF8String"));
                objc_release(v69);
                v70 = objc_retainAutorelease(
                        objc_retainAutoreleasedReturnValue(
                          +[NSString stringWithFormat:](
                            &OBJC_CLASS___NSString,
                            "stringWithFormat:",
                            CFSTR("header.resolution = %u"),
                            *(unsigned int *)(a4 + 36))));
                v8[2](v8, (void *)-[NSString UTF8String](v70, "UTF8String"));
                objc_release(v70);
                v71 = objc_retainAutorelease(
                        objc_retainAutoreleasedReturnValue(
                          +[NSString stringWithFormat:](
                            &OBJC_CLASS___NSString,
                            "stringWithFormat:",
                            CFSTR("xres = %u"),
                            *(unsigned int *)(a4 + 112))));
                v8[2](v8, (void *)-[NSString UTF8String](v71, "UTF8String"));
                objc_release(v71);
                v72 = objc_retainAutorelease(
                        objc_retainAutoreleasedReturnValue(
                          +[NSString stringWithFormat:](
                            &OBJC_CLASS___NSString,
                            "stringWithFormat:",
                            CFSTR("yres = %u"),
                            *(unsigned int *)(a4 + 116))));
                v8[2](v8, (void *)-[NSString UTF8String](v72, "UTF8String"));
                objc_release(v72);
                v73 = *(_OWORD *)(a4 + 32);
                *(_OWORD *)(a4 + 48) = *(_OWORD *)v54;
                *(_OWORD *)(a4 + 64) = v73;
                v12 = 1LL;
              }
              objc_release(v76);
              goto LABEL_118;
            }
            v59 = objc_retainAutorelease(
                    objc_retainAutoreleasedReturnValue(
                      +[NSString stringWithFormat:](
                        &OBJC_CLASS___NSString,
                        "stringWithFormat:",
                        CFSTR("Unsupported margin/width combination: bottom:%d top:%d height:%d."),
                        v82,
                        HIDWORD(v83),
                        v29)));
            v8[2](v8, (void *)-[NSString UTF8String](v59, "UTF8String"));
          }
          objc_release(v59);
          v12 = 0LL;
LABEL_118:
          objc_release(v77);
          goto LABEL_119;
        }
      }
      else if ( !v14 )
      {
        goto LABEL_35;
      }
      v15 = 7;
      goto LABEL_34;
    }
LABEL_23:
    LOBYTE(v13) = 0;
    goto LABEL_24;
  }
  if ( (*(_BYTE *)(a4 + 120) & 2) != 0
    && (!(unsigned int)objc_msgSend(v78, "compare:", CFSTR("color"))
     || (*(_BYTE *)(a4 + 120) & 2) != 0 && !(unsigned int)objc_msgSend(v78, "compare:", CFSTR("auto"))) )
  {
    LOBYTE(v13) = 1;
    goto LABEL_24;
  }
  if ( !(unsigned int)objc_msgSend(v78, "compare:", CFSTR("auto")) )
    goto LABEL_23;
  v11 = objc_retainAutorelease(
          objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("Unsupported outputMode %@ "),
              v78)));
  v8[2](v8, (void *)-[NSString UTF8String](v11, "UTF8String"));
  objc_release(v11);
  v12 = 0LL;
LABEL_119:
  objc_release(v78);
  objc_release(v8);
  return v12;
}