-[LSRLanguageModel initWithAssetPath:]
LSRLanguageModel *__cdecl -[LSRLanguageModel initWithAssetPath:](LSRLanguageModel *self, SEL a2, id a3)
{
  id v4; // x19
  LSRLanguageModel *v5; // x20
  NSString *v6; // x0
  NSString *recognizerConfigFilePath; // x8
  _EARAppLmData *v8; // x0
  _EARAppLmData *appLmData; // x8
  void *v10; // x21
  void *v11; // x23
  void *v12; // x24
  NSString *v13; // x0
  NSString *localeCode; // x8
  void *v15; // x22
  NSString *v16; // x0
  NSString *modelVersion; // x8
  LSRLanguageModel *v18; // x21
  objc_super v20; // [xsp+0h] [xbp-40h] BYREF

  v4 = objc_retain(a3);
  v20.receiver = self;
  v20.super_class = (Class)&OBJC_CLASS___LSRLanguageModel;
  v5 = -[LSRLanguageModel init](&v20, "init");
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "stringByAppendingPathComponent:", CFSTR("mini.json")));
    recognizerConfigFilePath = v5->_recognizerConfigFilePath;
    v5->_recognizerConfigFilePath = v6;
    objc_release(recognizerConfigFilePath);
    v8 = (_EARAppLmData *)objc_msgSend(
                            objc_alloc((Class)&OBJC_CLASS____EARAppLmData),
                            "initWithConfiguration:recognizerConfigPath:",
                            v5->_recognizerConfigFilePath,
                            v5->_recognizerConfigFilePath);
    appLmData = v5->_appLmData;
    v5->_appLmData = v8;
    objc_release(appLmData);
    if ( !v5->_appLmData )
    {
      v18 = 0LL;
      goto LABEL_6;
    }
    v10 = objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS____EARSpeechRecognizer),
            "initWithConfiguration:",
            v5->_recognizerConfigFilePath);
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "modelInfo"));
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "language"));
    v13 = objc_retainAutoreleasedReturnValue(
            +[SFUtilities stringByReplacingHyphensWithUnderscores:](
              &OBJC_CLASS___SFUtilities,
              "stringByReplacingHyphensWithUnderscores:",
              v12));
    localeCode = v5->_localeCode;
    v5->_localeCode = v13;
    objc_release(localeCode);
    objc_release(v12);
    objc_release(v11);
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "modelInfo"));
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "version"));
    modelVersion = v5->_modelVersion;
    v5->_modelVersion = v16;
    objc_release(modelVersion);
    objc_release(v15);
    objc_release(v10);
  }
  v18 = objc_retain(v5);
LABEL_6:
  objc_release(v4);
  objc_release(v5);
  return v18;
}