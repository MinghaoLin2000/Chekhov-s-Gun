-[LSRLanguageModel ngramCountsSerializeData]
id __cdecl -[LSRLanguageModel ngramCountsSerializeData](LSRLanguageModel *self, SEL a2)
{
  void *v3; // x19
  void *v4; // x20
  void *v5; // x21
  void *v6; // x23
  id v7; // x24
  void *v8; // x25
  void *v9; // x22
  os_log_s *v10; // x23
  int v12; // [xsp+0h] [xbp-60h] BYREF
  const char *v13; // [xsp+4h] [xbp-5Ch]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v3 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS____EARSpeechModelInfo),
         "initWithConfig:",
         self->_recognizerConfigFilePath);
  -[_EARAppLmData setInputFormat:](self->_appLmData, "setInputFormat:", 1LL);
  v4 = objc_retainAutoreleasedReturnValue(
         +[_EARLmBuilder generateNgramCountsWithConfig:root:data:](
           &OBJC_CLASS____EARLmBuilder,
           "generateNgramCountsWithConfig:root:data:",
           self->_recognizerConfigFilePath,
           CFSTR("app-lm.NGRAM"),
           self->_appLmData));
  v5 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS____EARNgramLmModel),
         "initWithConfiguration:root:",
         self->_recognizerConfigFilePath,
         CFSTR("app-lm.NGRAM"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "language"));
  v7 = objc_retainAutoreleasedReturnValue(-[LSRLanguageModel oovWordsAndFrequenciesInNgramCount](self, "oovWordsAndFrequenciesInNgramCount"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "allKeys"));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "serializedModelWithLanguage:modelData:oovs:", v6, v4, v8));
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  v10 = (os_log_s *)SFLogConnection;
  if ( v9 )
  {
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
    {
      v12 = 136315138;
      v13 = "-[LSRLanguageModel ngramCountsSerializeData]";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v10,
        OS_LOG_TYPE_INFO,
        "%s Successfully serialized ngram counts and OOVs",
        (uint8_t *)&v12,
        0xCu);
    }
  }
  else if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
  {
    v12 = 136315138;
    v13 = "-[LSRLanguageModel ngramCountsSerializeData]";
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      v10,
      OS_LOG_TYPE_ERROR,
      "%s Failed to serialize ngram counts data",
      (uint8_t *)&v12,
      0xCu);
  }
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}