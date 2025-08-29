-[ATXHeuristicJSEnv actionsAndExpirersForHeuristics:]
id __cdecl -[ATXHeuristicJSEnv actionsAndExpirersForHeuristics:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x22
  void *v6; // x21
  NSSet *v7; // x22
  id v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[ATXHeuristicJSEnv _allHeuristicNames](self, "_allHeuristicNames"));
  v6 = objc_msgSend(v5, "mutableCopy");
  objc_release(v5);
  if ( objc_msgSend(v4, "count") )
  {
    v7 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", v4));
    objc_msgSend(v6, "minusSet:", v7);
    objc_release(v7);
  }
  v8 = objc_retainAutoreleasedReturnValue(-[ATXHeuristicJSEnv actionsAndExpirersForHeuristicsExcept:](self, "actionsAndExpirersForHeuristicsExcept:", v6));
  objc_release(v6);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}