-[ATXHeuristicJSEnv actionsAndExpirersForHeuristicsExcept:]
id __cdecl -[ATXHeuristicJSEnv actionsAndExpirersForHeuristicsExcept:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  __int64 v4; // x1
  void *v5; // x0
  void *v6; // x23
  __int64 v7; // x20
  void *i; // x21
  __int64 v9; // x26
  void *v10; // x27
  NSString *v11; // x25
  id v12; // x28
  os_log_s *v13; // x25
  double v14; // d0
  id v15; // x0
  void *v16; // x24
  void *v17; // x0
  void *v18; // x22
  __int64 v19; // x21
  void *v20; // x23
  __int64 v21; // x26
  void *v22; // x25
  void *v23; // x27
  void *v24; // x28
  void *v25; // x27
  void *v26; // x0
  void *v27; // x28
  int v28; // w20
  __int64 v29; // x21
  void *j; // x24
  __int64 v31; // x22
  __int64 v32; // x0
  void *v33; // x22
  id v34; // x27
  void *v35; // x28
  void *v36; // x21
  void *v37; // x20
  void *v38; // x27
  void *v39; // x0
  void *v40; // x0
  NSDate *v42; // [xsp+10h] [xbp-340h]
  __int64 v43; // [xsp+18h] [xbp-338h]
  void *v44; // [xsp+20h] [xbp-330h]
  id v45; // [xsp+30h] [xbp-320h]
  id obj; // [xsp+38h] [xbp-318h]
  void *v47; // [xsp+40h] [xbp-310h]
  id v48; // [xsp+48h] [xbp-308h]
  __int128 v49; // [xsp+50h] [xbp-300h] BYREF
  __int128 v50; // [xsp+60h] [xbp-2F0h]
  __int128 v51; // [xsp+70h] [xbp-2E0h]
  __int128 v52; // [xsp+80h] [xbp-2D0h]
  __int128 v53; // [xsp+90h] [xbp-2C0h] BYREF
  __int128 v54; // [xsp+A0h] [xbp-2B0h]
  __int128 v55; // [xsp+B0h] [xbp-2A0h]
  __int128 v56; // [xsp+C0h] [xbp-290h]
  _QWORD v57[6]; // [xsp+D0h] [xbp-280h] BYREF
  __int128 v58; // [xsp+100h] [xbp-250h] BYREF
  __int128 v59; // [xsp+110h] [xbp-240h]
  __int128 v60; // [xsp+120h] [xbp-230h]
  __int128 v61; // [xsp+130h] [xbp-220h]
  _BYTE v62[128]; // [xsp+140h] [xbp-210h] BYREF
  uint8_t v63[128]; // [xsp+1C0h] [xbp-190h] BYREF
  uint8_t buf[4]; // [xsp+240h] [xbp-110h] BYREF
  double v65; // [xsp+244h] [xbp-10Ch]
  __int16 v66; // [xsp+24Ch] [xbp-104h]
  id v67; // [xsp+24Eh] [xbp-102h]
  _BYTE v68[128]; // [xsp+258h] [xbp-F8h] BYREF
  __int64 vars8; // [xsp+358h] [xbp+8h]

  v48 = objc_retain(a3);
  v47 = (void *)objc_opt_new(&OBJC_CLASS___NSMutableDictionary, v4);
  v58 = 0u;
  v59 = 0u;
  v60 = 0u;
  v61 = 0u;
  obj = objc_retain(objc_retainAutoreleasedReturnValue(-[ATXHeuristicJSEnv _allHeuristicClassNames](self, "_allHeuristicClassNames")));
  v5 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v58, v68, 16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v59;
    do
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v59 != v7 )
          objc_enumerationMutation(obj);
        v9 = *(_QWORD *)(*((_QWORD *)&v58 + 1) + 8LL * (_QWORD)i);
        v10 = objc_autoreleasePoolPush();
        v11 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@.name"), v9));
        v12 = objc_retainAutoreleasedReturnValue(-[ATXHeuristicJSEnv stringByEvaluatingJavaScript:](self, "stringByEvaluatingJavaScript:", v11));
        objc_release(v11);
        if ( ((unsigned int)objc_msgSend(v48, "containsObject:", v12) & 1) == 0 )
        {
          v57[0] = _NSConcreteStackBlock;
          v57[1] = 3254779904LL;
          v57[2] = sub_100011E84;
          v57[3] = &unk_1000296C0;
          v57[4] = self;
          v57[5] = v9;
          -[ATXHeuristicJSEnv trackActionsAndExpirersForHeuristicName:mutableResult:performingBlock:](
            self,
            "trackActionsAndExpirersForHeuristicName:mutableResult:performingBlock:",
            v12,
            v47,
            v57);
          JSGarbageCollect(-[JSContext JSGlobalContextRef](self->_jsContext, "JSGlobalContextRef"));
          v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC());
          if ( os_log_type_enabled(v13, OS_LOG_TYPE_DEFAULT) )
          {
            v14 = ATXMemoryUsageInMBOfCurrentProcess();
            *(_DWORD *)buf = 134218242;
            v65 = v14;
            v66 = 2112;
            v67 = v12;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v13,
              OS_LOG_TYPE_DEFAULT,
              "Memory usage is %f MB after running '%@'",
              buf,
              0x16u);
          }
          objc_release(v13);
        }
        objc_release(v12);
        objc_autoreleasePoolPop(v10);
      }
      v6 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v58, v68, 16LL);
    }
    while ( v6 );
  }
  objc_release(obj);
  v15 = objc_unsafeClaimAutoreleasedReturnValue(-[JSContext evaluateScript:](self->_jsContext, "evaluateScript:", CFSTR("resetSharedState()")));
  v42 = objc_retainAutoreleasedReturnValue(-[NSDate dateByAddingTimeInterval:](self->_now, "dateByAddingTimeInterval:", 600.0));
  v53 = 0u;
  v54 = 0u;
  v55 = 0u;
  v56 = 0u;
  v16 = v47;
  v45 = objc_retainAutoreleasedReturnValue(objc_msgSend(v47, "allKeys"));
  v17 = objc_msgSend(v45, "countByEnumeratingWithState:objects:count:", &v53, v63, 16LL);
  if ( v17 )
  {
    v18 = v17;
    v19 = *(_QWORD *)v54;
    v43 = *(_QWORD *)v54;
    do
    {
      v20 = 0LL;
      v44 = v18;
      do
      {
        if ( *(_QWORD *)v54 != v19 )
          objc_enumerationMutation(v45);
        v21 = *(_QWORD *)(*((_QWORD *)&v53 + 1) + 8LL * (_QWORD)v20);
        v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "objectForKeyedSubscript:", v21));
        v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "actionMakers"));
        v24 = objc_msgSend(v23, "count");
        objc_release(v23);
        if ( !v24 )
        {
          v51 = 0u;
          v52 = 0u;
          v49 = 0u;
          v50 = 0u;
          v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "expirers"));
          v26 = objc_msgSend(v25, "countByEnumeratingWithState:objects:count:", &v49, v62, 16LL);
          if ( !v26 )
          {
            objc_release(v25);
LABEL_28:
            v33 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___ATXHeuristicCacheTimeExpirer), "initWithFireDate:", v42);
            v34 = objc_alloc((Class)&OBJC_CLASS___ATXHeuristicActionMakersAndExpirers);
            v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "actionMakers"));
            v36 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "expirers"));
            v37 = objc_retainAutoreleasedReturnValue(objc_msgSend(v36, "setByAddingObject:", v33));
            v38 = objc_msgSend(v34, "initWithActionMakers:expirers:", v35, v37);
            objc_release(v37);
            v39 = v36;
            v19 = v43;
            objc_release(v39);
            objc_release(v35);
            objc_msgSend(v16, "setObject:forKeyedSubscript:", v38, v21);
            objc_release(v38);
            v40 = v33;
            v18 = v44;
            objc_release(v40);
            goto LABEL_29;
          }
          v27 = v26;
          v28 = 0;
          v29 = *(_QWORD *)v50;
          do
          {
            for ( j = 0LL; j != v27; j = (char *)j + 1 )
            {
              if ( *(_QWORD *)v50 != v29 )
                objc_enumerationMutation(v25);
              v31 = *(_QWORD *)(*((_QWORD *)&v49 + 1) + 8LL * (_QWORD)j);
              v32 = objc_opt_class(&OBJC_CLASS___ATXHeuristicCacheTimeExpirer);
              v28 |= objc_opt_isKindOfClass(v31, v32);
            }
            v27 = objc_msgSend(v25, "countByEnumeratingWithState:objects:count:", &v49, v62, 16LL);
          }
          while ( v27 );
          objc_release(v25);
          v16 = v47;
          v19 = v43;
          v18 = v44;
          if ( (v28 & 1) == 0 )
            goto LABEL_28;
        }
LABEL_29:
        objc_release(v22);
        v20 = (char *)v20 + 1;
      }
      while ( v20 != v18 );
      v18 = objc_msgSend(v45, "countByEnumeratingWithState:objects:count:", &v53, v63, 16LL);
    }
    while ( v18 );
  }
  objc_release(v45);
  objc_release(v42);
  objc_release(obj);
  objc_release(v48);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v16);
}