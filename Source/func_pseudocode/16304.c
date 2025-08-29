-[LegacyAudioAccessory initWithDelegate:]
LegacyAudioAccessory *__cdecl -[LegacyAudioAccessory initWithDelegate:](LegacyAudioAccessory *self, SEL a2, id a3)
{
  id v5; // x19
  LegacyAudioAccessory *v6; // x20
  os_log_t v7; // x0
  OS_os_log *log; // x8
  NSMutableArray *v9; // x0
  NSMutableArray *deviceClasses; // x8
  dispatch_queue_t v11; // x0
  OS_dispatch_queue *queue; // x8
  NSMutableDictionary *v13; // x0
  NSMutableDictionary *updateFirmwareAnalyticsEvents; // x8
  LegacyAudioAccessory *v15; // x0
  objc_super v17; // [xsp+0h] [xbp-30h] BYREF

  v5 = objc_retain(a3);
  v17.receiver = self;
  v17.super_class = (Class)&OBJC_CLASS___LegacyAudioAccessory;
  v6 = -[LegacyAudioAccessory init](&v17, "init");
  if ( v6 )
  {
    v7 = os_log_create("com.apple.accessoryupdater.uarp", "legacyAudioUpdater");
    log = v6->_log;
    v6->_log = v7;
    objc_release(log);
    objc_storeStrong((id *)&v6->_delegate, a3);
    v9 = (NSMutableArray *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
    deviceClasses = v6->_deviceClasses;
    v6->_deviceClasses = v9;
    objc_release(deviceClasses);
    v11 = dispatch_queue_create("com.apple.legacyAudioAccessory.queue", 0LL);
    queue = v6->_queue;
    v6->_queue = (OS_dispatch_queue *)v11;
    objc_release(queue);
    v13 = (NSMutableDictionary *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
    updateFirmwareAnalyticsEvents = v6->_updateFirmwareAnalyticsEvents;
    v6->_updateFirmwareAnalyticsEvents = v13;
    objc_release(updateFirmwareAnalyticsEvents);
    v15 = objc_retain(v6);
  }
  objc_release(v5);
  objc_release(v6);
  return v6;
}