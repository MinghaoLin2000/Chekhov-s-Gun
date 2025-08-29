+[lite_job_t getAllJobsCompletionHandler:]
void __cdecl +[lite_job_t getAllJobsCompletionHandler:](id a1, SEL a2, id a3)
{
  void (__fastcall **v3)(id, NSMutableArray *, NSMutableArray *); // x19
  NSMutableArray *v4; // x20
  NSMutableArray *v5; // x21
  id v6; // x22
  void *v7; // x23
  __int64 v8; // x26
  void *i; // x28
  void *v10; // x24
  NSNumber *v11; // x25
  void *v12; // x24
  __int128 v13; // [xsp+0h] [xbp-120h] BYREF
  __int128 v14; // [xsp+10h] [xbp-110h]
  __int128 v15; // [xsp+20h] [xbp-100h]
  __int128 v16; // [xsp+30h] [xbp-F0h]
  _BYTE v17[128]; // [xsp+40h] [xbp-E0h] BYREF

  v3 = (void (__fastcall **)(id, NSMutableArray *, NSMutableArray *))objc_retain(a3);
  v4 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
  v5 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
  pthread_mutex_lock(&stru_1000C3AA0);
  v15 = 0u;
  v16 = 0u;
  v13 = 0u;
  v14 = 0u;
  v6 = objc_retain((id)qword_1000C3EE8);
  v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
  if ( v7 )
  {
    v8 = *(_QWORD *)v14;
    do
    {
      for ( i = 0LL; i != v7; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v14 != v8 )
          objc_enumerationMutation(v6);
        v10 = *(void **)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)i);
        v11 = objc_retainAutoreleasedReturnValue(
                +[NSNumber numberWithInt:](
                  &OBJC_CLASS___NSNumber,
                  "numberWithInt:",
                  objc_msgSend(v10, "printd_job_id", (_QWORD)v13)));
        -[NSMutableArray addObject:](v4, "addObject:", v11);
        objc_release(v11);
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "getJobAttributes:", 1LL));
        -[NSMutableArray addObject:](v5, "addObject:", v12);
        objc_release(v12);
      }
      v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
    }
    while ( v7 );
  }
  objc_release(v6);
  pthread_mutex_unlock(&stru_1000C3AA0);
  v3[2](v3, v4, v5);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
}