-[LSRLanguageModel trainAppLmFromPlainTextAndWriteToAppDirectory:vocabFile:]
void __cdecl -[LSRLanguageModel trainAppLmFromPlainTextAndWriteToAppDirectory:vocabFile:](
        LSRLanguageModel *self,
        SEL a2,
        id *a3,
        id *a4)
{
  void *v7; // x20
  os_log_s *v8; // x22
  void *v9; // x22
  unsigned __int8 v10; // w23
  os_log_s *v11; // x21
  id v12; // x23
  os_log_s *v13; // x22
  void *v14; // x23
  int v15; // [xsp+0h] [xbp-50h] BYREF
  const char *v16; // [xsp+4h] [xbp-4Ch]
  __int16 v17; // [xsp+Ch] [xbp-44h]
  void *v18; // [xsp+Eh] [xbp-42h]

  -[_EARAppLmData setInputFormat:](self->_appLmData, "setInputFormat:", 1LL);
  v7 = objc_retainAutoreleasedReturnValue(
         +[_EARLmBuilder buildLmWithConfig:root:data:dir:shouldStop:](
           &OBJC_CLASS____EARLmBuilder,
           "buildLmWithConfig:root:data:dir:shouldStop:",
           self->_recognizerConfigFilePath,
           CFSTR("app-lm.NGRAM"),
           self->_appLmData,
           &stru_10005A368,
           0LL));
  v8 = (os_log_s *)SFLogConnection;
  if ( !v7 )
  {
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      v15 = 136315138;
      v16 = "-[LSRLanguageModel trainAppLmFromPlainTextAndWriteToAppDirectory:vocabFile:]";
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v8,
        OS_LOG_TYPE_ERROR,
        "%s Failed to train model successfully",
        (uint8_t *)&v15,
        0xCu);
      if ( !a3 )
        goto LABEL_13;
    }
    else if ( !a3 )
    {
      goto LABEL_13;
    }
    *a3 = 0LL;
    goto LABEL_13;
  }
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
  {
    v15 = 136315138;
    v16 = "-[LSRLanguageModel trainAppLmFromPlainTextAndWriteToAppDirectory:vocabFile:]";
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v8,
      OS_LOG_TYPE_DEBUG,
      "%s Model trained successfully!",
      (uint8_t *)&v15,
      0xCu);
    v8 = (os_log_s *)SFLogConnection;
  }
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEBUG) )
  {
    v12 = *a3;
    v13 = objc_retain(v8);
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "path"));
    v15 = 136315394;
    v16 = "-[LSRLanguageModel trainAppLmFromPlainTextAndWriteToAppDirectory:vocabFile:]";
    v17 = 2112;
    v18 = v14;
    _os_log_debug_impl((void *)&_mh_execute_header, v13, OS_LOG_TYPE_DEBUG, "%s Writing to: %@", (uint8_t *)&v15, 0x16u);
    objc_release(v14);
    objc_release(v13);
  }
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(*a3, "path"));
  v10 = (unsigned __int8)objc_msgSend(v7, "writeToDirectory:", v9);
  objc_release(v9);
  if ( (v10 & 1) == 0 )
  {
    v11 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      v15 = 136315138;
      v16 = "-[LSRLanguageModel trainAppLmFromPlainTextAndWriteToAppDirectory:vocabFile:]";
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v11,
        OS_LOG_TYPE_ERROR,
        "%s Write process failed",
        (uint8_t *)&v15,
        0xCu);
    }
    a4 = a3;
    goto LABEL_14;
  }
LABEL_13:
  if ( a4 )
LABEL_14:
    *a4 = 0LL;
  objc_release(v7);
}