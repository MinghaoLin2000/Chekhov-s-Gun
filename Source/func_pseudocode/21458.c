-[LSRLanguageModel initWithLocale:clientID:]
LSRLanguageModel *__cdecl -[LSRLanguageModel initWithLocale:clientID:](LSRLanguageModel *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  LSRLanguageModel *v8; // x21
  void *v9; // x23
  NSString *v10; // x0
  NSString *localeCode; // x8
  void *v12; // x22
  SFEntitledAssetManager *v13; // x24
  void *v14; // x23
  objc_super v16; // [xsp+0h] [xbp-40h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v16.receiver = self;
  v16.super_class = (Class)&OBJC_CLASS___LSRLanguageModel;
  v8 = -[LSRLanguageModel init](&v16, "init");
  if ( v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[SFUtilities localeCodeForLocale:](&OBJC_CLASS___SFUtilities, "localeCodeForLocale:", v6));
    v10 = objc_retainAutoreleasedReturnValue(
            +[SFUtilities stringByReplacingHyphensWithUnderscores:](
              &OBJC_CLASS___SFUtilities,
              "stringByReplacingHyphensWithUnderscores:",
              v9));
    localeCode = v8->_localeCode;
    v8->_localeCode = v10;
    objc_release(localeCode);
    objc_release(v9);
    v12 = objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___SFEntitledAssetConfig),
            "initWithLanguage:assetType:",
            v8->_localeCode,
            3LL);
    v13 = objc_retainAutoreleasedReturnValue(+[SFEntitledAssetManager sharedInstance](&OBJC_CLASS___SFEntitledAssetManager, "sharedInstance"));
    v14 = objc_retainAutoreleasedReturnValue(
            -[SFEntitledAssetManager installedAssetWithConfig:regionId:shouldSubscribe:subscriberId:expiration:](
              v13,
              "installedAssetWithConfig:regionId:shouldSubscribe:subscriberId:expiration:",
              v12,
              0LL,
              1LL,
              v7,
              0LL));
    objc_release(v13);
    if ( v14 )
      v8 = -[LSRLanguageModel initWithAssetPath:](v8, "initWithAssetPath:", v14);
    objc_release(v14);
    objc_release(v12);
  }
  objc_release(v7);
  objc_release(v6);
  return v8;
}