-[ATXHeuristicJSEnv resultsForInformationHeuristics:]
id __cdecl -[ATXHeuristicJSEnv resultsForInformationHeuristics:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  id v4; // x21
  void *v5; // x20
  void *v6; // x0
  void *v7; // x22
  __int64 v8; // x28
  void *i; // x23
  __int64 v10; // x26
  void *v11; // x25
  os_log_s *v12; // x27
  double v13; // d0
  id obj; // [xsp+18h] [xbp-188h]
  _QWORD v16[6]; // [xsp+20h] [xbp-180h] BYREF
  __int128 v17; // [xsp+50h] [xbp-150h] BYREF
  __int128 v18; // [xsp+60h] [xbp-140h]
  __int128 v19; // [xsp+70h] [xbp-130h]
  __int128 v20; // [xsp+80h] [xbp-120h]
  uint8_t buf[4]; // [xsp+90h] [xbp-110h] BYREF
  double v22; // [xsp+94h] [xbp-10Ch]
  __int16 v23; // [xsp+9Ch] [xbp-104h]
  __int64 v24; // [xsp+9Eh] [xbp-102h]
  _BYTE v25[128]; // [xsp+B0h] [xbp-F0h] BYREF
  __int64 vars8; // [xsp+1A8h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableArray), "initWithCapacity:", objc_msgSend(v4, "count"));
  v17 = 0u;
  v18 = 0u;
  v19 = 0u;
  v20 = 0u;
  obj = objc_retain(v4);
  v6 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v17, v25, 16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v18;
    do
    {
      for ( i = 0LL; i != v7; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v18 != v8 )
          objc_enumerationMutation(obj);
        v10 = *(_QWORD *)(*((_QWORD *)&v17 + 1) + 8LL * (_QWORD)i);
        v11 = objc_autoreleasePoolPush();
        v16[0] = _NSConcreteStackBlock;
        v16[1] = 3254779904LL;
        v16[2] = sub_1000121BC;
        v16[3] = &unk_1000296C0;
        v16[4] = self;
        v16[5] = v10;
        -[ATXHeuristicJSEnv trackCardsAndRefreshTriggersForInformationHeuristicName:mutableResults:performingBlock:](
          self,
          "trackCardsAndRefreshTriggersForInformationHeuristicName:mutableResults:performingBlock:",
          v10,
          v5,
          v16);
        JSGarbageCollect(-[JSContext JSGlobalContextRef](self->_jsContext, "JSGlobalContextRef"));
        v12 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC());
        if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEFAULT) )
        {
          v13 = ATXMemoryUsageInMBOfCurrentProcess();
          *(_DWORD *)buf = 134218242;
          v22 = v13;
          v23 = 2112;
          v24 = v10;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v12,
            OS_LOG_TYPE_DEFAULT,
            "Memory usage is %f MB after running '%@'",
            buf,
            0x16u);
        }
        objc_release(v12);
        objc_autoreleasePoolPop(v11);
      }
      v7 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v17, v25, 16LL);
    }
    while ( v7 );
  }
  objc_release(obj);
  objc_release(obj);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}