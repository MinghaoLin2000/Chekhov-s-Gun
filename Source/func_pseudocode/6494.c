-[VideoConversionService conversionQueue:processNextEntry:]
void __cdecl -[VideoConversionService conversionQueue:processNextEntry:](
        VideoConversionService *self,
        SEL a2,
        id a3,
        id a4)
{
  void *v6; // x19
  dispatch_time_t v7; // x0
  void *v8; // x20
  void *v9; // x19
  id v10; // x0
  void *v11; // x23
  void *v12; // x28
  NSAssertionHandler *v13; // x19
  id v14; // x0
  _BOOL4 v15; // w19
  void *v16; // x19
  void *v17; // x23
  void *v18; // x24
  void *v19; // x25
  void *v20; // x27
  id v21; // x22
  void *v22; // x28
  __int64 v23; // x21
  void *i; // x27
  void *v25; // x25
  void *v26; // x19
  void *v27; // x0
  void *v28; // x23
  void *v29; // x24
  void (__fastcall **v30)(void *, _QWORD, void *, void *); // x25
  __int64 v31; // x20
  void *v32; // x26
  id v34; // [xsp+10h] [xbp-1F0h]
  id v35; // [xsp+18h] [xbp-1E8h]
  id v36; // [xsp+20h] [xbp-1E0h]
  id v37; // [xsp+28h] [xbp-1D8h]
  id v38; // [xsp+30h] [xbp-1D0h]
  id v39; // [xsp+38h] [xbp-1C8h]
  dispatch_semaphore_s *dsema; // [xsp+40h] [xbp-1C0h]
  id v41; // [xsp+48h] [xbp-1B8h]
  __int64 v42; // [xsp+50h] [xbp-1B0h]
  __int128 v43; // [xsp+60h] [xbp-1A0h] BYREF
  __int128 v44; // [xsp+70h] [xbp-190h]
  __int128 v45; // [xsp+80h] [xbp-180h]
  __int128 v46; // [xsp+90h] [xbp-170h]
  _QWORD v47[4]; // [xsp+A0h] [xbp-160h] BYREF
  id v48; // [xsp+C0h] [xbp-140h]
  __int64 *v49; // [xsp+C8h] [xbp-138h]
  __int64 v50; // [xsp+D0h] [xbp-130h] BYREF
  __int64 *v51; // [xsp+D8h] [xbp-128h]
  __int64 v52; // [xsp+E0h] [xbp-120h]
  __int64 v53; // [xsp+E8h] [xbp-118h]
  uint8_t v54[128]; // [xsp+F0h] [xbp-110h] BYREF
  uint8_t buf[4]; // [xsp+170h] [xbp-90h] BYREF
  id v56; // [xsp+174h] [xbp-8Ch]
  __int16 v57; // [xsp+17Ch] [xbp-84h]
  void *v58; // [xsp+17Eh] [xbp-82h]
  __int16 v59; // [xsp+186h] [xbp-7Ah]
  void *v60; // [xsp+188h] [xbp-78h]

  v37 = objc_retain(a3);
  v39 = objc_retain(a4);
  v41 = objc_retainAutoreleasedReturnValue(objc_msgSend(v39, "videoConversionTask"));
  v50 = 0LL;
  v51 = &v50;
  v52 = 0x2020000000LL;
  v53 = 0LL;
  v47[0] = _NSConcreteStackBlock;
  v47[1] = 3254779904LL;
  v47[2] = sub_10002273C;
  v47[3] = &unk_1000417A0;
  v49 = &v50;
  dsema = objc_retain(dispatch_semaphore_create(0LL));
  v48 = dsema;
  objc_msgSend(v41, "setCompletionHandler:", v47);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v41, "options"));
  v38 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", CFSTR("_unitTestPreConversionDelayKey")));
  objc_release(v6);
  if ( v38 )
    sleep((unsigned int)objc_msgSend(v38, "intValue"));
  objc_msgSend(v41, "performConversion");
  while ( 1 )
  {
    v7 = dispatch_time(0LL, 10000000000LL);
    if ( !dispatch_semaphore_wait(dsema, v7) )
      break;
    if ( (unsigned int)objc_msgSend(v41, "didDetectHang") )
    {
      v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v39, "sourceURLCollection"));
      v9 = objc_retainAutoreleasedReturnValue(
             objc_msgSend(
               v8,
               "filenameExtensionAndPathHashForRole:",
               CFSTR("PAMediaConversionResourceRoleMainResource")));
      objc_release(v8);
      v10 = objc_retain(&_os_log_default);
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      {
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v39, "sourceURLCollection"));
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "logMessageSummary"));
        *(_DWORD *)buf = 138543875;
        v56 = v39;
        v57 = 2113;
        v58 = v9;
        v59 = 2114;
        v60 = v12;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_ERROR,
          "Timeout for %{public}@ with stalled conversion for %{private}@ (%{public}@), forcing exit",
          buf,
          0x20u);
        objc_release(v12);
        objc_release(v11);
      }
      objc_release(&_os_log_default);
      objc_msgSend((id)objc_opt_class(self), "_forceCrashAfterVideoConversionHangDetectedWithMarker");
      objc_release(v9);
    }
  }
  v36 = objc_retainAutoreleasedReturnValue(objc_msgSend(v41, "error"));
  v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v41, "resultInformation"));
  v42 = v51[3];
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v41, "resultInformation"));
  if ( v13 )
    goto LABEL_10;
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v41, "error"));
  v15 = v14 == 0LL;
  objc_release(v14);
  if ( v15 )
  {
    v13 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v13,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("VideoConversionService.m"),
      1729LL,
      CFSTR("Conversion task finished without output information or error"));
LABEL_10:
    objc_release(v13);
  }
  v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v41, "outputURLCollection"));
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v41, "resultInformation"));
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceResultDataKey")));
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v41, "options"));
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionOutputFileTypeKey")));
  v20 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            v37,
            "markCompletionAndRetrieveClientRequestsForQueueEntry:resultURLCollection:didConvertSuccessfully:conversionOu"
            "tputInformation:conversionOutputData:conversionOutputFileType:conversionError:",
            v39,
            v34,
            v42 == 1,
            v35,
            v17,
            v19,
            v36));
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  v45 = 0u;
  v46 = 0u;
  v43 = 0u;
  v44 = 0u;
  v21 = objc_retain(v20);
  v22 = objc_msgSend(v21, "countByEnumeratingWithState:objects:count:", &v43, v54, 16LL);
  if ( v22 )
  {
    v23 = *(_QWORD *)v44;
    do
    {
      for ( i = 0LL; i != v22; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v44 != v23 )
          objc_enumerationMutation(v21);
        v25 = *(void **)(*((_QWORD *)&v43 + 1) + 8LL * (_QWORD)i);
        v26 = objc_autoreleasePoolPush();
        v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v25, "requestTracker"));
        v28 = v27;
        if ( v42 == 1 )
          v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v27, "outputInformation"));
        else
          v29 = 0LL;
        v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v25, "videoClientReplyHandler"));
        v31 = v51[3];
        v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "error"));
        v30[2](v30, v31, v29, v32);
        objc_release(v32);
        objc_release(v30);
        objc_release(v29);
        objc_release(v28);
        objc_autoreleasePoolPop(v26);
      }
      v22 = objc_msgSend(v21, "countByEnumeratingWithState:objects:count:", &v43, v54, 16LL);
    }
    while ( v22 );
  }
  objc_release(v21);
  objc_release(v21);
  objc_release(v34);
  objc_release(v35);
  objc_release(v36);
  objc_release(v38);
  objc_release(v48);
  _Block_object_dispose(&v50, 8);
  objc_release(dsema);
  objc_release(v41);
  objc_release(v39);
  objc_release(v37);
}