-[ATXHeuristicJSEnv _refreshWithUserFocusComputedModeStream]
void __cdecl -[ATXHeuristicJSEnv _refreshWithUserFocusComputedModeStream](ATXHeuristicJSEnv *self, SEL a2)
{
  void *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___ATXInformationHeuristicRefreshBiomeTrigger),
         "initWithStreamType:",
         0LL);
  -[NSMutableSet addObject:](self->_currentRefreshTriggerBuffer, "addObject:", v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}