-[LSRLanguageModel trainAppLmFromNgramCountsArtifact:forApp:language:appLmArtifact:vocabFile:]
void __cdecl -[LSRLanguageModel trainAppLmFromNgramCountsArtifact:forApp:language:appLmArtifact:vocabFile:](
        LSRLanguageModel *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id *a6,
        id *a7)
{
  __CFString *v11; // x20
  id v12; // x0
  const __CFString *modelVersion; // x8
  const __CFString *v14; // x9
  NSDictionary *v15; // x22
  id v16; // x23
  NSDictionary *v17; // x22
  NSProcessInfo *v18; // x21
  double v19; // d0
  double v20; // d8
  void *v21; // x23
  NSString *recognizerConfigFilePath; // x21
  void *v23; // x28
  unsigned __int8 v24; // w25
  NSProcessInfo *v25; // x21
  double v26; // d0
  double v27; // d9
  double v28; // d14
  id v29; // x23
  void *v30; // x21
  void *v31; // x23
  NSProcessInfo *v32; // x21
  double v33; // d0
  double v34; // d9
  id v35; // x25
  NSProcessInfo *v36; // x21
  double v37; // d0
  double v38; // d10
  id v39; // x28
  os_log_s *v40; // x21
  id v41; // x23
  os_log_s *v42; // x25
  id v43; // x24
  os_log_s *v44; // x21
  id v45; // x24
  void *v46; // x21
  id v47; // x21
  void *v48; // x28
  id v49; // x27
  os_log_s *v50; // x21
  NSProcessInfo *v51; // x21
  double v52; // d0
  double v53; // d11
  id v54; // x26
  NSProcessInfo *v55; // x21
  double v56; // d0
  double v57; // d12
  os_log_s *v58; // x28
  void *v59; // x21
  id v60; // x24
  _QWORD *v61; // x19
  os_log_s *v62; // x26
  id v63; // x8
  id v64; // x24
  id v65; // [xsp+8h] [xbp-328h]
  id v67; // [xsp+18h] [xbp-318h]
  id v68; // [xsp+20h] [xbp-310h]
  _QWORD v69[10]; // [xsp+58h] [xbp-2D8h] BYREF
  _QWORD v70[7]; // [xsp+A8h] [xbp-288h] BYREF
  _QWORD v71[4]; // [xsp+E0h] [xbp-250h] BYREF
  id v72; // [xsp+100h] [xbp-230h]
  id v73; // [xsp+108h] [xbp-228h]
  double v74; // [xsp+110h] [xbp-220h]
  _QWORD v75[5]; // [xsp+118h] [xbp-218h] BYREF
  _QWORD v76[4]; // [xsp+140h] [xbp-1F0h] BYREF
  id v77; // [xsp+160h] [xbp-1D0h]
  id v78; // [xsp+168h] [xbp-1C8h]
  double v79; // [xsp+170h] [xbp-1C0h]
  _QWORD v80[4]; // [xsp+178h] [xbp-1B8h] BYREF
  id v81; // [xsp+198h] [xbp-198h]
  double v82; // [xsp+1A0h] [xbp-190h]
  _QWORD v83[4]; // [xsp+1A8h] [xbp-188h] BYREF
  id v84; // [xsp+1C8h] [xbp-168h]
  double v85; // [xsp+1D0h] [xbp-160h]
  _QWORD v86[4]; // [xsp+1D8h] [xbp-158h] BYREF
  id v87; // [xsp+1F8h] [xbp-138h]
  uint8_t v88[4]; // [xsp+200h] [xbp-130h] BYREF
  const char *v89; // [xsp+204h] [xbp-12Ch]
  __int16 v90; // [xsp+20Ch] [xbp-124h]
  id v91; // [xsp+20Eh] [xbp-122h]
  _BYTE buf[24]; // [xsp+220h] [xbp-110h] BYREF
  __int64 (__fastcall *v93)(); // [xsp+238h] [xbp-F8h]
  __int64 (__fastcall *v94)(); // [xsp+240h] [xbp-F0h]
  id v95; // [xsp+248h] [xbp-E8h]
  _QWORD v96[3]; // [xsp+258h] [xbp-D8h] BYREF
  _QWORD v97[3]; // [xsp+270h] [xbp-C0h] BYREF

  v68 = objc_retain(a3);
  v11 = (__CFString *)objc_retain(a4);
  v12 = objc_retain(a5);
  v96[0] = kSFCoreAnalyticsLanguageKey;
  v96[1] = kSFCoreAnalyticsAppnameKey;
  modelVersion = CFSTR("<unknown>");
  if ( v11 )
    v14 = v11;
  else
    v14 = CFSTR("<unknown>");
  v67 = v12;
  v97[0] = v12;
  v97[1] = v14;
  v96[2] = kSFCoreAnalyticsModelVersionKey;
  if ( self->_modelVersion )
    modelVersion = (const __CFString *)self->_modelVersion;
  v97[2] = modelVersion;
  v15 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            v97,
            v96,
            3LL));
  v16 = objc_retainAutoreleasedReturnValue((id)SFAnalyticsEventTypeGetName(301LL));
  v86[0] = _NSConcreteStackBlock;
  v86[1] = 3254779904LL;
  v86[2] = sub_10002E7D4;
  v86[3] = &unk_100059CB8;
  v17 = objc_retain(v15);
  v87 = v17;
  AnalyticsSendEventLazy(v16, v86);
  objc_release(v16);
  v18 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
  -[NSProcessInfo systemUptime](v18, "systemUptime");
  v20 = v19;
  objc_release(v18);
  v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v68, "path"));
  recognizerConfigFilePath = self->_recognizerConfigFilePath;
  v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(*a6, "path"));
  v24 = (unsigned __int8)+[_EARAppLmArtifact transitionArtifactAt:toStage:configPath:dataRoot:estimationRoot:minimize:saveTo:](
                           &OBJC_CLASS____EARAppLmArtifact,
                           "transitionArtifactAt:toStage:configPath:dataRoot:estimationRoot:minimize:saveTo:",
                           v21,
                           5LL,
                           recognizerConfigFilePath,
                           0LL,
                           0LL,
                           1LL,
                           v23);
  objc_release(v23);
  objc_release(v21);
  v25 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
  -[NSProcessInfo systemUptime](v25, "systemUptime");
  v27 = v26;
  objc_release(v25);
  v28 = v27 - v20;
  if ( (v24 & 1) != 0 )
  {
    v29 = objc_alloc((Class)&OBJC_CLASS____EARAppLmArtifact);
    v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v68, "path"));
    v31 = objc_msgSend(v29, "initWithPath:", v30);
    objc_release(v30);
    if ( v31 )
    {
      v32 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
      -[NSProcessInfo systemUptime](v32, "systemUptime");
      v34 = v33;
      objc_release(v32);
      v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v31, "loadCustomPronData:dataRoot:", self->_recognizerConfigFilePath, 0LL));
      v36 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
      -[NSProcessInfo systemUptime](v36, "systemUptime");
      v38 = v37;
      objc_release(v36);
      if ( v35 )
      {
        *(_QWORD *)buf = 0LL;
        *(_QWORD *)&buf[8] = buf;
        *(_QWORD *)&buf[16] = 0x3032000000LL;
        v93 = sub_10002EBC8;
        v94 = sub_10002EBD8;
        v95 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
        if ( (unsigned int)objc_msgSend(v35, "isValid") )
        {
          v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v35, "getProns"));
          v75[0] = _NSConcreteStackBlock;
          v75[1] = 3254779904LL;
          v75[2] = sub_10002EBE0;
          v75[3] = &unk_100059AA0;
          v75[4] = buf;
          objc_msgSend(v39, "enumerateObjectsUsingBlock:", v75);
        }
        else
        {
          v39 = objc_retain(SFLogConnection);
          if ( os_log_type_enabled((os_log_t)v39, OS_LOG_TYPE_INFO) )
          {
            v46 = objc_retainAutoreleasedReturnValue(objc_msgSend(v35, "validationError"));
            *(_DWORD *)v88 = 136315394;
            v89 = "-[LSRLanguageModel trainAppLmFromNgramCountsArtifact:forApp:language:appLmArtifact:vocabFile:]";
            v90 = 2112;
            v91 = v46;
            _os_log_impl(
              (void *)&_mh_execute_header,
              (os_log_t)v39,
              OS_LOG_TYPE_INFO,
              "%s Artifact contained invalid custom prons; skipping. %@",
              v88,
              0x16u);
            objc_release(v46);
          }
        }
        objc_release(v39);
        v47 = objc_alloc((Class)&OBJC_CLASS____EARAppLmArtifact);
        v48 = objc_retainAutoreleasedReturnValue(objc_msgSend(*a6, "path"));
        v65 = objc_msgSend(v47, "initWithPath:", v48);
        objc_release(v48);
        if ( v65 )
        {
          v49 = objc_retainAutoreleasedReturnValue(objc_msgSend(v65, "loadOovs"));
          if ( !v49 )
          {
            v50 = (os_log_s *)SFLogConnection;
            if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
            {
              *(_DWORD *)v88 = 136315138;
              v89 = "-[LSRLanguageModel trainAppLmFromNgramCountsArtifact:forApp:language:appLmArtifact:vocabFile:]";
              _os_log_impl(
                (void *)&_mh_execute_header,
                v50,
                OS_LOG_TYPE_INFO,
                "%s Could not get OOVs from artifact",
                v88,
                0xCu);
            }
            v49 = &__NSArray0__struct;
          }
          v51 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
          -[NSProcessInfo systemUptime](v51, "systemUptime");
          v53 = v52;
          objc_release(v51);
          v54 = objc_retainAutoreleasedReturnValue(
                  -[LSRLanguageModel createSpeechProfileFromOovs:customProns:language:](
                    self,
                    "createSpeechProfileFromOovs:customProns:language:",
                    v49,
                    *(_QWORD *)(*(_QWORD *)&buf[8] + 40LL),
                    v67));
          v55 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
          -[NSProcessInfo systemUptime](v55, "systemUptime");
          v57 = v56;
          objc_release(v55);
          if ( v54 )
          {
            objc_msgSend(v54, "writeToURL:atomically:", *a7, 0LL);
            v58 = (os_log_s *)objc_retain(SFLogConnection);
            if ( os_log_type_enabled(v58, OS_LOG_TYPE_INFO) )
            {
              v59 = objc_retainAutoreleasedReturnValue(objc_msgSend(*a7, "path"));
              *(_DWORD *)v88 = 136315394;
              v89 = "-[LSRLanguageModel trainAppLmFromNgramCountsArtifact:forApp:language:appLmArtifact:vocabFile:]";
              v90 = 2112;
              v91 = v59;
              _os_log_impl(
                (void *)&_mh_execute_header,
                v58,
                OS_LOG_TYPE_INFO,
                "%s Wrote profile data to file:%@",
                v88,
                0x16u);
              objc_release(v59);
            }
            objc_release(v58);
            v60 = objc_retainAutoreleasedReturnValue((id)SFAnalyticsEventTypeGetName(302LL));
            v61 = v69;
            v69[0] = _NSConcreteStackBlock;
            v69[1] = 3254779904LL;
            v69[2] = sub_10002EF54;
            v69[3] = &unk_100059AD0;
            v69[4] = objc_retain(v17);
            v69[5] = objc_retain(v31);
            *(double *)&v69[6] = v28;
            *(double *)&v69[7] = v38 - v34;
            *(double *)&v69[8] = v57 - v53;
            *(double *)&v69[9] = v20;
            AnalyticsSendEventLazy(v60, v69);
          }
          else
          {
            *a7 = 0LL;
            v60 = objc_retainAutoreleasedReturnValue((id)SFAnalyticsEventTypeGetName(303LL));
            v61 = v70;
            v70[0] = _NSConcreteStackBlock;
            v70[1] = 3254779904LL;
            v70[2] = sub_10002EDE4;
            v70[3] = &unk_100059A70;
            v70[4] = objc_retain(v17);
            v70[5] = objc_retain(v31);
            *(double *)&v70[6] = v20;
            AnalyticsSendEventLazy(v60, v70);
          }
          objc_release(v60);
          objc_release((id)v61[5]);
          objc_release((id)v61[4]);
          objc_release(v54);
        }
        else
        {
          v62 = (os_log_s *)SFLogConnection;
          if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
          {
            v63 = *a6;
            *(_DWORD *)v88 = 136315394;
            v89 = "-[LSRLanguageModel trainAppLmFromNgramCountsArtifact:forApp:language:appLmArtifact:vocabFile:]";
            v90 = 2112;
            v91 = v63;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v62,
              OS_LOG_TYPE_INFO,
              "%s Failed to load language model artifact at: %@",
              v88,
              0x16u);
          }
          *a7 = 0LL;
          v64 = objc_retainAutoreleasedReturnValue((id)SFAnalyticsEventTypeGetName(303LL));
          v71[0] = _NSConcreteStackBlock;
          v71[1] = 3254779904LL;
          v71[2] = sub_10002EC74;
          v71[3] = &unk_100059A70;
          v72 = objc_retain(v17);
          v73 = objc_retain(v31);
          v74 = v20;
          AnalyticsSendEventLazy(v64, v71);
          objc_release(v64);
          objc_release(v73);
          v49 = v72;
        }
        objc_release(v49);
        objc_release(v65);
        _Block_object_dispose(buf, 8);
        objc_release(v95);
      }
      else
      {
        v44 = (os_log_s *)SFLogConnection;
        if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
        {
          *(_DWORD *)buf = 136315138;
          *(_QWORD *)&buf[4] = "-[LSRLanguageModel trainAppLmFromNgramCountsArtifact:forApp:language:appLmArtifact:vocabFile:]";
          _os_log_impl(
            (void *)&_mh_execute_header,
            v44,
            OS_LOG_TYPE_INFO,
            "%s Failed to load custom prons from artifact",
            buf,
            0xCu);
        }
        *a7 = 0LL;
        v45 = objc_retainAutoreleasedReturnValue((id)SFAnalyticsEventTypeGetName(303LL));
        v76[0] = _NSConcreteStackBlock;
        v76[1] = 3254779904LL;
        v76[2] = sub_10002EA58;
        v76[3] = &unk_100059A70;
        v77 = objc_retain(v17);
        v78 = objc_retain(v31);
        v79 = v20;
        AnalyticsSendEventLazy(v45, v76);
        objc_release(v45);
        objc_release(v78);
        objc_release(v77);
        v35 = 0LL;
      }
    }
    else
    {
      v42 = (os_log_s *)SFLogConnection;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
      {
        *(_DWORD *)buf = 136315394;
        *(_QWORD *)&buf[4] = "-[LSRLanguageModel trainAppLmFromNgramCountsArtifact:forApp:language:appLmArtifact:vocabFile:]";
        *(_WORD *)&buf[12] = 2112;
        *(_QWORD *)&buf[14] = v68;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v42,
          OS_LOG_TYPE_INFO,
          "%s Failed to read ngram counts artifact at: %@",
          buf,
          0x16u);
      }
      *a7 = 0LL;
      v43 = objc_retainAutoreleasedReturnValue((id)SFAnalyticsEventTypeGetName(303LL));
      v80[0] = _NSConcreteStackBlock;
      v80[1] = 3254779904LL;
      v80[2] = sub_10002E904;
      v80[3] = &unk_100059A40;
      v81 = objc_retain(v17);
      v82 = v20;
      AnalyticsSendEventLazy(v43, v80);
      objc_release(v43);
      v35 = v81;
    }
    objc_release(v35);
    objc_release(v31);
  }
  else
  {
    v40 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315138;
      *(_QWORD *)&buf[4] = "-[LSRLanguageModel trainAppLmFromNgramCountsArtifact:forApp:language:appLmArtifact:vocabFile:]";
      _os_log_impl((void *)&_mh_execute_header, v40, OS_LOG_TYPE_INFO, "%s Failed to train app-specific LM", buf, 0xCu);
    }
    *a7 = 0LL;
    *a6 = 0LL;
    v41 = objc_retainAutoreleasedReturnValue((id)SFAnalyticsEventTypeGetName(303LL));
    v83[0] = _NSConcreteStackBlock;
    v83[1] = 3254779904LL;
    v83[2] = sub_10002E7DC;
    v83[3] = &unk_100059A40;
    v84 = objc_retain(v17);
    v85 = v27 - v20;
    AnalyticsSendEventLazy(v41, v83);
    objc_release(v41);
    objc_release(v84);
  }
  objc_release(v87);
  objc_release(v17);
  objc_release(v67);
  objc_release(v11);
  objc_release(v68);
}