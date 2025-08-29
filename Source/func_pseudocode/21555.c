+[LSRConnection modelRootWithLanguage:assetType:clientID:modelOverrideURL:isSpelling:error:]
id __cdecl +[LSRConnection modelRootWithLanguage:assetType:clientID:modelOverrideURL:isSpelling:error:](
        id a1,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id a5,
        id a6,
        bool a7,
        id *a8)
{
  id v12; // x21
  id v13; // x19
  id v14; // x20
  id v15; // x23
  id v16; // x0
  void *v17; // x24
  id v18; // x21
  __int64 v19; // x1
  void *v20; // x25
  void *v21; // x26
  NSBundle *v22; // x28
  NSString *v23; // x22
  id v24; // x19
  void *v25; // x27
  os_log_s *v26; // x28
  NSDictionary *v27; // x22
  SFEntitledAssetManager *v28; // x27
  id v29; // x0
  id *v31; // [xsp+18h] [xbp-98h]
  id v32; // [xsp+20h] [xbp-90h]
  NSString *v33; // [xsp+28h] [xbp-88h]
  NSErrorUserInfoKey v34; // [xsp+30h] [xbp-80h] BYREF
  NSString *v35; // [xsp+38h] [xbp-78h] BYREF
  uint8_t buf[4]; // [xsp+40h] [xbp-70h] BYREF
  const char *v37; // [xsp+44h] [xbp-6Ch]
  __int16 v38; // [xsp+4Ch] [xbp-64h]
  NSString *v39; // [xsp+4Eh] [xbp-62h]
  __int64 vars8; // [xsp+B8h] [xbp+8h]

  v12 = objc_retain(a3);
  v13 = objc_retain(a5);
  v14 = objc_retain(a6);
  v15 = objc_retain(v12);
  v16 = objc_retainAutoreleasedReturnValue((id)_AFPreferencesReplacementLanguageForLocalRecognizerLanguageCode(v15));
  v17 = v16;
  v18 = v15;
  if ( v16 )
  {
    v18 = objc_retain(v16);
    objc_release(v15);
  }
  if ( !v14 || !(unsigned int)SFIsInternalInstall() )
  {
    v21 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___SFEntitledAssetConfig), "initWithLanguage:assetType:", v18, a4);
    v28 = objc_retainAutoreleasedReturnValue(+[SFEntitledAssetManager sharedInstance](&OBJC_CLASS___SFEntitledAssetManager, "sharedInstance"));
    v20 = objc_retainAutoreleasedReturnValue(
            -[SFEntitledAssetManager installedAssetWithConfig:regionId:shouldSubscribe:subscriberId:expiration:](
              v28,
              "installedAssetWithConfig:regionId:shouldSubscribe:subscriberId:expiration:",
              v21,
              0LL,
              1LL,
              v13,
              0LL));
    objc_release(v28);
    if ( !v20 )
      goto LABEL_6;
LABEL_12:
    v29 = objc_retain(v20);
    goto LABEL_13;
  }
  v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "path"));
  v21 = 0LL;
  if ( v20 )
    goto LABEL_12;
LABEL_6:
  v31 = a8;
  v32 = v13;
  v22 = objc_retainAutoreleasedReturnValue(
          +[NSBundle bundleForClass:](
            &OBJC_CLASS___NSBundle,
            "bundleForClass:",
            objc_opt_class(&OBJC_CLASS___LSRConnection, v19)));
  v23 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v22,
            "localizedStringForKey:value:table:",
            CFSTR("No %@ asset for language %@"),
            &stru_10005A368,
            CFSTR("Localizable")));
  v24 = objc_retainAutoreleasedReturnValue((id)SFEntitledAssetTypeToString(objc_msgSend(v21, "assetType")));
  v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "language"));
  v33 = objc_retainAutoreleasedReturnValue(+[NSString localizedStringWithFormat:](&OBJC_CLASS___NSString, "localizedStringWithFormat:", v23, v24, v25));
  objc_release(v25);
  objc_release(v24);
  objc_release(v23);
  objc_release(v22);
  v26 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 136315394;
    v37 = "+[LSRConnection modelRootWithLanguage:assetType:clientID:modelOverrideURL:isSpelling:error:]";
    v38 = 2112;
    v39 = v33;
    _os_log_error_impl((void *)&_mh_execute_header, v26, OS_LOG_TYPE_ERROR, "%s %@", buf, 0x16u);
  }
  if ( v31 )
  {
    v34 = NSLocalizedDescriptionKey;
    v35 = v33;
    v27 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v35,
              &v34,
              1LL));
    *v31 = objc_autorelease(
             objc_retainAutoreleasedReturnValue(
               +[NSError errorWithDomain:code:userInfo:](
                 &OBJC_CLASS___NSError,
                 "errorWithDomain:code:userInfo:",
                 CFSTR("kLSRErrorDomain"),
                 101LL,
                 v27)));
    objc_release(v27);
  }
  objc_release(v33);
  v13 = v32;
LABEL_13:
  objc_release(v21);
  objc_release(v17);
  objc_release(v15);
  objc_release(v20);
  objc_release(v14);
  objc_release(v13);
  objc_release(v18);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v20);
}