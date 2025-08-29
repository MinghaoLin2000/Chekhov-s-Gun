-[LegacyAudioController init]
LegacyAudioController *__cdecl -[LegacyAudioController init](LegacyAudioController *self, SEL a2)
{
  LegacyAudioController *v2; // x19
  NSMutableArray *v3; // x0
  NSMutableArray *internalActiveAccessories; // x8
  NSMutableArray *v5; // x0
  NSMutableArray *internalAccessoriesSeen; // x8
  NSArray *v7; // x0
  NSArray *matchingAccessoriesList; // x8
  NSArray *v9; // x0
  NSArray *matchingBSDNotificationsList; // x8
  NSArray *v11; // x0
  NSArray *matchingDASActivityList; // x8
  NSUserDefaults *v13; // x0
  NSUserDefaults *database; // x8
  dispatch_queue_t v15; // x0
  OS_dispatch_queue *queue; // x8
  objc_super v18; // [xsp+0h] [xbp-20h] BYREF

  v18.receiver = self;
  v18.super_class = (Class)&OBJC_CLASS___LegacyAudioController;
  v2 = -[LegacyAudioController init](&v18, "init");
  if ( v2 )
  {
    v3 = (NSMutableArray *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
    internalActiveAccessories = v2->_internalActiveAccessories;
    v2->_internalActiveAccessories = v3;
    objc_release(internalActiveAccessories);
    v5 = (NSMutableArray *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
    internalAccessoriesSeen = v2->_internalAccessoriesSeen;
    v2->_internalAccessoriesSeen = v5;
    objc_release(internalAccessoriesSeen);
    v7 = (NSArray *)objc_retainAutoreleasedReturnValue(-[LegacyAudioController loadMatchingAccessoriesList](v2, "loadMatchingAccessoriesList"));
    matchingAccessoriesList = v2->_matchingAccessoriesList;
    v2->_matchingAccessoriesList = v7;
    objc_release(matchingAccessoriesList);
    v9 = (NSArray *)objc_retainAutoreleasedReturnValue(-[LegacyAudioController loadMatchingBSDNotificationsList](v2, "loadMatchingBSDNotificationsList"));
    matchingBSDNotificationsList = v2->_matchingBSDNotificationsList;
    v2->_matchingBSDNotificationsList = v9;
    objc_release(matchingBSDNotificationsList);
    v11 = (NSArray *)objc_retainAutoreleasedReturnValue(-[LegacyAudioController loadMatchingDASActivityList](v2, "loadMatchingDASActivityList"));
    matchingDASActivityList = v2->_matchingDASActivityList;
    v2->_matchingDASActivityList = v11;
    objc_release(matchingDASActivityList);
    v13 = (NSUserDefaults *)objc_msgSend(
                              objc_alloc((Class)&OBJC_CLASS___NSUserDefaults),
                              "initWithSuiteName:",
                              CFSTR("com.apple.UARPUpdaterServiceLegacyAudioDatabase"));
    database = v2->_database;
    v2->_database = v13;
    objc_release(database);
    v15 = dispatch_queue_create("com.apple.legacyAudioController.queue", 0LL);
    queue = v2->_queue;
    v2->_queue = (OS_dispatch_queue *)v15;
    objc_release(queue);
  }
  return v2;
}