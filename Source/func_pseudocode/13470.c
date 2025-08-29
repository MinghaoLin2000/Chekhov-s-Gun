+[NSPropertyListSerialization tsu_processLocalizedPropertyList:]
void __cdecl +[NSPropertyListSerialization tsu_processLocalizedPropertyList:](id a1, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x0
  id v6; // x21
  void *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x20
  void *v10; // x24
  NSString *v11; // x24
  NSString *v12; // x25
  __int64 v13; // x0
  id v14; // x21
  void *v15; // x0
  void *v16; // x22
  __int64 v17; // x23
  void *i; // x24
  __int128 v19; // [xsp+10h] [xbp-140h] BYREF
  __int128 v20; // [xsp+20h] [xbp-130h]
  __int128 v21; // [xsp+30h] [xbp-120h]
  __int128 v22; // [xsp+40h] [xbp-110h]
  _QWORD v23[5]; // [xsp+50h] [xbp-100h] BYREF
  _BYTE v24[128]; // [xsp+78h] [xbp-D8h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_opt_class(&OBJC_CLASS___NSMutableDictionary);
  if ( (objc_opt_isKindOfClass(v4, v5) & 1) != 0 )
  {
    v6 = objc_retain(v4);
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKey:", CFSTR("_LOCALIZABLE_")));
    if ( v7 )
      objc_msgSend(v6, "removeObjectForKey:", CFSTR("_LOCALIZABLE_"));
    v23[0] = _NSConcreteStackBlock;
    v23[1] = 3221225472LL;
    v23[2] = sub_10015C4C8;
    v23[3] = &unk_1001DF298;
    v23[4] = a1;
    objc_msgSend(v6, "enumerateKeysAndObjectsUsingBlock:", v23);
    if ( v7 )
    {
      v8 = objc_opt_class(&OBJC_CLASS___NSMutableDictionary);
      if ( (objc_opt_isKindOfClass(v7, v8) & 1) == 0 )
      {
        v9 = +[TSUAssertionHandler _atomicIncrementAssertCount](
               &OBJC_CLASS___TSUAssertionHandler,
               "_atomicIncrementAssertCount");
        if ( TSUAssertCat_init_token != -1 )
          dispatch_once(&TSUAssertCat_init_token, &stru_1001DF2B8);
        v10 = TSUAssertCat_log_t;
        if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
          sub_1001743EC(v9, v10);
        v11 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  "+[NSPropertyListSerialization(TSUtility) tsu_processLocalizedPropertyList:]"));
        v12 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/So"
                  "urces/iWorkXPC/shared/utility/NSPropertyListSerialization_TSUtility.m"));
        +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
          &OBJC_CLASS___TSUAssertionHandler,
          "handleFailureInFunction:file:lineNumber:isFatal:description:",
          v11,
          v12,
          47LL,
          0LL,
          "Expected a dictionary as a child of %{public}@",
          CFSTR("_LOCALIZABLE_"));
        objc_release(v12);
        objc_release(v11);
        +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
      }
      objc_msgSend(v6, "addEntriesFromDictionary:", v7);
    }
    objc_release(v7);
LABEL_21:
    objc_release(v4);
    goto LABEL_22;
  }
  v13 = objc_opt_class(&OBJC_CLASS___NSMutableArray);
  if ( (objc_opt_isKindOfClass(v4, v13) & 1) != 0 )
  {
    v14 = objc_retain(v4);
    v19 = 0u;
    v20 = 0u;
    v21 = 0u;
    v22 = 0u;
    v15 = objc_msgSend(v14, "countByEnumeratingWithState:objects:count:", &v19, v24, 16LL);
    if ( v15 )
    {
      v16 = v15;
      v17 = *(_QWORD *)v20;
      do
      {
        for ( i = 0LL; i != v16; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v20 != v17 )
            objc_enumerationMutation(v14);
          objc_msgSend(a1, "tsu_processLocalizedPropertyList:", *(_QWORD *)(*((_QWORD *)&v19 + 1) + 8LL * (_QWORD)i));
        }
        v16 = objc_msgSend(v14, "countByEnumeratingWithState:objects:count:", &v19, v24, 16LL);
      }
      while ( v16 );
    }
    goto LABEL_21;
  }
LABEL_22:
  objc_release(v4);
}