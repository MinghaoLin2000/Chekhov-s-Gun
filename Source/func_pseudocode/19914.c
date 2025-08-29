+[lite_job_t gatherLogInfo]
id __cdecl +[lite_job_t gatherLogInfo](id a1, SEL a2)
{
  NSMutableArray *v2; // x19
  id v3; // x20
  void *v4; // x21
  __int64 v5; // x23
  void *i; // x24
  void *v7; // x22
  NSString *v8; // x20
  NSDictionary *v9; // x21
  __int128 v11; // [xsp+10h] [xbp-130h] BYREF
  __int128 v12; // [xsp+20h] [xbp-120h]
  __int128 v13; // [xsp+30h] [xbp-110h]
  __int128 v14; // [xsp+40h] [xbp-100h]
  _QWORD v15[2]; // [xsp+58h] [xbp-E8h] BYREF
  _QWORD v16[2]; // [xsp+68h] [xbp-D8h] BYREF
  _BYTE v17[128]; // [xsp+78h] [xbp-C8h] BYREF
  __int64 vars8; // [xsp+148h] [xbp+8h]

  pthread_mutex_lock(&stru_1000C3AA0);
  v2 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v3 = objc_retain((id)qword_1000C3EE8);
  v4 = objc_msgSend(v3, "countByEnumeratingWithState:objects:count:", &v11, v17, 16LL);
  if ( v4 )
  {
    v5 = *(_QWORD *)v12;
    do
    {
      for ( i = 0LL; i != v4; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v12 != v5 )
          objc_enumerationMutation(v3);
        v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v11 + 1) + 8LL * (_QWORD)i), "logInfo"));
        -[NSMutableArray addObject:](v2, "addObject:", v7);
        objc_release(v7);
      }
      v4 = objc_msgSend(v3, "countByEnumeratingWithState:objects:count:", &v11, v17, 16LL);
    }
    while ( v4 );
  }
  objc_release(v3);
  pthread_mutex_unlock(&stru_1000C3AA0);
  v15[0] = CFSTR("jobs");
  v15[1] = CFSTR("tick");
  v16[0] = v2;
  v8 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("Timer<%@>"), qword_1000C3F00));
  v16[1] = v8;
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           v16,
           v15,
           2LL));
  objc_release(v8);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}