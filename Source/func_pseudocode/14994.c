-[ATXHeuristicJSEnv _refreshAtTimestamp:]
void __cdecl -[ATXHeuristicJSEnv _refreshAtTimestamp:](ATXHeuristicJSEnv *self, SEL a2, double a3)
{
  double v5; // d0
  id v6; // x20
  NSDate *v7; // x21
  void *v8; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  +[NSDate timeIntervalSinceReferenceDate](&OBJC_CLASS___NSDate, "timeIntervalSinceReferenceDate");
  if ( v5 < a3 )
  {
    v6 = objc_alloc((Class)&OBJC_CLASS___ATXInformationHeuristicRefreshTimeTrigger);
    v7 = objc_retainAutoreleasedReturnValue(
           +[NSDate dateWithTimeIntervalSinceReferenceDate:](
             &OBJC_CLASS___NSDate,
             "dateWithTimeIntervalSinceReferenceDate:",
             a3));
    v8 = objc_msgSend(v6, "initWithFireDate:", v7);
    objc_release(v7);
    -[NSMutableSet addObject:](self->_currentRefreshTriggerBuffer, "addObject:", v8);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v8);
  }
}