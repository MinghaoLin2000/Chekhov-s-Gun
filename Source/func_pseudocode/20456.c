__Z11liteDoPrintP10lite_job_t
__int64 __fastcall liteDoPrint(lite_job_t *a1)
{
  lite_job_t *v1; // x19
  os_log_s *v2; // x20
  lite_printer_t *v3; // x21
  lite_printer_t *v4; // x23
  NSString *v5; // x24
  const char *v6; // x22
  dev_t v7; // w26
  NSString *v8; // x25
  NSString *v9; // x0
  bool v10; // w20
  NSString *v11; // x20
  bool v12; // w21
  os_log_s *v13; // x20
  unsigned int v14; // w21
  unsigned int v15; // w0
  os_log_s *v16; // x20
  unsigned int v17; // w21
  unsigned int v18; // w0
  unsigned int v19; // w21
  unsigned int v20; // w0
  lite_printer_t *v21; // x21
  NSSet *v22; // x20
  JobRequestAttributes_Base *v23; // x0
  JobRequestAttributes_Base *v24; // x0
  NSString *v25; // x23
  __int64 v26; // x28
  int v27; // w26
  int v28; // w21
  const char *v29; // x3
  NSString *v30; // x23
  __int64 v31; // x20
  __int64 (__fastcall *v33)(void *); // x22
  NSString *v34; // x23
  _BOOL4 v35; // w21
  JobRequestAttributes_Base *v36; // x0
  lite_printer_t *v37; // x23
  bool v38; // w22
  NSString *v39; // x23
  unsigned __int8 v40; // w22
  unsigned __int64 v41; // x24
  NSString *v42; // x23
  lite_printer_t *v43; // x23
  bool v44; // w21
  NSString *v45; // x23
  int v46; // w21
  int v47; // w24
  int v48; // w25
  _BOOL4 v49; // w28
  os_log_s *v50; // x23
  unsigned int v51; // w22
  unsigned int v52; // w0
  os_log_s *v53; // x23
  unsigned int v54; // w24
  unsigned int v55; // w0
  lite_printer_t *v56; // x24
  lite_printer_t *v57; // x25
  bool v58; // w22
  NSString *v59; // x23
  _BOOL4 v60; // w21
  lite_printer_t *v61; // x23
  lite_printer_t *v62; // x24
  _BOOL4 v63; // w22
  __int64 (__fastcall *v64)(); // x23
  id v65; // x23
  lite_printer_t *v66; // x24
  lite_printer_t *v67; // x25
  _BOOL4 v68; // w21
  lite_printer_t *v71; // x22
  NSSet *v72; // x25
  unsigned int v73; // w24
  lite_printer_t *v74; // x23
  NSSet *v75; // x24
  unsigned __int8 v76; // w25
  void *v77; // x23
  __int64 v78; // x1
  NSString *v79; // x24
  JobRequestAttributes_Base *v80; // x0
  NSURL *v81; // x21
  JobRequestAttributes_Base *v82; // x0
  int v83; // w25
  void *v84; // x24
  lite_printer_t *v85; // x25
  _BOOL4 v86; // w26
  bool v87; // w21
  NSURL *v88; // [xsp+8h] [xbp-1C8h]
  lite_printer_t *v89; // [xsp+10h] [xbp-1C0h]
  NSURL *v90; // [xsp+18h] [xbp-1B8h]
  NSString *v91; // [xsp+20h] [xbp-1B0h]
  lite_printer_t *v92; // [xsp+28h] [xbp-1A8h]
  id v93; // [xsp+30h] [xbp-1A0h]
  NSString *v94; // [xsp+30h] [xbp-1A0h]
  id v95; // [xsp+38h] [xbp-198h]
  _QWORD v96[4]; // [xsp+40h] [xbp-190h] BYREF
  id v97; // [xsp+60h] [xbp-170h]
  __int64 (__fastcall *v98)(void *); // [xsp+68h] [xbp-168h]
  id v99; // [xsp+70h] [xbp-160h]
  __int64 v100; // [xsp+78h] [xbp-158h]
  __int64 v101; // [xsp+80h] [xbp-150h]
  int v102; // [xsp+88h] [xbp-148h]
  uint8_t v103[4]; // [xsp+90h] [xbp-140h] BYREF
  unsigned int v104; // [xsp+94h] [xbp-13Ch]
  __int16 v105; // [xsp+98h] [xbp-138h]
  unsigned int v106; // [xsp+9Ah] [xbp-136h]
  __int16 v107; // [xsp+9Eh] [xbp-132h]
  int v108; // [xsp+A0h] [xbp-130h]
  __int16 v109; // [xsp+A4h] [xbp-12Ch]
  int v110; // [xsp+A6h] [xbp-12Ah]
  __int16 v111; // [xsp+AAh] [xbp-126h]
  int v112; // [xsp+ACh] [xbp-124h]
  __int16 v113; // [xsp+B0h] [xbp-120h]
  __int64 v114; // [xsp+B2h] [xbp-11Eh]
  stat buf; // [xsp+C0h] [xbp-110h] BYREF

  v1 = objc_retain(a1);
  v2 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
  if ( os_log_type_enabled(v2, OS_LOG_TYPE_DEFAULT) )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
    v4 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
    v5 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[lite_printer_t displayName](v4, "displayName")));
    v6 = -[NSString UTF8String](v5, "UTF8String");
    v7 = -[lite_job_t printd_job_id](v1, "printd_job_id");
    v8 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFilename](v1, "spoolDocumentFilename")));
    buf.st_dev = 134218754;
    *(_QWORD *)&buf.st_mode = v3;
    WORD2(buf.st_ino) = 2082;
    *(__darwin_ino64_t *)((char *)&buf.st_ino + 6) = (__darwin_ino64_t)v6;
    HIWORD(buf.st_gid) = 1024;
    buf.st_rdev = v7;
    *((_WORD *)&buf.st_rdev + 2) = 2080;
    *(_QWORD *)((char *)&buf.st_rdev + 6) = -[NSString UTF8String](v8, "UTF8String");
    _os_log_impl(
      (void *)&_mh_execute_header,
      v2,
      OS_LOG_TYPE_DEFAULT,
      "[Printer<%p> %{public}s] Printing job #%d (\"%s\").",
      (uint8_t *)&buf,
      0x26u);
    objc_release(v8);
    objc_release(v5);
    objc_release(v4);
    objc_release(v3);
  }
  objc_release(v2);
  v9 = objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFilename](v1, "spoolDocumentFilename"));
  v10 = v9 == 0LL;
  objc_release(v9);
  if ( v10 )
  {
    v16 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v16, OS_LOG_TYPE_ERROR) )
    {
      v17 = -[lite_job_t printd_job_id](v1, "printd_job_id");
      if ( v1 )
        v18 = -[lite_job_t destination_job_id](v1, "destination_job_id");
      else
        v18 = -1;
      buf.st_dev = 67109376;
      *(_DWORD *)&buf.st_mode = v17;
      LOWORD(buf.st_ino) = 1024;
      *(_DWORD *)((char *)&buf.st_ino + 2) = v18;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v16,
        OS_LOG_TYPE_ERROR,
        "[Job %d][%d] Missing print file.",
        (uint8_t *)&buf,
        0xEu);
    }
    objc_release(v16);
    goto LABEL_27;
  }
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0;
  v11 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFilename](v1, "spoolDocumentFilename")));
  v12 = lstat(-[NSString UTF8String](v11, "UTF8String"), &buf) == 0;
  objc_release(v11);
  if ( !v12 )
  {
    v13 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
    {
      v14 = -[lite_job_t printd_job_id](v1, "printd_job_id");
      if ( v1 )
        v15 = -[lite_job_t destination_job_id](v1, "destination_job_id");
      else
        v15 = -1;
      *(_DWORD *)v103 = 67109376;
      v104 = v14;
      v105 = 1024;
      v106 = v15;
      v29 = "[Job %d][%d] Missing print file.";
LABEL_25:
      _os_log_impl((void *)&_mh_execute_header, v13, OS_LOG_TYPE_ERROR, v29, v103, 0xEu);
      goto LABEL_26;
    }
    goto LABEL_26;
  }
  if ( (buf.st_mode & 0xF000) == 0xA000 )
  {
    v13 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
    {
      v19 = -[lite_job_t printd_job_id](v1, "printd_job_id");
      if ( v1 )
        v20 = -[lite_job_t destination_job_id](v1, "destination_job_id");
      else
        v20 = -1;
      *(_DWORD *)v103 = 67109376;
      v104 = v19;
      v105 = 1024;
      v106 = v20;
      v29 = "[Job %d][%d] Job file is a symlink and cannot be printed.";
      goto LABEL_25;
    }
LABEL_26:
    objc_release(v13);
LABEL_27:
    -[lite_job_t finishJob:](v1, "finishJob:", 8LL);
    v31 = 0LL;
    goto LABEL_28;
  }
  v21 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
  v22 = objc_retainAutoreleasedReturnValue(-[lite_printer_t attrs_printer_native_formats](v21, "attrs_printer_native_formats"));
  objc_release(v21);
  v23 = -[lite_job_t request_attrs](v1, "request_attrs");
  v99 = objc_retainAutoreleasedReturnValue((id)(*((__int64 (__fastcall **)(JobRequestAttributes_Base *))v23->var0 + 76))(v23));
  v24 = -[lite_job_t request_attrs](v1, "request_attrs");
  v95 = objc_retainAutoreleasedReturnValue((id)(*((__int64 (__fastcall **)(JobRequestAttributes_Base *))v24->var0 + 60))(v24));
  v25 = objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFormat](v1, "spoolDocumentFormat"));
  v26 = (unsigned int)-[NSString compare:](v25, "compare:", CFSTR("image/jpeg"));
  objc_release(v25);
  if ( v26 )
  {
    v27 = 0;
    v28 = 0;
  }
  else
  {
    v30 = objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFilename](v1, "spoolDocumentFilename"));
    v28 = v100;
    v27 = HIDWORD(v100);
    sub_100054DB0();
    objc_release(v30);
  }
  if ( !v22
    || v1->force_raster
    || (v36 = -[lite_job_t request_attrs](v1, "request_attrs"),
        (*((int (__fastcall **)(JobRequestAttributes_Base *))v36->var0 + 16))(v36) >= 2)
    && (v37 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer")),
        v38 = ((unsigned __int64)-[lite_printer_t printer_type_from_cups](v37, "printer_type_from_cups") & 4) == 0,
        objc_release(v37),
        v38) )
  {
    v33 = 0LL;
    goto LABEL_32;
  }
  v39 = objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFormat](v1, "spoolDocumentFormat"));
  v40 = -[NSSet containsObject:](v22, "containsObject:", v39);
  objc_release(v39);
  if ( buf.st_size >= -1023 )
    v41 = buf.st_size + 1023;
  else
    v41 = buf.st_size + 2046;
  if ( (v40 & 1) == 0 )
    goto LABEL_111;
  v42 = objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFormat](v1, "spoolDocumentFormat"));
  v93 = (id)(v41 >> 10);
  if ( (unsigned int)-[NSString compare:](v42, "compare:", CFSTR("application/pdf")) )
    goto LABEL_49;
  v56 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
  if ( -[lite_printer_t max_pdf](v56, "max_pdf") <= 0 )
  {
    objc_release(v56);
LABEL_49:
    objc_release(v42);
    goto LABEL_50;
  }
  v57 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
  v58 = -[lite_printer_t max_pdf](v57, "max_pdf") < (int)v93;
  objc_release(v57);
  objc_release(v56);
  objc_release(v42);
  if ( v58 )
  {
LABEL_111:
    v65 = 0LL;
LABEL_112:
    v33 = 0LL;
    goto LABEL_113;
  }
LABEL_50:
  if ( v26 )
  {
    v33 = (__int64 (__fastcall *)(void *))sub_10005507C;
    goto LABEL_52;
  }
  v61 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
  if ( -[lite_printer_t max_jpeg](v61, "max_jpeg") <= 0 )
  {
    objc_release(v61);
    v64 = sub_10005507C;
  }
  else
  {
    v62 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
    v63 = -[lite_printer_t max_jpeg](v62, "max_jpeg") < (int)v93;
    objc_release(v62);
    objc_release(v61);
    if ( v63 )
      v64 = 0LL;
    else
      v64 = sub_10005507C;
  }
  v66 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
  if ( v28 <= -[lite_printer_t max_jpeg_x](v66, "max_jpeg_x") )
  {
    v67 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
    v68 = v27 > -[lite_printer_t max_jpeg_y](v67, "max_jpeg_y");
    objc_release(v67);
    objc_release(v66);
    if ( !v68 )
      goto LABEL_96;
  }
  else
  {
    objc_release(v66);
  }
  v64 = 0LL;
LABEL_96:
  if ( (_DWORD)v101 == 3 || (_DWORD)v101 == 1 || v64 == 0LL )
    v33 = (__int64 (__fastcall *)(void *))v64;
  else
    v33 = 0LL;
  if ( v33 )
  {
    if ( HIDWORD(v101) )
    {
      v71 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
      v72 = objc_retainAutoreleasedReturnValue(-[lite_printer_t jpegFeatures](v71, "jpegFeatures"));
      v73 = -[NSSet containsObject:](v72, "containsObject:", CFSTR("icc"));
      objc_release(v72);
      objc_release(v71);
      v33 = (__int64 (__fastcall *)(void *))v64;
      if ( !v73 )
        goto LABEL_111;
    }
  }
  if ( v33 )
  {
    if ( v102 )
    {
      v74 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
      v75 = objc_retainAutoreleasedReturnValue(-[lite_printer_t jpegFeatures](v74, "jpegFeatures"));
      v76 = -[NSSet containsObject:](v75, "containsObject:", CFSTR("progressive"));
      objc_release(v75);
      objc_release(v74);
      if ( (v76 & 1) == 0 )
        goto LABEL_111;
    }
  }
LABEL_52:
  if ( v33 && v99 )
  {
    if ( !(unsigned int)objc_msgSend(v99, "compare:", CFSTR("fill"))
      || !(unsigned int)objc_msgSend(v99, "compare:", CFSTR("fit"))
      || !(unsigned int)objc_msgSend(v99, "compare:", CFSTR("none")) )
    {
      v43 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
      v44 = -[lite_printer_t print_scaling_supported](v43, "print_scaling_supported") == 0;
      objc_release(v43);
      if ( v44 )
        goto LABEL_111;
    }
LABEL_78:
    if ( objc_msgSend(v95, "count") )
    {
      v59 = objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFormat](v1, "spoolDocumentFormat"));
      v60 = (unsigned int)-[NSString caseInsensitiveCompare:](v59, "caseInsensitiveCompare:", CFSTR("application/pdf")) == 0;
      objc_release(v59);
      if ( v60 )
      {
        if ( (unsigned __int64)objc_msgSend(v95, "count") <= 1 )
        {
          v77 = objc_retainAutoreleasedReturnValue(objc_msgSend(v95, "firstObject"));
          if ( objc_msgSend(v77, "rangeValue") || v78 != -[lite_job_t pdf_pages](v1, "pdf_pages") )
            v33 = lite_print_redraw_pdf;
          objc_release(v77);
        }
        else
        {
          v33 = lite_print_redraw_pdf;
        }
      }
    }
    v94 = objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFormat](v1, "spoolDocumentFormat"));
    if ( (unsigned int)-[NSString caseInsensitiveCompare:](v94, "caseInsensitiveCompare:", CFSTR("application/pdf")) )
    {
      v65 = 0LL;
    }
    else
    {
      v80 = -[lite_job_t request_attrs](v1, "request_attrs");
      v65 = objc_retainAutoreleasedReturnValue((id)(*((__int64 (__fastcall **)(JobRequestAttributes_Base *))v80->var0
                                                    + 24))(v80));
      if ( v65 )
      {
        v92 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
        v81 = objc_retainAutoreleasedReturnValue(-[lite_printer_t device_uri](v92, "device_uri"));
        if ( !v81
          || (v89 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer")),
              v90 = objc_retainAutoreleasedReturnValue(-[lite_printer_t device_uri](v89, "device_uri")),
              v91 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[NSURL absoluteString](v90, "absoluteString"))),
              strncmp(-[NSString UTF8String](v91, "UTF8String"), "ipps://", 7uLL)) )
        {
          v84 = objc_msgSend(v65, "length");
          v85 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
          v88 = v81;
          v86 = v81 == 0LL;
          v87 = (unsigned __int64)v84 > -[lite_printer_t documentPasswordSupported](v85, "documentPasswordSupported");
          objc_release(v85);
          if ( !v86 )
          {
            objc_release(v91);
            objc_release(v90);
            objc_release(v89);
            objc_release(v88);
          }
          objc_release(v92);
          objc_release(v94);
          if ( v87 )
            goto LABEL_112;
LABEL_121:
          if ( v33 )
          {
            v79 = objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFormat](v1, "spoolDocumentFormat"));
            if ( (unsigned int)-[NSString caseInsensitiveCompare:](
                                 v79,
                                 "caseInsensitiveCompare:",
                                 CFSTR("application/pdf")) )
            {
              objc_release(v79);
            }
            else
            {
              v82 = -[lite_job_t request_attrs](v1, "request_attrs");
              v83 = (*((__int64 (__fastcall **)(JobRequestAttributes_Base *))v82->var0 + 4))(v82);
              objc_release(v79);
              if ( v83 )
                v33 = lite_print_redraw_pdf;
            }
          }
          goto LABEL_113;
        }
        objc_release(v91);
        objc_release(v90);
        objc_release(v89);
        objc_release(v81);
        objc_release(v92);
      }
    }
    objc_release(v94);
    goto LABEL_121;
  }
  if ( v33 )
    goto LABEL_78;
  v65 = 0LL;
LABEL_113:
  objc_release(v65);
LABEL_32:
  if ( (v33 || v26)
    && (v34 = objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFormat](v1, "spoolDocumentFormat")),
        v35 = (unsigned int)-[NSString caseInsensitiveCompare:](v34, "caseInsensitiveCompare:", CFSTR("image/png")) == 0,
        objc_release(v34),
        !v35) )
  {
    if ( !v33 )
      v33 = lite_print_pdf;
  }
  else if ( v22 && !v1->force_raster )
  {
    if ( -[NSSet containsObject:](v22, "containsObject:", CFSTR("application/pdf")) )
      v33 = lite_print_pdfimage;
    else
      v33 = lite_print_image;
  }
  else
  {
    if ( !v26 )
    {
      v45 = objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFilename](v1, "spoolDocumentFilename"));
      if ( (unsigned int)sub_100054DB0() )
      {
        v46 = v100;
        v47 = HIDWORD(v100);
        v48 = v101;
        v49 = SHIDWORD(v100) * (__int64)(int)v100 * (int)v101 > (unsigned __int64)MaxImageMemory;
        objc_release(v45);
        if ( v49 )
        {
          v50 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
          if ( os_log_type_enabled(v50, OS_LOG_TYPE_DEFAULT) )
          {
            v51 = -[lite_job_t printd_job_id](v1, "printd_job_id");
            if ( v1 )
              v52 = -[lite_job_t destination_job_id](v1, "destination_job_id");
            else
              v52 = -1;
            *(_DWORD *)v103 = 67110400;
            v104 = v51;
            v105 = 1024;
            v106 = v52;
            v107 = 1024;
            v108 = v46;
            v109 = 1024;
            v110 = v47;
            v111 = 1024;
            v112 = v48;
            v113 = 2048;
            v114 = MaxImageMemory;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v50,
              OS_LOG_TYPE_DEFAULT,
              "[Job %d][%d] JPEG file is too big to print locally: %dx%dx%d exceeds memory limit of %ld bytes.",
              v103,
              0x2Au);
          }
          objc_release(v50);
          objc_release(v95);
          objc_release(v99);
          objc_release(v22);
          goto LABEL_27;
        }
      }
      else
      {
        objc_release(v45);
      }
    }
    v33 = lite_print_image;
  }
  v53 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
  if ( os_log_type_enabled(v53, OS_LOG_TYPE_DEFAULT) )
  {
    v54 = -[lite_job_t printd_job_id](v1, "printd_job_id");
    if ( v1 )
      v55 = -[lite_job_t destination_job_id](v1, "destination_job_id");
    else
      v55 = -1;
    *(_DWORD *)v103 = 67109376;
    v104 = v54;
    v105 = 1024;
    v106 = v55;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v53,
      OS_LOG_TYPE_DEFAULT,
      "[Job %d][%d] Starting print thread.",
      v103,
      0xEu);
  }
  objc_release(v53);
  v96[0] = _NSConcreteStackBlock;
  v96[1] = 3254779904LL;
  v96[2] = sub_10005512C;
  v96[3] = &unk_10009F388;
  v98 = v33;
  v97 = objc_retain(v1);
  +[NSThread detachNewThreadWithBlock:](&OBJC_CLASS___NSThread, "detachNewThreadWithBlock:", v96);
  objc_release(v97);
  objc_release(v95);
  objc_release(v99);
  objc_release(v22);
  v31 = 1LL;
LABEL_28:
  objc_release(v1);
  return v31;
}