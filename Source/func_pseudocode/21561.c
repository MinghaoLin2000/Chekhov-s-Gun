+[_EARSpeechRecognizer _speechRecognizerWithLanguage:overrides:anyConfiguration:taskConfiguration:modelRoot:error:modelLoadTime:]
id __cdecl +[_EARSpeechRecognizer _speechRecognizerWithLanguage:overrides:anyConfiguration:taskConfiguration:modelRoot:error:modelLoadTime:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        id a6,
        id a7,
        id *a8,
        double *a9)
{
  _BOOL4 v12; // w24
  id v14; // x26
  id v15; // x20
  id v16; // x21
  id v17; // x22
  NSProcessInfo *v18; // x23
  double v19; // d0
  double v20; // d8
  void *v21; // x23
  id v22; // x24
  os_log_s *v23; // x23
  void *v24; // x27
  NSSet *v25; // x26
  NSSet *v26; // x26
  NSSet *v27; // x26
  NSSet *v28; // x26
  id v29; // x26
  void *v30; // x0
  NSProcessInfo *v31; // x19
  double v32; // d0
  double v33; // d8
  os_log_s *v34; // x25
  id v35; // x0
  os_log_s *v36; // x28
  NSString *v37; // x19
  __int64 v39; // [xsp+0h] [xbp-B0h]
  __int64 v40; // [xsp+18h] [xbp-98h]
  id v41; // [xsp+28h] [xbp-88h]
  uint8_t buf[4]; // [xsp+30h] [xbp-80h] BYREF
  const char *v43; // [xsp+34h] [xbp-7Ch]
  __int16 v44; // [xsp+3Ch] [xbp-74h]
  double v45; // [xsp+3Eh] [xbp-72h]
  __int64 vars8; // [xsp+B8h] [xbp+8h]

  v12 = a5;
  v14 = objc_retain(a3);
  v15 = objc_retain(a4);
  v16 = objc_retain(a6);
  v17 = objc_retain(a7);
  if ( v17 )
  {
    v18 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
    -[NSProcessInfo systemUptime](v18, "systemUptime");
    v20 = v19;
    objc_release(v18);
    v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "stringByAppendingPathComponent:", CFSTR("mini.json")));
    v41 = v14;
    if ( v12 )
    {
      v22 = objc_retainAutoreleasedReturnValue(
              +[_EARSpeechRecognitionActiveConfiguration activeConfigurationForEverything](
                &OBJC_CLASS____EARSpeechRecognitionActiveConfiguration,
                "activeConfigurationForEverything"));
      if ( !v16 )
      {
LABEL_10:
        v29 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
        if ( (unsigned int)objc_msgSend(v16, "isEqualToString:", kSFSpeechRecognizerTaskCaptioning) )
          objc_msgSend(v29, "setValue:forKey:", CFSTR("YES"), CFSTR("keepANEModelLoaded"));
        LOBYTE(v40) = 1;
        LOWORD(v39) = 0;
        v30 = objc_msgSend(
                objc_alloc((Class)&OBJC_CLASS____EARSpeechRecognizer),
                "initWithConfig:overrides:overrideConfigFiles:language:activeConfiguration:modelLoadingOptions:enableSpea"
                "kerCodeTraining:supportEmojiRecognition:voiceCommandActiveSet:modelContextDelegate:enableItn:error:",
                v21,
                v15,
                0LL,
                v41,
                v22,
                v29,
                v39,
                0LL,
                0LL,
                v40,
                a8);
        v24 = v30;
        if ( v30 )
        {
          objc_msgSend(v30, "setDetectUtterances:", 1LL);
          objc_msgSend(v24, "setRecognizeEagerCandidates:", 1LL);
          objc_msgSend(v24, "setConcatenateUtterances:", 1LL);
          objc_msgSend(v24, "setEnableSpeakerCodeTraining:", 0LL);
          v31 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
          -[NSProcessInfo systemUptime](v31, "systemUptime");
          v33 = v32 - v20;
          objc_release(v31);
          v34 = (os_log_s *)SFLogConnection;
          if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
          {
            *(_DWORD *)buf = 136315394;
            v43 = "+[_EARSpeechRecognizer(LSRConnection) _speechRecognizerWithLanguage:overrides:anyConfiguration:taskCon"
                  "figuration:modelRoot:error:modelLoadTime:]";
            v44 = 2048;
            v45 = v33;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v34,
              OS_LOG_TYPE_INFO,
              "%s Created Recognizer in %lf sec",
              buf,
              0x16u);
          }
          if ( a9 )
            *a9 = v33;
          v35 = objc_retain(v24);
          goto LABEL_21;
        }
        v36 = (os_log_s *)SFLogConnection;
        if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 136315394;
          v43 = "+[_EARSpeechRecognizer(LSRConnection) _speechRecognizerWithLanguage:overrides:anyConfiguration:taskConfi"
                "guration:modelRoot:error:modelLoadTime:]";
          v44 = 2112;
          v45 = *(double *)&v21;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            v36,
            OS_LOG_TYPE_ERROR,
            "%s Failed to create recognizer from: %@",
            buf,
            0x16u);
          if ( !a8 )
            goto LABEL_21;
        }
        else if ( !a8 )
        {
LABEL_21:
          objc_release(v24);
          objc_release(v29);
          objc_release(v22);
          objc_release(v21);
          v14 = v41;
          goto LABEL_22;
        }
        v37 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("Failed to create recognizer from=%@"),
                  v21));
        *a8 = objc_autorelease(
                objc_retainAutoreleasedReturnValue(
                  +[NSError lsr_errorWithCode:description:](
                    &OBJC_CLASS___NSError,
                    "lsr_errorWithCode:description:",
                    300LL,
                    v37)));
        objc_release(v37);
        goto LABEL_21;
      }
    }
    else
    {
      v22 = objc_alloc_init((Class)&OBJC_CLASS____EARSpeechRecognitionActiveConfiguration);
      v25 = objc_retainAutoreleasedReturnValue(+[NSSet set](&OBJC_CLASS___NSSet, "set"));
      objc_msgSend(v22, "setSamplingRateFilter:", v25);
      objc_release(v25);
      v26 = objc_retainAutoreleasedReturnValue(+[NSSet set](&OBJC_CLASS___NSSet, "set"));
      objc_msgSend(v22, "setTaskTypeFilter:", v26);
      objc_release(v26);
      v27 = objc_retainAutoreleasedReturnValue(+[NSSet set](&OBJC_CLASS___NSSet, "set"));
      objc_msgSend(v22, "setFarFieldFilter:", v27);
      objc_release(v27);
      objc_msgSend(v22, "setDeviceIdFilter:", 0LL);
      objc_msgSend(v22, "setAtypicalSpeechFilter:", 0LL);
      if ( !v16 )
        goto LABEL_10;
    }
    v28 = objc_retainAutoreleasedReturnValue(+[NSSet setWithObject:](&OBJC_CLASS___NSSet, "setWithObject:", v16));
    objc_msgSend(v22, "setTaskTypeFilter:", v28);
    objc_release(v28);
    goto LABEL_10;
  }
  v23 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 136315138;
    v43 = "+[_EARSpeechRecognizer(LSRConnection) _speechRecognizerWithLanguage:overrides:anyConfiguration:taskConfigurati"
          "on:modelRoot:error:modelLoadTime:]";
    _os_log_error_impl((void *)&_mh_execute_header, v23, OS_LOG_TYPE_ERROR, "%s Could not locate asset.", buf, 0xCu);
  }
  v24 = 0LL;
LABEL_22:
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v24);
}