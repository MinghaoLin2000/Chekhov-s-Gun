-[LSRLanguageModel trainAppLmFromNgramsSerializedData:customPronsData:language:writeToAppLmDir:vocabFile:]
void __cdecl -[LSRLanguageModel trainAppLmFromNgramsSerializedData:customPronsData:language:writeToAppLmDir:vocabFile:](
        LSRLanguageModel *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id *a6,
        id *a7)
{
  id v12; // x19
  id v13; // x20
  void *v14; // x22
  void *v15; // x23
  void *v16; // x28
  NSCharacterSet *v17; // x21
  void *v18; // x26
  void *v19; // x0
  os_log_s *v20; // x21
  id v21; // x27
  NSString *v22; // x21
  unsigned __int8 v23; // w28
  os_log_s *v24; // x28
  void *v25; // x21
  id v26; // x26
  void *v27; // x27
  __int64 v28; // x21
  void *i; // x28
  void *v30; // x26
  id v31; // x25
  void *v32; // x21
  unsigned __int8 v33; // w27
  os_log_s *v34; // x27
  _EARAppLmData *appLmData; // x0
  os_log_s *v36; // x21
  os_log_s *v37; // x21
  os_log_s *v38; // x21
  id v39; // [xsp+8h] [xbp-148h]
  __int128 v40; // [xsp+10h] [xbp-140h] BYREF
  __int128 v41; // [xsp+20h] [xbp-130h]
  __int128 v42; // [xsp+30h] [xbp-120h]
  __int128 v43; // [xsp+40h] [xbp-110h]
  uint8_t v44[128]; // [xsp+50h] [xbp-100h] BYREF
  uint8_t buf[4]; // [xsp+D0h] [xbp-80h] BYREF
  const char *v46; // [xsp+D4h] [xbp-7Ch]
  __int16 v47; // [xsp+DCh] [xbp-74h]
  id v48; // [xsp+DEh] [xbp-72h]

  v12 = objc_retain(a3);
  v13 = objc_retain(a4);
  v39 = objc_retain(a5);
  v14 = objc_retainAutoreleasedReturnValue(+[_EARLmModel2 deserializeModelData:](&OBJC_CLASS____EARLmModel2, "deserializeModelData:", v12));
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", EARModelOovsKey));
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", EARModelTrainingDataKey));
  v17 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet newlineCharacterSet](&OBJC_CLASS___NSCharacterSet, "newlineCharacterSet"));
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "componentsSeparatedByCharactersInSet:", v17));
  objc_release(v17);
  objc_release(v16);
  if ( !a7 )
  {
LABEL_5:
    v20 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315138;
      v46 = "-[LSRLanguageModel trainAppLmFromNgramsSerializedData:customPronsData:language:writeToAppLmDir:vocabFile:]";
      _os_log_impl((void *)&_mh_execute_header, v20, OS_LOG_TYPE_INFO, "%s No oovs in training data", buf, 0xCu);
    }
    goto LABEL_11;
  }
  v19 = objc_msgSend(v15, "count");
  if ( !v13 && !v19 )
  {
    *a7 = 0LL;
    goto LABEL_5;
  }
  v21 = objc_retain(*a7);
  v22 = objc_retainAutoreleasedReturnValue(
          -[NSString stringByDeletingLastPathComponent](
            self->_recognizerConfigFilePath,
            "stringByDeletingLastPathComponent"));
  v23 = +[LSRLanguageModel createAppLmLmeProfileWithLanguage:modelRoot:customPronsData:newOovs:writeToVocabFile:](
          &OBJC_CLASS___LSRLanguageModel,
          "createAppLmLmeProfileWithLanguage:modelRoot:customPronsData:newOovs:writeToVocabFile:",
          v39,
          v22,
          v13,
          v15,
          v21);
  objc_release(v22);
  if ( (v23 & 1) == 0 )
  {
    objc_release(v21);
    v38 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315138;
      v46 = "-[LSRLanguageModel trainAppLmFromNgramsSerializedData:customPronsData:language:writeToAppLmDir:vocabFile:]";
      _os_log_error_impl((void *)&_mh_execute_header, v38, OS_LOG_TYPE_ERROR, "%s Failed to write LME", buf, 0xCu);
    }
    objc_release(v18);
    goto LABEL_33;
  }
  v24 = (os_log_s *)objc_retain(SFLogConnection);
  if ( os_log_type_enabled(v24, OS_LOG_TYPE_INFO) )
  {
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "path"));
    *(_DWORD *)buf = 136315394;
    v46 = "-[LSRLanguageModel trainAppLmFromNgramsSerializedData:customPronsData:language:writeToAppLmDir:vocabFile:]";
    v47 = 2112;
    v48 = v25;
    _os_log_impl((void *)&_mh_execute_header, v24, OS_LOG_TYPE_INFO, "%s Successfully wrote LME: %@", buf, 0x16u);
    objc_release(v25);
  }
  objc_release(v24);
  objc_release(v21);
LABEL_11:
  -[_EARAppLmData setInputFormat:](self->_appLmData, "setInputFormat:", 2LL);
  v42 = 0u;
  v43 = 0u;
  v40 = 0u;
  v41 = 0u;
  v26 = objc_retain(v18);
  v27 = objc_msgSend(v26, "countByEnumeratingWithState:objects:count:", &v40, v44, 16LL);
  if ( v27 )
  {
    v28 = *(_QWORD *)v41;
    do
    {
      for ( i = 0LL; i != v27; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v41 != v28 )
          objc_enumerationMutation(v26);
        -[_EARAppLmData addNgramCountWithType:content:](
          self->_appLmData,
          "addNgramCountWithType:content:",
          0LL,
          *(_QWORD *)(*((_QWORD *)&v40 + 1) + 8LL * (_QWORD)i));
      }
      v27 = objc_msgSend(v26, "countByEnumeratingWithState:objects:count:", &v40, v44, 16LL);
    }
    while ( v27 );
  }
  objc_release(v26);
  objc_release(v26);
  v30 = objc_retainAutoreleasedReturnValue(
          +[_EARLmBuilder buildLmWithConfig:root:data:dir:shouldStop:](
            &OBJC_CLASS____EARLmBuilder,
            "buildLmWithConfig:root:data:dir:shouldStop:",
            self->_recognizerConfigFilePath,
            CFSTR("app-lm.NGRAM"),
            self->_appLmData,
            &stru_10005A368,
            0LL));
  if ( v30 )
  {
    if ( !a6 )
    {
LABEL_24:
      objc_release(v30);
      appLmData = self->_appLmData;
      self->_appLmData = 0LL;
      objc_release(appLmData);
      goto LABEL_33;
    }
    v31 = objc_retain(*a6);
    v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v31, "path"));
    v33 = (unsigned __int8)objc_msgSend(v30, "writeToDirectory:", v32);
    objc_release(v32);
    if ( (v33 & 1) != 0 )
    {
      v34 = (os_log_s *)SFLogConnection;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
      {
        *(_DWORD *)buf = 136315394;
        v46 = "-[LSRLanguageModel trainAppLmFromNgramsSerializedData:customPronsData:language:writeToAppLmDir:vocabFile:]";
        v47 = 2112;
        v48 = v31;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v34,
          OS_LOG_TYPE_INFO,
          "%s Successfully wrote app-lm to path=%@",
          buf,
          0x16u);
      }
      objc_release(v31);
      goto LABEL_24;
    }
    objc_release(v31);
    v37 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315138;
      v46 = "-[LSRLanguageModel trainAppLmFromNgramsSerializedData:customPronsData:language:writeToAppLmDir:vocabFile:]";
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v37,
        OS_LOG_TYPE_ERROR,
        "%s Failed to write trained AppLm",
        buf,
        0xCu);
    }
    objc_release(v30);
  }
  else
  {
    v36 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315138;
      v46 = "-[LSRLanguageModel trainAppLmFromNgramsSerializedData:customPronsData:language:writeToAppLmDir:vocabFile:]";
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v36,
        OS_LOG_TYPE_ERROR,
        "%s Failed to train from ngram counts",
        buf,
        0xCu);
    }
  }
LABEL_33:
  objc_release(v15);
  objc_release(v14);
  objc_release(v39);
  objc_release(v13);
  objc_release(v12);
}