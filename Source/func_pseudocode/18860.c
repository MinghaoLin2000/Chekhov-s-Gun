-[SiriNCService init]
SiriNCService *__cdecl -[SiriNCService init](SiriNCService *self, SEL a2)
{
  SiriNCService *v2; // x19
  void *v3; // x20
  SCDACoordinator *v4; // x8
  SCDACoordinator *scdaCoordinator; // x0
  void *v6; // x20
  AFMyriadCoordinator *v7; // x8
  void *v8; // x20
  id v9; // x20
  id v10; // x20
  NSMutableDictionary *v11; // x0
  NSMutableDictionary *viewServices; // x8
  NSDistributedNotificationCenter *v13; // x20
  SiriUIAudioDeviceManager *v14; // x0
  SiriUIAudioDeviceManager *audioDeviceManager; // x8
  id v16; // x0
  _QWORD block[4]; // [xsp+8h] [xbp-58h] BYREF
  id v19; // [xsp+28h] [xbp-38h]
  objc_super v20; // [xsp+30h] [xbp-30h] BYREF

  v20.receiver = self;
  v20.super_class = (Class)&OBJC_CLASS___SiriNCService;
  v2 = -[SiriNCService init](&v20, "init");
  if ( v2 )
  {
    objc_release((id)objc_opt_new(&OBJC_CLASS___SRFAnalyticsOverride));
    if ( (unsigned int)+[AFFeatureFlags isSCDAFrameworkEnabled](&OBJC_CLASS___AFFeatureFlags, "isSCDAFrameworkEnabled") )
    {
      v3 = objc_retainAutoreleasedReturnValue(+[SCDACoordinator currentCoordinator](&OBJC_CLASS___SCDACoordinator, "currentCoordinator"));
      objc_release(v3);
      if ( v3 )
        +[SCDACoordinator clearCurrentCoordinator](&OBJC_CLASS___SCDACoordinator, "clearCurrentCoordinator");
      v4 = (SCDACoordinator *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___SCDACoordinator), "initWithDelegate:", v2);
      scdaCoordinator = v2->_scdaCoordinator;
      v2->_scdaCoordinator = v4;
    }
    else
    {
      v6 = objc_retainAutoreleasedReturnValue(+[AFMyriadCoordinator currentCoordinator](&OBJC_CLASS___AFMyriadCoordinator, "currentCoordinator"));
      objc_release(v6);
      if ( v6 )
        +[AFMyriadCoordinator clearCurrentCoordinator](&OBJC_CLASS___AFMyriadCoordinator, "clearCurrentCoordinator");
      v7 = (AFMyriadCoordinator *)objc_msgSend(
                                    objc_alloc((Class)&OBJC_CLASS___AFMyriadCoordinator),
                                    "initWithDelegate:",
                                    v2);
      scdaCoordinator = v2->_myriadCoordinator;
      v2->_myriadCoordinator = v7;
    }
    objc_release(scdaCoordinator);
    v8 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    -[SiriNCService setPresentationDependentBlocks:](v2, "setPresentationDependentBlocks:", v8);
    objc_release(v8);
    v9 = objc_alloc_init((Class)&OBJC_CLASS___NSLock);
    -[SiriNCService setPresentationDependentBlocksLock:](v2, "setPresentationDependentBlocksLock:", v9);
    objc_release(v9);
    v10 = objc_alloc_init((Class)&OBJC_CLASS___NSLock);
    -[SiriNCService setAlertStateLock:](v2, "setAlertStateLock:", v10);
    objc_release(v10);
    -[SiriNCService setBreakoutState:](v2, "setBreakoutState:", 0LL);
    v11 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
    viewServices = v2->_viewServices;
    v2->_viewServices = v11;
    objc_release(viewServices);
    +[RemoteViewBridgeServiceViewService registerViewServiceDelegate:](
      &OBJC_CLASS___RemoteViewBridgeServiceViewService,
      "registerViewServiceDelegate:",
      v2);
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSDistributedNotificationCenter defaultCenter](
              &OBJC_CLASS___NSDistributedNotificationCenter,
              "defaultCenter"));
    -[NSDistributedNotificationCenter addObserver:selector:name:object:](
      v13,
      "addObserver:selector:name:object:",
      v2,
      "_receivedNotification:",
      CFSTR("com.apple.HIToolbox.beginMenuTrackingNotification"),
      0LL);
    -[NSDistributedNotificationCenter addObserver:selector:name:object:](
      v13,
      "addObserver:selector:name:object:",
      v2,
      "_receivedNotification:",
      CFSTR("com.apple.HIToolbox.endMenuTrackingNotification"),
      0LL);
    -[NSDistributedNotificationCenter addObserver:selector:name:object:suspensionBehavior:](
      v13,
      "addObserver:selector:name:object:suspensionBehavior:",
      v2,
      "_receivedNotification:",
      CFSTR("com.apple.bluetooth.audio"),
      0LL,
      4LL);
    -[NSDistributedNotificationCenter addObserver:selector:name:object:suspensionBehavior:](
      v13,
      "addObserver:selector:name:object:suspensionBehavior:",
      v2,
      "_receivedNotification:",
      CFSTR("SiriObservationDoCancelListening"),
      0LL,
      4LL);
    v14 = (SiriUIAudioDeviceManager *)objc_alloc_init((Class)&OBJC_CLASS___SiriUIAudioDeviceManager);
    audioDeviceManager = v2->_audioDeviceManager;
    v2->_audioDeviceManager = v14;
    objc_release(audioDeviceManager);
    -[SiriUIAudioDeviceManager setDelegate:](v2->_audioDeviceManager, "setDelegate:", v2);
    -[NSDistributedNotificationCenter addObserver:forKeyPath:options:context:](
      v13,
      "addObserver:forKeyPath:options:context:",
      v2,
      CFSTR("suspended"),
      0LL,
      CFSTR("self"));
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_1000055DC;
    block[3] = &unk_100020670;
    v19 = objc_retain(v2);
    dispatch_async(&_dispatch_main_q, block);
    objc_release((id)objc_opt_new(&OBJC_CLASS___SiriUIWorkspaceOverride));
    v16 = objc_unsafeClaimAutoreleasedReturnValue(+[SRUIFCachedPreferences sharedInstance](&OBJC_CLASS___SRUIFCachedPreferences, "sharedInstance"));
    objc_release(v19);
    objc_release(v13);
  }
  return v2;
}