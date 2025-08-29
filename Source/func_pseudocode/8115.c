-[XPCSignpostReader createSignpostFile:withStartDate:withEndDate:withallowlist:withTagConfig:]
id __cdecl -[XPCSignpostReader createSignpostFile:withStartDate:withEndDate:withallowlist:withTagConfig:](
        XPCSignpostReader *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7)
{
  id v11; // x24
  _UNKNOWN **v12; // x21
  NSFileManager *v13; // x19
  os_log_s *v14; // x20
  char *v15; // x19
  NSFileManager *v16; // x19
  unsigned int v17; // w20
  NSMutableArray *v18; // x19
  id v19; // x26
  void *v20; // x22
  __int64 v21; // x27
  void *v22; // x20
  void *v23; // x25
  os_log_s *v24; // x19
  id v25; // x0
  unsigned __int8 v26; // w19
  os_log_s *v27; // x28
  _BOOL4 v28; // w0
  void *v29; // x19
  _QWORD *v30; // x28
  void *v31; // x19
  id v32; // x21
  char *v33; // x19
  void *v34; // x24
  char *v35; // x19
  unsigned int v36; // w0
  os_log_s *v37; // x19
  id v38; // x20
  _QWORD *v39; // x21
  id v40; // x19
  id v41; // x20
  os_log_s *v42; // x19
  unsigned __int8 v43; // w20
  id v44; // x19
  os_log_s *v45; // x20
  unsigned int v46; // w0
  NSString *v47; // x20
  NSURL *v48; // x21
  os_log_s *v49; // x21
  const char *v51; // x0
  id v52; // [xsp+10h] [xbp-360h]
  _QWORD *v53; // [xsp+18h] [xbp-358h]
  id v54; // [xsp+20h] [xbp-350h]
  os_log_s *v55; // [xsp+28h] [xbp-348h]
  id v56; // [xsp+30h] [xbp-340h]
  id v57; // [xsp+38h] [xbp-338h]
  id v58; // [xsp+40h] [xbp-330h]
  id v59; // [xsp+48h] [xbp-328h]
  id v60; // [xsp+50h] [xbp-320h]
  id v61; // [xsp+58h] [xbp-318h]
  id v62; // [xsp+80h] [xbp-2F0h]
  id v63; // [xsp+88h] [xbp-2E8h]
  NSMutableArray *v64; // [xsp+90h] [xbp-2E0h]
  id v66; // [xsp+A0h] [xbp-2D0h] BYREF
  _QWORD v67[4]; // [xsp+A8h] [xbp-2C8h] BYREF
  id v68; // [xsp+C8h] [xbp-2A8h]
  _QWORD v69[4]; // [xsp+D0h] [xbp-2A0h] BYREF
  id v70; // [xsp+F0h] [xbp-280h]
  id v71; // [xsp+F8h] [xbp-278h]
  id v72; // [xsp+100h] [xbp-270h]
  id v73; // [xsp+108h] [xbp-268h]
  _QWORD v74[4]; // [xsp+110h] [xbp-260h] BYREF
  id v75; // [xsp+130h] [xbp-240h]
  id v76; // [xsp+138h] [xbp-238h]
  XPCSignpostReader *v77; // [xsp+140h] [xbp-230h]
  id v78; // [xsp+148h] [xbp-228h]
  __int64 *v79; // [xsp+150h] [xbp-220h]
  _QWORD v80[6]; // [xsp+158h] [xbp-218h] BYREF
  id v81; // [xsp+188h] [xbp-1E8h]
  __int128 v82; // [xsp+190h] [xbp-1E0h] BYREF
  __int128 v83; // [xsp+1A0h] [xbp-1D0h]
  __int128 v84; // [xsp+1B0h] [xbp-1C0h]
  __int128 v85; // [xsp+1C0h] [xbp-1B0h]
  _QWORD v86[5]; // [xsp+1D0h] [xbp-1A0h] BYREF
  id v87; // [xsp+1F8h] [xbp-178h]
  id v88; // [xsp+200h] [xbp-170h]
  id v89; // [xsp+208h] [xbp-168h]
  __int64 *v90; // [xsp+210h] [xbp-160h]
  id v91; // [xsp+218h] [xbp-158h] BYREF
  __int64 v92; // [xsp+220h] [xbp-150h] BYREF
  __int64 *v93; // [xsp+228h] [xbp-148h]
  __int64 v94; // [xsp+230h] [xbp-140h]
  int v95; // [xsp+238h] [xbp-138h]
  uint8_t buf[4]; // [xsp+240h] [xbp-130h] BYREF
  const char *v97; // [xsp+244h] [xbp-12Ch]
  __int16 v98; // [xsp+24Ch] [xbp-124h]
  void *v99; // [xsp+24Eh] [xbp-122h]
  uint8_t v100[4]; // [xsp+260h] [xbp-110h] BYREF
  int v101; // [xsp+264h] [xbp-10Ch] BYREF
  _BYTE v102[128]; // [xsp+278h] [xbp-F8h] BYREF
  __int64 vars8; // [xsp+378h] [xbp+8h]

  v11 = objc_retain(a3);
  v58 = objc_retain(a4);
  v59 = objc_retain(a5);
  v60 = objc_retain(a6);
  v61 = objc_retain(a7);
  v92 = 0LL;
  v93 = &v92;
  v94 = 0x2020000000LL;
  v95 = 0;
  v12 = &ADClientSetValueForScalarKey_ptr;
  v13 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  LOBYTE(a6) = -[NSFileManager fileExistsAtPath:](v13, "fileExistsAtPath:", v11);
  objc_release(v13);
  if ( ((unsigned __int8)a6 & 1) == 0 )
  {
    v16 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v91 = 0LL;
    v17 = -[NSFileManager createDirectoryAtPath:withIntermediateDirectories:attributes:error:](
            v16,
            "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
            v11,
            1LL,
            0LL,
            &v91);
    v55 = (os_log_s *)objc_retain(v91);
    objc_release(v16);
    if ( v17 )
    {
      v57 = objc_alloc_init((Class)&OBJC_CLASS___SignpostSupportObjectExtractor);
      v56 = objc_retainAutoreleasedReturnValue(-[XPCSignpostReader subsystemCategoryAllowlist:](self, "subsystemCategoryAllowlist:", v60));
      v18 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
      v86[0] = _NSConcreteStackBlock;
      v86[1] = 3254779904LL;
      v86[2] = sub_10000A6BC;
      v86[3] = &unk_1000144F8;
      v86[4] = self;
      v87 = objc_retain(v61);
      v64 = objc_retain(v18);
      v88 = v64;
      v90 = &v92;
      v52 = objc_retain(v11);
      v89 = v52;
      v53 = objc_retainBlock(v86);
      objc_msgSend(v57, "setIntervalCompletionProcessingBlock:", v53);
      v54 = objc_retainAutoreleasedReturnValue(+[WRWorkflow allWorkflows](&OBJC_CLASS___WRWorkflow, "allWorkflows"));
      if ( objc_msgSend(v54, "count") )
      {
        v63 = objc_alloc_init((Class)&OBJC_CLASS___SignpostSupportSubsystemCategoryAllowlist);
        v62 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
        v84 = 0u;
        v85 = 0u;
        v82 = 0u;
        v83 = 0u;
        v19 = objc_retain(v54);
        v20 = objc_msgSend(v19, "countByEnumeratingWithState:objects:count:", &v82, v102, 16LL);
        if ( v20 )
        {
          v21 = *(_QWORD *)v83;
          do
          {
            v22 = 0LL;
            do
            {
              if ( *(_QWORD *)v83 != v21 )
                objc_enumerationMutation(v19);
              v23 = *(void **)(*((_QWORD *)&v82 + 1) + 8LL * (_QWORD)v22);
              v24 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
              if ( os_log_type_enabled(v24, OS_LOG_TYPE_DEBUG) )
              {
                v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "name"));
                sub_10000E674((int)v25, v100, (int)&v101, v24);
              }
              objc_release(v24);
              v26 = (unsigned __int8)objc_msgSend(v23, "contextualTelemetryEnabled");
              v27 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
              v28 = os_log_type_enabled(v27, OS_LOG_TYPE_DEBUG);
              if ( (v26 & 1) != 0 )
              {
                if ( v28 )
                {
                  v32 = v11;
                  v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "name"));
                  v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "allowListForAllSignposts"));
                  *(_DWORD *)buf = 138412546;
                  v97 = v33;
                  v98 = 2112;
                  v99 = v34;
                  _os_log_debug_impl(
                    (void *)&_mh_execute_header,
                    v27,
                    OS_LOG_TYPE_DEBUG,
                    "[WR] Appending allowlist for workflow '%@': %@",
                    buf,
                    0x16u);
                  objc_release(v34);
                  v11 = v32;
                  objc_release(v33);
                }
                objc_release(v27);
                v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "allowListForAllSignposts"));
                objc_msgSend(v63, "addAllowlist:", v29);
                objc_release(v29);
                v80[0] = _NSConcreteStackBlock;
                v80[1] = 3254779904LL;
                v80[2] = sub_10000A7FC;
                v80[3] = &unk_100014528;
                v80[4] = v23;
                v80[5] = self;
                v81 = objc_retain(v64);
                v30 = objc_retainBlock(v80);
                v31 = objc_msgSend(
                        objc_alloc((Class)&OBJC_CLASS___WRWorkflowEventTracker),
                        "initForReadbackWithWorkflow:eventCompletionCallback:",
                        v23,
                        v30);
                objc_msgSend(v62, "addObject:", v31);
                objc_release(v31);
                objc_release(v30);
                objc_release(v81);
              }
              else
              {
                if ( v28 )
                {
                  v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "name"));
                  v36 = (unsigned int)objc_msgSend(v23, "contextualTelemetryEnabled");
                  *(_DWORD *)buf = 138412546;
                  v97 = v35;
                  v98 = 1024;
                  LODWORD(v99) = v36;
                  _os_log_debug_impl(
                    (void *)&_mh_execute_header,
                    v27,
                    OS_LOG_TYPE_DEBUG,
                    "[WR] workflow %@ does not have contextualTelemetryEnabled (=%d), skipping to next workflow",
                    buf,
                    0x12u);
                  objc_release(v35);
                }
                objc_release(v27);
              }
              v22 = (char *)v22 + 1;
            }
            while ( v20 != v22 );
            v20 = objc_msgSend(v19, "countByEnumeratingWithState:objects:count:", &v82, v102, 16LL);
          }
          while ( v20 );
        }
        objc_release(v19);
        v37 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
        if ( os_log_type_enabled(v37, OS_LOG_TYPE_DEBUG) )
          sub_10000E60C(v63, v37);
        objc_release(v37);
        objc_msgSend(v56, "addAllowlist:", v63);
        v74[0] = _NSConcreteStackBlock;
        v74[1] = 3254779904LL;
        v74[2] = sub_10000AEB0;
        v74[3] = &unk_100014558;
        v38 = objc_retain(v62);
        v75 = v38;
        v79 = &v92;
        v76 = objc_retain(v64);
        v77 = self;
        v78 = objc_retain(v52);
        v39 = objc_retainBlock(v74);
        objc_msgSend(v57, "setEmitEventProcessingBlock:", v39);
        objc_msgSend(v57, "setBeginEventProcessingBlock:", v39);
        v69[0] = _NSConcreteStackBlock;
        v69[1] = 3254779904LL;
        v69[2] = sub_10000B198;
        v69[3] = &unk_100014588;
        v40 = objc_retain(v63);
        v70 = v40;
        v12 = objc_retain(v39);
        v72 = v12;
        v71 = objc_retain(v56);
        v73 = objc_retain(v53);
        objc_msgSend(v57, "setIntervalCompletionProcessingBlock:", v69);
        v67[0] = _NSConcreteStackBlock;
        v67[1] = 3254779904LL;
        v67[2] = sub_10000B358;
        v67[3] = &unk_1000145B8;
        v41 = objc_retain(v38);
        v68 = v41;
        objc_msgSend(v57, "setDeviceRebootProcessingBlock:", v67);
        objc_release(v68);
        objc_release(v73);
        objc_release(v71);
        objc_release(v72);
        objc_release(v70);
        objc_release(v12);
        objc_release(v78);
        objc_release(v76);
        objc_release(v75);
        objc_release(v41);
        objc_release(v40);
      }
      v42 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
      if ( os_log_type_enabled(v42, OS_LOG_TYPE_DEBUG) )
        sub_10000E5A4(v56, v42);
      objc_release(v42);
      objc_msgSend(v57, "setSubsystemCategoryFilter:", v56);
      v66 = 0LL;
      v43 = (unsigned __int8)objc_msgSend(
                               v57,
                               "processLogArchiveWithPath:startDate:endDate:errorOut:",
                               0LL,
                               v58,
                               v59,
                               &v66);
      v44 = objc_retain(v66);
      if ( (v43 & 1) == 0 )
      {
        v45 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
        if ( os_log_type_enabled(v45, OS_LOG_TYPE_ERROR) )
        {
          if ( v44 )
          {
            v12 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v44, "localizedDescription")));
            v51 = (const char *)objc_msgSend(v12, "UTF8String");
          }
          else
          {
            v51 = "Unknown error";
          }
          *(_DWORD *)buf = 136315138;
          v97 = v51;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            v45,
            OS_LOG_TYPE_ERROR,
            "Unable to serialize signpost: %s",
            buf,
            0xCu);
          if ( v44 )
            objc_release(v12);
        }
        objc_release(v45);
      }
      v46 = -[XPCSignpostReader writeSignpostFile:withOrder:withData:](
              self,
              "writeSignpostFile:withOrder:withData:",
              v52,
              *((unsigned int *)v93 + 6),
              v64);
      *((_DWORD *)v93 + 6) = v46;
      objc_release(v44);
      objc_release(v54);
      objc_release(v53);
      objc_release(v89);
      objc_release(v88);
      objc_release(v87);
      objc_release(v64);
      objc_release(v56);
      objc_release(v57);
    }
    if ( *((_DWORD *)v93 + 6) )
    {
      v47 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("%@%@"),
                v11,
                CFSTR("tag.json")));
      if ( -[XPCSignpostReader createTagFile:withTagConfig:withFileCount:](
             self,
             "createTagFile:withTagConfig:withFileCount:",
             v47,
             v61,
             *((unsigned int *)v93 + 6)) )
      {
        v48 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v11));
        v15 = objc_retainAutoreleasedReturnValue(
                +[DEArchiver archiveDirectoryAt:deleteOriginal:](
                  &OBJC_CLASS___DEArchiver,
                  "archiveDirectoryAt:deleteOriginal:",
                  v48,
                  1LL));
        objc_release(v48);
        v49 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
        if ( os_log_type_enabled(v49, OS_LOG_TYPE_INFO) )
        {
          *(_DWORD *)buf = 138412290;
          v97 = v15;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v49,
            OS_LOG_TYPE_INFO,
            "Signpost tarball generated at %@",
            buf,
            0xCu);
        }
        objc_release(v49);
        objc_release(v47);
        goto LABEL_40;
      }
      objc_release(v47);
    }
    v15 = 0LL;
LABEL_40:
    v14 = v55;
    goto LABEL_41;
  }
  v14 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
  if ( os_log_type_enabled(v14, OS_LOG_TYPE_ERROR) )
    sub_10000E53C(v11, v14);
  v15 = 0LL;
LABEL_41:
  objc_release(v14);
  _Block_object_dispose(&v92, 8);
  objc_release(v61);
  objc_release(v60);
  objc_release(v59);
  objc_release(v58);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}