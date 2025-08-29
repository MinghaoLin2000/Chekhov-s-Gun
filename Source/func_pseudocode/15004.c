-[ATXHeuristicJSEnv _expireCacheAfterTime:]
void __cdecl -[ATXHeuristicJSEnv _expireCacheAfterTime:](ATXHeuristicJSEnv *self, SEL a2, double a3)
{
  __int64 v3; // x30
  id v6; // x20
  NSDate *v7; // x21
  NSDate *v8; // x22
  void *v9; // x20

  if ( a3 > 0.0 )
  {
    v6 = objc_alloc((Class)&OBJC_CLASS___ATXHeuristicCacheTimeExpirer);
    v7 = objc_retainAutoreleasedReturnValue(-[ATXHeuristicJSEnv now](self, "now"));
    v8 = objc_retainAutoreleasedReturnValue(-[NSDate dateByAddingTimeInterval:](v7, "dateByAddingTimeInterval:", a3));
    v9 = objc_msgSend(v6, "initWithFireDate:", v8);
    objc_release(v8);
    objc_release(v7);
    -[NSMutableSet addObject:](self->_currentExpirersBuffer, "addObject:", v9);
    if ( ((v3 ^ (2 * v3)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v9);
  }
}