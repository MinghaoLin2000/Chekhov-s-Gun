__Z16_liteCloseDriverP10lite_job_tP13lite_driver_s
__int64 __fastcall _liteCloseDriver(lite_job_t *a1, lite_driver_s *a2)
{
  lite_job_t *v2; // x22
  os_log_s *v3; // x19
  unsigned int v4; // w20
  unsigned int v5; // w0
  void *v6; // x24
  lite_job_t *v7; // x20
  os_log_s *v8; // x19
  unsigned int v9; // w21
  unsigned int v10; // w0
  id v11; // x23
  device_http_t *job_stream_http; // x0
  os_log_s *v13; // x19
  unsigned int v14; // w21
  unsigned int v15; // w0
  const char *v16; // x8
  void *v17; // x19
  ipp_attribute_t *v18; // x22
  os_log_s *v19; // x19
  unsigned int v20; // w21
  unsigned int v21; // w0
  const char *v22; // x8
  os_log_s *v23; // x19
  unsigned int v24; // w21
  unsigned int v25; // w0
  int v26; // w0
  int v27; // w19
  void *v28; // x21
  unsigned int v29; // w0
  const __CFString *v30; // x8
  const __CFString *v31; // x10
  NSString *v32; // x25
  NSString *v33; // x19
  os_log_s *v34; // x25
  unsigned int v35; // w21
  unsigned int v36; // w0
  void *v37; // x21
  unsigned int v38; // w0
  const __CFString *v39; // x8
  NSString *v40; // x25
  lite_printer_t *v41; // x25
  lite_printer_t *v42; // x26
  NSString *v43; // x25
  _BOOL4 v44; // w21
  void *v45; // x21
  unsigned int v46; // w0
  const __CFString *v47; // x8
  const __CFString *v48; // x10
  NSString *v49; // x25
  lite_printer_t *v50; // x25
  lite_printer_t *v51; // x26
  NSString *v52; // x25
  _BOOL4 v53; // w21
  void *v54; // x21
  unsigned int v55; // w0
  const __CFString *v56; // x8
  NSString *v57; // x25
  lite_printer_t *v58; // x25
  NSString *v59; // x25
  _BOOL4 v60; // w21
  void *v61; // x21
  unsigned int v62; // w0
  const __CFString *v63; // x8
  NSString *v64; // x25
  lite_printer_t *v65; // x25
  lite_printer_t *v66; // x26
  NSString *v67; // x25
  _BOOL4 v68; // w21
  lite_printer_t *v69; // x25
  os_log_s *v70; // x25
  unsigned int v71; // w21
  unsigned int v72; // w26
  unsigned int v73; // w0
  const char *v74; // x8
  void *v75; // x21
  unsigned int v76; // w0
  const __CFString *v77; // x8
  NSString *v78; // x25
  lite_printer_t *v79; // x25
  lite_printer_t *v80; // x26
  NSString *v81; // x25
  _BOOL4 v82; // w21
  NSString *v83; // x25
  unsigned int v84; // w21
  unsigned int v85; // w26
  unsigned int v86; // w0
  const char *v87; // x8
  unsigned int v88; // w21
  unsigned int v89; // w26
  unsigned int v90; // w0
  const char *v91; // x8
  unsigned int v92; // w21
  unsigned int v93; // w26
  unsigned int v94; // w0
  const char *v95; // x8
  unsigned int v96; // w21
  unsigned int v97; // w0
  os_log_s *v98; // x25
  unsigned int v99; // w21
  unsigned int v100; // w0
  os_log_s *v101; // x25
  unsigned int v102; // w21
  unsigned int v103; // w26
  unsigned int v104; // w0
  const char *v105; // x8
  NSString *v106; // x25
  lite_printer_t *v107; // x25
  lite_printer_t *v108; // x26
  NSString *v109; // x25
  _BOOL4 v110; // w26
  NSString *v111; // x25
  unsigned int v112; // w21
  unsigned int v113; // w26
  unsigned int v114; // w0
  const char *v115; // x8
  int v116; // w21
  lite_printer_t *v117; // x19
  void *v118; // x26
  int v119; // w19
  os_log_s *v120; // x19
  unsigned int v121; // w21
  unsigned int v122; // w0
  IPPSession *v123; // x19
  lite_printer_t *v124; // x22
  __int64 v125; // x19
  os_log_s *v126; // x24
  unsigned int v127; // w21
  unsigned int v128; // w0
  NSString *v129; // x22
  lite_printer_t *v130; // x19
  lite_printer_t *v131; // x22
  NSString *v132; // x19
  _BOOL4 v133; // w21
  os_log_s *v134; // x19
  unsigned int v135; // w21
  unsigned int v136; // w22
  id v137; // x24
  __int64 JobImpressionsCompleted; // x19
  os_log_s *v139; // x24
  unsigned int v140; // w21
  unsigned int v141; // w0
  os_log_s *v142; // x1
  lite_printer_t *v143; // x19
  lite_printer_t *v144; // x22
  unsigned int v145; // w21
  unsigned int v146; // w0
  os_log_s *v147; // x19
  unsigned int v148; // w21
  unsigned int v149; // w22
  unsigned int v150; // w0
  void *v151; // x21
  int v152; // w28
  __int64 v153; // x27
  __int64 v154; // x19
  void *v155; // x25
  os_log_s *v156; // x24
  unsigned int v157; // w22
  unsigned int v158; // w0
  NSString *v159; // x22
  NSString *v160; // x24
  os_log_s *v161; // x22
  unsigned int v162; // w23
  unsigned int v163; // w0
  os_log_s *v164; // x22
  unsigned int v165; // w23
  unsigned int v166; // w0
  NSString *v167; // x22
  _BOOL4 v168; // w23
  unsigned int v169; // w21
  unsigned int v170; // w24
  id v171; // x22
  unsigned int v172; // w21
  unsigned int v173; // w0
  NSString *v174; // x19
  os_log_s *v175; // x19
  unsigned int v176; // w21
  unsigned int v177; // w22
  unsigned int v178; // w0
  const char *v179; // x8
  os_log_s *v180; // x23
  unsigned int v181; // w21
  unsigned int v182; // w0
  lite_printer_t *v183; // x23
  lite_printer_t *v184; // x22
  NSString *v185; // x22
  _BOOL4 v186; // w19
  os_log_s *v187; // x23
  unsigned int v188; // w21
  unsigned int v189; // w0
  int *v190; // x8
  unsigned int v191; // w21
  unsigned int v192; // w0
  int v193; // w8
  signed int v194; // w9
  os_log_s *v195; // x23
  unsigned int v196; // w21
  unsigned int v197; // w22
  unsigned int v198; // w0
  const char *v199; // x8
  NSString *v200; // x22
  NSString *v201; // x19
  lite_printer_t *v202; // x22
  lite_printer_t *v203; // x23
  unsigned int v204; // w0
  int v205; // w8
  signed int v207; // [xsp+4Ch] [xbp-204h]
  signed int v208; // [xsp+6Ch] [xbp-1E4h]
  int v209; // [xsp+90h] [xbp-1C0h]
  unsigned int v210; // [xsp+94h] [xbp-1BCh]
  NSString *obj; // [xsp+98h] [xbp-1B8h]
  NSString *v212; // [xsp+A0h] [xbp-1B0h]
  __int64 JobState; // [xsp+A8h] [xbp-1A8h]
  int IXInteger; // [xsp+B4h] [xbp-19Ch]
  lite_job_t *v215; // [xsp+B8h] [xbp-198h]
  __int128 v216; // [xsp+C0h] [xbp-190h] BYREF
  __int128 v217; // [xsp+D0h] [xbp-180h]
  __int128 v218; // [xsp+E0h] [xbp-170h]
  __int128 v219; // [xsp+F0h] [xbp-160h]
  uint8_t v220[128]; // [xsp+100h] [xbp-150h] BYREF
  uint8_t v221[4]; // [xsp+180h] [xbp-D0h] BYREF
  unsigned int v222; // [xsp+184h] [xbp-CCh]
  __int16 v223; // [xsp+188h] [xbp-C8h]
  unsigned int v224; // [xsp+18Ah] [xbp-C6h]
  __int16 v225; // [xsp+18Eh] [xbp-C2h]
  _BYTE v226[14]; // [xsp+190h] [xbp-C0h]
  __int16 v227; // [xsp+19Eh] [xbp-B2h]
  NSString *v228; // [xsp+1A0h] [xbp-B0h]
  uint8_t buf[4]; // [xsp+1B0h] [xbp-A0h] BYREF
  unsigned int v230; // [xsp+1B4h] [xbp-9Ch]
  __int16 v231; // [xsp+1B8h] [xbp-98h]
  unsigned int v232; // [xsp+1BAh] [xbp-96h]
  __int16 v233; // [xsp+1BEh] [xbp-92h]
  void *v234; // [xsp+1C0h] [xbp-90h]
  __int16 v235; // [xsp+1C8h] [xbp-88h]
  _BYTE v236[14]; // [xsp+1CAh] [xbp-86h]
  id v237; // [xsp+1D8h] [xbp-78h]
  id v238; // [xsp+1E0h] [xbp-70h]

  v2 = objc_retain(a1);
  v3 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_DEFAULT) )
  {
    v4 = -[lite_job_t printd_job_id](v2, "printd_job_id");
    if ( v2 )
      v5 = -[lite_job_t destination_job_id](v2, "destination_job_id");
    else
      v5 = -1;
    *(_DWORD *)buf = 67109376;
    v230 = v4;
    v231 = 1024;
    v232 = v5;
    _os_log_impl((void *)&_mh_execute_header, v3, OS_LOG_TYPE_DEFAULT, "[Job %d][%d] Closing job.", buf, 0xEu);
  }
  v215 = v2;
  objc_release(v3);
  if ( !v2->job_stream_http )
  {
    v210 = 1;
    goto LABEL_243;
  }
  v6 = objc_autoreleasePoolPush();
  v7 = objc_retain(v2);
  v8 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEFAULT) )
  {
    v9 = -[lite_job_t printd_job_id](v7, "printd_job_id");
    v10 = -[lite_job_t destination_job_id](v7, "destination_job_id");
    *(_DWORD *)buf = 67109376;
    v230 = v9;
    v231 = 1024;
    v232 = v10;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v8,
      OS_LOG_TYPE_DEFAULT,
      "[Job %d][%d] Finishing IPP submission.",
      buf,
      0xEu);
  }
  objc_release(v8);
  v11 = objc_retainAutoreleasedReturnValue(-[device_http_t finishStreamedIPPRequest](v7->job_stream_http, "finishStreamedIPPRequest"));
  job_stream_http = v7->job_stream_http;
  v7->job_stream_http = 0LL;
  objc_release(job_stream_http);
  v13 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
  if ( os_log_type_enabled(v13, OS_LOG_TYPE_DEFAULT) )
  {
    v14 = -[lite_job_t printd_job_id](v7, "printd_job_id");
    v15 = -[lite_job_t destination_job_id](v7, "destination_job_id");
    if ( v7->op_for_print == 6 )
      v16 = "Send-Document";
    else
      v16 = "Print-Job";
    *(_DWORD *)buf = 67109890;
    v230 = v14;
    v231 = 1024;
    v232 = v15;
    v233 = 2080;
    v234 = (void *)v16;
    v235 = 2112;
    *(_QWORD *)v236 = v11;
    _os_log_impl((void *)&_mh_execute_header, v13, OS_LOG_TYPE_DEFAULT, "[Job %d][%d] %s result is %@", buf, 0x22u);
  }
  objc_release(v13);
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "ippResponse"));
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "_findAttribute0:valueTag:", CFSTR("job-id"), 33LL));
  objc_release(v17);
  if ( v18 && (IXInteger = (unsigned int)ippGetIXInteger(v18, 0)) != 0 )
  {
    v19 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v19, OS_LOG_TYPE_DEFAULT) )
    {
      v20 = -[lite_job_t printd_job_id](v7, "printd_job_id");
      v21 = -[lite_job_t destination_job_id](v7, "destination_job_id");
      if ( v7->op_for_print == 6 )
        v22 = "Send-Document";
      else
        v22 = "Print-Job";
      *(_DWORD *)buf = 67109890;
      v230 = v20;
      v231 = 1024;
      v232 = v21;
      v233 = 2080;
      v234 = (void *)v22;
      v235 = 1024;
      *(_DWORD *)v236 = IXInteger;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v19,
        OS_LOG_TYPE_DEFAULT,
        "[Job %d][%d] %s returned job-id is %d.",
        buf,
        0x1Eu);
    }
    objc_release(v19);
    -[lite_job_t setDestination_job_id:](v7, "setDestination_job_id:", (unsigned int)IXInteger);
    v7->concurrent_monitor = 0;
  }
  else
  {
    v23 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v23, OS_LOG_TYPE_DEFAULT) )
    {
      v24 = -[lite_job_t printd_job_id](v7, "printd_job_id");
      v25 = -[lite_job_t destination_job_id](v7, "destination_job_id");
      *(_DWORD *)buf = 67109376;
      v230 = v24;
      v231 = 1024;
      v232 = v25;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v23,
        OS_LOG_TYPE_DEFAULT,
        "[Job %d][%d] No job-id found in response.",
        buf,
        0xEu);
    }
    objc_release(v23);
    IXInteger = 0;
  }
  v26 = (unsigned int)objc_msgSend(v11, "ippStatus");
  v27 = 1;
  if ( v26 <= 1051 )
  {
    switch ( v26 )
    {
      case 1025:
      case 1026:
      case 1027:
        goto LABEL_64;
      case 1028:
      case 1029:
      case 1030:
      case 1032:
      case 1033:
      case 1034:
      case 1035:
      case 1036:
      case 1037:
      case 1038:
        goto LABEL_92;
      case 1031:
        goto LABEL_58;
      case 1039:
      case 1040:
        v28 = objc_msgSend(v11, "ippStatus");
        v29 = -[lite_job_t is_canceled](v7, "is_canceled");
        v30 = CFSTR("NO");
        if ( v29 )
          v31 = CFSTR("YES");
        else
          v31 = CFSTR("NO");
        if ( v7->force_uncompressed )
          v30 = CFSTR("YES");
        v32 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("ipp status 0x%x job_canceled? %@ - force_uncompressed already? %@\x01"),
                  v28,
                  v31,
                  v30));
        v33 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("%s:%d/%@"),
                  "_finishJobSubmission",
                  351LL,
                  v32));
        objc_release(v32);
        v34 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v34, OS_LOG_TYPE_DEFAULT) )
        {
          v35 = -[lite_job_t printd_job_id](v7, "printd_job_id");
          v36 = -[lite_job_t destination_job_id](v7, "destination_job_id");
          *(_DWORD *)buf = 67109634;
          v230 = v35;
          v231 = 1024;
          v232 = v36;
          v233 = 2112;
          v234 = v33;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v34,
            OS_LOG_TYPE_DEFAULT,
            "[Job %d][%d] Forcing uncompressed: %@",
            buf,
            0x18u);
        }
        objc_release(v34);
        v7->force_uncompressed = 1;
        IXInteger = -[lite_job_t is_canceled](v7, "is_canceled");
        goto LABEL_125;
      case 1041:
        goto LABEL_44;
      default:
        v209 = IXInteger;
        if ( (unsigned int)v26 < 3 )
          goto LABEL_126;
        if ( v26 != 1051 )
          goto LABEL_92;
LABEL_44:
        v45 = objc_msgSend(v11, "ippStatus");
        v46 = -[lite_job_t is_canceled](v7, "is_canceled");
        v47 = CFSTR("NO");
        if ( v46 )
          v48 = CFSTR("YES");
        else
          v48 = CFSTR("NO");
        if ( v7->force_raster )
          v47 = CFSTR("YES");
        v49 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("ipp status 0x%x job_canceled? %@ - force_raster already? %@\x01"),
                  v45,
                  v48,
                  v47));
        v33 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("%s:%d/%@"),
                  "_finishJobSubmission",
                  321LL,
                  v49));
        objc_release(v49);
        if ( v7->force_raster )
        {
          v50 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
          v51 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
          liteNotifyPrinter(v50, -[lite_printer_t reasons](v51, "reasons") | 0x200000, v33);
          objc_release(v51);
          objc_release(v50);
          v52 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithFormat:](
                    &OBJC_CLASS___NSString,
                    "stringWithFormat:",
                    CFSTR("%s:%d"),
                    "_finishJobSubmission",
                    326LL));
          v53 = _liteNotifyCheck(86400, v52) == 2;
          objc_release(v52);
          if ( v53 )
          {
            -[lite_job_t cancelThisJob](v7, "cancelThisJob");
          }
          else
          {
            _liteNotifyCancel(v33);
            v101 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
            if ( os_log_type_enabled(v101, OS_LOG_TYPE_DEFAULT) )
            {
              v102 = -[lite_job_t printd_job_id](v7, "printd_job_id");
              v103 = -[lite_job_t destination_job_id](v7, "destination_job_id");
              v104 = -[lite_job_t is_canceled](v7, "is_canceled");
              v105 = "Retrying";
              *(_DWORD *)buf = 67110146;
              v230 = v102;
              v231 = 1024;
              if ( v104 )
                v105 = "Canceling";
              v232 = v103;
              v233 = 2080;
              v234 = (void *)v105;
              v235 = 1024;
              *(_DWORD *)v236 = 333;
              *(_WORD *)&v236[4] = 2112;
              *(_QWORD *)&v236[6] = v33;
              _os_log_impl(
                (void *)&_mh_execute_header,
                v101,
                OS_LOG_TYPE_DEFAULT,
                "[Job %d][%d] %s job on error response:%d (%@).",
                buf,
                0x28u);
            }
            objc_release(v101);
          }
        }
        else
        {
          v98 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
          if ( os_log_type_enabled(v98, OS_LOG_TYPE_DEFAULT) )
          {
            v99 = -[lite_job_t printd_job_id](v7, "printd_job_id");
            v100 = -[lite_job_t destination_job_id](v7, "destination_job_id");
            *(_DWORD *)buf = 67109634;
            v230 = v99;
            v231 = 1024;
            v232 = v100;
            v233 = 2112;
            v234 = v33;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v98,
              OS_LOG_TYPE_DEFAULT,
              "[Job %d][%d] Possibly retry job on error to force raster: %@",
              buf,
              0x18u);
          }
          objc_release(v98);
          v7->force_raster = 1;
        }
        IXInteger = -[lite_job_t is_canceled](v7, "is_canceled");
        break;
    }
    goto LABEL_125;
  }
  if ( v26 > 1281 )
  {
    v209 = IXInteger;
    switch ( v26 )
    {
      case 1282:
        goto LABEL_58;
      case 1283:
      case 1284:
      case 1288:
      case 1289:
      case 1290:
        goto LABEL_92;
      case 1285:
        goto LABEL_126;
      case 1286:
      case 1287:
      case 1291:
        v37 = objc_msgSend(v11, "ippStatus");
        v38 = -[lite_job_t is_canceled](v7, "is_canceled");
        v39 = CFSTR("NO");
        if ( v38 )
          v39 = CFSTR("YES");
        v40 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("ipp status 0x%x job_canceled? %@"),
                  v37,
                  v39));
        v33 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("%s:%d/%@"),
                  "_finishJobSubmission",
                  296LL,
                  v40));
        objc_release(v40);
        v41 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
        v42 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
        liteNotifyPrinter(v41, -[lite_printer_t reasons](v42, "reasons") | 0x20, v33);
        objc_release(v42);
        objc_release(v41);
        v43 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("%s:%d"),
                  "_finishJobSubmission",
                  300LL));
        v44 = _liteNotifyCheck(86400, v43) == 2;
        objc_release(v43);
        if ( v44 )
        {
          -[lite_job_t cancelThisJob](v7, "cancelThisJob");
        }
        else
        {
          _liteNotifyCancel(v33);
          if ( -[lite_job_t destination_job_id](v7, "destination_job_id") && v7->op_for_print == 6 )
          {
            v83 = objc_retainAutoreleasedReturnValue(
                    +[NSString stringWithFormat:](
                      &OBJC_CLASS___NSString,
                      "stringWithFormat:",
                      CFSTR("cancel_has_job_id_and_is_send_document(%@)"),
                      v33));
            sub_10005348C(v7, v83);
            objc_release(v83);
          }
        }
        v70 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v70, OS_LOG_TYPE_DEFAULT) )
        {
          v84 = -[lite_job_t printd_job_id](v7, "printd_job_id");
          v85 = -[lite_job_t destination_job_id](v7, "destination_job_id");
          v86 = -[lite_job_t is_canceled](v7, "is_canceled");
          v87 = "Retrying";
          *(_DWORD *)buf = 67109890;
          v230 = v84;
          v231 = 1024;
          if ( v86 )
            v87 = "Canceling";
          v232 = v85;
          v233 = 2080;
          v234 = (void *)v87;
          v235 = 2112;
          *(_QWORD *)v236 = v33;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v70,
            OS_LOG_TYPE_DEFAULT,
            "[Job %d][%d] %s job on busy error (%@).",
            buf,
            0x22u);
        }
        goto LABEL_124;
      default:
        if ( v26 == 4096 )
        {
          -[lite_job_t cancelThisJob](v7, "cancelThisJob");
          v33 = (NSString *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
          if ( os_log_type_enabled((os_log_t)v33, OS_LOG_TYPE_ERROR) )
          {
            v96 = -[lite_job_t printd_job_id](v7, "printd_job_id");
            v97 = -[lite_job_t destination_job_id](v7, "destination_job_id");
            *(_DWORD *)buf = 67109376;
            v230 = v96;
            v231 = 1024;
            v232 = v97;
            _os_log_impl(
              (void *)&_mh_execute_header,
              (os_log_t)v33,
              OS_LOG_TYPE_ERROR,
              "[Job %d][%d] Canceling job on auth canceled.",
              buf,
              0xEu);
          }
          IXInteger = 1;
          goto LABEL_125;
        }
        if ( v26 != 4097 )
          goto LABEL_92;
LABEL_58:
        v54 = objc_msgSend(v11, "ippStatus");
        v55 = -[lite_job_t is_canceled](v7, "is_canceled");
        v56 = CFSTR("NO");
        if ( v55 )
          v56 = CFSTR("YES");
        v57 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("ipp status 0x%x job_canceled? %@"),
                  v54,
                  v56));
        v33 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("%s:%d/%@"),
                  "_finishJobSubmission",
                  228LL,
                  v57));
        objc_release(v57);
        v58 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
        liteNotifyPrinter(v58, 0x10000LL, v33);
        objc_release(v58);
        v59 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("%s:%d"),
                  "_finishJobSubmission",
                  232LL));
        v60 = _liteNotifyCheck(86400, v59) == 2;
        objc_release(v59);
        if ( v60 )
          -[lite_job_t cancelThisJob](v7, "cancelThisJob");
        else
          _liteNotifyCancel(v33);
        v70 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v70, OS_LOG_TYPE_ERROR) )
        {
          v88 = -[lite_job_t printd_job_id](v7, "printd_job_id");
          v89 = -[lite_job_t destination_job_id](v7, "destination_job_id");
          v90 = -[lite_job_t is_canceled](v7, "is_canceled");
          v91 = "Retrying";
          *(_DWORD *)buf = 67109890;
          v230 = v88;
          v231 = 1024;
          if ( v90 )
            v91 = "Canceling";
          v232 = v89;
          v233 = 2080;
          v234 = (void *)v91;
          v235 = 2112;
          *(_QWORD *)v236 = v33;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v70,
            OS_LOG_TYPE_ERROR,
            "[Job %d][%d] %s job on lost connection error (%@)",
            buf,
            0x22u);
        }
        break;
    }
    goto LABEL_124;
  }
  if ( v26 > 1179 )
  {
    if ( v26 != 1180 )
    {
      if ( v26 != 1183 )
        goto LABEL_92;
LABEL_64:
      v61 = objc_msgSend(v11, "ippStatus");
      v62 = -[lite_job_t is_canceled](v7, "is_canceled");
      v63 = CFSTR("NO");
      if ( v62 )
        v63 = CFSTR("YES");
      v64 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("ipp status 0x%x job_canceled? %@"),
                v61,
                v63));
      v33 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("%s:%d/%@"),
                "_finishJobSubmission",
                250LL,
                v64));
      objc_release(v64);
      v65 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
      v66 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
      liteNotifyPrinter(v65, -[lite_printer_t reasons](v66, "reasons") | 0x80000, v33);
      objc_release(v66);
      objc_release(v65);
      v67 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("%s:%d"),
                "_finishJobSubmission",
                254LL));
      v68 = _liteNotifyCheck(86400, v67) == 2;
      objc_release(v67);
      if ( v68 )
      {
        -[lite_job_t cancelThisJob](v7, "cancelThisJob");
      }
      else
      {
        _liteNotifyCancel(v33);
        v69 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
        liteNotifyClearPassword(v69);
        objc_release(v69);
      }
      v70 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
      if ( os_log_type_enabled(v70, OS_LOG_TYPE_ERROR) )
      {
        v71 = -[lite_job_t printd_job_id](v7, "printd_job_id");
        v72 = -[lite_job_t destination_job_id](v7, "destination_job_id");
        v73 = -[lite_job_t is_canceled](v7, "is_canceled");
        v74 = "Retrying";
        *(_DWORD *)buf = 67109890;
        v230 = v71;
        v231 = 1024;
        if ( v73 )
          v74 = "Canceling";
        v232 = v72;
        v233 = 2080;
        v234 = (void *)v74;
        v235 = 2112;
        *(_QWORD *)v236 = v33;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v70,
          OS_LOG_TYPE_ERROR,
          "[Job %d][%d] %s job on authorization error (%@).",
          buf,
          0x22u);
      }
LABEL_124:
      objc_release(v70);
      IXInteger = -[lite_job_t is_canceled](v7, "is_canceled");
LABEL_125:
      objc_release(v33);
      v27 = 0;
      v209 = 0;
      goto LABEL_126;
    }
LABEL_74:
    v75 = objc_msgSend(v11, "ippStatus");
    v76 = -[lite_job_t is_canceled](v7, "is_canceled");
    v77 = CFSTR("NO");
    if ( v76 )
      v77 = CFSTR("YES");
    v78 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("ipp status 0x%x job_canceled? %@"),
              v75,
              v77));
    v33 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("%s:%d/%@"),
              "_finishJobSubmission",
              271LL,
              v78));
    objc_release(v78);
    v79 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
    v80 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
    liteNotifyPrinter(v79, -[lite_printer_t reasons](v80, "reasons") | 0x100000, v33);
    objc_release(v80);
    objc_release(v79);
    v81 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("%s:%d"),
              "_finishJobSubmission",
              274LL));
    v82 = _liteNotifyCheck(86400, v81) == 2;
    objc_release(v81);
    if ( v82 )
      -[lite_job_t cancelThisJob](v7, "cancelThisJob");
    else
      _liteNotifyCancel(v33);
    v70 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v70, OS_LOG_TYPE_ERROR) )
    {
      v92 = -[lite_job_t printd_job_id](v7, "printd_job_id");
      v93 = -[lite_job_t destination_job_id](v7, "destination_job_id");
      v94 = -[lite_job_t is_canceled](v7, "is_canceled");
      v95 = "Retrying";
      *(_DWORD *)buf = 67109890;
      v230 = v92;
      v231 = 1024;
      if ( v94 )
        v95 = "Canceling";
      v232 = v93;
      v233 = 2080;
      v234 = (void *)v95;
      v235 = 2112;
      *(_QWORD *)v236 = v33;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v70,
        OS_LOG_TYPE_ERROR,
        "[Job %d][%d] %s job on account id missing error (%@).",
        buf,
        0x22u);
    }
    goto LABEL_124;
  }
  if ( v26 == 1052 )
    goto LABEL_74;
  if ( v26 == 1055 )
    goto LABEL_64;
LABEL_92:
  if ( !-[lite_job_t is_canceled](v7, "is_canceled") )
  {
    v106 = objc_retainAutoreleasedReturnValue(
             +[NSString stringWithFormat:](
               &OBJC_CLASS___NSString,
               "stringWithFormat:",
               CFSTR("ipp status 0x%x"),
               objc_msgSend(v11, "ippStatus")));
    v33 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("%s:%d/%@"),
              "_finishJobSubmission",
              368LL,
              v106));
    objc_release(v106);
    if ( (unsigned int)objc_msgSend(v11, "ippStatus") == 1182 )
    {
      v107 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
      v108 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
      liteNotifyPrinter(v107, -[lite_printer_t reasons](v108, "reasons") | 0x400000, v33);
    }
    else
    {
      v107 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
      v108 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
      liteNotifyPrinter(v107, -[lite_printer_t reasons](v108, "reasons") | 0x200000, v33);
    }
    objc_release(v108);
    objc_release(v107);
    v109 = objc_retainAutoreleasedReturnValue(
             +[NSString stringWithFormat:](
               &OBJC_CLASS___NSString,
               "stringWithFormat:",
               CFSTR("%s:%d"),
               "_finishJobSubmission",
               375LL));
    v110 = _liteNotifyCheck(86400, v109) == 2;
    objc_release(v109);
    if ( v110 )
    {
      -[lite_job_t cancelThisJob](v7, "cancelThisJob");
    }
    else
    {
      _liteNotifyCancel(v33);
      if ( -[lite_job_t destination_job_id](v7, "destination_job_id") && v7->op_for_print == 6 )
      {
        v111 = objc_retainAutoreleasedReturnValue(
                 +[NSString stringWithFormat:](
                   &OBJC_CLASS___NSString,
                   "stringWithFormat:",
                   CFSTR("cancel_has_job_id_and_is_send_document(%@)"),
                   v33));
        sub_10005348C(v7, v111);
        objc_release(v111);
      }
    }
    v70 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v70, OS_LOG_TYPE_DEFAULT) )
    {
      v112 = -[lite_job_t printd_job_id](v7, "printd_job_id");
      v113 = -[lite_job_t destination_job_id](v7, "destination_job_id");
      v114 = -[lite_job_t is_canceled](v7, "is_canceled");
      v115 = "Retrying";
      *(_DWORD *)buf = 67110146;
      v230 = v112;
      v231 = 1024;
      if ( v114 )
        v115 = "Canceling";
      v232 = v113;
      v233 = 2080;
      v234 = (void *)v115;
      v235 = 1024;
      *(_DWORD *)v236 = 394;
      *(_WORD *)&v236[4] = 2112;
      *(_QWORD *)&v236[6] = v33;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v70,
        OS_LOG_TYPE_DEFAULT,
        "[Job %d][%d] %s job on error response:%d (%@).",
        buf,
        0x28u);
    }
    goto LABEL_124;
  }
  v27 = 0;
  v209 = 0;
  IXInteger = 1;
LABEL_126:
  objc_release(v18);
  objc_release(v11);
  objc_release(v7);
  v2 = v215;
  objc_autoreleasePoolPop(v6);
  v116 = IXInteger;
  if ( !v27 )
  {
    v210 = IXInteger;
    goto LABEL_243;
  }
  if ( IXInteger < 1 )
    goto LABEL_239;
  v117 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
  -[lite_printer_t setBusy:](v117, "setBusy:", 0LL);
  objc_release(v117);
  v207 = 0;
  JobState = 3LL;
  v210 = IXInteger;
  v208 = 1;
  do
  {
    v118 = objc_autoreleasePoolPush();
    v2 = v215;
    v116 = IXInteger;
    if ( -[lite_job_t is_canceled](v7, "is_canceled") )
    {
      sub_10005348C(v7, CFSTR("cancel_externally"));
      v119 = 0;
      JobState = 7LL;
      goto LABEL_227;
    }
    v120 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v120, OS_LOG_TYPE_DEFAULT) )
    {
      v121 = -[lite_job_t printd_job_id](v7, "printd_job_id");
      v122 = -[lite_job_t destination_job_id](v7, "destination_job_id");
      *(_DWORD *)buf = 67109376;
      v230 = v121;
      v231 = 1024;
      v232 = v122;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v120,
        OS_LOG_TYPE_DEFAULT,
        "[Job %d][%d] Checking job status.",
        buf,
        0xEu);
    }
    objc_release(v120);
    v123 = objc_retainAutoreleasedReturnValue(-[lite_job_t ippSession](v7, "ippSession"));
    v124 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
    sub_100058CF8((int)buf, v123);
    objc_release(v124);
    objc_release(v123);
    v125 = sub_10005905C(v238, v237, buf);
    if ( (unsigned int)v125 >= 8 )
    {
      v126 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
      if ( os_log_type_enabled(v126, OS_LOG_TYPE_DEFAULT) )
      {
        v127 = -[lite_job_t printd_job_id](v7, "printd_job_id");
        v128 = -[lite_job_t destination_job_id](v7, "destination_job_id");
        *(_DWORD *)v221 = 67109632;
        v222 = v127;
        v223 = 1024;
        v224 = v128;
        v225 = 1024;
        *(_DWORD *)v226 = v125;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v126,
          OS_LOG_TYPE_DEFAULT,
          "[Job %d][%d] Get-Job-Attributes could not get status - %4.4x",
          v221,
          0x14u);
      }
      objc_release(v126);
      v129 = objc_retainAutoreleasedReturnValue(
               +[NSString stringWithFormat:](
                 &OBJC_CLASS___NSString,
                 "stringWithFormat:",
                 CFSTR("Get-Job-Attributes/0x%x"),
                 v125));
      v212 = objc_retainAutoreleasedReturnValue(
               +[NSString stringWithFormat:](
                 &OBJC_CLASS___NSString,
                 "stringWithFormat:",
                 CFSTR("%s:%d/%@"),
                 "_liteCloseDriver",
                 502LL,
                 v129));
      objc_release(v129);
      if ( (_DWORD)v125 == 1030 )
      {
        v130 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
        v131 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
        liteNotifyPrinter(v130, -[lite_printer_t reasons](v131, "reasons") | 0x200000, v212);
        objc_release(v131);
        objc_release(v130);
        v132 = objc_retainAutoreleasedReturnValue(
                 +[NSString stringWithFormat:](
                   &OBJC_CLASS___NSString,
                   "stringWithFormat:",
                   CFSTR("%s:%d"),
                   "_liteCloseDriver",
                   514LL));
        v133 = _liteNotifyCheck(86400, v132) == 2;
        objc_release(v132);
        if ( v133 )
        {
          -[lite_job_t cancelThisJob](v7, "cancelThisJob");
        }
        else
        {
          _liteNotifyCancel(v212);
          if ( -[lite_job_t destination_job_id](v7, "destination_job_id") && v7->op_for_print == 6 )
          {
            v174 = objc_retainAutoreleasedReturnValue(
                     +[NSString stringWithFormat:](
                       &OBJC_CLASS___NSString,
                       "stringWithFormat:",
                       CFSTR("cancel_closeDriver(%@)"),
                       v212));
            sub_10005348C(v7, v174);
            objc_release(v174);
          }
        }
        v175 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v175, OS_LOG_TYPE_DEFAULT) )
        {
          v176 = -[lite_job_t printd_job_id](v7, "printd_job_id");
          v177 = -[lite_job_t destination_job_id](v7, "destination_job_id");
          v178 = -[lite_job_t is_canceled](v7, "is_canceled");
          *(_DWORD *)v221 = 67110146;
          v179 = "Retrying";
          if ( v178 )
            v179 = "Canceling";
          v222 = v176;
          v223 = 1024;
          v224 = v177;
          v225 = 2080;
          *(_QWORD *)v226 = v179;
          *(_WORD *)&v226[8] = 1024;
          *(_DWORD *)&v226[10] = 527;
          v227 = 2112;
          v228 = v212;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v175,
            OS_LOG_TYPE_DEFAULT,
            "[Job %d][%d] %s job on error response:%d (%@).",
            v221,
            0x28u);
        }
        objc_release(v175);
        v210 = -[lite_job_t is_canceled](v7, "is_canceled");
        v119 = 1;
      }
      else
      {
        v143 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
        v144 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
        liteNotifyPrinter(v143, -[lite_printer_t reasons](v144, "reasons") | 0x8000, v212);
        objc_release(v144);
        objc_release(v143);
        -[lite_job_t cancelThisJob](v7, "cancelThisJob");
        v119 = 2;
      }
      goto LABEL_219;
    }
    v134 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v134, OS_LOG_TYPE_DEFAULT) )
    {
      v135 = -[lite_job_t printd_job_id](v7, "printd_job_id");
      v136 = -[lite_job_t destination_job_id](v7, "destination_job_id");
      if ( !*(_QWORD *)&v236[6] )
        __assert_rtn("response", "xcups_params.h", 418, "_response");
      v137 = objc_retain(objc_retainAutoreleasedReturnValue((id)sub_1000370DC(*(_QWORD *)&v236[6])));
      *(_DWORD *)v221 = 67109634;
      v222 = v135;
      v223 = 1024;
      v224 = v136;
      v225 = 2112;
      *(_QWORD *)v226 = v137;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v134,
        OS_LOG_TYPE_DEFAULT,
        "[Job %d][%d] Get-Job-Attributes result is %@",
        v221,
        0x18u);
      objc_release(v137);
      objc_release(v137);
    }
    objc_release(v134);
    if ( !*(_QWORD *)&v236[6] )
LABEL_244:
      __assert_rtn("response", "xcups_params.h", 418, "_response");
    if ( Printd_Parameters::_has_JobImpressionsCompleted(*(id **)&v236[6]) )
    {
      if ( !*(_QWORD *)&v236[6] )
        goto LABEL_244;
      JobImpressionsCompleted = Printd_Parameters::_get_JobImpressionsCompleted(*(Printd_Parameters **)&v236[6]);
      v139 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
      if ( !os_log_type_enabled(v139, OS_LOG_TYPE_DEFAULT) )
        goto LABEL_154;
      v140 = -[lite_job_t printd_job_id](v7, "printd_job_id");
      v141 = -[lite_job_t destination_job_id](v7, "destination_job_id");
      *(_DWORD *)v221 = 67109890;
      v222 = v140;
      v223 = 1024;
      v224 = v141;
      v225 = 2112;
      *(_QWORD *)v226 = IPPNomenclature::keyJobImpressionsCompleted;
      *(_WORD *)&v226[8] = 1024;
      *(_DWORD *)&v226[10] = JobImpressionsCompleted;
      v142 = v139;
      goto LABEL_153;
    }
    if ( !*(_QWORD *)&v236[6] )
      goto LABEL_244;
    if ( !Printd_Parameters::_has_JobMediaSheetsCompleted(*(id **)&v236[6]) )
      goto LABEL_157;
    if ( !*(_QWORD *)&v236[6] )
      goto LABEL_244;
    JobImpressionsCompleted = Printd_Parameters::_get_JobMediaSheetsCompleted(*(Printd_Parameters **)&v236[6]);
    v139 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v139, OS_LOG_TYPE_DEFAULT) )
    {
      v145 = -[lite_job_t printd_job_id](v7, "printd_job_id");
      v146 = -[lite_job_t destination_job_id](v7, "destination_job_id");
      *(_DWORD *)v221 = 67109890;
      v222 = v145;
      v223 = 1024;
      v224 = v146;
      v225 = 2112;
      *(_QWORD *)v226 = IPPNomenclature::keyJobMediaSheetsCompleted;
      *(_WORD *)&v226[8] = 1024;
      *(_DWORD *)&v226[10] = JobImpressionsCompleted;
      v142 = v139;
LABEL_153:
      _os_log_impl((void *)&_mh_execute_header, v142, OS_LOG_TYPE_DEFAULT, "[Job %d][%d] %@=%d", v221, 0x1Eu);
    }
LABEL_154:
    objc_release(v139);
    if ( (_DWORD)JobImpressionsCompleted != -1
      && -[lite_job_t sheetsCompleted](v7, "sheetsCompleted") != (_DWORD)JobImpressionsCompleted )
    {
      -[lite_job_t updateSheetsAndPostNotification:logMsg:](
        v7,
        "updateSheetsAndPostNotification:logMsg:",
        JobImpressionsCompleted,
        0LL);
      v207 = 0;
      v208 = 1;
    }
LABEL_157:
    if ( !*(_QWORD *)&v236[6] )
      __assert_rtn("response", "xcups_params.h", 418, "_response");
    v212 = (NSString *)objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_JobStateReasons(*(Printd_Parameters **)&v236[6]));
    if ( !-[NSString count](v212, "count") )
      goto LABEL_183;
    v147 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v147, OS_LOG_TYPE_DEFAULT) )
    {
      v148 = -[lite_job_t printd_job_id](v7, "printd_job_id");
      v149 = -[lite_job_t destination_job_id](v7, "destination_job_id");
      v150 = (unsigned int)-[NSString count](v212, "count");
      *(_DWORD *)v221 = 67109632;
      v222 = v148;
      v223 = 1024;
      v224 = v149;
      v225 = 1024;
      *(_DWORD *)v226 = v150;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v147,
        OS_LOG_TYPE_DEFAULT,
        "[Job %d][%d] Got %d job-state-reasons values.",
        v221,
        0x14u);
    }
    objc_release(v147);
    v218 = 0u;
    v219 = 0u;
    v216 = 0u;
    v217 = 0u;
    obj = objc_retain(v212);
    v151 = -[NSString countByEnumeratingWithState:objects:count:](
             obj,
             "countByEnumeratingWithState:objects:count:",
             &v216,
             v220,
             16LL);
    if ( !v151 )
    {
LABEL_182:
      objc_release(obj);
LABEL_183:
      if ( *(_QWORD *)&v236[6] )
      {
        if ( !Printd_Parameters::_has_JobState(*(id **)&v236[6]) )
        {
          obj = (NSString *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
          if ( os_log_type_enabled((os_log_t)obj, OS_LOG_TYPE_DEFAULT) )
          {
            v172 = -[lite_job_t printd_job_id](v7, "printd_job_id");
            v173 = -[lite_job_t destination_job_id](v7, "destination_job_id");
            *(_DWORD *)v221 = 67109632;
            v222 = v172;
            v223 = 1024;
            v224 = v173;
            v225 = 1024;
            *(_DWORD *)v226 = v209;
            _os_log_impl(
              (void *)&_mh_execute_header,
              (os_log_t)obj,
              OS_LOG_TYPE_DEFAULT,
              "[Job %d][%d] Unable to get job-state for remote job-id %d.",
              v221,
              0x14u);
          }
          v119 = 0;
          JobState = 9LL;
          goto LABEL_218;
        }
        if ( *(_QWORD *)&v236[6] )
        {
          JobState = Printd_Parameters::_get_JobState(*(void ***)&v236[6]);
          if ( (void *)-[lite_job_t localJobState](v7, "localJobState") == (void *)4 && JobState == 5 )
            -[lite_job_t set_processing](v7, "set_processing");
          obj = (NSString *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
          if ( os_log_type_enabled((os_log_t)obj, OS_LOG_TYPE_DEFAULT) )
          {
            v169 = -[lite_job_t printd_job_id](v7, "printd_job_id");
            v170 = -[lite_job_t destination_job_id](v7, "destination_job_id");
            v171 = objc_retain(objc_retainAutoreleasedReturnValue((id)jobStateString(JobState)));
            *(_DWORD *)v221 = 67109890;
            v222 = v169;
            v223 = 1024;
            v224 = v170;
            v225 = 1024;
            *(_DWORD *)v226 = JobState;
            *(_WORD *)&v226[4] = 2112;
            *(_QWORD *)&v226[6] = v171;
            _os_log_impl(
              (void *)&_mh_execute_header,
              (os_log_t)obj,
              OS_LOG_TYPE_DEFAULT,
              "[Job %d][%d] job-state=%d (%@)",
              v221,
              0x1Eu);
            objc_release(v171);
            objc_release(v171);
          }
          v119 = 0;
          goto LABEL_218;
        }
      }
      __assert_rtn("response", "xcups_params.h", 418, "_response");
    }
    v152 = 0;
    v153 = *(_QWORD *)v217;
LABEL_163:
    v154 = 0LL;
    while ( 1 )
    {
      if ( *(_QWORD *)v217 != v153 )
        objc_enumerationMutation(obj);
      v155 = *(void **)(*((_QWORD *)&v216 + 1) + 8 * v154);
      v156 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
      if ( os_log_type_enabled(v156, OS_LOG_TYPE_DEFAULT) )
      {
        v157 = -[lite_job_t printd_job_id](v7, "printd_job_id");
        v158 = -[lite_job_t destination_job_id](v7, "destination_job_id");
        *(_DWORD *)v221 = 67109890;
        v222 = v157;
        v223 = 1024;
        v224 = v158;
        v225 = 1024;
        *(_DWORD *)v226 = v152;
        *(_WORD *)&v226[4] = 2112;
        *(_QWORD *)&v226[6] = v155;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v156,
          OS_LOG_TYPE_DEFAULT,
          "[Job %d][%d] reason[%d] = %@",
          v221,
          0x1Eu);
        ++v152;
      }
      objc_release(v156);
      v159 = objc_retainAutoreleasedReturnValue(
               +[NSString stringWithFormat:](
                 &OBJC_CLASS___NSString,
                 "stringWithFormat:",
                 CFSTR("job-state-reason/%@"),
                 v155));
      v160 = objc_retainAutoreleasedReturnValue(
               +[NSString stringWithFormat:](
                 &OBJC_CLASS___NSString,
                 "stringWithFormat:",
                 CFSTR("%s:%d/%@"),
                 "_liteCloseDriver",
                 573LL,
                 v159));
      objc_release(v159);
      if ( !(unsigned int)objc_msgSend(v155, "compare:", CFSTR("document-format-error")) )
      {
        v180 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v180, OS_LOG_TYPE_DEFAULT) )
        {
          v181 = -[lite_job_t printd_job_id](v7, "printd_job_id");
          v182 = -[lite_job_t destination_job_id](v7, "destination_job_id");
          *(_DWORD *)v221 = 67109634;
          v222 = v181;
          v223 = 1024;
          v224 = v182;
          v225 = 2112;
          *(_QWORD *)v226 = v160;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v180,
            OS_LOG_TYPE_DEFAULT,
            "[Job %d][%d] set force_raster: %@",
            v221,
            0x18u);
        }
LABEL_214:
        objc_release(v180);
        v190 = &OBJC_IVAR___lite_job_t_force_raster;
LABEL_215:
        *(_DWORD *)((char *)&v7->super.isa + *v190) = 1;
LABEL_216:
        v210 = -[lite_job_t is_canceled](v7, "is_canceled");
        goto LABEL_217;
      }
      if ( !(unsigned int)objc_msgSend(v155, "compare:", CFSTR("document-unprintable-error")) )
      {
        if ( !v7->force_raster )
        {
          v180 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
          if ( os_log_type_enabled(v180, OS_LOG_TYPE_DEFAULT) )
          {
            v191 = -[lite_job_t printd_job_id](v7, "printd_job_id");
            v192 = -[lite_job_t destination_job_id](v7, "destination_job_id");
            *(_DWORD *)v221 = 67109634;
            v222 = v191;
            v223 = 1024;
            v224 = v192;
            v225 = 2112;
            *(_QWORD *)v226 = v160;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v180,
              OS_LOG_TYPE_DEFAULT,
              "[Job %d][%d] set force_raster: %@",
              v221,
              0x18u);
          }
          goto LABEL_214;
        }
        v183 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
        v184 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
        liteNotifyPrinter(v183, -[lite_printer_t reasons](v184, "reasons") | 0x200000, v160);
        objc_release(v184);
        objc_release(v183);
        v185 = objc_retainAutoreleasedReturnValue(
                 +[NSString stringWithFormat:](
                   &OBJC_CLASS___NSString,
                   "stringWithFormat:",
                   CFSTR("%s:%d"),
                   "_liteCloseDriver",
                   586LL));
        v186 = _liteNotifyCheck(86400, v185) == 2;
        objc_release(v185);
        if ( v186 )
        {
          -[lite_job_t cancelThisJob](v7, "cancelThisJob");
        }
        else
        {
          _liteNotifyCancel(v160);
          v195 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
          if ( os_log_type_enabled(v195, OS_LOG_TYPE_DEFAULT) )
          {
            v196 = -[lite_job_t printd_job_id](v7, "printd_job_id");
            v197 = -[lite_job_t destination_job_id](v7, "destination_job_id");
            v198 = -[lite_job_t is_canceled](v7, "is_canceled");
            *(_DWORD *)v221 = 67110146;
            v199 = "Retrying";
            if ( v198 )
              v199 = "Canceling";
            v222 = v196;
            v223 = 1024;
            v224 = v197;
            v225 = 2080;
            *(_QWORD *)v226 = v199;
            *(_WORD *)&v226[8] = 1024;
            *(_DWORD *)&v226[10] = 593;
            v227 = 2112;
            v228 = v160;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v195,
              OS_LOG_TYPE_DEFAULT,
              "[Job %d][%d] %s job on error response:%d (%@).",
              v221,
              0x28u);
          }
          objc_release(v195);
        }
        goto LABEL_216;
      }
      if ( !(unsigned int)objc_msgSend(v155, "compare:", CFSTR("compression-error")) )
      {
        v187 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v187, OS_LOG_TYPE_DEFAULT) )
        {
          v188 = -[lite_job_t printd_job_id](v7, "printd_job_id");
          v189 = -[lite_job_t destination_job_id](v7, "destination_job_id");
          *(_DWORD *)v221 = 67109634;
          v222 = v188;
          v223 = 1024;
          v224 = v189;
          v225 = 2112;
          *(_QWORD *)v226 = v160;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v187,
            OS_LOG_TYPE_DEFAULT,
            "[Job %d][%d] set force_uncompressed: %@",
            v221,
            0x18u);
        }
        objc_release(v187);
        v190 = &OBJC_IVAR___lite_job_t_force_uncompressed;
        goto LABEL_215;
      }
      if ( !(unsigned int)objc_msgSend(v155, "compare:", CFSTR("job-release-wait")) )
      {
        v161 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v161, OS_LOG_TYPE_DEFAULT) )
        {
          v162 = -[lite_job_t printd_job_id](v7, "printd_job_id");
          v163 = -[lite_job_t destination_job_id](v7, "destination_job_id");
          *(_DWORD *)v221 = 67109634;
          v222 = v162;
          v223 = 1024;
          v224 = v163;
          v225 = 2112;
          *(_QWORD *)v226 = v160;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v161,
            OS_LOG_TYPE_DEFAULT,
            "[Job %d][%d] waiting for reason set: %@",
            v221,
            0x18u);
        }
        objc_release(v161);
        -[lite_job_t notifyJobHeldPinRequired:logMessage:](
          v7,
          "notifyJobHeldPinRequired:logMessage:",
          0LL,
          CFSTR("Job held at printer waiting to be released."));
      }
      if ( (unsigned int)objc_msgSend(v155, "compare:", CFSTR("job-password-wait")) )
        goto LABEL_180;
      v164 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
      if ( os_log_type_enabled(v164, OS_LOG_TYPE_DEFAULT) )
      {
        v165 = -[lite_job_t printd_job_id](v7, "printd_job_id");
        v166 = -[lite_job_t destination_job_id](v7, "destination_job_id");
        *(_DWORD *)v221 = 67109634;
        v222 = v165;
        v223 = 1024;
        v224 = v166;
        v225 = 2112;
        *(_QWORD *)v226 = v160;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v164,
          OS_LOG_TYPE_DEFAULT,
          "[Job %d][%d] waiting for reason set: %@",
          v221,
          0x18u);
      }
      objc_release(v164);
      -[lite_job_t notifyJobHeldPinRequired:logMessage:](
        v7,
        "notifyJobHeldPinRequired:logMessage:",
        1LL,
        CFSTR("Job held at printer waiting for job-password."));
      v167 = objc_retainAutoreleasedReturnValue(
               +[NSString stringWithFormat:](
                 &OBJC_CLASS___NSString,
                 "stringWithFormat:",
                 CFSTR("%s:%d"),
                 "_liteCloseDriver",
                 618LL));
      v168 = _liteNotifyCheck(86400, v167) == 2;
      objc_release(v167);
      if ( v168 )
        break;
      _liteNotifyCancel(v160);
LABEL_180:
      objc_release(v160);
      if ( v151 == (void *)++v154 )
      {
        v151 = -[NSString countByEnumeratingWithState:objects:count:](
                 obj,
                 "countByEnumeratingWithState:objects:count:",
                 &v216,
                 v220,
                 16LL);
        if ( !v151 )
          goto LABEL_182;
        goto LABEL_163;
      }
    }
    -[lite_job_t cancelThisJob](v7, "cancelThisJob");
    v210 = -[lite_job_t is_canceled](v7, "is_canceled");
LABEL_217:
    objc_release(v160);
    v119 = 1;
LABEL_218:
    objc_release(obj);
LABEL_219:
    objc_release(v212);
    objc_release(v238);
    objc_release(v237);
    sub_100058FBC(buf);
    if ( v119 )
    {
      v2 = v215;
      v116 = IXInteger;
    }
    else
    {
      v2 = v215;
      v116 = IXInteger;
      if ( JobState > 6 )
      {
        v119 = 0;
      }
      else
      {
        sleep(v208);
        v119 = 0;
        v193 = (v208 + v207) % 12;
        if ( v193 >= v208 )
          v194 = v208;
        else
          v194 = 0;
        v207 = v194;
        v208 = v193;
      }
    }
LABEL_227:
    objc_autoreleasePoolPop(v118);
    if ( (v119 | 2) != 2 )
      goto LABEL_243;
  }
  while ( JobState < 7 );
  v2 = v215;
  if ( JobState == 7 )
  {
    v200 = objc_retainAutoreleasedReturnValue(
             +[NSString stringWithFormat:](
               &OBJC_CLASS___NSString,
               "stringWithFormat:",
               CFSTR("remote_job_state is completed")));
    v201 = objc_retainAutoreleasedReturnValue(
             +[NSString stringWithFormat:](
               &OBJC_CLASS___NSString,
               "stringWithFormat:",
               CFSTR("%s:%d/%@"),
               "_liteCloseDriver",
               666LL,
               v200));
    objc_release(v200);
    v202 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
    v203 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v7, "printer"));
    liteNotifyPrinter(v202, -[lite_printer_t reasons](v203, "reasons") & 0xFFDE001F, v201);
    objc_release(v203);
    objc_release(v202);
    objc_release(v201);
    v2 = v215;
    v116 = IXInteger;
  }
LABEL_239:
  v204 = -[lite_job_t is_canceled](v7, "is_canceled");
  if ( v116 > 0 )
    v205 = 1;
  else
    v205 = v204;
  v210 = v205;
LABEL_243:
  objc_release(v2);
  return v210;
}