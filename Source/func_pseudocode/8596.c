-[MetricMeasurementHelper _terminateProcessesBeforeIterationHelper:response:]
void __cdecl -[MetricMeasurementHelper _terminateProcessesBeforeIterationHelper:response:](
        MetricMeasurementHelper *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x21
  id v6; // x20
  id v7; // x23
  void *v8; // x0
  void *v9; // x24
  NSError *v10; // x22
  __int64 v11; // x21
  void *v12; // x26
  NSError *v13; // x27
  __int64 v14; // x2
  id v15; // x19
  bool v16; // zf
  os_log_s *v17; // x27
  NSDictionary *v18; // x23
  id v19; // x23
  void *v20; // x0
  void *v21; // x24
  __int64 v22; // x21
  void *i; // x25
  void *v24; // x19
  void *v25; // x0
  void *v26; // x28
  void *v27; // x27
  void *v28; // x26
  os_log_s *v29; // x28
  void *v30; // x26
  void *v31; // x26
  char v32; // w27
  os_log_s *v33; // x28
  void *v34; // x19
  os_log_s *v35; // x1
  const char *v36; // x3
  id v37; // [xsp+10h] [xbp-240h]
  id v38; // [xsp+10h] [xbp-240h]
  void (__fastcall **v39)(id, _QWORD, NSError *); // [xsp+18h] [xbp-238h]
  __int128 v40; // [xsp+30h] [xbp-220h] BYREF
  __int128 v41; // [xsp+40h] [xbp-210h]
  __int128 v42; // [xsp+50h] [xbp-200h]
  __int128 v43; // [xsp+60h] [xbp-1F0h]
  id v44; // [xsp+78h] [xbp-1D8h] BYREF
  __int128 v45; // [xsp+80h] [xbp-1D0h] BYREF
  __int128 v46; // [xsp+90h] [xbp-1C0h]
  __int128 v47; // [xsp+A0h] [xbp-1B0h]
  __int128 v48; // [xsp+B0h] [xbp-1A0h]
  uint8_t buf[4]; // [xsp+C0h] [xbp-190h] BYREF
  void *v50; // [xsp+C4h] [xbp-18Ch]
  _BYTE v51[128]; // [xsp+D8h] [xbp-178h] BYREF
  NSErrorUserInfoKey v52; // [xsp+158h] [xbp-F8h] BYREF
  const __CFString *v53; // [xsp+160h] [xbp-F0h] BYREF
  _BYTE v54[128]; // [xsp+168h] [xbp-E8h] BYREF

  v5 = objc_retain(a3);
  v39 = (void (__fastcall **)(id, _QWORD, NSError *))objc_retain(a4);
  v6 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
  if ( v5 && objc_msgSend(v5, "count") )
  {
    v47 = 0u;
    v48 = 0u;
    v45 = 0u;
    v46 = 0u;
    v37 = v5;
    v7 = objc_retain(v5);
    v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v45, v54, 16LL);
    if ( v8 )
    {
      v9 = v8;
      v10 = 0LL;
      v11 = *(_QWORD *)v46;
      do
      {
        v12 = 0LL;
        v13 = v10;
        do
        {
          if ( *(_QWORD *)v46 != v11 )
            objc_enumerationMutation(v7);
          v14 = *(_QWORD *)(*((_QWORD *)&v45 + 1) + 8LL * (_QWORD)v12);
          v44 = v13;
          v15 = objc_retainAutoreleasedReturnValue(
                  +[MXMTerminateProcessConfiguration configWithDictionary:error:](
                    &OBJC_CLASS___MXMTerminateProcessConfiguration,
                    "configWithDictionary:error:",
                    v14,
                    &v44));
          v10 = (NSError *)objc_retain(v44);
          objc_release(v13);
          if ( v10 )
            v16 = 1;
          else
            v16 = v15 == 0LL;
          if ( v16 )
          {
            v17 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
            if ( os_log_type_enabled(v17, OS_LOG_TYPE_ERROR) )
            {
              *(_WORD *)buf = 0;
              _os_log_impl(
                (void *)&_mh_execute_header,
                v17,
                OS_LOG_TYPE_ERROR,
                "Failed to create MXMTerminateProcessConfiguration from dictionaries.",
                buf,
                2u);
            }
            objc_release(v17);
            v39[2](v39, 0LL, v10);
          }
          else
          {
            objc_msgSend(v6, "addObject:", v15);
          }
          objc_release(v15);
          v12 = (char *)v12 + 1;
          v13 = v10;
        }
        while ( v9 != v12 );
        v9 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v45, v54, 16LL);
      }
      while ( v9 );
    }
    else
    {
      v10 = 0LL;
    }
    objc_release(v7);
    v5 = v37;
    if ( !v6 )
      goto LABEL_43;
  }
  else
  {
    v52 = NSLocalizedDescriptionKey;
    v53 = CFSTR("Array of terminate process configurations was nil or empty.");
    v18 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v53,
              &v52,
              1LL));
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              CFSTR("InstrumentErrorDomain"),
              0LL,
              v18));
    objc_release(v18);
    v39[2](v39, 0LL, v10);
    if ( !v6 )
      goto LABEL_43;
  }
  if ( objc_msgSend(v6, "count") )
  {
    v38 = v5;
    v42 = 0u;
    v43 = 0u;
    v40 = 0u;
    v41 = 0u;
    v19 = objc_retain(v6);
    v20 = objc_msgSend(v19, "countByEnumeratingWithState:objects:count:", &v40, v51, 16LL);
    if ( !v20 )
      goto LABEL_42;
    v21 = v20;
    v22 = *(_QWORD *)v41;
    while ( 1 )
    {
      for ( i = 0LL; i != v21; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v41 != v22 )
          objc_enumerationMutation(v19);
        v24 = *(void **)(*((_QWORD *)&v40 + 1) + 8LL * (_QWORD)i);
        v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "processName"));
        if ( !v25
          || (v26 = v25,
              v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "processName")),
              v28 = objc_msgSend(v27, "length"),
              objc_release(v27),
              objc_release(v26),
              !v28) )
        {
          v33 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
          if ( os_log_type_enabled(v33, OS_LOG_TYPE_ERROR) )
          {
            v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "processName"));
            *(_DWORD *)buf = 138412290;
            v50 = v34;
            v35 = v33;
            v36 = "Invalid process name: %@";
LABEL_38:
            _os_log_impl((void *)&_mh_execute_header, v35, OS_LOG_TYPE_ERROR, v36, buf, 0xCu);
            objc_release(v34);
          }
LABEL_39:
          objc_release(v33);
          continue;
        }
        v29 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
        if ( os_log_type_enabled(v29, OS_LOG_TYPE_DEBUG) )
        {
          v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "processName"));
          *(_DWORD *)buf = 138412290;
          v50 = v30;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v29,
            OS_LOG_TYPE_DEBUG,
            "Attempting to terminate process with name: %@",
            buf,
            0xCu);
          objc_release(v30);
        }
        objc_release(v29);
        v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "processName"));
        v32 = _terminateProcess();
        objc_release(v31);
        if ( (v32 & 1) == 0 )
        {
          v33 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
          if ( os_log_type_enabled(v33, OS_LOG_TYPE_ERROR) )
          {
            v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "processName"));
            *(_DWORD *)buf = 138412290;
            v50 = v34;
            v35 = v33;
            v36 = "Failed to terminate process name: %@";
            goto LABEL_38;
          }
          goto LABEL_39;
        }
      }
      v21 = objc_msgSend(v19, "countByEnumeratingWithState:objects:count:", &v40, v51, 16LL);
      if ( !v21 )
      {
LABEL_42:
        objc_release(v19);
        v5 = v38;
        break;
      }
    }
  }
LABEL_43:
  v39[2](v39, 1LL, v10);
  objc_release(v6);
  objc_release(v10);
  objc_release(v39);
  objc_release(v5);
}