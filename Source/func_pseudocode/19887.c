+[lite_job_t checkJobsOnMainQueue]
void __cdecl +[lite_job_t checkJobsOnMainQueue](id a1, SEL a2)
{
  os_log_s *v2; // x19
  time_t v3; // x21
  id v4; // x20
  int v5; // w23
  void *v6; // x22
  _BYTE *v7; // x24
  __int64 v8; // x25
  void *v9; // x26
  void *v10; // x19
  lite_job_t *v11; // x19
  __int64 v12; // x26
  char *v13; // x0
  char *v14; // x0
  lite_job_t *v15; // x21
  void *v16; // x22
  __int64 v17; // x28
  __int64 v18; // x25
  lite_job_t *v19; // x23
  lite_printer_t *v20; // x24
  lite_job_t *v21; // x23
  NSString *v22; // x0
  bool v23; // w23
  lite_printer_t *v24; // x21
  time_t v25; // x21
  id v26; // x22
  char *v27; // x26
  NSMutableArray *v28; // x20
  void *v29; // x23
  __int64 v30; // x27
  void *i; // x25
  void *v32; // x24
  char *v33; // x0
  os_log_s *v35; // x22
  int64_t v36; // x1
  dispatch_time_t v37; // x0
  dispatch_source_s *v38; // x21
  void *v39; // x0
  os_log_s *v40; // x22
  __int64 v41; // [xsp+8h] [xbp-2C8h]
  __int128 v42; // [xsp+10h] [xbp-2C0h] BYREF
  __int128 v43; // [xsp+20h] [xbp-2B0h]
  __int128 v44; // [xsp+30h] [xbp-2A0h]
  __int128 v45; // [xsp+40h] [xbp-290h]
  __int128 v46; // [xsp+50h] [xbp-280h] BYREF
  __int128 v47; // [xsp+60h] [xbp-270h]
  __int128 v48; // [xsp+70h] [xbp-260h]
  __int128 v49; // [xsp+80h] [xbp-250h]
  __int128 v50; // [xsp+90h] [xbp-240h] BYREF
  __int128 v51; // [xsp+A0h] [xbp-230h]
  __int128 v52; // [xsp+B0h] [xbp-220h]
  __int128 v53; // [xsp+C0h] [xbp-210h]
  _BYTE v54[128]; // [xsp+D0h] [xbp-200h] BYREF
  _BYTE v55[128]; // [xsp+150h] [xbp-180h] BYREF
  uint8_t v56[128]; // [xsp+1D0h] [xbp-100h] BYREF
  uint8_t buf[4]; // [xsp+250h] [xbp-80h] BYREF
  void *v58; // [xsp+254h] [xbp-7Ch]

  dispatch_assert_queue_V2(&_dispatch_main_q);
  v2 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
  if ( os_log_type_enabled(v2, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl((void *)&_mh_execute_header, v2, OS_LOG_TYPE_DEFAULT, "Checking for jobs to print.", buf, 2u);
  }
  objc_release(v2);
  v3 = time(0LL);
  v52 = 0u;
  v53 = 0u;
  v50 = 0u;
  v51 = 0u;
  v4 = objc_retain((id)qword_1000C3EF8);
  v5 = 0;
  v6 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v50, v56, 16LL);
  if ( v6 )
  {
    v7 = 0LL;
    v8 = *(_QWORD *)v51;
    do
    {
      v9 = 0LL;
      v10 = v7;
      do
      {
        if ( *(_QWORD *)v51 != v8 )
          objc_enumerationMutation(v4);
        v7 = objc_retain(*(id *)(*((_QWORD *)&v50 + 1) + 8LL * (_QWORD)v9));
        objc_release(v10);
        if ( v7[48] )
          ++v5;
        v9 = (char *)v9 + 1;
        v10 = v7;
      }
      while ( v6 != v9 );
      v6 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v50, v56, 16LL);
    }
    while ( v6 );
    objc_release(v7);
  }
  objc_release(v4);
  v11 = 0LL;
  v12 = v3 - 300;
  v41 = v5;
  while ( 1 )
  {
    if ( MaxProcessingJobs >= 1 )
    {
      v13 = (char *)objc_msgSend((id)qword_1000C3EF8, "count");
      if ( (unsigned __int64)&v13[-v41] >= MaxProcessingJobs )
        break;
    }
    pthread_mutex_lock(&stru_1000C3AA0);
    if ( MaxProcessingJobs >= 1 )
    {
      v14 = (char *)objc_msgSend((id)qword_1000C3EF8, "count");
      if ( (unsigned __int64)&v14[-v41] >= MaxProcessingJobs )
      {
        v15 = v11;
        goto LABEL_36;
      }
    }
    v48 = 0u;
    v49 = 0u;
    v46 = 0u;
    v47 = 0u;
    v15 = (lite_job_t *)objc_retain((id)qword_1000C3EF0);
    v16 = -[lite_job_t countByEnumeratingWithState:objects:count:](
            v15,
            "countByEnumeratingWithState:objects:count:",
            &v46,
            v55,
            16LL);
    if ( !v16 )
    {
LABEL_34:
      objc_release(v11);
LABEL_36:
      v11 = 0LL;
      goto LABEL_37;
    }
    v17 = *(_QWORD *)v47;
LABEL_20:
    v18 = 0LL;
    while ( 1 )
    {
      if ( *(_QWORD *)v47 != v17 )
        objc_enumerationMutation(v15);
      v19 = (lite_job_t *)objc_retain(*(id *)(*((_QWORD *)&v46 + 1) + 8 * v18));
      objc_release(v11);
      v11 = v19;
      v20 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v19, "printer"));
      v21 = objc_retainAutoreleasedReturnValue(-[lite_printer_t currentJob](v20, "currentJob"));
      if ( v21 || (void *)-[lite_job_t localJobState](v11, "localJobState") != (void *)3 )
      {
        objc_release(v21);
        objc_release(v20);
      }
      else
      {
        v22 = objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFilename](v11, "spoolDocumentFilename"));
        v23 = v22 == 0LL;
        objc_release(v22);
        objc_release(v20);
        if ( !v23 )
          break;
      }
      if ( (void *)-[lite_job_t localJobState](v11, "localJobState") == (void *)4
        && !v11->release_wait
        && -[lite_job_t readyTime](v11, "readyTime")
        && -[lite_job_t readyTime](v11, "readyTime") < v12 )
      {
        break;
      }
      if ( v16 == (void *)++v18 )
      {
        v16 = -[lite_job_t countByEnumeratingWithState:objects:count:](
                v15,
                "countByEnumeratingWithState:objects:count:",
                &v46,
                v55,
                16LL);
        if ( v16 )
          goto LABEL_20;
        goto LABEL_34;
      }
    }
LABEL_37:
    objc_release(v15);
    pthread_mutex_unlock(&stru_1000C3AA0);
    if ( !v11 )
      break;
    if ( (void *)-[lite_job_t localJobState](v11, "localJobState") == (void *)4 )
    {
      -[lite_job_t finishJob:](v11, "finishJob:", 8LL);
    }
    else
    {
      -[lite_job_t setPrintTriesCount:](
        v11,
        "setPrintTriesCount:",
        (char *)-[lite_job_t printTriesCount](v11, "printTriesCount") + 1);
      pthread_mutex_lock(&stru_1000C3AA0);
      objc_msgSend((id)qword_1000C3EF8, "addObject:", v11);
      v24 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v11, "printer"));
      -[lite_printer_t setCurrentJob:](v24, "setCurrentJob:", v11);
      objc_release(v24);
      pthread_mutex_unlock(&stru_1000C3AA0);
      liteDoPrint(v11);
    }
  }
  pthread_mutex_lock(&stru_1000C3AA0);
  v25 = time(0LL);
  v44 = 0u;
  v45 = 0u;
  v42 = 0u;
  v43 = 0u;
  v26 = objc_retain((id)qword_1000C3EE8);
  v27 = 0LL;
  v28 = 0LL;
  v29 = objc_msgSend(v26, "countByEnumeratingWithState:objects:count:", &v42, v54, 16LL);
  if ( v29 )
  {
    v30 = *(_QWORD *)v43;
    do
    {
      for ( i = 0LL; i != v29; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v43 != v30 )
          objc_enumerationMutation(v26);
        v32 = *(void **)(*((_QWORD *)&v42 + 1) + 8LL * (_QWORD)i);
        if ( (__int64)objc_msgSend(v32, "localJobState") >= 6 )
        {
          v33 = (char *)objc_msgSend(v32, "completedTime");
          if ( (__int64)(v33 + 60) <= v25 )
          {
            if ( !v28 )
              v28 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
            -[NSMutableArray addObject:](v28, "addObject:", v32);
          }
          else if ( (__int64)(v33 + 60) < (__int64)v27 || v27 == 0LL )
          {
            v27 = v33 + 60;
          }
        }
      }
      v29 = objc_msgSend(v26, "countByEnumeratingWithState:objects:count:", &v42, v54, 16LL);
    }
    while ( v29 );
  }
  objc_release(v26);
  if ( -[NSMutableArray count](v28, "count") )
  {
    v35 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v35, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 138543362;
      v58 = v28;
      _os_log_impl((void *)&_mh_execute_header, v35, OS_LOG_TYPE_DEFAULT, "Finalizing %{public}@", buf, 0xCu);
    }
    objc_release(v35);
    objc_msgSend((id)qword_1000C3EE8, "removeObjectsInArray:", v28);
  }
  if ( v27 )
  {
    if ( (__int64)v27 >= v25 )
      v36 = 1000000000LL * (_QWORD)&v27[-v25];
    else
      v36 = 1000000000LL;
    v37 = dispatch_time(0LL, v36);
    dispatch_after(v37, &_dispatch_main_q, &stru_10009C2A8);
    objc_release(&_dispatch_main_q);
  }
  if ( !objc_msgSend((id)qword_1000C3EF0, "count") )
  {
    v38 = (dispatch_source_s *)objc_retain((id)qword_1000C3F00);
    v39 = (void *)qword_1000C3F00;
    qword_1000C3F00 = 0LL;
    objc_release(v39);
    if ( v38 )
    {
      v40 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
      if ( os_log_type_enabled(v40, OS_LOG_TYPE_DEFAULT) )
      {
        *(_DWORD *)buf = 138543362;
        v58 = v38;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v40,
          OS_LOG_TYPE_DEFAULT,
          "Disassociating from JobTimer and related transactions: %{public}@",
          buf,
          0xCu);
      }
      objc_release(v40);
      dispatch_source_cancel(v38);
    }
    objc_release(v38);
  }
  pthread_mutex_unlock(&stru_1000C3AA0);
  objc_release(v28);
  objc_release(v11);
}