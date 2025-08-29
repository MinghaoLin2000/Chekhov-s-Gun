-[LSRConnection prepareRecognizerWithLanguage:recognitionOverrides:modelOverrideURL:anyConfiguration:task:clientID:error:]
bool __cdecl -[LSRConnection prepareRecognizerWithLanguage:recognitionOverrides:modelOverrideURL:anyConfiguration:task:clientID:error:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        bool a6,
        id a7,
        id a8,
        id *a9)
{
  id v14; // x22
  id v15; // x23
  id v16; // x19
  id v17; // x27
  id v18; // x25
  os_log_s *v19; // x20
  id v20; // x0
  void *v21; // x24
  void *v22; // x20
  const __CFString *v23; // x21
  void *v24; // x22
  unsigned __int64 v25; // x3
  __CFString *v26; // x24
  id v27; // x19
  id v28; // x0
  id v29; // x25
  os_log_s *v30; // x25
  void *v31; // x0
  os_log_s *v32; // x19
  void *v33; // x19
  __int64 v34; // x1
  NSBundle *v35; // x20
  NSString *v36; // x19
  NSString **v37; // x2
  NSErrorUserInfoKey *v38; // x3
  __int64 v39; // x4
  void *v40; // x25
  void *v41; // x19
  void *v42; // x0
  os_log_s *v43; // x25
  NSString *modelRoot; // x6
  id v45; // x24
  id v46; // x23
  id WeakRetained; // x23
  id v48; // x0
  void *v49; // x8
  id v50; // x19
  id v51; // x0
  void *v52; // x8
  id v53; // x19
  void *v54; // x20
  bool v55; // w19
  void *v56; // x19
  os_log_s *v57; // x20
  const __CFString *v58; // x22
  __CFString *v59; // x0
  const __CFString **v60; // x2
  NSErrorUserInfoKey *v61; // x3
  __int64 v62; // x4
  NSDictionary *v63; // x20
  NSDictionary *v64; // x0
  NSDictionary *v65; // x19
  os_log_s *v67; // x19
  NSString *v68; // x20
  NSString *v69; // x8
  os_log_s *v70; // x19
  NSString *v71; // x20
  NSString *v72; // x8
  NSString **p_modelRoot; // [xsp+8h] [xbp-138h]
  id obj; // [xsp+10h] [xbp-130h]
  _BOOL4 v75; // [xsp+1Ch] [xbp-124h]
  id v76; // [xsp+28h] [xbp-118h]
  id v77; // [xsp+30h] [xbp-110h]
  id v78; // [xsp+38h] [xbp-108h]
  id v79[2]; // [xsp+40h] [xbp-100h] BYREF
  NSErrorUserInfoKey v80; // [xsp+50h] [xbp-F0h] BYREF
  const __CFString *v81; // [xsp+58h] [xbp-E8h] BYREF
  _QWORD v82[2]; // [xsp+60h] [xbp-E0h] BYREF
  _QWORD v83[2]; // [xsp+70h] [xbp-D0h] BYREF
  uint8_t buf[4]; // [xsp+80h] [xbp-C0h] BYREF
  const char *v85; // [xsp+84h] [xbp-BCh]
  __int16 v86; // [xsp+8Ch] [xbp-B4h]
  const __CFString *v87; // [xsp+8Eh] [xbp-B2h]
  __int16 v88; // [xsp+96h] [xbp-AAh]
  NSString *v89; // [xsp+98h] [xbp-A8h]
  __int16 v90; // [xsp+A0h] [xbp-A0h]
  id v91; // [xsp+A2h] [xbp-9Eh]
  NSErrorUserInfoKey v92; // [xsp+B0h] [xbp-90h] BYREF
  NSString *v93; // [xsp+B8h] [xbp-88h] BYREF
  _QWORD v94[2]; // [xsp+C0h] [xbp-80h] BYREF
  _QWORD v95[2]; // [xsp+D0h] [xbp-70h] BYREF

  v75 = a6;
  v14 = objc_retain(a3);
  v15 = objc_retain(a4);
  v16 = objc_retain(a5);
  obj = a7;
  v17 = objc_retain(a7);
  v18 = objc_retain(a8);
  v19 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315138;
    v85 = "-[LSRConnection prepareRecognizerWithLanguage:recognitionOverrides:modelOverrideURL:anyConfiguration:task:clientID:error:]";
    _os_log_impl((void *)&_mh_execute_header, v19, OS_LOG_TYPE_INFO, "%s Preparing recognizer...", buf, 0xCu);
  }
  dispatch_assert_queue_V2((dispatch_queue_t)qword_100065418);
  v20 = objc_retainAutoreleasedReturnValue((id)_AFPreferencesReplacementLanguageForLocalRecognizerLanguageCode(v14));
  v21 = v20;
  if ( v20 )
    v22 = v20;
  else
    v22 = v14;
  v23 = objc_retain(v22);
  objc_release(v14);
  objc_release(v21);
  v24 = v17;
  if ( v17 )
    v25 = SFEntitledAssetTypeForTaskName(v17);
  else
    v25 = 3LL;
  self->_modelAssetType = v25;
  v79[1] = 0LL;
  v26 = (__CFString *)v23;
  v77 = v18;
  v78 = v16;
  v27 = objc_retainAutoreleasedReturnValue(
          +[LSRConnection modelRootWithLanguage:assetType:clientID:modelOverrideURL:error:](
            &OBJC_CLASS___LSRConnection,
            "modelRootWithLanguage:assetType:clientID:modelOverrideURL:error:",
            v23));
  v28 = objc_retain(0LL);
  v29 = v28;
  v76 = v27;
  if ( !v27 || v28 )
  {
    v33 = (void *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      v67 = objc_retain(v33);
      v68 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "localizedDescription"));
      *(_DWORD *)buf = 136315650;
      v85 = "-[LSRConnection prepareRecognizerWithLanguage:recognitionOverrides:modelOverrideURL:anyConfiguration:task:clientID:error:]";
      v86 = 2112;
      v87 = CFSTR("modelRoot is nil");
      v88 = 2112;
      v89 = v68;
      _os_log_error_impl((void *)&_mh_execute_header, v67, OS_LOG_TYPE_ERROR, "%s %@ %@", buf, 0x20u);
      objc_release(v68);
      objc_release(v67);
    }
    if ( !a9 )
      goto LABEL_50;
    v35 = objc_retainAutoreleasedReturnValue(
            +[NSBundle bundleForClass:](
              &OBJC_CLASS___NSBundle,
              "bundleForClass:",
              objc_opt_class(&OBJC_CLASS___LSRConnection, v34)));
    v36 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v35,
              "localizedStringForKey:value:table:",
              CFSTR("Failed to access assets"),
              &stru_10005A368,
              CFSTR("Localizable")));
    objc_release(v35);
    if ( v29 )
    {
      v94[0] = NSLocalizedDescriptionKey;
      v94[1] = NSUnderlyingErrorKey;
      v95[0] = v36;
      v95[1] = v29;
      v37 = (NSString **)v95;
      v38 = (NSErrorUserInfoKey *)v94;
      v39 = 2LL;
    }
    else
    {
      v92 = NSLocalizedDescriptionKey;
      v93 = v36;
      v37 = &v93;
      v38 = &v92;
      v39 = 1LL;
    }
    v63 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              v37,
              v38,
              v39));
    *a9 = objc_autorelease(
            objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("kLSRErrorDomain"),
                102LL,
                v63)));
    objc_release(v36);
    v64 = v63;
    goto LABEL_49;
  }
  p_modelRoot = &self->_modelRoot;
  objc_storeStrong((id *)&self->_modelRoot, v27);
  if ( qword_100065420 )
  {
    v30 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
    {
      *(_DWORD *)buf = 136315138;
      v85 = "-[LSRConnection prepareRecognizerWithLanguage:recognitionOverrides:modelOverrideURL:anyConfiguration:task:clientID:error:]";
      _os_log_debug_impl(
        (void *)&_mh_execute_header,
        v30,
        OS_LOG_TYPE_DEBUG,
        "%s Recognizer is running, cancel the request",
        buf,
        0xCu);
    }
    objc_msgSend((id)qword_100065458, "cancelRecognition");
    v31 = (void *)qword_100065420;
    qword_100065420 = 0LL;
    objc_release(v31);
  }
  if ( qword_100065458 )
  {
    if ( (unsigned int)objc_msgSend((id)qword_100065440, "isEqualToString:", v23)
      && (unsigned int)objc_msgSend((id)qword_100065450, "isEqualToString:", *p_modelRoot)
      && ((id)qword_100065460 == v15 || (unsigned int)objc_msgSend((id)qword_100065460, "isEqualToDictionary:", v15)) )
    {
      v32 = (os_log_s *)SFLogConnection;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
      {
        v72 = *p_modelRoot;
        *(_DWORD *)buf = 136315906;
        v85 = "-[LSRConnection prepareRecognizerWithLanguage:recognitionOverrides:modelOverrideURL:anyConfiguration:task:"
              "clientID:error:]";
        v86 = 2112;
        v87 = v23;
        v88 = 2112;
        v89 = v72;
        v90 = 2112;
        v91 = v15;
        _os_log_debug_impl(
          (void *)&_mh_execute_header,
          v32,
          OS_LOG_TYPE_DEBUG,
          "%s Using cached recognizer for language=%@ modelRoot=%@ overrides=%@",
          buf,
          0x2Au);
      }
      objc_storeWeak((id *)&self->_recognizer, (id)qword_100065458);
      v29 = 0LL;
      goto LABEL_35;
    }
    v40 = (void *)qword_100065458;
    if ( qword_100065458 )
    {
      v41 = objc_retainAutoreleasedReturnValue(
              +[_EARSpeechRecognitionActiveConfiguration activeConfigurationForNothing](
                &OBJC_CLASS____EARSpeechRecognitionActiveConfiguration,
                "activeConfigurationForNothing"));
      objc_msgSend(v40, "setActiveConfiguration:", v41);
      objc_release(v41);
      v42 = (void *)qword_100065458;
      qword_100065458 = 0LL;
      objc_release(v42);
    }
  }
  v43 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
  {
    v69 = *p_modelRoot;
    *(_DWORD *)buf = 136315906;
    v85 = "-[LSRConnection prepareRecognizerWithLanguage:recognitionOverrides:modelOverrideURL:anyConfiguration:task:clientID:error:]";
    v86 = 2112;
    v87 = v23;
    v88 = 2112;
    v89 = v69;
    v90 = 2112;
    v91 = v15;
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v43,
      OS_LOG_TYPE_DEBUG,
      "%s Initializing a new recognizer for language=%@ modelRoot=%@ overrides=%@",
      buf,
      0x2Au);
  }
  modelRoot = self->_modelRoot;
  v79[0] = 0LL;
  v45 = v15;
  v46 = objc_retainAutoreleasedReturnValue(
          +[_EARSpeechRecognizer _speechRecognizerWithLanguage:overrides:anyConfiguration:taskConfiguration:modelRoot:error:modelLoadTime:](
            &OBJC_CLASS____EARSpeechRecognizer,
            "_speechRecognizerWithLanguage:overrides:anyConfiguration:taskConfiguration:modelRoot:error:modelLoadTime:",
            v23,
            v15,
            v75,
            v17,
            modelRoot,
            v79,
            &self->_modelLoadTime));
  v29 = objc_retain(v79[0]);
  objc_storeWeak((id *)&self->_recognizer, v46);
  objc_release(v46);
  WeakRetained = objc_loadWeakRetained((id *)&self->_recognizer);
  objc_release(WeakRetained);
  if ( WeakRetained )
  {
    v48 = objc_loadWeakRetained((id *)&self->_recognizer);
    v49 = (void *)qword_100065458;
    qword_100065458 = (__int64)v48;
    objc_release(v49);
    objc_storeStrong((id *)&qword_100065460, a4);
    v50 = objc_loadWeakRetained((id *)&self->_recognizer);
    v51 = objc_retainAutoreleasedReturnValue(objc_msgSend(v50, "modelInfo"));
    v52 = (void *)qword_100065468;
    qword_100065468 = (__int64)v51;
    objc_release(v52);
    objc_release(v50);
    objc_storeStrong((id *)&qword_100065440, v22);
    objc_storeStrong((id *)&qword_100065450, *p_modelRoot);
    objc_storeStrong((id *)&qword_100065470, obj);
  }
  v15 = v45;
  v26 = (__CFString *)v23;
LABEL_35:
  v24 = v17;
  if ( qword_100065458 )
    +[LSRConnection _scheduleCooldownTimer](&OBJC_CLASS___LSRConnection, "_scheduleCooldownTimer");
  v53 = objc_loadWeakRetained((id *)&self->_recognizer);
  objc_release(v53);
  v54 = (void *)SFLogConnection;
  if ( !v53 )
  {
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      v70 = objc_retain(v54);
      v71 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "localizedDescription"));
      *(_DWORD *)buf = 136315650;
      v85 = "-[LSRConnection prepareRecognizerWithLanguage:recognitionOverrides:modelOverrideURL:anyConfiguration:task:clientID:error:]";
      v86 = 2112;
      v87 = CFSTR("_EARSpeechRecognizer is nil");
      v88 = 2112;
      v89 = v71;
      _os_log_error_impl((void *)&_mh_execute_header, v70, OS_LOG_TYPE_ERROR, "%s %@ %@", buf, 0x20u);
      objc_release(v71);
      objc_release(v70);
    }
    if ( !a9 )
      goto LABEL_50;
    if ( v29 )
    {
      v82[0] = NSLocalizedDescriptionKey;
      v82[1] = NSUnderlyingErrorKey;
      v83[0] = CFSTR("Failed to initialize recognizer");
      v83[1] = v29;
      v60 = (const __CFString **)v83;
      v61 = (NSErrorUserInfoKey *)v82;
      v62 = 2LL;
    }
    else
    {
      v80 = NSLocalizedDescriptionKey;
      v81 = CFSTR("Failed to initialize recognizer");
      v60 = &v81;
      v61 = &v80;
      v62 = 1LL;
    }
    v65 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              v60,
              v61,
              v62));
    *a9 = objc_autorelease(
            objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("kLSRErrorDomain"),
                300LL,
                v65)));
    v64 = v65;
LABEL_49:
    objc_release(v64);
LABEL_50:
    v55 = 0;
    goto LABEL_51;
  }
  v55 = 1;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
  {
    v56 = (void *)qword_100065468;
    v57 = objc_retain(v54);
    v58 = objc_retainAutoreleasedReturnValue(objc_msgSend(v56, "description"));
    *(_DWORD *)buf = 136315394;
    v85 = "-[LSRConnection prepareRecognizerWithLanguage:recognitionOverrides:modelOverrideURL:anyConfiguration:task:clientID:error:]";
    v86 = 2112;
    v87 = v58;
    v55 = 1;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v57,
      OS_LOG_TYPE_INFO,
      "%s Created _EARSpeechRecognizer successfully with modelInfo: %@",
      buf,
      0x16u);
    v59 = (__CFString *)v58;
    v24 = v17;
    objc_release(v59);
    objc_release(v57);
  }
LABEL_51:
  objc_release(v76);
  objc_release(v29);
  objc_release(v77);
  objc_release(v24);
  objc_release(v78);
  objc_release(v15);
  objc_release(v26);
  return v55;
}