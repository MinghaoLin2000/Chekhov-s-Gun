-[LSRConnection _requestContext]
id __cdecl -[LSRConnection _requestContext](LSRConnection *self, SEL a2)
{
  void *v3; // x20
  SFRequestParameters *requestParameters; // x21
  os_log_s *v5; // x20
  void *v6; // x21
  void *v7; // x22
  void *v8; // x23
  unsigned int v9; // w24
  void *v10; // x25
  unsigned int v11; // w0
  const __CFString *v12; // x0
  __CFString *v13; // x20
  const __CFString *v14; // x8
  const __CFString *v15; // x0
  __CFString *v16; // x21
  const __CFString *v17; // x8
  const __CFString *v18; // x0
  __CFString *v19; // x22
  const __CFString *v20; // x8
  NSNumber *v21; // x23
  const __CFString *v22; // x0
  __CFString *v23; // x24
  const __CFString *v24; // x8
  void *v25; // x26
  NSNumber *v26; // x25
  void *v27; // x28
  NSNumber *v28; // x27
  NSDictionary *v29; // x19
  _QWORD v31[8]; // [xsp+0h] [xbp-130h] BYREF
  _QWORD v32[8]; // [xsp+40h] [xbp-F0h] BYREF
  uint8_t buf[4]; // [xsp+80h] [xbp-B0h] BYREF
  const char *v34; // [xsp+84h] [xbp-ACh]
  __int16 v35; // [xsp+8Ch] [xbp-A4h]
  void *v36; // [xsp+8Eh] [xbp-A2h]
  __int16 v37; // [xsp+96h] [xbp-9Ah]
  void *v38; // [xsp+98h] [xbp-98h]
  __int16 v39; // [xsp+A0h] [xbp-90h]
  void *v40; // [xsp+A2h] [xbp-8Eh]
  __int16 v41; // [xsp+AAh] [xbp-86h]
  unsigned int v42; // [xsp+ACh] [xbp-84h]
  __int16 v43; // [xsp+B0h] [xbp-80h]
  void *v44; // [xsp+B2h] [xbp-7Eh]
  __int16 v45; // [xsp+BAh] [xbp-76h]
  unsigned int v46; // [xsp+BCh] [xbp-74h]
  __int64 vars8; // [xsp+138h] [xbp+8h]

  v3 = (void *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
  {
    requestParameters = self->_requestParameters;
    v5 = objc_retain(v3);
    v6 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters language](requestParameters, "language"));
    v7 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters task](self->_requestParameters, "task"));
    v8 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters taskIdentifier](self->_requestParameters, "taskIdentifier"));
    v9 = (unsigned int)-[SFRequestParameters narrowband](self->_requestParameters, "narrowband");
    v10 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters applicationName](self->_requestParameters, "applicationName"));
    v11 = (unsigned int)-[SFRequestParameters enableAutoPunctuation](self->_requestParameters, "enableAutoPunctuation");
    *(_DWORD *)buf = 136316674;
    v34 = "-[LSRConnection _requestContext]";
    v35 = 2112;
    v36 = v6;
    v37 = 2112;
    v38 = v7;
    v39 = 2112;
    v40 = v8;
    v41 = 1024;
    v42 = v9;
    v43 = 2112;
    v44 = v10;
    v45 = 1024;
    v46 = v11;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v5,
      OS_LOG_TYPE_INFO,
      "%s RequestContext: language:%@ task:%@ taskIdentifier:%@ narrowband:%d appname:%@ enableAutoPunctuation:%d",
      buf,
      0x40u);
    objc_release(v10);
    objc_release(v8);
    objc_release(v7);
    objc_release(v6);
    objc_release(v5);
  }
  v12 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters language](self->_requestParameters, "language", kSFCoreAnalyticsLanguageKey));
  v13 = (__CFString *)v12;
  if ( v12 )
    v14 = v12;
  else
    v14 = CFSTR("none");
  v32[0] = v14;
  v31[1] = kSFCoreAnalyticsTaskKey;
  v15 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters task](self->_requestParameters, "task"));
  v16 = (__CFString *)v15;
  if ( v15 )
    v17 = v15;
  else
    v17 = CFSTR("none");
  v32[1] = v17;
  v31[2] = kSFCoreAnalyticsTaskIdentifierKey;
  v18 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters taskIdentifier](self->_requestParameters, "taskIdentifier"));
  v19 = (__CFString *)v18;
  if ( v18 )
    v20 = v18;
  else
    v20 = CFSTR("none");
  v32[2] = v20;
  v31[3] = kSFCoreAnalyticsNarrowbandKey;
  v21 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithBool:](
            &OBJC_CLASS___NSNumber,
            "numberWithBool:",
            -[SFRequestParameters narrowband](self->_requestParameters, "narrowband")));
  v32[3] = v21;
  v31[4] = kSFCoreAnalyticsAppnameKey;
  v22 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters applicationName](self->_requestParameters, "applicationName"));
  v23 = (__CFString *)v22;
  if ( v22 )
    v24 = v22;
  else
    v24 = CFSTR("none");
  v32[4] = v24;
  v32[5] = &__kCFBooleanTrue;
  v31[5] = kSFCoreAnalyticsOndeviceKey;
  v31[6] = kSFCoreAnalyticsUsesCustomLmKey;
  v25 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters dynamicLanguageModel](self->_requestParameters, "dynamicLanguageModel"));
  v26 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", v25 != 0LL));
  v32[6] = v26;
  v31[7] = kSFCoreAnalyticsUsesCustomVocabKey;
  v27 = objc_retainAutoreleasedReturnValue(-[SFRequestParameters dynamicVocabulary](self->_requestParameters, "dynamicVocabulary"));
  v28 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", v27 != 0LL));
  v32[7] = v28;
  v29 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            v32,
            v31,
            8LL));
  objc_release(v28);
  objc_release(v27);
  objc_release(v26);
  objc_release(v25);
  objc_release(v23);
  objc_release(v21);
  objc_release(v19);
  objc_release(v16);
  objc_release(v13);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v29);
}