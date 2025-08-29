__Z15_liteOpenDriverP10lite_job_tP13lite_driver_sP8NSString12ipp_orient_eii
__int64 __fastcall _liteOpenDriver(lite_job_t *a1, lite_driver_s *a2, NSString *a3, ipp_orient_e a4, int a5, int a6)
{
  os_log_s *v9; // x20
  unsigned int v10; // w19
  unsigned int v11; // w0
  lite_printer_t *v12; // x20
  lite_printer_t *v13; // x19
  lite_job_t *v14; // x19
  NSString *v15; // x20
  id *v16; // x21
  void *v17; // x25
  void *v18; // x26
  void *v19; // x20
  os_log_s *v20; // x20
  unsigned int v21; // w19
  unsigned int v22; // w0
  void *v23; // x19
  NSString *v24; // x22
  _BOOL4 v25; // w23
  NSString *v26; // x19
  bool v27; // w20
  lite_printer_t *v28; // x20
  void *v29; // x23
  unsigned int v30; // w22
  NSString *v31; // x19
  id v32; // x19
  int v33; // w0
  int v34; // w20
  unsigned int v35; // w26
  __CFString *v36; // x25
  __int64 v37; // x22
  unsigned int v38; // w19
  unsigned int v39; // w0
  const char *v40; // x3
  id *v41; // x19
  NSString *v42; // x0
  lite_printer_t *v43; // x20
  void *v44; // x19
  NSString *v45; // x19
  NSString *v46; // x24
  lite_printer_t *v47; // x20
  void *v48; // x19
  __int64 v49; // x20
  NSString *v50; // x19
  _BOOL4 v51; // w20
  lite_printer_t *v52; // x19
  os_log_s *v53; // x20
  unsigned int v54; // w19
  unsigned int v55; // w23
  void *v56; // x20
  void *v57; // x19
  bool v58; // w22
  unsigned int v59; // w19
  unsigned int v60; // w0
  NSString *v61; // x19
  int v62; // w8
  id v63; // x19
  void *v64; // x20
  void *v65; // x19
  void *v66; // x26
  void *v67; // x19
  Printd_Parameters *v68; // x20
  os_log_s *v69; // x23
  unsigned int v70; // w19
  unsigned int v71; // w0
  void ***v72; // x27
  void **v73; // x20
  void *v74; // x19
  void *v75; // x22
  id v76; // x19
  void *v77; // x19
  void *v78; // x20
  id *v79; // x20
  _QWORD *v80; // x19
  int v81; // w0
  int v82; // w1
  unsigned int v83; // w0
  const char *v84; // x8
  const char *v85; // x8
  id v87; // x19
  id v88; // x19
  device_http_t *v89; // x26
  void *v90; // x28
  void *v91; // x20
  void *v92; // x24
  void *v93; // x23
  void *v94; // x19
  void *v95; // x22
  device_http_t *v96; // x26
  id v97; // x25
  os_log_s *v98; // x20
  unsigned int v99; // w23
  unsigned int v100; // w24
  __int64 (__fastcall *v101)(); // x19
  os_log_s *v102; // x20
  unsigned int v103; // w19
  unsigned int v104; // w23
  const char *v105; // x22
  __CFString *v106; // x24
  int v107; // w0
  void *v108; // x0
  void *v109; // x25
  void *v110; // x0
  id v111; // x0
  void *v112; // x20
  void *v113; // x0
  id v114; // x0
  void *v115; // x19
  void *v116; // x20
  void *v117; // x19
  unsigned int v118; // w20
  os_log_s *v119; // x27
  unsigned int v120; // w19
  unsigned int v121; // w0
  id v122; // x26
  void *v123; // x19
  id *v124; // x0
  id *v125; // x28
  void *v126; // x20
  __int64 v127; // x22
  __int64 v128; // x25
  void *v129; // x19
  int IsAcceptingJobs; // w20
  os_log_s *v131; // x23
  unsigned int v132; // w19
  unsigned int v133; // w0
  os_log_s *v134; // x20
  unsigned int v135; // w19
  unsigned int v136; // w0
  const char *v137; // x8
  id v138; // x0
  void *v139; // x19
  id v140; // x27
  os_log_s *v141; // x20
  unsigned int v142; // w19
  unsigned int v143; // w0
  id v144; // [xsp+18h] [xbp-288h]
  NSString *v146; // [xsp+28h] [xbp-278h]
  lite_job_t *v148; // [xsp+38h] [xbp-268h]
  NSString *v149; // [xsp+40h] [xbp-260h]
  _QWORD v150[4]; // [xsp+48h] [xbp-258h] BYREF
  NSString *v151; // [xsp+68h] [xbp-238h]
  id *v152; // [xsp+70h] [xbp-230h]
  ipp_orient_e v153; // [xsp+78h] [xbp-228h]
  int v154; // [xsp+7Ch] [xbp-224h]
  int v155; // [xsp+80h] [xbp-220h]
  NSString *v156; // [xsp+88h] [xbp-218h]
  id v157[2]; // [xsp+90h] [xbp-210h]
  __int128 v158; // [xsp+A0h] [xbp-200h]
  _QWORD v159[4]; // [xsp+B8h] [xbp-1E8h] BYREF
  id v160; // [xsp+D8h] [xbp-1C8h]
  _BYTE v161[32]; // [xsp+E0h] [xbp-1C0h] BYREF
  Printd_Parameters *v162; // [xsp+100h] [xbp-1A0h]
  id v163; // [xsp+108h] [xbp-198h]
  id v164; // [xsp+110h] [xbp-190h]
  id v165; // [xsp+118h] [xbp-188h] BYREF
  _BYTE v166[24]; // [xsp+120h] [xbp-180h] BYREF
  __int64 v167; // [xsp+138h] [xbp-168h]
  Printd_Parameters *v168; // [xsp+140h] [xbp-160h]
  id v169; // [xsp+148h] [xbp-158h]
  uint8_t v170[4]; // [xsp+150h] [xbp-150h] BYREF
  unsigned int v171; // [xsp+154h] [xbp-14Ch]
  __int16 v172; // [xsp+158h] [xbp-148h]
  unsigned int v173; // [xsp+15Ah] [xbp-146h]
  __int16 v174; // [xsp+15Eh] [xbp-142h]
  void *v175; // [xsp+160h] [xbp-140h]
  uint8_t buf[8]; // [xsp+170h] [xbp-130h] BYREF
  __int64 v177; // [xsp+178h] [xbp-128h]
  __int64 (__fastcall *v178)(); // [xsp+180h] [xbp-120h]
  __int128 v179; // [xsp+188h] [xbp-118h]
  __int128 v180; // [xsp+1F0h] [xbp-B0h] BYREF
  __int128 v181; // [xsp+200h] [xbp-A0h]
  __int128 v182; // [xsp+210h] [xbp-90h]
  __int128 v183; // [xsp+220h] [xbp-80h]

  v148 = objc_retain(a1);
  v146 = objc_retain(a3);
  v9 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
  if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
  {
    v10 = -[lite_job_t printd_job_id](v148, "printd_job_id");
    if ( v148 )
      v11 = -[lite_job_t destination_job_id](v148, "destination_job_id");
    else
      v11 = -1;
    *(_DWORD *)buf = 67110146;
    *(_DWORD *)&buf[4] = v10;
    LOWORD(v177) = 1024;
    *(_DWORD *)((char *)&v177 + 2) = v11;
    HIWORD(v177) = 2112;
    v178 = (__int64 (__fastcall *)())v146;
    LOWORD(v179) = 1024;
    *(_DWORD *)((char *)&v179 + 2) = a4;
    WORD3(v179) = 1024;
    DWORD2(v179) = a5;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v9,
      OS_LOG_TYPE_DEFAULT,
      "[Job %d][%d] Opening output stream, format=\"%@\", orientation=%d, num_sheets=%d",
      buf,
      0x24u);
  }
  objc_release(v9);
  v12 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v148, "printer"));
  v13 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v148, "printer"));
  liteNotifyPrinter(v12, -[lite_printer_t reasons](v13, "reasons") | 2, &CFSTR("_liteOpenDriver:Connecting").isa);
  objc_release(v13);
  objc_release(v12);
  v14 = objc_retain(v148);
  v15 = objc_retain(v146);
  *(_OWORD *)v157 = 0u;
  v158 = 0u;
  v16 = objc_retain(v14);
  v152 = v16;
  v153 = a4;
  v154 = a5;
  v155 = a6;
  v156 = objc_retain(v15);
  v149 = v156;
  if ( !v156 )
  {
    v20 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v20, OS_LOG_TYPE_ERROR) )
    {
      v21 = (unsigned int)objc_msgSend(v16, "printd_job_id");
      if ( v16 )
        v22 = (unsigned int)objc_msgSend(v16, "destination_job_id");
      else
        v22 = -1;
      *(_DWORD *)buf = 67109376;
      *(_DWORD *)&buf[4] = v21;
      LOWORD(v177) = 1024;
      *(_DWORD *)((char *)&v177 + 2) = v22;
      v40 = "[Job %d][%d] Unknown job format.";
      goto LABEL_32;
    }
LABEL_33:
    objc_release(v20);
LABEL_34:
    objc_msgSend(v16, "cancelThisJob");
    v36 = 0LL;
    v37 = 0x200000LL;
LABEL_50:
    v41 = v16;
    v42 = v149;
    goto LABEL_51;
  }
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "device_uri"));
  v19 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "absoluteString")));
  if ( !strncmp((const char *)objc_msgSend(v19, "UTF8String"), "ipp://", 6uLL) )
  {
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "displayName"));
    v25 = PKAllowNonTLSConnection(v24) == 0;
    objc_release(v24);
    objc_release(v23);
    objc_release(v19);
    objc_release(v18);
    objc_release(v17);
    if ( !v25 )
      goto LABEL_13;
    v20 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v20, OS_LOG_TYPE_ERROR) )
    {
      v38 = (unsigned int)objc_msgSend(v16, "printd_job_id");
      if ( v16 )
        v39 = (unsigned int)objc_msgSend(v16, "destination_job_id");
      else
        v39 = -1;
      *(_DWORD *)buf = 67109376;
      *(_DWORD *)&buf[4] = v38;
      LOWORD(v177) = 1024;
      *(_DWORD *)((char *)&v177 + 2) = v39;
      v40 = "[Job %d][%d] Non secure connection is not trusted, aborting job.";
LABEL_32:
      _os_log_impl((void *)&_mh_execute_header, v20, OS_LOG_TYPE_ERROR, v40, buf, 0xEu);
      goto LABEL_33;
    }
    goto LABEL_33;
  }
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
LABEL_13:
  if ( ((unsigned int)objc_msgSend(v16, "is_canceled") & 1) == 0 )
  {
    v26 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("%s:%d"),
              "_connectAndDoMostOfTheWork",
              1339LL));
    v27 = (unsigned int)_liteNotifyCheck(0, v26) == 2;
    objc_release(v26);
    if ( v27 )
      goto LABEL_34;
  }
  v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
  v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
  v30 = (unsigned int)objc_msgSend(v29, "reasons");
  v31 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "_connectAndDoMostOfTheWork"));
  liteNotifyPrinter(v28, v30 & 0xFFFFFFFD, v31);
  objc_release(v31);
  objc_release(v29);
  objc_release(v28);
  sub_10005BED8((int)v166, v16);
  v32 = objc_retainAutoreleasedReturnValue((id)sub_1000370DC(v167));
  sub_10005AD08();
  objc_release(v32);
  v33 = sub_10005B688(v166);
  v34 = v33;
  if ( v33 <= 1181 )
  {
    if ( v33 <= 1051 )
    {
      if ( (unsigned int)(v33 - 1025) >= 3 )
        goto LABEL_44;
      goto LABEL_41;
    }
    if ( v33 > 1054 )
    {
      if ( v33 == 1055 )
        goto LABEL_41;
      if ( v33 != 1180 )
        goto LABEL_44;
    }
    else if ( v33 != 1052 )
    {
      if ( v33 != 1054 )
        goto LABEL_44;
      goto LABEL_48;
    }
    v36 = 0LL;
    v35 = 0;
    v37 = 0x100000LL;
    goto LABEL_49;
  }
  if ( v33 <= 1279 )
  {
    if ( v33 != 1182 )
    {
      if ( v33 != 1183 )
        goto LABEL_44;
LABEL_41:
      v36 = 0LL;
      v35 = 0;
      v37 = 0x80000LL;
      goto LABEL_49;
    }
LABEL_48:
    v36 = 0LL;
    v35 = 0;
    v37 = 0x400000LL;
    goto LABEL_49;
  }
  v35 = 0;
  v36 = 0LL;
  v37 = 0x10000LL;
  if ( (unsigned int)(v33 - 1280) > 0xB )
    goto LABEL_43;
  if ( ((1 << v33) & 0x8C0) != 0 )
  {
    v36 = 0LL;
    v35 = 0;
    v37 = 32LL;
    goto LABEL_49;
  }
  if ( ((1 << v33) & 5) == 0 )
  {
LABEL_43:
    if ( v33 != 4097 )
    {
LABEL_44:
      if ( ((unsigned int)objc_msgSend(v16, "is_canceled") & 1) != 0 )
      {
LABEL_47:
        v36 = 0LL;
        v35 = 0;
        v37 = 0x8000LL;
        goto LABEL_49;
      }
      if ( v34 == 4096 )
      {
        objc_msgSend(v16, "cancelThisJob");
        goto LABEL_47;
      }
      if ( (unsigned int)(v34 - 1) <= 1 )
      {
        if ( !v168 )
          __assert_rtn("response", "xcups_params.h", 418, "_response");
        v108 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_find_Sides((id *)v168));
        v109 = v108;
        if ( v108 && (unsigned int)objc_msgSend(v108, "group_tag") == 5 )
        {
          v110 = objc_msgSend(v16, "request_attrs");
          v111 = objc_retainAutoreleasedReturnValue((id)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v110 + 672LL))(v110));
          v112 = v111;
          if ( v111 && (unsigned int)objc_msgSend(v111, "compare:", CFSTR("one-sided")) )
          {
            v113 = objc_msgSend(v16, "request_attrs");
            v165 = CFSTR("one-sided");
            (*(void (__fastcall **)(void *, id *))(*(_QWORD *)v113 + 688LL))(v113, &v165);
            objc_release(v165);
          }
          objc_release(v112);
        }
        objc_release(v109);
      }
      if ( !v168 )
        __assert_rtn("response", "xcups_params.h", 418, "_response");
      v114 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_JobAuthorizationURI(v168));
      v115 = v114;
      if ( v114 )
        v157[0] = objc_retain(v114);
      objc_release(v115);
      v116 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "ippSession"));
      v117 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
      sub_10005C1E4((int)v161, v116);
      objc_release(v117);
      objc_release(v116);
      v118 = sub_10005C3C8(v164, v163, v161);
      if ( v118 >= 2 )
      {
        v119 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v119, OS_LOG_TYPE_DEFAULT) )
        {
          v120 = (unsigned int)objc_msgSend(v16, "printd_job_id");
          if ( v16 )
            v121 = (unsigned int)objc_msgSend(v16, "destination_job_id");
          else
            v121 = -1;
          *(_DWORD *)buf = 67109632;
          *(_DWORD *)&buf[4] = v120;
          LOWORD(v177) = 1024;
          *(_DWORD *)((char *)&v177 + 2) = v121;
          HIWORD(v177) = 1024;
          LODWORD(v178) = v118;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v119,
            OS_LOG_TYPE_DEFAULT,
            "[Job %d][%d] get-printer-attributes failed with status 0x%4.4x.",
            buf,
            0x14u);
        }
        v36 = 0LL;
        v35 = 0;
        v37 = 0x200000LL;
        goto LABEL_191;
      }
      if ( !v162 )
        __assert_rtn("response", "xcups_params.h", 418, "_response");
      v122 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_PrinterStateReasons(v162));
      if ( !v162 )
        __assert_rtn("response", "xcups_params.h", 418, "_response");
      v144 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_PrinterStateMessage(v162));
      v123 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
      objc_msgSend(v123, "updatePrinterState:message:", v122, v144);
      objc_release(v123);
      if ( objc_msgSend(v122, "count") )
      {
        sub_10005B724(v122, v16, CFSTR("_send_validate_job"));
        v124 = objc_retain(v16);
        v159[0] = _NSConcreteStackBlock;
        v159[1] = 3254779904LL;
        v159[2] = sub_10005BE50;
        v159[3] = &unk_100091078;
        v125 = objc_retain(v124);
        v160 = v125;
        +[NSThread detachNewThreadWithBlock:](&OBJC_CLASS___NSThread, "detachNewThreadWithBlock:", v159);
        v182 = 0u;
        v183 = 0u;
        v180 = 0u;
        v181 = 0u;
        v119 = (os_log_s *)objc_retain(v122);
        v126 = -[os_log_s countByEnumeratingWithState:objects:count:](
                 v119,
                 "countByEnumeratingWithState:objects:count:",
                 &v180,
                 buf,
                 16LL);
        if ( !v126 )
          goto LABEL_155;
        v127 = *(_QWORD *)v181;
LABEL_148:
        v128 = 0LL;
        while ( 1 )
        {
          if ( *(_QWORD *)v181 != v127 )
            objc_enumerationMutation(v119);
          v129 = *(void **)(*((_QWORD *)&v180 + 1) + 8 * v128);
          if ( ((unsigned int)objc_msgSend(v129, "isEqualToString:", CFSTR("spool-area-full")) & 1) != 0
            || (unsigned int)objc_msgSend(v129, "hasPrefix:", CFSTR("spool-area-full-")) )
          {
            break;
          }
          if ( v126 == (void *)++v128 )
          {
            v126 = -[os_log_s countByEnumeratingWithState:objects:count:](
                     v119,
                     "countByEnumeratingWithState:objects:count:",
                     &v180,
                     buf,
                     16LL);
            if ( !v126 )
            {
LABEL_155:
              objc_release(v119);
              objc_release(v160);
              objc_release(v125);
              goto LABEL_156;
            }
            goto LABEL_148;
          }
        }
        v134 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v134, OS_LOG_TYPE_DEFAULT) )
        {
          v135 = (unsigned int)objc_msgSend(v125, "printd_job_id");
          if ( v125 )
            v136 = (unsigned int)objc_msgSend(v125, "destination_job_id");
          else
            v136 = -1;
          *(_DWORD *)v170 = 67109376;
          v171 = v135;
          v172 = 1024;
          v173 = v136;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v134,
            OS_LOG_TYPE_DEFAULT,
            "[Job %d][%d] printer-state-reason contains 'spool-area-full'.",
            v170,
            0xEu);
        }
        objc_release(v134);
        objc_release(v119);
        objc_release(v160);
        objc_release(v125);
        objc_release(v144);
        v36 = 0LL;
        v35 = 0;
        v37 = 32LL;
        goto LABEL_191;
      }
LABEL_156:
      objc_release(v144);
      objc_release(v122);
      if ( !v162 )
LABEL_201:
        __assert_rtn("response", "xcups_params.h", 418, "_response");
      if ( Printd_Parameters::_has_PrinterIsAcceptingJobs((id *)v162) )
      {
        if ( !v162 )
          __assert_rtn("response", "xcups_params.h", 418, "_response");
        IsAcceptingJobs = Printd_Parameters::_get_PrinterIsAcceptingJobs(v162);
        v131 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v131, OS_LOG_TYPE_DEFAULT) )
        {
          v132 = (unsigned int)objc_msgSend(v16, "printd_job_id");
          if ( v16 )
            v133 = (unsigned int)objc_msgSend(v16, "destination_job_id");
          else
            v133 = -1;
          v137 = "No";
          *(_DWORD *)v170 = 67109634;
          v171 = v132;
          if ( IsAcceptingJobs )
            v137 = "Yes";
          v172 = 1024;
          v173 = v133;
          v174 = 2080;
          v175 = (void *)v137;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v131,
            OS_LOG_TYPE_DEFAULT,
            "[Job %d][%d] printer-is-accepting-jobs: %s",
            v170,
            0x18u);
        }
        objc_release(v131);
        if ( !IsAcceptingJobs )
        {
          v36 = 0LL;
          v35 = 0;
          v37 = 32LL;
LABEL_192:
          objc_release(v164);
          objc_release(v163);
          sub_100013E14(v161);
          goto LABEL_49;
        }
      }
      if ( !v162 )
        __assert_rtn("response", "xcups_params.h", 418, "_response");
      v138 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_OperationsSupported(v162));
      v139 = v138;
      if ( v138 )
      {
        if ( (unsigned int)objc_msgSend(v138, "containsObject:", &off_1000B57B8) )
          v35 = (unsigned int)objc_msgSend(v139, "containsObject:", &off_1000B57D0);
        else
          v35 = 0;
        LOBYTE(v158) = v35;
      }
      else
      {
        v35 = 0;
      }
      objc_release(v139);
      if ( !v162 )
        __assert_rtn("response", "xcups_params.h", 418, "_response");
      v140 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_CompressionSupported(v162));
      if ( !v140
        || (unsigned int)-[NSString caseInsensitiveCompare:](v156, "caseInsensitiveCompare:", CFSTR("image/urf"))
        || *((_DWORD *)v16 + 7) )
      {
        goto LABEL_188;
      }
      if ( ((unsigned int)objc_msgSend(v140, "containsObject:", CFSTR("gzip")) & 1) != 0 )
      {
        v36 = CFSTR("gzip");
      }
      else
      {
        if ( !(unsigned int)objc_msgSend(v140, "containsObject:", CFSTR("deflate")) )
        {
LABEL_188:
          v36 = 0LL;
          goto LABEL_189;
        }
        v36 = CFSTR("deflate");
      }
      *((_QWORD *)&v158 + 1) = v36;
      v141 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
      if ( os_log_type_enabled(v141, OS_LOG_TYPE_DEFAULT) )
      {
        v142 = (unsigned int)objc_msgSend(v16, "printd_job_id");
        v143 = (unsigned int)objc_msgSend(v16, "destination_job_id");
        *(_DWORD *)v170 = 67109634;
        v171 = v142;
        v172 = 1024;
        v173 = v143;
        v174 = 2112;
        v175 = v36;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v141,
          OS_LOG_TYPE_DEFAULT,
          "[Job %d][%d] %@ compression will be used for document.",
          v170,
          0x18u);
      }
      objc_release(v141);
LABEL_189:
      objc_release(v140);
      if ( v162 )
      {
        v119 = 0LL;
        v37 = 0LL;
        v157[1] = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_JobPresetsSupported((void **)v162));
LABEL_191:
        objc_release(v119);
        goto LABEL_192;
      }
      goto LABEL_201;
    }
  }
LABEL_49:
  objc_release(v169);
  sub_10001472C(v166);
  if ( (_DWORD)v37 )
    goto LABEL_50;
  if ( v35 )
    v62 = 6;
  else
    v62 = 2;
  *((_DWORD *)v16 + 8) = v62;
  if ( !v35 )
  {
    v72 = (void ***)operator new(40LL, 0xA1C406C891FDCLL);
    sub_10005C4F0(v72, 2LL, CFSTR("connectAndDoMostOfTheWork(PRINT_JOB)"));
    *v72 = (void **)off_10009F5D8;
    v87 = objc_retainAutoreleasedReturnValue((id)sub_1000370DC(v72[3]));
    sub_100059184();
    objc_release(v87);
    v88 = objc_retainAutoreleasedReturnValue((id)sub_1000370DC(v72[3]));
    sub_1000597D8();
    objc_release(v88);
    goto LABEL_96;
  }
  sub_10005C740(buf, 5LL, CFSTR("connectAndDoMostOfTheWork(CREATE_JOB)"));
  *(_QWORD *)buf = &off_10009F678;
  v63 = objc_retainAutoreleasedReturnValue((id)sub_1000370DC(v179));
  sub_100059184();
  objc_release(v63);
  v64 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
  v65 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "ippSession"));
  v66 = objc_retainAutoreleasedReturnValue(objc_msgSend(v64, "sendSingleIPPRequest:session:", buf, v65));
  objc_release(v65);
  objc_release(v64);
  v67 = objc_retainAutoreleasedReturnValue(objc_msgSend(v66, "ippResponse"));
  v68 = (Printd_Parameters *)sub_10005C8D8((int)buf, v67);
  objc_release(v67);
  v69 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
  if ( os_log_type_enabled(v69, OS_LOG_TYPE_DEFAULT) )
  {
    v70 = (unsigned int)objc_msgSend(v16, "printd_job_id");
    v71 = (unsigned int)objc_msgSend(v16, "destination_job_id");
    LODWORD(v180) = 67109634;
    DWORD1(v180) = v70;
    WORD4(v180) = 1024;
    *(_DWORD *)((char *)&v180 + 10) = v71;
    HIWORD(v180) = 2112;
    *(_QWORD *)&v181 = v66;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v69,
      OS_LOG_TYPE_DEFAULT,
      "[Job %d][%d] Create-Job result is %@",
      (uint8_t *)&v180,
      0x18u);
  }
  objc_release(v69);
  objc_msgSend(v16, "setDestination_job_id:", 0xFFFFFFFFLL);
  if ( Printd_Parameters::_has_DestinationJobID((id *)v68) )
    objc_msgSend(v16, "setDestination_job_id:", Printd_Parameters::_get_DestinationJobID(v68));
  if ( (int)objc_msgSend(v16, "destination_job_id") < 1 )
  {
    v107 = (unsigned int)objc_msgSend(v66, "ippStatus");
    v37 = 0x10000LL;
    if ( v107 <= 1285 )
    {
      if ( v107 == 1182 )
      {
        v37 = 0x400000LL;
        goto LABEL_142;
      }
      if ( v107 != 1282 )
        goto LABEL_122;
    }
    else if ( (unsigned int)(v107 - 1286) < 2 || v107 == 1291 )
    {
      v37 = 32LL;
    }
    else if ( v107 != 4097 )
    {
LABEL_122:
      v37 = 0x200000LL;
    }
LABEL_142:
    objc_release(v66);
    sub_10005C838(buf);
    goto LABEL_50;
  }
  v72 = (void ***)operator new(40LL, 0xA1C406C891FDCLL);
  sub_10005C938(v72, 6LL, CFSTR("_send_create_job"));
  *v72 = (void **)off_10009F6E8;
  v73 = v72[3];
  v74 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
  v75 = objc_retainAutoreleasedReturnValue(objc_msgSend(v74, "device_uri"));
  Printd_Parameters::_set_PrinterURI(v73, v75);
  objc_release(v75);
  objc_release(v74);
  Printd_Parameters::_set_DestinationJobID(v72[3], (int)objc_msgSend(v16, "destination_job_id"));
  Printd_Parameters::_set_LastDocument(v72[3], 1);
  objc_release(v66);
  v76 = objc_retainAutoreleasedReturnValue((id)sub_1000370DC(v72[3]));
  sub_1000597D8();
  objc_release(v76);
  sub_10005C838(buf);
LABEL_96:
  v89 = objc_alloc(&OBJC_CLASS___device_http_t);
  v90 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "ippSession"));
  v91 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
  v92 = objc_retainAutoreleasedReturnValue(objc_msgSend(v91, "device_uri"));
  v93 = objc_retainAutoreleasedReturnValue(objc_msgSend(v90, "ippURL:", v92));
  v94 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
  v95 = objc_retainAutoreleasedReturnValue(objc_msgSend(v94, "displayName"));
  v96 = -[device_http_t initWithSessionURL:displayNameForCertTrust:](
          v89,
          "initWithSessionURL:displayNameForCertTrust:",
          v93,
          v95);
  objc_release(v95);
  objc_release(v94);
  objc_release(v93);
  objc_release(v92);
  objc_release(v91);
  objc_release(v90);
  v97 = objc_retainAutoreleasedReturnValue(-[device_http_t startStreamedIPPRequest:compression:](v96, "startStreamedIPPRequest:compression:", v72, v36));
  ((void (__fastcall *)(void ***))(*v72)[1])(v72);
  if ( (unsigned int)objc_msgSend(v97, "transportStatus") == 2 )
  {
    objc_storeStrong(v16 + 2, v96);
    v98 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v98, OS_LOG_TYPE_DEFAULT) )
    {
      v99 = (unsigned int)objc_msgSend(v16, "printd_job_id");
      v100 = (unsigned int)objc_msgSend(v16, "destination_job_id");
      v101 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16[2], "description"));
      *(_DWORD *)buf = 67109634;
      *(_DWORD *)&buf[4] = v99;
      LOWORD(v177) = 1024;
      *(_DWORD *)((char *)&v177 + 2) = v100;
      HIWORD(v177) = 2112;
      v178 = v101;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v98,
        OS_LOG_TYPE_DEFAULT,
        "[Job %d][%d] Sending print job to %@.",
        buf,
        0x18u);
      objc_release(v101);
    }
    objc_release(v98);
    *((_BYTE *)v16 + 8) = 1;
    *(_QWORD *)buf = _NSConcreteStackBlock;
    v177 = 3254779904LL;
    v178 = sub_100059930;
    *(_QWORD *)&v179 = &unk_100091078;
    *((_QWORD *)&v179 + 1) = objc_retain(v16);
    +[NSThread detachNewThreadWithBlock:](&OBJC_CLASS___NSThread, "detachNewThreadWithBlock:", buf);
    objc_release(*((id *)&v179 + 1));
    v37 = 0LL;
  }
  else
  {
    v102 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v102, OS_LOG_TYPE_ERROR) )
    {
      v103 = (unsigned int)objc_msgSend(v16, "printd_job_id");
      v104 = (unsigned int)objc_msgSend(v16, "destination_job_id");
      if ( (_BYTE)v158 )
        v105 = "Send-Document";
      else
        v105 = "Print-Job";
      v106 = objc_retainAutoreleasedReturnValue(toString((__int64)objc_msgSend(v97, "transportStatus")));
      *(_DWORD *)buf = 67109890;
      *(_DWORD *)&buf[4] = v103;
      LOWORD(v177) = 1024;
      *(_DWORD *)((char *)&v177 + 2) = v104;
      HIWORD(v177) = 2080;
      v178 = (__int64 (__fastcall *)())v105;
      LOWORD(v179) = 2112;
      *(_QWORD *)((char *)&v179 + 2) = v106;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v102,
        OS_LOG_TYPE_ERROR,
        "[Job %d][%d] Unable to send %s request, status %@",
        buf,
        0x22u);
      objc_release(v106);
    }
    objc_release(v102);
    if ( (unsigned int)objc_msgSend(v97, "transportStatus") == 4
      || (unsigned int)objc_msgSend(v97, "transportStatus") == 1 )
    {
      v37 = 0x10000LL;
    }
    else
    {
      if ( (unsigned int)objc_msgSend(v97, "transportStatus") == 6 )
        objc_msgSend(v16, "cancelThisJob");
      v37 = 0x200000LL;
    }
  }
  objc_release(v97);
  objc_release(v96);
  v36 = (__CFString *)*((_QWORD *)&v158 + 1);
  v42 = v156;
  v41 = v152;
LABEL_51:
  objc_release(v42);
  objc_release(v41);
  objc_release(v36);
  objc_release(v157[1]);
  objc_release(v157[0]);
  objc_release(v149);
  objc_release(v16);
  v43 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
  v44 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
  liteNotifyPrinter(
    v43,
    (unsigned __int64)objc_msgSend(v44, "reasons") & 0xFFFFFFFD,
    &CFSTR("_liteOpenDriver:PastConnecting").isa);
  objc_release(v44);
  objc_release(v43);
  if ( (_DWORD)v37 || ((unsigned int)objc_msgSend(v16, "is_canceled") & 1) != 0 )
  {
    v45 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("abort_reason: 0x%x"), v37));
    v46 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("%s:%d/%@"),
              "_liteOpenDriver",
              1482LL,
              v45));
    objc_release(v45);
    v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
    v48 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
    liteNotifyPrinter(v47, (unsigned int)objc_msgSend(v48, "reasons") | (unsigned int)v37, v46);
    objc_release(v48);
    objc_release(v47);
    v49 = 0LL;
    if ( (int)v37 >= 0x80000 )
    {
      if ( (_DWORD)v37 == 0x100000 || (_DWORD)v37 == 0x80000 )
      {
LABEL_59:
        v50 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("%s:%d"),
                  "_liteOpenDriver",
                  1489LL));
        v51 = _liteNotifyCheck(86400, v50) == 2;
        objc_release(v50);
        if ( v51 )
        {
          objc_msgSend(v16, "cancelThisJob");
        }
        else
        {
          _liteNotifyCancel(v46);
          if ( (_DWORD)v37 == 0x80000 )
          {
            v52 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
            liteNotifyClearPassword(v52);
            objc_release(v52);
          }
        }
        v53 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v53, OS_LOG_TYPE_ERROR) )
        {
          v54 = (unsigned int)objc_msgSend(v16, "printd_job_id");
          if ( v16 )
            v55 = (unsigned int)objc_msgSend(v16, "destination_job_id");
          else
            v55 = -1;
          v83 = (unsigned int)objc_msgSend(v16, "is_canceled");
          v84 = "Retrying";
          if ( v83 )
            v84 = "Canceling";
          *(_DWORD *)buf = 67109890;
          *(_DWORD *)&buf[4] = v54;
          LOWORD(v177) = 1024;
          *(_DWORD *)((char *)&v177 + 2) = v55;
          HIWORD(v177) = 2080;
          v178 = (__int64 (__fastcall *)())v84;
          if ( (_DWORD)v37 == 0x10000 )
            v85 = "lost connection";
          else
            v85 = "authorization";
          LOWORD(v179) = 2080;
          *(_QWORD *)((char *)&v179 + 2) = v85;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v53,
            OS_LOG_TYPE_ERROR,
            "[Job %d][%d] %s job on %s error.",
            buf,
            0x22u);
        }
        objc_release(v53);
        goto LABEL_93;
      }
    }
    else
    {
      if ( (_DWORD)v37 != 32 )
      {
        if ( (_DWORD)v37 != 0x10000 )
          goto LABEL_94;
        goto LABEL_59;
      }
      v61 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("%s:%d"),
                "_liteOpenDriver",
                1505LL));
      v49 = (unsigned int)_liteNotifyCheck(86400, v61) == 2;
      objc_release(v61);
      if ( (_DWORD)v49 )
      {
        objc_msgSend(v16, "cancelThisJob");
LABEL_93:
        v49 = 0LL;
      }
    }
  }
  else
  {
    bzero(&a2->var2, 0x828uLL);
    a2->var0 = sub_100057250;
    a2->var1 = v16;
    if ( -[NSString isEqualToString:](v149, "isEqualToString:", CFSTR("image/urf")) )
    {
      v56 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
      v57 = objc_retainAutoreleasedReturnValue(objc_msgSend(v56, "dids"));
      v58 = !liteInitURF(v57, (__int64)a2, 0);
      objc_release(v57);
      objc_release(v56);
      if ( v58 )
      {
        v46 = (NSString *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled((os_log_t)v46, OS_LOG_TYPE_DEFAULT) )
        {
          v59 = (unsigned int)objc_msgSend(v16, "printd_job_id");
          if ( v16 )
            v60 = (unsigned int)objc_msgSend(v16, "destination_job_id");
          else
            v60 = -1;
          *(_DWORD *)buf = 67109376;
          *(_DWORD *)&buf[4] = v59;
          LOWORD(v177) = 1024;
          *(_DWORD *)((char *)&v177 + 2) = v60;
          _os_log_impl(
            (void *)&_mh_execute_header,
            (os_log_t)v46,
            OS_LOG_TYPE_DEFAULT,
            "[Job %d][%d] Could not set up driver",
            buf,
            0xEu);
        }
        goto LABEL_93;
      }
    }
    else
    {
      v77 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "printer"));
      v78 = objc_retainAutoreleasedReturnValue(objc_msgSend(v77, "dids"));
      liteSetupDriverInfoFromDeviceIDs(a2, v78);
      objc_release(v78);
      objc_release(v77);
    }
    v150[0] = _NSConcreteStackBlock;
    v150[1] = 3254779904LL;
    v150[2] = sub_1000572EC;
    v150[3] = &unk_10009F3B8;
    v79 = objc_retain(v16);
    v151 = v79;
    v80 = objc_retainBlock(v150);
    v81 = (unsigned int)objc_msgSend(v79, "request_attrs");
    v49 = liteInitializeLiteDriverStruct(v81, v82, v80);
    objc_release(v80);
    v46 = v151;
  }
LABEL_94:
  objc_release(v46);
  objc_release(v149);
  objc_release(v16);
  return v49;
}