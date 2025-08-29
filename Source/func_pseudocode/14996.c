-[ATXHeuristicJSEnv _refreshAfterDarwinNotification:coalescingInterval:]
void __cdecl -[ATXHeuristicJSEnv _refreshAfterDarwinNotification:coalescingInterval:](
        ATXHeuristicJSEnv *self,
        SEL a2,
        id a3,
        double a4)
{
  id v6; // x21
  void *v7; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___ATXInformationHeuristicRefreshNotitifcationTrigger),
         "initWithNotification:type:coalescingInterval:",
         v6,
         1LL,
         a4);
  objc_release(v6);
  -[NSMutableSet addObject:](self->_currentRefreshTriggerBuffer, "addObject:", v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}