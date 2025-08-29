-[ATXHeuristicJSEnv _expireCacheAfterLocalNotification:]
void __cdecl -[ATXHeuristicJSEnv _expireCacheAfterLocalNotification:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  id v4; // x21
  void *v5; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___ATXHeuristicCacheNotificationExpirer), "initLocal:", v4);
  objc_release(v4);
  -[NSMutableSet addObject:](self->_currentExpirersBuffer, "addObject:", v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}