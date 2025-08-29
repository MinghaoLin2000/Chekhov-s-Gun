-[LSRConnection initWithXPCConnection:]
LSRConnection *__cdecl -[LSRConnection initWithXPCConnection:](LSRConnection *self, SEL a2, id a3)
{
  id v5; // x19
  LSRConnection *v6; // x0
  LSRConnection *v7; // x20
  NSMutableArray *v8; // x0
  NSMutableArray *bufferedAudioPackets; // x8
  SFRequestParameters *v10; // x0
  SFRequestParameters *requestParameters; // x8
  _TtC22localspeechrecognition12EARInterface *v12; // x0
  _TtC22localspeechrecognition12EARInterface *earInterface; // x8
  _TtC22localspeechrecognition31AssistantAssetDelegateInterface *v14; // x0
  _TtC22localspeechrecognition31AssistantAssetDelegateInterface *assistantAssetDelegateInterface; // x8
  _TtC22localspeechrecognition32GeneralASRAssetDelegateInterface *v16; // x0
  _TtC22localspeechrecognition32GeneralASRAssetDelegateInterface *generalASRAssetDelegateInterface; // x8
  dispatch_queue_global_s *v18; // x0
  OS_dispatch_queue *sigterm_queue; // x8
  dispatch_source_t v20; // x0
  OS_dispatch_source *sigterm_source; // x8
  void ***v22; // x22
  void **v24; // [xsp+0h] [xbp-60h] BYREF
  __int64 v25; // [xsp+8h] [xbp-58h]
  __int64 (__fastcall *v26)(); // [xsp+10h] [xbp-50h]
  void *v27; // [xsp+18h] [xbp-48h]
  id v28; // [xsp+20h] [xbp-40h] BYREF
  id location; // [xsp+28h] [xbp-38h] BYREF
  objc_super v30; // [xsp+30h] [xbp-30h] BYREF

  v5 = objc_retain(a3);
  v30.receiver = self;
  v30.super_class = (Class)&OBJC_CLASS___LSRConnection;
  v6 = -[LSRConnection init](&v30, "init");
  v7 = v6;
  if ( v6 )
  {
    objc_storeStrong((id *)&v6->_connection, a3);
    v8 = (NSMutableArray *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
    bufferedAudioPackets = v7->_bufferedAudioPackets;
    v7->_bufferedAudioPackets = v8;
    objc_release(bufferedAudioPackets);
    v10 = (SFRequestParameters *)objc_alloc_init((Class)&OBJC_CLASS___SFRequestParameters);
    requestParameters = v7->_requestParameters;
    v7->_requestParameters = v10;
    objc_release(requestParameters);
    v12 = objc_opt_new(&OBJC_CLASS____TtC22localspeechrecognition12EARInterface);
    earInterface = v7->_earInterface;
    v7->_earInterface = v12;
    objc_release(earInterface);
    v14 = objc_retainAutoreleasedReturnValue(
            +[AssistantAssetDelegateInterface sharedInstance](
              &OBJC_CLASS____TtC22localspeechrecognition31AssistantAssetDelegateInterface,
              "sharedInstance"));
    assistantAssetDelegateInterface = v7->_assistantAssetDelegateInterface;
    v7->_assistantAssetDelegateInterface = v14;
    objc_release(assistantAssetDelegateInterface);
    v16 = objc_retainAutoreleasedReturnValue(
            +[GeneralASRAssetDelegateInterface sharedInstance](
              &OBJC_CLASS____TtC22localspeechrecognition32GeneralASRAssetDelegateInterface,
              "sharedInstance"));
    generalASRAssetDelegateInterface = v7->_generalASRAssetDelegateInterface;
    v7->_generalASRAssetDelegateInterface = v16;
    objc_release(generalASRAssetDelegateInterface);
    -[NSXPCConnection _setQueue:](v7->_connection, "_setQueue:", qword_100065418);
    signal(15, (void (__cdecl *)(int))1);
    v18 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(21LL, 0LL));
    sigterm_queue = v7->sigterm_queue;
    v7->sigterm_queue = (OS_dispatch_queue *)v18;
    objc_release(sigterm_queue);
    v20 = dispatch_source_create(
            (dispatch_source_type_t)&_dispatch_source_type_signal,
            0xFuLL,
            0LL,
            (dispatch_queue_t)v7->sigterm_queue);
    sigterm_source = v7->sigterm_source;
    v7->sigterm_source = (OS_dispatch_source *)v20;
    objc_release(sigterm_source);
    dispatch_source_set_event_handler((dispatch_source_t)v7->sigterm_source, &stru_100059B70);
    dispatch_activate((dispatch_object_t)v7->sigterm_source);
    objc_initWeak(&location, v7);
    v24 = _NSConcreteStackBlock;
    v25 = 3254779904LL;
    v26 = sub_10003F8B0;
    v27 = &unk_100059B90;
    objc_copyWeak(&v28, &location);
    v22 = objc_retainBlock(&v24);
    objc_msgSend(v5, "setInterruptionHandler:", v22, v24, v25, v26, v27);
    objc_msgSend(v5, "setInvalidationHandler:", v22);
    objc_release(v22);
    objc_destroyWeak(&v28);
    objc_destroyWeak(&location);
  }
  objc_release(v5);
  return v7;
}