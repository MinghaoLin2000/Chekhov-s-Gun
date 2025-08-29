-[ATXHeuristicJSEnv _refreshOnAirplaneModeToggle]
void __cdecl -[ATXHeuristicJSEnv _refreshOnAirplaneModeToggle](ATXHeuristicJSEnv *self, SEL a2)
{
  id v3; // x20
  void *v4; // x21
  void *v5; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_alloc((Class)&OBJC_CLASS___ATXHeuristicCacheContextStoreExpirer);
  v4 = objc_retainAutoreleasedReturnValue(
         +[_CDContextQueries keyPathForAirplaneModeStatus](
           &OBJC_CLASS____CDContextQueries,
           "keyPathForAirplaneModeStatus"));
  v5 = objc_msgSend(v3, "initWithCDContextualKeyPath:", v4);
  objc_release(v4);
  -[NSMutableSet addObject:](self->_currentExpirersBuffer, "addObject:", v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}