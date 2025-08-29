-[LSRConnection startRecordedAudioDictationWithParameters:]
void __cdecl -[LSRConnection startRecordedAudioDictationWithParameters:](LSRConnection *self, SEL a2, id a3)
{
  id v5; // x19
  os_log_s *v6; // x21
  unsigned int v7; // w24
  NSXPCConnection *v8; // x0
  NSXPCConnection *v9; // x21
  void *v10; // x22
  void *v11; // x24
  id v12; // x25
  char v13; // w26
  os_log_s *v14; // x21
  NSError *v15; // x21
  NSError *v16; // x21
  os_log_s *v17; // x22
  NSDictionary *v18; // x22
  NSError *v19; // x23
  os_log_s *v20; // x22
  id v21; // x0
  bool v22; // w22
  void *v23; // x24
  void *v24; // x25
  NSString *v25; // x22
  NSUserDefaults *v26; // x25
  NSString *v27; // x24
  unsigned int v28; // w26
  os_log_s *v29; // x0
  os_log_s *v30; // x25
  void *v31; // x26
  __int64 (__fastcall *v32)(); // x27
  LSRAudioDump *v33; // x26
  void *v34; // x25
  LSRAudioDump *v35; // x0
  LSRAudioDump *audioDump; // x8
  void *v37; // x26
  __int64 v38; // x27
  void *i; // x28
  NSProcessInfo *v40; // x22
  double v41; // d0
  double v42; // d8
  id v43; // x0
  void *v44; // x24
  void *v45; // x25
  void *v46; // x26
  void *v47; // x27
  void *v48; // x22
  unsigned __int8 v49; // w28
  NSError *v50; // x23
  void *v51; // x22
  unsigned __int8 v52; // w24
  NSUserDefaults *v53; // x22
  NSString *v54; // x24
  os_log_s *v55; // x25
  unsigned int v56; // w0
  os_log_s *v57; // x22
  __int64 v58; // x1
  NSBundle *v59; // x22
  id v60; // x22
  NSProcessInfo *v61; // x22
  double v62; // d0
  id WeakRetained; // x22
  id v64; // x22
  id v65; // x22
  unsigned int v66; // w0
  __int64 v67; // x8
  void *v68; // x22
  void *v69; // x24
  id v70; // x26
  id v71; // x24
  void *v72; // x27
  __int64 v73; // x1
  NSError *v74; // x25
  NSBundle *v75; // x25
  NSString *v76; // x22
  void *v77; // x28
  NSDictionary *v78; // x22
  __int64 v79; // x1
  void *v80; // x22
  void *v81; // x23
  bool v82; // w24
  NSProcessInfo *v83; // x22
  double v84; // d0
  double v85; // d9
  os_log_s *v86; // x23
  void *v87; // x24
  void *v88; // x0
  void *v89; // x22
  id v90; // x23
  void *v91; // x22
  os_log_s *v92; // x24
  os_log_s *v93; // x22
  id v94; // x22
  os_log_s *v95; // x22
  NSBundle *v96; // x23
  NSString *v97; // x22
  NSError *v98; // x23
  NSProcessInfo *v99; // x22
  double v100; // d0
  id v101; // x0
  void *v102; // x8
  void *v103; // x22
  void *v104; // x22
  void *v105; // x24
  unsigned int v106; // w23
  id v107; // x23
  void *v108; // x22
  void *v109; // x24
  id v110; // x23
  void *v111; // x26
  void *v112; // x27
  id v113; // x25
  void *v114; // x22
  void *v115; // x24
  unsigned int v116; // w28
  os_log_s *v117; // x24
  os_log_s *v118; // x26
  _BOOL4 v119; // w0
  void *v120; // x25
  void *v121; // x22
  void *v122; // x24
  void *v123; // x22
  void *v124; // x25
  void *v125; // x22
  id v126; // x22
  void *v127; // x22
  void *v128; // x22
  void *v129; // x24
  NSData *v130; // x23
  os_log_s *v131; // x24
  void *v132; // x25
  void *v133; // x26
  id v134; // x22
  void *v135; // x22
  void *v136; // x24
  id v137; // x23
  id v138; // x24
  int v139; // w26
  const __CFString *v140; // x22
  _BOOL4 v141; // w8
  os_log_s *v142; // x22
  id v143; // x22
  id v144; // x23
  id v145; // x22
  id v146; // x22
  id v147; // x22
  id v148; // x0
  void *v149; // x22
  void *v150; // x25
  id v151; // x0
  bool v152; // w22
  void *v153; // x25
  NSNumber *v154; // x22
  void *v155; // x26
  id v156; // x0
  bool v157; // w22
  void *v158; // x22
  void *v159; // x25
  id v160; // x0
  bool v161; // w22
  void *v162; // x22
  void *v163; // x25
  os_log_s *v164; // x28
  id v165; // x27
  id v166; // x25
  id v167; // x22
  id v168; // x25
  void *v169; // x22
  _EARSpeechRecognitionAudioBuffer *v170; // x0
  _EARSpeechRecognitionAudioBuffer *audioBuffer; // x8
  NSProcessInfo *v172; // x22
  double v173; // d0
  id v174; // x22
  NSMutableArray *v175; // x22
  void *v176; // x25
  __int64 v177; // x24
  void *j; // x23
  void *v179; // x27
  unsigned __int64 v180; // x28
  _EARSpeechRecognitionAudioBuffer *v181; // x26
  id v182; // x27
  _QWORD *v183; // [xsp+20h] [xbp-340h]
  id v184; // [xsp+28h] [xbp-338h]
  __int64 v185; // [xsp+30h] [xbp-330h]
  id v186; // [xsp+38h] [xbp-328h]
  NSError *v187; // [xsp+40h] [xbp-320h]
  NSDictionary *v188; // [xsp+48h] [xbp-318h]
  id v189; // [xsp+50h] [xbp-310h]
  id *location; // [xsp+58h] [xbp-308h]
  SFRequestParameters **p_requestParameters; // [xsp+60h] [xbp-300h]
  NSString *v192; // [xsp+68h] [xbp-2F8h]
  id v193; // [xsp+68h] [xbp-2F8h]
  id v194; // [xsp+68h] [xbp-2F8h]
  __int128 v195; // [xsp+70h] [xbp-2F0h] BYREF
  __int128 v196; // [xsp+80h] [xbp-2E0h]
  __int128 v197; // [xsp+90h] [xbp-2D0h]
  __int128 v198; // [xsp+A0h] [xbp-2C0h]
  _QWORD v199[5]; // [xsp+B0h] [xbp-2B0h] BYREF
  _QWORD v200[6]; // [xsp+D8h] [xbp-288h] BYREF
  id v201; // [xsp+108h] [xbp-258h] BYREF
  __int128 v202; // [xsp+110h] [xbp-250h] BYREF
  __int128 v203; // [xsp+120h] [xbp-240h]
  __int128 v204; // [xsp+130h] [xbp-230h]
  __int128 v205; // [xsp+140h] [xbp-220h]
  _BYTE v206[128]; // [xsp+150h] [xbp-210h] BYREF
  _BYTE keyExistsAndHasValidFormat[12]; // [xsp+1D0h] [xbp-190h] BYREF
  __int16 v208; // [xsp+1DCh] [xbp-184h]
  id v209; // [xsp+1DEh] [xbp-182h]
  __int16 v210; // [xsp+1E6h] [xbp-17Ah]
  id v211; // [xsp+1E8h] [xbp-178h]
  _BYTE buf[24]; // [xsp+1F0h] [xbp-170h] BYREF
  __int64 (__fastcall *v213)(); // [xsp+208h] [xbp-158h]
  __int64 (__fastcall *v214)(); // [xsp+210h] [xbp-150h]
  id v215; // [xsp+218h] [xbp-148h]
  os_log_s *v216; // [xsp+220h] [xbp-140h] BYREF
  NSErrorUserInfoKey v217; // [xsp+228h] [xbp-138h] BYREF
  NSString *v218; // [xsp+230h] [xbp-130h] BYREF
  _QWORD v219[2]; // [xsp+238h] [xbp-128h] BYREF
  _QWORD v220[2]; // [xsp+248h] [xbp-118h] BYREF
  _BYTE v221[128]; // [xsp+258h] [xbp-108h] BYREF
  NSErrorUserInfoKey v222; // [xsp+2D8h] [xbp-88h] BYREF
  const __CFString *v223; // [xsp+2E0h] [xbp-80h] BYREF

  v5 = objc_retain(a3);
  v6 = (os_log_s *)objc_retain(SFLogConnection);
  if ( os_log_type_enabled(v6, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315138;
    *(_QWORD *)&buf[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
    _os_log_impl((void *)&_mh_execute_header, v6, OS_LOG_TYPE_INFO, "%s Starting..", buf, 0xCu);
  }
  objc_release(v6);
  *(_WORD *)&self->_recognitionResultPackageGenerated = 0;
  *(_OWORD *)&self->_audioDuration = 0u;
  *(_OWORD *)&self->_lastAudioPacketTime = 0u;
  *(_OWORD *)&self->_firstAudioPacketTime = 0u;
  *(_OWORD *)&self->_silStartFirstToken = 0u;
  self->_asrInitializationTime = 0.0;
  v7 = (unsigned int)objc_msgSend(v5, "onDeviceOnly");
  v8 = objc_retainAutoreleasedReturnValue(+[NSXPCConnection currentConnection](&OBJC_CLASS___NSXPCConnection, "currentConnection"));
  v9 = v8;
  if ( !v8 )
  {
    v14 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315138;
      *(_QWORD *)&buf[4] = "CheckPrerecordedConnectionAccess";
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v14,
        OS_LOG_TYPE_ERROR,
        "%s Called from outside of an XPC connection",
        buf,
        0xCu);
    }
    v15 = objc_autorelease(
            objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                kAFAssistantErrorDomain,
                1700LL,
                0LL)));
    objc_release(0LL);
    v16 = objc_retain(v15);
    goto LABEL_21;
  }
  v10 = objc_retainAutoreleasedReturnValue(
          -[NSXPCConnection valueForEntitlement:](
            v8,
            "valueForEntitlement:",
            CFSTR("com.apple.assistant.dictation.prerecorded")));
  if ( (objc_opt_respondsToSelector() & 1) != 0 )
  {
    if ( (((unsigned int)objc_msgSend(v10, "boolValue") | v7 ^ 1) & 1) == 0 )
      goto LABEL_6;
LABEL_13:
    v12 = 0LL;
    v13 = 1;
    goto LABEL_16;
  }
  if ( !v7 )
    goto LABEL_13;
LABEL_6:
  v11 = objc_retainAutoreleasedReturnValue(+[AFPreferences sharedPreferences](&OBJC_CLASS___AFPreferences, "sharedPreferences"));
  if ( ((unsigned int)objc_msgSend(v11, "assistantIsEnabled") & 1) != 0
    || ((unsigned int)objc_msgSend(v11, "dictationIsEnabled") & 1) != 0 )
  {
    v12 = 0LL;
    v13 = 1;
  }
  else
  {
    v12 = objc_autorelease(
            objc_retainAutoreleasedReturnValue(
              +[NSError lsr_errorWithCode:description:](
                &OBJC_CLASS___NSError,
                "lsr_errorWithCode:description:",
                201LL,
                CFSTR("Siri and Dictation are disabled"))));
    v13 = 0;
  }
  objc_release(v11);
LABEL_16:
  objc_release(v10);
  objc_release(v9);
  v16 = (NSError *)objc_retain(v12);
  if ( (v13 & 1) != 0 )
  {
    dispatch_assert_queue_V2((dispatch_queue_t)qword_100065418);
    if ( self->_audioBuffer )
    {
      v17 = (os_log_s *)SFLogConnection;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 136315394;
        *(_QWORD *)&buf[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
        *(_WORD *)&buf[12] = 2112;
        *(_QWORD *)&buf[14] = CFSTR("Recognizer is busy");
        _os_log_error_impl((void *)&_mh_execute_header, v17, OS_LOG_TYPE_ERROR, "%s %@", buf, 0x16u);
      }
      v222 = NSLocalizedDescriptionKey;
      v223 = CFSTR("Recognizer is busy");
      v18 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v223,
                &v222,
                1LL));
      v19 = objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                kAFAssistantErrorDomain,
                1100LL,
                v18));
      -[LSRConnection reportFailureWithError:](self, "reportFailureWithError:", v19);
      objc_release(v19);
      objc_release(v18);
      goto LABEL_24;
    }
    if ( (unsigned int)SFIsInternalInstall() )
    {
      v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "taskIdentifier"));
      v22 = v21 == 0LL;
      objc_release(v21);
      if ( !v22 )
      {
        v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "applicationName"));
        v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "taskIdentifier"));
        v25 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@.%@"), v23, v24));
        objc_release(v24);
        objc_release(v23);
        v26 = objc_retainAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
        v27 = objc_retainAutoreleasedReturnValue(-[NSUserDefaults stringForKey:](v26, "stringForKey:", kSFSpeechRecognizerDumpedTaskIdentifierKey));
        objc_release(v26);
        v28 = -[NSString isEqualToString:](v27, "isEqualToString:", v25);
        v29 = (os_log_s *)objc_retain(SFLogConnection);
        v30 = v29;
        if ( v28 )
        {
          if ( os_log_type_enabled(v29, OS_LOG_TYPE_INFO) )
          {
            v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "requestIdentifier"));
            v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "taskIdentifier"));
            *(_DWORD *)buf = 136315650;
            *(_QWORD *)&buf[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
            *(_WORD *)&buf[12] = 2112;
            *(_QWORD *)&buf[14] = v31;
            *(_WORD *)&buf[22] = 2112;
            v213 = v32;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v30,
              OS_LOG_TYPE_INFO,
              "%s Audio dumps will be enabled for request: %@ with taskIdentifier: %@",
              buf,
              0x20u);
            objc_release(v32);
            objc_release(v31);
          }
          objc_release(v30);
          v33 = objc_alloc(&OBJC_CLASS___LSRAudioDump);
          v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "taskIdentifier"));
          v35 = -[LSRAudioDump initWithTaskIdentifier:](v33, "initWithTaskIdentifier:", v34);
          audioDump = self->_audioDump;
          self->_audioDump = v35;
          objc_release(audioDump);
          objc_release(v34);
          v204 = 0u;
          v205 = 0u;
          v202 = 0u;
          v203 = 0u;
          v30 = objc_retain(self->_bufferedAudioPackets);
          v37 = -[os_log_s countByEnumeratingWithState:objects:count:](
                  v30,
                  "countByEnumeratingWithState:objects:count:",
                  &v202,
                  v221,
                  16LL);
          if ( v37 )
          {
            v38 = *(_QWORD *)v203;
            do
            {
              for ( i = 0LL; i != v37; i = (char *)i + 1 )
              {
                if ( *(_QWORD *)v203 != v38 )
                  objc_enumerationMutation(v30);
                -[LSRAudioDump appendBytes:](
                  self->_audioDump,
                  "appendBytes:",
                  *(_QWORD *)(*((_QWORD *)&v202 + 1) + 8LL * (_QWORD)i));
              }
              v37 = -[os_log_s countByEnumeratingWithState:objects:count:](
                      v30,
                      "countByEnumeratingWithState:objects:count:",
                      &v202,
                      v221,
                      16LL);
            }
            while ( v37 );
          }
        }
        else if ( os_log_type_enabled(v29, OS_LOG_TYPE_DEBUG) )
        {
          *(_DWORD *)buf = 136315650;
          *(_QWORD *)&buf[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
          *(_WORD *)&buf[12] = 2112;
          *(_QWORD *)&buf[14] = v27;
          *(_WORD *)&buf[22] = 2112;
          v213 = (__int64 (__fastcall *)())v25;
          _os_log_debug_impl(
            (void *)&_mh_execute_header,
            v30,
            OS_LOG_TYPE_DEBUG,
            "%s Dump will not be created because dump identifier (%@) doesn't match the qualified task identifier (%@).",
            buf,
            0x20u);
        }
        objc_release(v30);
        objc_release(v27);
        objc_release(v25);
      }
    }
    v40 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
    -[NSProcessInfo systemUptime](v40, "systemUptime");
    v42 = v41;
    objc_release(v40);
    p_requestParameters = &self->_requestParameters;
    objc_storeStrong((id *)&self->_requestParameters, a3);
    v43 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "task"));
    LODWORD(v40) = v43 == 0LL;
    objc_release(v43);
    if ( (_DWORD)v40 )
    {
      v57 = (os_log_s *)SFLogConnection;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 136315138;
        *(_QWORD *)&buf[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
        _os_log_error_impl((void *)&_mh_execute_header, v57, OS_LOG_TYPE_ERROR, "%s task name is nil", buf, 0xCu);
      }
      v59 = objc_retainAutoreleasedReturnValue(
              +[NSBundle bundleForClass:](
                &OBJC_CLASS___NSBundle,
                "bundleForClass:",
                objc_opt_class(&OBJC_CLASS___LSRConnection, v58)));
      v50 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v59,
                "localizedStringForKey:value:table:",
                CFSTR("task name is nil"),
                &stru_10005A368,
                CFSTR("Localizable")));
      objc_release(v59);
      v60 = objc_retainAutoreleasedReturnValue(
              +[NSError lsr_errorWithCode:description:](
                &OBJC_CLASS___NSError,
                "lsr_errorWithCode:description:",
                3LL,
                v50));
      -[LSRConnection reportFailureWithError:](self, "reportFailureWithError:", v60);
      objc_release(v60);
      goto LABEL_147;
    }
    v44 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "language"));
    v45 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "recognitionOverrides"));
    v46 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "modelOverrideURL"));
    v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "task"));
    v48 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "clientIdentifier"));
    v201 = 0LL;
    v49 = -[LSRConnection prepareRecognizerWithLanguage:recognitionOverrides:modelOverrideURL:anyConfiguration:task:clientID:error:](
            self,
            "prepareRecognizerWithLanguage:recognitionOverrides:modelOverrideURL:anyConfiguration:task:clientID:error:",
            v44,
            v45,
            v46,
            0LL,
            v47,
            v48,
            &v201);
    v50 = (NSError *)objc_retain(v201);
    objc_release(v48);
    objc_release(v47);
    objc_release(v46);
    objc_release(v45);
    objc_release(v44);
    if ( (v49 & 1) == 0 )
    {
      -[LSRConnection reportFailureWithError:](self, "reportFailureWithError:", v50);
LABEL_147:
      objc_release(v50);
      goto LABEL_24;
    }
    if ( (unsigned int)SFIsInternalInstall() )
    {
      v51 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters task](*p_requestParameters, "task"));
      v52 = (unsigned __int8)objc_msgSend(v51, "isEqualToString:", kSFSpeechRecognizerTaskCaptioning);
      objc_release(v51);
      if ( (v52 & 1) != 0 )
      {
        QuasarC_setLogLevel(2LL);
        v53 = objc_retainAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
        v54 = objc_retainAutoreleasedReturnValue(-[NSUserDefaults stringForKey:](v53, "stringForKey:", kSFSpeechRecognizerQuasarLoggingKey));
        objc_release(v53);
        if ( -[NSString length](v54, "length") && -[NSString intValue](v54, "intValue") )
        {
          v55 = (os_log_s *)objc_retain(SFLogConnection);
          if ( os_log_type_enabled(v55, OS_LOG_TYPE_INFO) )
          {
            v56 = -[NSString intValue](v54, "intValue");
            *(_DWORD *)buf = 136315394;
            *(_QWORD *)&buf[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
            *(_WORD *)&buf[12] = 1024;
            *(_DWORD *)&buf[14] = v56;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v55,
              OS_LOG_TYPE_INFO,
              "%s Customized Quasar log level to:%d",
              buf,
              0x12u);
          }
          objc_release(v55);
          QuasarC_setLogLevel(-[NSString intValue](v54, "intValue"));
        }
        objc_release(v54);
      }
    }
    else
    {
      QuasarC_setLogLevel(2LL);
    }
    v61 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
    -[NSProcessInfo systemUptime](v61, "systemUptime");
    self->_recognitionBeginTime = v62;
    objc_release(v61);
    location = (id *)&self->_recognizer;
    WeakRetained = objc_loadWeakRetained((id *)&self->_recognizer);
    -[SFRequestParameters maximumRecognitionDuration](self->_requestParameters, "maximumRecognitionDuration");
    objc_msgSend(WeakRetained, "setMaximumRecognitionDuration:");
    objc_release(WeakRetained);
    v64 = objc_loadWeakRetained((id *)&self->_recognizer);
    objc_msgSend(
      v64,
      "setConcatenateUtterances:",
      (unsigned int)-[SFRequestParameters detectMultipleUtterances](
                      self->_requestParameters,
                      "detectMultipleUtterances") ^ 1);
    objc_release(v64);
    v65 = objc_loadWeakRetained((id *)&self->_recognizer);
    objc_msgSend(
      v65,
      "setDisableAutoPunctuation:",
      (unsigned int)-[SFRequestParameters enableAutoPunctuation](self->_requestParameters, "enableAutoPunctuation") ^ 1);
    objc_release(v65);
    v66 = (unsigned int)-[SFRequestParameters narrowband](self->_requestParameters, "narrowband");
    v67 = 16000LL;
    if ( v66 )
      v67 = 8000LL;
    v185 = v67;
    v68 = (void *)qword_100065468;
    v69 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "task"));
    v70 = objc_retain(v68);
    v71 = objc_retain(v69);
    v72 = objc_retainAutoreleasedReturnValue(objc_msgSend(v70, "tasks"));
    if ( (unsigned int)objc_msgSend(v72, "containsObject:", v71) )
    {
      v189 = objc_retain(v71);
      v74 = v50;
    }
    else
    {
      v75 = objc_retainAutoreleasedReturnValue(
              +[NSBundle bundleForClass:](
                &OBJC_CLASS___NSBundle,
                "bundleForClass:",
                objc_opt_class(&OBJC_CLASS___LSRConnection, v73)));
      v76 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v75,
                "localizedStringForKey:value:table:",
                CFSTR("Task %@ not available for %@, supported tasks are %@"),
                &stru_10005A368,
                CFSTR("Localizable")));
      v77 = objc_retainAutoreleasedReturnValue(objc_msgSend(v70, "language"));
      v192 = objc_retainAutoreleasedReturnValue(
               +[NSString localizedStringWithFormat:](
                 &OBJC_CLASS___NSString,
                 "localizedStringWithFormat:",
                 v76,
                 v71,
                 v77,
                 v72));
      objc_release(v77);
      objc_release(v76);
      objc_release(v75);
      *(_QWORD *)keyExistsAndHasValidFormat = NSLocalizedFailureReasonErrorKey;
      *(_QWORD *)buf = v192;
      v78 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                buf,
                keyExistsAndHasValidFormat,
                1LL));
      v74 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("kLSRErrorDomain"),
                  3LL,
                  v78)));
      objc_release(v78);
      objc_release(v192);
      v189 = 0LL;
    }
    objc_release(v72);
    objc_release(v71);
    objc_release(v70);
    v187 = objc_retain(v74);
    objc_release(v50);
    objc_release(v71);
    if ( !v189 )
    {
      v96 = objc_retainAutoreleasedReturnValue(
              +[NSBundle bundleForClass:](
                &OBJC_CLASS___NSBundle,
                "bundleForClass:",
                objc_opt_class(&OBJC_CLASS___LSRConnection, v79)));
      v97 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v96,
                "localizedStringForKey:value:table:",
                CFSTR("Failed to find task for recognizer"),
                &stru_10005A368,
                CFSTR("Localizable")));
      objc_release(v96);
      if ( v187 )
      {
        v219[0] = NSLocalizedDescriptionKey;
        v219[1] = NSUnderlyingErrorKey;
        v220[0] = v97;
        v220[1] = v187;
        v188 = objc_retainAutoreleasedReturnValue(
                 +[NSDictionary dictionaryWithObjects:forKeys:count:](
                   &OBJC_CLASS___NSDictionary,
                   "dictionaryWithObjects:forKeys:count:",
                   v220,
                   v219,
                   2LL));
      }
      else
      {
        v217 = NSLocalizedDescriptionKey;
        v218 = v97;
        v188 = objc_retainAutoreleasedReturnValue(
                 +[NSDictionary dictionaryWithObjects:forKeys:count:](
                   &OBJC_CLASS___NSDictionary,
                   "dictionaryWithObjects:forKeys:count:",
                   &v218,
                   &v217,
                   1LL));
      }
      v98 = objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("kLSRErrorDomain"),
                3LL,
                v188));
      -[LSRConnection reportFailureWithError:](self, "reportFailureWithError:", v98);
      objc_release(v98);
      objc_release(v97);
LABEL_146:
      objc_release(v188);
      objc_release(v189);
      v50 = v187;
      goto LABEL_147;
    }
    v80 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters inlineItemList](*p_requestParameters, "inlineItemList"));
    if ( !v80
      || (v81 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters inlineItemList](*p_requestParameters, "inlineItemList")),
          v82 = objc_msgSend(v81, "count") == 0LL,
          objc_release(v81),
          objc_release(v80),
          v82) )
    {
      v90 = objc_loadWeakRetained(location);
      objc_msgSend(v90, "setJitProfileData:", 0LL);
    }
    else
    {
      v83 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
      -[NSProcessInfo systemUptime](v83, "systemUptime");
      v85 = v84;
      objc_release(v83);
      v86 = (os_log_s *)objc_retain(SFLogConnection);
      if ( os_log_type_enabled(v86, OS_LOG_TYPE_INFO) )
      {
        v87 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters inlineItemList](*p_requestParameters, "inlineItemList"));
        v88 = objc_msgSend(v87, "count");
        *(_DWORD *)buf = 136315394;
        *(_QWORD *)&buf[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
        *(_WORD *)&buf[12] = 2048;
        *(_QWORD *)&buf[14] = v88;
        _os_log_impl((void *)&_mh_execute_header, v86, OS_LOG_TYPE_INFO, "%s Inline LME input size=%zu", buf, 0x16u);
        objc_release(v87);
      }
      objc_release(v86);
      v89 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters language](self->_requestParameters, "language"));
      v90 = objc_retainAutoreleasedReturnValue(
              +[LSRConnection _jitProfileWithLanguage:modelRoot:](
                &OBJC_CLASS___LSRConnection,
                "_jitProfileWithLanguage:modelRoot:",
                v89,
                self->_modelRoot));
      objc_release(v89);
      if ( v90 )
      {
        v91 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters inlineItemList](*p_requestParameters, "inlineItemList"));
        v92 = objc_retainAutoreleasedReturnValue(objc_msgSend(v90, "jitProfileFromContextualStrings:", v91));
        objc_release(v91);
        if ( !v92 )
        {
          v93 = (os_log_s *)objc_retain(SFLogConnection);
          if ( os_log_type_enabled(v93, OS_LOG_TYPE_INFO) )
          {
            *(_DWORD *)buf = 136315138;
            *(_QWORD *)&buf[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
            _os_log_impl((void *)&_mh_execute_header, v93, OS_LOG_TYPE_INFO, "%s Failed to build jitData", buf, 0xCu);
          }
          objc_release(v93);
        }
        v94 = objc_loadWeakRetained(location);
        objc_msgSend(v94, "setJitProfileData:", v92);
        objc_release(v94);
        v95 = (os_log_s *)objc_retain(SFLogConnection);
        if ( os_log_type_enabled(v95, OS_LOG_TYPE_DEBUG) )
        {
          *(_DWORD *)buf = 136315138;
          *(_QWORD *)&buf[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
          _os_log_debug_impl(
            (void *)&_mh_execute_header,
            v95,
            OS_LOG_TYPE_DEBUG,
            "%s Set JIT profile for the request",
            buf,
            0xCu);
        }
        objc_release(v95);
      }
      else
      {
        v92 = (os_log_s *)objc_retain(SFLogConnection);
        if ( os_log_type_enabled(v92, OS_LOG_TYPE_INFO) )
        {
          *(_DWORD *)buf = 136315394;
          *(_QWORD *)&buf[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
          *(_WORD *)&buf[12] = 2112;
          *(_QWORD *)&buf[14] = 0LL;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v92,
            OS_LOG_TYPE_INFO,
            "%s Failed to build jitProfile with error %@",
            buf,
            0x16u);
        }
      }
      objc_release(v92);
      v99 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
      -[NSProcessInfo systemUptime](v99, "systemUptime");
      self->_jitLmeProcessingTime = v100 - v85;
      objc_release(v99);
    }
    objc_release(v90);
    v101 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters language](self->_requestParameters, "language"));
    v102 = (void *)qword_100065440;
    qword_100065440 = (__int64)v101;
    objc_release(v102);
    objc_storeStrong((id *)&qword_100065450, self->_modelRoot);
    v103 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters dynamicLanguageModel](self->_requestParameters, "dynamicLanguageModel"));
    objc_release(v103);
    if ( !v103 )
    {
      v188 = (NSDictionary *)&__NSArray0__struct;
LABEL_102:
      v126 = objc_loadWeakRetained(location);
      objc_msgSend(v126, "setExtraLmList:", v188);
      objc_release(v126);
      v127 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters dynamicVocabulary](*p_requestParameters, "dynamicVocabulary"));
      objc_release(v127);
      if ( v127 )
      {
        v128 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters dynamicVocabulary](*p_requestParameters, "dynamicVocabulary"));
        v129 = objc_retainAutoreleasedReturnValue(objc_msgSend(v128, "path"));
        v130 = objc_retainAutoreleasedReturnValue(+[NSData dataWithContentsOfFile:](&OBJC_CLASS___NSData, "dataWithContentsOfFile:", v129));
        objc_release(v129);
        objc_release(v128);
        if ( v130 )
        {
          v131 = (os_log_s *)objc_retain(SFLogConnection);
          if ( os_log_type_enabled(v131, OS_LOG_TYPE_INFO) )
          {
            v132 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters dynamicVocabulary](*p_requestParameters, "dynamicVocabulary"));
            v133 = objc_retain(objc_retainAutoreleasedReturnValue(objc_msgSend(v132, "path")));
            *(_DWORD *)buf = 136315394;
            *(_QWORD *)&buf[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
            *(_WORD *)&buf[12] = 2112;
            *(_QWORD *)&buf[14] = v133;
            _os_log_impl((void *)&_mh_execute_header, v131, OS_LOG_TYPE_INFO, "%s Loaded Dynamic Vocab: %@", buf, 0x16u);
            objc_release(v133);
            objc_release(v132);
            objc_release(v133);
          }
          objc_release(v131);
          v134 = objc_loadWeakRetained(location);
          objc_msgSend(v134, "setUserProfileData:", v130);
          objc_release(v134);
        }
      }
      else
      {
        v130 = (NSData *)objc_loadWeakRetained(location);
        -[NSData setUserProfileData:](v130, "setUserProfileData:", 0LL);
      }
      objc_release(v130);
      *(_QWORD *)buf = 0LL;
      *(_QWORD *)&buf[8] = buf;
      *(_QWORD *)&buf[16] = 0x3032000000LL;
      v213 = sub_10003A914;
      v214 = sub_10003A924;
      v215 = 0LL;
      v200[0] = _NSConcreteStackBlock;
      v200[1] = 3254779904LL;
      v200[2] = sub_10003D77C;
      v200[3] = &unk_100059C88;
      v200[4] = self;
      v200[5] = buf;
      v183 = objc_retainBlock(v200);
      v135 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters task](self->_requestParameters, "task"));
      v136 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters taskIdentifier](*p_requestParameters, "taskIdentifier"));
      v137 = objc_retain(v135);
      v138 = objc_retain(v136);
      if ( (unsigned int)objc_msgSend(v137, "isEqualToString:", kSFSpeechRecognizerTaskCaptioning)
        && ((unsigned int)objc_msgSend(v138, "isEqualToString:", kSFSpeechRecognizerTaskIdentifierCallScreening) & 1) != 0
        || ((unsigned int)objc_msgSend(v137, "isEqualToString:", kSFSpeechRecognizerTaskVoiceMail) & 1) != 0 )
      {
        v139 = 1;
      }
      else
      {
        v140 = (const __CFString *)kAFAssistantParentalControlsPreferenceDomain;
        if ( !CFPreferencesAppValueIsForced(CFSTR("Profanity Allowed"), kAFAssistantParentalControlsPreferenceDomain)
          || (keyExistsAndHasValidFormat[0] = 1,
              v141 = CFPreferencesGetAppBooleanValue(CFSTR("Profanity Allowed"), v140, keyExistsAndHasValidFormat) != 0,
              !keyExistsAndHasValidFormat[0]) )
        {
          v141 = 1;
        }
        v139 = !v141;
      }
      objc_release(v138);
      objc_release(v137);
      objc_release(v138);
      objc_release(v137);
      v142 = (os_log_s *)objc_retain(SFLogConnection);
      if ( os_log_type_enabled(v142, OS_LOG_TYPE_INFO) )
      {
        *(_DWORD *)keyExistsAndHasValidFormat = 136315394;
        *(_QWORD *)&keyExistsAndHasValidFormat[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
        v208 = 1024;
        LODWORD(v209) = v139;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v142,
          OS_LOG_TYPE_INFO,
          "%s Censor Speech enabled: %d",
          keyExistsAndHasValidFormat,
          0x12u);
      }
      objc_release(v142);
      if ( v139 )
      {
        v184 = objc_retain(objc_retainAutoreleasedReturnValue((id)((__int64 (*)(void))v183[2])()));
        objc_release(v184);
      }
      else
      {
        v184 = 0LL;
      }
      v143 = objc_loadWeakRetained(location);
      objc_msgSend(v143, "setRecognitionReplacements:", v184);
      objc_release(v143);
      if ( (unsigned int)objc_msgSend(v189, "isEqualToString:", kSFSpeechRecognizerTaskVoiceMail) )
      {
        v144 = objc_retainAutoreleasedReturnValue((id)VoicemailConfidenceSubtractionForLanguage(self->_modelRoot));
        if ( !v144 )
        {
          v145 = objc_retainAutoreleasedReturnValue((id)((__int64 (*)(void))v183[2])());
          v144 = objc_retainAutoreleasedReturnValue((id)EtiquetteConfidenceSubtraction());
          objc_release(v145);
        }
        v146 = objc_loadWeakRetained(location);
        objc_msgSend(v146, "setRecognitionConfidenceSubtraction:", v144);
        objc_release(v146);
      }
      else
      {
        v144 = objc_loadWeakRetained(location);
        objc_msgSend(v144, "setRecognitionConfidenceSubtraction:", &__NSDictionary0__struct);
      }
      objc_release(v144);
      v147 = objc_loadWeakRetained(location);
      v186 = objc_retainAutoreleasedReturnValue(objc_msgSend(v147, "activeConfiguration"));
      objc_release(v147);
      v194 = objc_msgSend(v186, "copy");
      v148 = objc_retainAutoreleasedReturnValue(objc_msgSend(v194, "farFieldFilter"));
      LOBYTE(v147) = v148 == 0LL;
      objc_release(v148);
      if ( ((unsigned __int8)v147 & 1) == 0 )
      {
        v149 = objc_retainAutoreleasedReturnValue(objc_msgSend(v194, "farFieldFilter"));
        v150 = objc_retainAutoreleasedReturnValue(objc_msgSend(v149, "setByAddingObject:", &__kCFBooleanFalse));
        objc_msgSend(v194, "setFarFieldFilter:", v150);
        objc_release(v150);
        objc_release(v149);
      }
      v151 = objc_retainAutoreleasedReturnValue(objc_msgSend(v194, "samplingRateFilter"));
      v152 = v151 == 0LL;
      objc_release(v151);
      if ( !v152 )
      {
        v153 = objc_retainAutoreleasedReturnValue(objc_msgSend(v194, "samplingRateFilter"));
        v154 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInteger:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInteger:", v185));
        v155 = objc_retainAutoreleasedReturnValue(objc_msgSend(v153, "setByAddingObject:", v154));
        objc_msgSend(v194, "setSamplingRateFilter:", v155);
        objc_release(v155);
        objc_release(v154);
        objc_release(v153);
      }
      v156 = objc_retainAutoreleasedReturnValue(objc_msgSend(v194, "taskTypeFilter"));
      v157 = v156 == 0LL;
      objc_release(v156);
      if ( !v157 )
      {
        v158 = objc_retainAutoreleasedReturnValue(objc_msgSend(v194, "taskTypeFilter"));
        v159 = objc_retainAutoreleasedReturnValue(objc_msgSend(v158, "setByAddingObject:", v189));
        objc_msgSend(v194, "setTaskTypeFilter:", v159);
        objc_release(v159);
        objc_release(v158);
      }
      v160 = objc_retainAutoreleasedReturnValue(objc_msgSend(v194, "atypicalSpeechFilter"));
      v161 = v160 == 0LL;
      objc_release(v160);
      if ( !v161 )
      {
        v162 = objc_retainAutoreleasedReturnValue(objc_msgSend(v194, "atypicalSpeechFilter"));
        v163 = objc_retainAutoreleasedReturnValue(objc_msgSend(v162, "setByAddingObject:", &__kCFBooleanFalse));
        objc_msgSend(v194, "setAtypicalSpeechFilter:", v163);
        objc_release(v163);
        objc_release(v162);
      }
      objc_msgSend(v194, "setDeviceIdFilter:", 0LL);
      v164 = (os_log_s *)objc_retain(SFLogConnection);
      if ( os_log_type_enabled(v164, OS_LOG_TYPE_INFO) )
      {
        v165 = objc_retain(objc_retainAutoreleasedReturnValue((id)sub_10003D948(v186)));
        v166 = objc_retain(objc_retainAutoreleasedReturnValue((id)sub_10003D948(v194)));
        *(_DWORD *)keyExistsAndHasValidFormat = 136315650;
        *(_QWORD *)&keyExistsAndHasValidFormat[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
        v208 = 2112;
        v209 = v165;
        v210 = 2112;
        v211 = v166;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v164,
          OS_LOG_TYPE_INFO,
          "%s Changing active configuration from \n%@ to \n%@",
          keyExistsAndHasValidFormat,
          0x20u);
        objc_release(v166);
        objc_release(v165);
        objc_release(v166);
        objc_release(v165);
      }
      objc_release(v164);
      v167 = objc_loadWeakRetained(location);
      objc_msgSend(v167, "setActiveConfiguration:", v194);
      objc_release(v167);
      v168 = objc_loadWeakRetained(location);
      v169 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters language](*p_requestParameters, "language"));
      v170 = objc_retainAutoreleasedReturnValue(objc_msgSend(v168, "runRecognitionWithResultStream:language:task:samplingRate:", self, v169, v189, v185));
      audioBuffer = self->_audioBuffer;
      self->_audioBuffer = v170;
      objc_release(audioBuffer);
      objc_release(v169);
      objc_release(v168);
      objc_storeStrong((id *)&qword_100065420, self->_audioBuffer);
      v172 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
      -[NSProcessInfo systemUptime](v172, "systemUptime");
      self->_asrInitializationTime = v173 - v42;
      objc_release(v172);
      v174 = objc_retainAutoreleasedReturnValue((id)SFAnalyticsEventTypeGetName(100LL));
      v199[0] = _NSConcreteStackBlock;
      v199[1] = 3254779904LL;
      v199[2] = sub_10003DA7C;
      v199[3] = &unk_100059CB8;
      v199[4] = self;
      AnalyticsSendEventLazy(v174, v199);
      objc_release(v174);
      v197 = 0u;
      v198 = 0u;
      v195 = 0u;
      v196 = 0u;
      v175 = objc_retain(self->_bufferedAudioPackets);
      v176 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
               v175,
               "countByEnumeratingWithState:objects:count:",
               &v195,
               v206,
               16LL);
      if ( v176 )
      {
        v177 = *(_QWORD *)v196;
        do
        {
          for ( j = 0LL; j != v176; j = (char *)j + 1 )
          {
            if ( *(_QWORD *)v196 != v177 )
              objc_enumerationMutation(v175);
            v179 = *(void **)(*((_QWORD *)&v195 + 1) + 8LL * (_QWORD)j);
            v180 = (unsigned __int64)objc_msgSend(v179, "length");
            v181 = self->_audioBuffer;
            v182 = objc_retainAutorelease(v179);
            -[_EARSpeechRecognitionAudioBuffer addAudioSamples:count:](
              v181,
              "addAudioSamples:count:",
              objc_msgSend(v182, "bytes"),
              v180 >> 1);
            -[LSRConnection updateAudioDuration:](self, "updateAudioDuration:", v182);
          }
          v176 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
                   v175,
                   "countByEnumeratingWithState:objects:count:",
                   &v195,
                   v206,
                   16LL);
        }
        while ( v176 );
      }
      objc_release(v175);
      -[NSMutableArray removeAllObjects](self->_bufferedAudioPackets, "removeAllObjects");
      if ( self->_bufferedAudioEnded )
      {
        -[_EARSpeechRecognitionAudioBuffer endAudio](self->_audioBuffer, "endAudio");
        self->_bufferedAudioEnded = 0;
      }
      +[LSRConnection _cancelCooldownTimer](&OBJC_CLASS___LSRConnection, "_cancelCooldownTimer");
      objc_release(v194);
      objc_release(v186);
      objc_release(v184);
      objc_release(v183);
      _Block_object_dispose(buf, 8);
      objc_release(v215);
      goto LABEL_146;
    }
    v104 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters dynamicLanguageModel](*p_requestParameters, "dynamicLanguageModel"));
    v105 = objc_retainAutoreleasedReturnValue(objc_msgSend(v104, "path"));
    v106 = (unsigned int)+[_EARArtifact isValid:](&OBJC_CLASS____EARArtifact, "isValid:", v105);
    objc_release(v105);
    objc_release(v104);
    if ( v106 )
    {
      v107 = objc_alloc((Class)&OBJC_CLASS____EARAppLmArtifact);
      v108 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters dynamicLanguageModel](*p_requestParameters, "dynamicLanguageModel"));
      v109 = objc_retainAutoreleasedReturnValue(objc_msgSend(v108, "path"));
      v110 = objc_msgSend(v107, "initWithPath:", v109);
      objc_release(v109);
      objc_release(v108);
      if ( v110 )
      {
        v193 = objc_loadWeakRetained(location);
        v111 = objc_retainAutoreleasedReturnValue(objc_msgSend(v193, "modelInfo"));
        v112 = objc_retainAutoreleasedReturnValue(objc_msgSend(v111, "version"));
        v113 = objc_loadWeakRetained(location);
        v114 = objc_retainAutoreleasedReturnValue(objc_msgSend(v113, "modelInfo"));
        v115 = objc_retainAutoreleasedReturnValue(objc_msgSend(v114, "language"));
        v116 = (unsigned int)objc_msgSend(v110, "isAdaptableToSpeechModelVersion:locale:", v112, v115);
        objc_release(v115);
        objc_release(v114);
        objc_release(v113);
        objc_release(v112);
        objc_release(v111);
        objc_release(v193);
        if ( v116 )
        {
          v117 = objc_retainAutoreleasedReturnValue(objc_msgSend(v110, "loadLmHandle"));
          v118 = (os_log_s *)objc_retain(SFLogConnection);
          v119 = os_log_type_enabled(v118, OS_LOG_TYPE_INFO);
          if ( v117 )
          {
            if ( v119 )
            {
              v120 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters dynamicLanguageModel](*p_requestParameters, "dynamicLanguageModel"));
              v121 = objc_retainAutoreleasedReturnValue(objc_msgSend(v120, "path"));
              *(_DWORD *)buf = 136315394;
              *(_QWORD *)&buf[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
              *(_WORD *)&buf[12] = 2112;
              *(_QWORD *)&buf[14] = v121;
              _os_log_impl((void *)&_mh_execute_header, v118, OS_LOG_TYPE_INFO, "%s Loaded Dynamic LM: %@", buf, 0x16u);
              objc_release(v120);
              objc_release(v121);
            }
            objc_release(v118);
            v216 = v117;
            v188 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v216, 1LL));
            goto LABEL_100;
          }
          if ( v119 )
          {
            *(_DWORD *)buf = 136315138;
            *(_QWORD *)&buf[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
            _os_log_impl(
              (void *)&_mh_execute_header,
              v118,
              OS_LOG_TYPE_INFO,
              "%s Failed to load Dynamic LM from Artifact",
              buf,
              0xCu);
          }
          objc_release(v118);
          v117 = 0LL;
        }
        else
        {
          v117 = (os_log_s *)objc_retain(SFLogConnection);
          if ( os_log_type_enabled(v117, OS_LOG_TYPE_INFO) )
          {
            v124 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters dynamicLanguageModel](*p_requestParameters, "dynamicLanguageModel"));
            v125 = objc_retainAutoreleasedReturnValue(objc_msgSend(v124, "path"));
            *(_DWORD *)buf = 136315394;
            *(_QWORD *)&buf[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
            *(_WORD *)&buf[12] = 2112;
            *(_QWORD *)&buf[14] = v125;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v117,
              OS_LOG_TYPE_INFO,
              "%s Dynamic LM at %@ was out of sync with current asset",
              buf,
              0x16u);
            objc_release(v124);
            objc_release(v125);
          }
        }
        v188 = (NSDictionary *)&__NSArray0__struct;
LABEL_100:
        objc_release(v117);
        goto LABEL_101;
      }
    }
    else
    {
      v110 = objc_retain(SFLogConnection);
      if ( os_log_type_enabled((os_log_t)v110, OS_LOG_TYPE_INFO) )
      {
        v122 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters dynamicLanguageModel](*p_requestParameters, "dynamicLanguageModel"));
        v123 = objc_retainAutoreleasedReturnValue(objc_msgSend(v122, "path"));
        *(_DWORD *)buf = 136315394;
        *(_QWORD *)&buf[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
        *(_WORD *)&buf[12] = 2112;
        *(_QWORD *)&buf[14] = v123;
        _os_log_impl(
          (void *)&_mh_execute_header,
          (os_log_t)v110,
          OS_LOG_TYPE_INFO,
          "%s Dynamic LM at %@ was not valid",
          buf,
          0x16u);
        objc_release(v122);
        objc_release(v123);
      }
    }
    v188 = (NSDictionary *)&__NSArray0__struct;
LABEL_101:
    objc_release(v110);
    goto LABEL_102;
  }
LABEL_21:
  v20 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 136315394;
    *(_QWORD *)&buf[4] = "-[LSRConnection startRecordedAudioDictationWithParameters:]";
    *(_WORD *)&buf[12] = 2112;
    *(_QWORD *)&buf[14] = v16;
    _os_log_error_impl((void *)&_mh_execute_header, v20, OS_LOG_TYPE_ERROR, "%s Error: %@", buf, 0x16u);
  }
  -[LSRConnection reportFailureWithError:](self, "reportFailureWithError:", v16);
LABEL_24:
  objc_release(v16);
  objc_release(v5);
}