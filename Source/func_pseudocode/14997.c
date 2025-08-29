-[ATXHeuristicJSEnv _refreshAfterUserWakeUp]
void __cdecl -[ATXHeuristicJSEnv _refreshAfterUserWakeUp](ATXHeuristicJSEnv *self, SEL a2)
{
  id v3; // x20
  void *v4; // x21
  void *v5; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_alloc((Class)&OBJC_CLASS___ATXInformationHeuristicRefreshContextChangeTrigger);
  v4 = objc_retainAutoreleasedReturnValue(
         +[_CDContextQueries keyPathForFirstWakeupStatus](
           &OBJC_CLASS____CDContextQueries,
           "keyPathForFirstWakeupStatus"));
  v5 = objc_msgSend(
         v3,
         "initWithCDContextualKeyPath:equalToValue:withMinimumDurationInPreviousState:",
         v4,
         &off_10002C190,
         14400.0);
  objc_release(v4);
  -[NSMutableSet addObject:](self->_currentRefreshTriggerBuffer, "addObject:", v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}