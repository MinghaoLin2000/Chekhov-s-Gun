+[LSRLanguageModel createAppLmLmeProfileWithLanguage:modelRoot:customPronsData:newOovs:writeToVocabFile:]
bool __cdecl +[LSRLanguageModel createAppLmLmeProfileWithLanguage:modelRoot:customPronsData:newOovs:writeToVocabFile:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7)
{
  id v11; // x19
  id v12; // x20
  id v13; // x21
  id v14; // x22
  id v15; // x23
  id v16; // x24
  void *v17; // x25
  void *v18; // x27
  NSDictionary *v19; // x26
  id v20; // x27
  void *v21; // x28
  void *v22; // x27
  id v23; // x27
  id v24; // x25
  void *v25; // x0
  void *v26; // x26
  bool v27; // w25
  os_log_s *v28; // x27
  os_log_s *v29; // x24
  os_log_s *v30; // x27
  void **v32; // [xsp+0h] [xbp-110h] BYREF
  __int64 v33; // [xsp+8h] [xbp-108h]
  __int64 (__fastcall *v34)(int, int, id); // [xsp+10h] [xbp-100h]
  void *v35; // [xsp+18h] [xbp-F8h]
  id v36; // [xsp+20h] [xbp-F0h]
  _QWORD v37[4]; // [xsp+28h] [xbp-E8h] BYREF
  id v38; // [xsp+48h] [xbp-C8h]
  id v39; // [xsp+50h] [xbp-C0h]
  _QWORD v40[4]; // [xsp+58h] [xbp-B8h] BYREF
  id v41; // [xsp+78h] [xbp-98h]
  uint8_t buf[4]; // [xsp+80h] [xbp-90h] BYREF
  const char *v43; // [xsp+84h] [xbp-8Ch]
  __int16 v44; // [xsp+8Ch] [xbp-84h]
  id v45; // [xsp+8Eh] [xbp-82h]

  v11 = objc_retain(a3);
  v12 = objc_retain(a5);
  v13 = objc_retain(a6);
  v14 = objc_retain(a7);
  v15 = objc_retainAutoreleasedReturnValue(
          +[LSRLanguageModel _userProfileWithModelRoot:language:](
            &OBJC_CLASS___LSRLanguageModel,
            "_userProfileWithModelRoot:language:",
            a4,
            v11));
  if ( v15 )
  {
    v40[0] = _NSConcreteStackBlock;
    v40[1] = 3254779904LL;
    v40[2] = sub_100030EFC;
    v40[3] = &unk_100059980;
    v16 = objc_retain(objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary));
    v41 = v16;
    objc_msgSend(v13, "enumerateObjectsUsingBlock:", v40);
    if ( v12 )
    {
      v17 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS____EARPlsParser), "initWithData:", v12);
      v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "lexemes"));
      v19 = objc_retainAutoreleasedReturnValue(+[NSDictionary dictionaryWithDictionary:](&OBJC_CLASS___NSDictionary, "dictionaryWithDictionary:", v18));
      objc_release(v18);
      v20 = objc_alloc((Class)&OBJC_CLASS____EARPhonesetMapping);
      v21 = objc_retainAutoreleasedReturnValue(
              +[SFUtilities stringByReplacingHyphensWithUnderscores:](
                &OBJC_CLASS___SFUtilities,
                "stringByReplacingHyphensWithUnderscores:",
                v11));
      v22 = objc_msgSend(v20, "initWithLanguage:", v21);
      objc_release(v21);
      v37[0] = _NSConcreteStackBlock;
      v37[1] = 3254779904LL;
      v37[2] = sub_100030F78;
      v37[3] = &unk_1000599E0;
      v38 = v22;
      v39 = objc_retain(v16);
      v23 = objc_retain(v22);
      -[NSDictionary enumerateKeysAndObjectsUsingBlock:](v19, "enumerateKeysAndObjectsUsingBlock:", v37);
      objc_release(v39);
      objc_release(v38);
      objc_release(v23);
      objc_release(v19);
      objc_release(v17);
    }
    v32 = _NSConcreteStackBlock;
    v33 = 3254779904LL;
    v34 = sub_10003107C;
    v35 = &unk_100059A10;
    v24 = objc_retain(v15);
    v36 = v24;
    objc_msgSend(v16, "enumerateKeysAndObjectsUsingBlock:", &v32);
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "dataProfile", v32, v33, v34, v35));
    v26 = v25;
    v27 = v25 != 0LL;
    if ( v25 )
    {
      objc_msgSend(v25, "writeToURL:atomically:", v14, 0LL);
      v28 = (os_log_s *)SFLogConnection;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
      {
        *(_DWORD *)buf = 136315394;
        v43 = "+[LSRLanguageModel createAppLmLmeProfileWithLanguage:modelRoot:customPronsData:newOovs:writeToVocabFile:]";
        v44 = 2112;
        v45 = v14;
        _os_log_impl((void *)&_mh_execute_header, v28, OS_LOG_TYPE_INFO, "%s Wrote profile data to file:%@", buf, 0x16u);
      }
    }
    else
    {
      v30 = (os_log_s *)SFLogConnection;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 136315138;
        v43 = "+[LSRLanguageModel createAppLmLmeProfileWithLanguage:modelRoot:customPronsData:newOovs:writeToVocabFile:]";
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          v30,
          OS_LOG_TYPE_ERROR,
          "%s Failed to create user profile",
          buf,
          0xCu);
      }
    }
    objc_release(v26);
    objc_release(v36);
    objc_release(v41);
    objc_release(v16);
  }
  else
  {
    v29 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315138;
      v43 = "+[LSRLanguageModel createAppLmLmeProfileWithLanguage:modelRoot:customPronsData:newOovs:writeToVocabFile:]";
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v29,
        OS_LOG_TYPE_ERROR,
        "%s Failed to create user profile object",
        buf,
        0xCu);
    }
    v27 = 0;
  }
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  return v27;
}