-[LSRLanguageModel createSpeechProfileFromOovs:customProns:language:]
id __cdecl -[LSRLanguageModel createSpeechProfileFromOovs:customProns:language:](
        LSRLanguageModel *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  NSString *recognizerConfigFilePath; // x22
  id v11; // x24
  NSString *v12; // x22
  id v13; // x21
  id v14; // x22
  id v15; // x22
  id v16; // x23
  void *v17; // x0
  void *v18; // x23
  id v19; // x0
  os_log_s *v20; // x22
  os_log_s *v21; // x24
  _QWORD v23[4]; // [xsp+8h] [xbp-D8h] BYREF
  id v24; // [xsp+28h] [xbp-B8h]
  _QWORD v25[4]; // [xsp+30h] [xbp-B0h] BYREF
  id v26; // [xsp+50h] [xbp-90h]
  _QWORD v27[4]; // [xsp+58h] [xbp-88h] BYREF
  id v28; // [xsp+78h] [xbp-68h]
  uint8_t buf[4]; // [xsp+80h] [xbp-60h] BYREF
  const char *v30; // [xsp+84h] [xbp-5Ch]
  __int64 vars8; // [xsp+E8h] [xbp+8h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  recognizerConfigFilePath = self->_recognizerConfigFilePath;
  v11 = objc_retain(a5);
  v12 = objc_retainAutoreleasedReturnValue(-[NSString stringByDeletingLastPathComponent](recognizerConfigFilePath, "stringByDeletingLastPathComponent"));
  v13 = objc_retainAutoreleasedReturnValue(
          +[LSRLanguageModel _userProfileWithModelRoot:language:](
            &OBJC_CLASS___LSRLanguageModel,
            "_userProfileWithModelRoot:language:",
            v12,
            v11));
  objc_release(v11);
  objc_release(v12);
  if ( v13 )
  {
    v27[0] = _NSConcreteStackBlock;
    v27[1] = 3254779904LL;
    v27[2] = sub_10002F67C;
    v27[3] = &unk_100059980;
    v14 = objc_retain(objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary));
    v28 = v14;
    objc_msgSend(v8, "enumerateObjectsUsingBlock:", v27);
    v25[0] = _NSConcreteStackBlock;
    v25[1] = 3254779904LL;
    v25[2] = sub_10002F6F8;
    v25[3] = &unk_100059A10;
    v15 = objc_retain(v14);
    v26 = v15;
    objc_msgSend(v9, "enumerateKeysAndObjectsUsingBlock:", v25);
    v23[0] = _NSConcreteStackBlock;
    v23[1] = 3254779904LL;
    v23[2] = sub_10002F704;
    v23[3] = &unk_100059A10;
    v16 = objc_retain(v13);
    v24 = v16;
    objc_msgSend(v15, "enumerateKeysAndObjectsUsingBlock:", v23);
    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "dataProfile"));
    v18 = v17;
    if ( v17 )
    {
      v19 = objc_retain(v17);
    }
    else
    {
      v21 = (os_log_s *)SFLogConnection;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 136315138;
        v30 = "-[LSRLanguageModel createSpeechProfileFromOovs:customProns:language:]";
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          v21,
          OS_LOG_TYPE_ERROR,
          "%s Failed to create user profile",
          buf,
          0xCu);
      }
    }
    objc_release(v18);
    objc_release(v24);
    objc_release(v26);
    objc_release(v28);
    objc_release(v15);
  }
  else
  {
    v20 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315138;
      v30 = "-[LSRLanguageModel createSpeechProfileFromOovs:customProns:language:]";
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v20,
        OS_LOG_TYPE_ERROR,
        "%s Failed to create user profile object",
        buf,
        0xCu);
    }
    v18 = 0LL;
  }
  objc_release(v13);
  objc_release(v9);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v18);
}