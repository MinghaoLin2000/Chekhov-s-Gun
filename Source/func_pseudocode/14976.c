-[ATXHeuristicJSEnv generateAllHeuristicNames]
id __cdecl -[ATXHeuristicJSEnv generateAllHeuristicNames](ATXHeuristicJSEnv *self, SEL a2)
{
  id v3; // x21
  __int64 v4; // x1
  void *v5; // x19
  id v6; // x21
  void *v7; // x0
  void *v8; // x23
  __int64 v9; // x26
  void *i; // x28
  NSString *v11; // x24
  id v12; // x25
  __int128 v14; // [xsp+10h] [xbp-120h] BYREF
  __int128 v15; // [xsp+20h] [xbp-110h]
  __int128 v16; // [xsp+30h] [xbp-100h]
  __int128 v17; // [xsp+40h] [xbp-F0h]
  _BYTE v18[128]; // [xsp+50h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+138h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[ATXHeuristicJSEnv _allHeuristicClassNames](self, "_allHeuristicClassNames"));
  v5 = (void *)objc_opt_new(&OBJC_CLASS___NSMutableSet, v4);
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  v6 = objc_retain(v3);
  v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v14, v18, 16LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_QWORD *)v15;
    do
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v15 != v9 )
          objc_enumerationMutation(v6);
        v11 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("%@.name"),
                  *(_QWORD *)(*((_QWORD *)&v14 + 1) + 8LL * (_QWORD)i)));
        v12 = objc_retainAutoreleasedReturnValue(-[ATXHeuristicJSEnv stringByEvaluatingJavaScript:](self, "stringByEvaluatingJavaScript:", v11));
        objc_msgSend(v5, "addObject:", v12);
        objc_release(v12);
        objc_release(v11);
      }
      v8 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v14, v18, 16LL);
    }
    while ( v8 );
  }
  objc_release(v6);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}