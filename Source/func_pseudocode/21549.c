+[LSRConnection _cachedRecognizerCleanUp]
void __cdecl +[LSRConnection _cachedRecognizerCleanUp](id a1, SEL a2)
{
  os_log_s *v2; // x19
  void *v3; // x19
  void *v4; // x20
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  void *v9; // x0
  void *v10; // x0
  void *v11; // x0
  SFEntitledAssetManager *v12; // x19
  int v13; // [xsp+0h] [xbp-40h] BYREF
  const char *v14; // [xsp+4h] [xbp-3Ch]

  v2 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
  {
    v13 = 136315138;
    v14 = "+[LSRConnection _cachedRecognizerCleanUp]";
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v2,
      OS_LOG_TYPE_DEBUG,
      "%s _cachedRecognizerCleanUp",
      (uint8_t *)&v13,
      0xCu);
  }
  v3 = (void *)qword_100065458;
  v4 = objc_retainAutoreleasedReturnValue(
         +[_EARSpeechRecognitionActiveConfiguration activeConfigurationForNothing](
           &OBJC_CLASS____EARSpeechRecognitionActiveConfiguration,
           "activeConfigurationForNothing"));
  objc_msgSend(v3, "setActiveConfiguration:", v4);
  objc_release(v4);
  v5 = (void *)qword_100065458;
  qword_100065458 = 0LL;
  objc_release(v5);
  v6 = (void *)qword_100065440;
  qword_100065440 = 0LL;
  objc_release(v6);
  v7 = (void *)qword_100065450;
  qword_100065450 = 0LL;
  objc_release(v7);
  v8 = (void *)qword_100065460;
  qword_100065460 = 0LL;
  objc_release(v8);
  v9 = (void *)qword_100065448;
  qword_100065448 = 0LL;
  objc_release(v9);
  v10 = (void *)qword_100065468;
  qword_100065468 = 0LL;
  objc_release(v10);
  v11 = (void *)qword_100065470;
  qword_100065470 = 0LL;
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(+[SFEntitledAssetManager sharedInstance](&OBJC_CLASS___SFEntitledAssetManager, "sharedInstance"));
  -[SFEntitledAssetManager releaseAssetSets](v12, "releaseAssetSets");
  objc_release(v12);
}