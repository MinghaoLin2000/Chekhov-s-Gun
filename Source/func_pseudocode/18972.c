-[SiriNCAlertViewController commonInit]
void __cdecl -[SiriNCAlertViewController commonInit](SiriNCAlertViewController *self, SEL a2)
{
  SRFLockStateNotifier *v3; // x0
  SRFLockStateNotifier *lockStateNotifier; // x8
  SiriUIAudioManager *v5; // x0
  SiriUIAudioManager *audioManager; // x8
  NSNotificationCenter *v7; // x20
  NSNotificationCenter *v8; // x20
  SiriUIHeater *v9; // x0
  SiriUIHeater *heater; // x8
  void *v11; // x0
  SRUIFPlatformHostingInstrumentationHandler *v12; // x0
  SRUIFPlatformHostingInstrumentationHandler *viewHostingInstrumentationHandler; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[SRFLockStateNotifier sharedInstance](&OBJC_CLASS___SRFLockStateNotifier, "sharedInstance"));
  lockStateNotifier = self->_lockStateNotifier;
  self->_lockStateNotifier = v3;
  objc_release(lockStateNotifier);
  v5 = objc_retainAutoreleasedReturnValue(+[SiriUIAudioManager sharedManager](&OBJC_CLASS___SiriUIAudioManager, "sharedManager"));
  audioManager = self->_audioManager;
  self->_audioManager = v5;
  objc_release(audioManager);
  v7 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter addObserver:selector:name:object:](
    v7,
    "addObserver:selector:name:object:",
    self,
    "didLockDevice:",
    SRFLockStateNotifierDidLockDeviceNotification,
    self->_lockStateNotifier);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter addObserver:selector:name:object:](
    v8,
    "addObserver:selector:name:object:",
    self,
    "didUnlockDevice:",
    SRFLockStateNotifierDidUnlockDeviceNotification,
    self->_lockStateNotifier);
  objc_release(v8);
  v9 = (SiriUIHeater *)objc_alloc_init((Class)&OBJC_CLASS___SiriUIHeater);
  heater = self->_heater;
  self->_heater = v9;
  objc_release(heater);
  v11 = -[SiriUIHeater setDelegate:](self->_heater, "setDelegate:", self);
  self->_ncBreakOutState = 0LL;
  if ( (unsigned int)AFDeviceSupportsSystemAssistantExperience(v11) )
    -[SiriNCAlertViewController setIsSiriIdleAndQuiet:](self, "setIsSiriIdleAndQuiet:", 1LL);
  v12 = objc_opt_new(&OBJC_CLASS___SRUIFPlatformHostingInstrumentationHandler);
  viewHostingInstrumentationHandler = self->_viewHostingInstrumentationHandler;
  self->_viewHostingInstrumentationHandler = v12;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(viewHostingInstrumentationHandler);
}