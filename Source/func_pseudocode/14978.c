-[ATXHeuristicJSEnv executeHeuristics:]
id __cdecl -[ATXHeuristicJSEnv executeHeuristics:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  id v3; // x19
  id v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[ATXHeuristicJSEnv actionsAndExpirersForHeuristics:](self, "actionsAndExpirersForHeuristics:", a3));
  v4 = objc_retainAutoreleasedReturnValue((id)ATXActionsFromEnvResult());
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}