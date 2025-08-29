-[ATXHeuristicJSEnv _refreshAfterTimeInterval:]
void __cdecl -[ATXHeuristicJSEnv _refreshAfterTimeInterval:](ATXHeuristicJSEnv *self, SEL a2, double a3)
{
  __int64 v3; // x30
  id v6; // x20
  NSDate *v7; // x21
  void *v8; // x20

  if ( a3 > 0.0 )
  {
    v6 = objc_alloc((Class)&OBJC_CLASS___ATXInformationHeuristicRefreshTimeTrigger);
    v7 = objc_retainAutoreleasedReturnValue(+[NSDate dateWithTimeIntervalSinceNow:](&OBJC_CLASS___NSDate, "dateWithTimeIntervalSinceNow:", a3));
    v8 = objc_msgSend(v6, "initWithFireDate:", v7);
    objc_release(v7);
    -[NSMutableSet addObject:](self->_currentRefreshTriggerBuffer, "addObject:", v8);
    if ( ((v3 ^ (2 * v3)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v8);
  }
}