-[AUCrashHandlerService didReceiveDiagnosticLog:ofType:details:]
void __cdecl -[AUCrashHandlerService didReceiveDiagnosticLog:ofType:details:](
        AUCrashHandlerService *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v5; // x19
  void *v6; // x0
  void *v7; // x20
  unsigned int v8; // w21
  __int128 v9; // q0
  __int64 v10; // x0
  void *v11; // x23
  __int64 v12; // x0
  void *v13; // x28
  __int128 v14; // q0
  void *i; // x21
  void *v16; // x0
  void *v17; // x23
  void *v18; // x0
  void *v19; // x24
  void *v20; // x26
  void *v21; // x25
  id v22; // x27
  __int128 v23; // q1
  os_log_s *v24; // x26
  os_log_s *v25; // x23
  __int128 v26; // q0
  os_log_s *v27; // x21
  os_log_s *v28; // x21
  __int128 v29; // q0
  __int128 v30; // q1
  os_log_s *v31; // x23
  __int128 v32; // q1
  os_log_s *v33; // x23
  __int128 v34; // q1
  __int128 v35; // q1
  os_log_s *v36; // x23
  __int128 v37; // q1
  os_log_s *v38; // x24
  void *v39; // x22
  void *v40; // x28
  __int128 v41; // q0
  __int128 v42; // [xsp+0h] [xbp-2D0h]
  __int64 v43; // [xsp+18h] [xbp-2B8h]
  id v44; // [xsp+20h] [xbp-2B0h]
  id obj; // [xsp+28h] [xbp-2A8h]
  _OWORD v46[2]; // [xsp+30h] [xbp-2A0h] BYREF
  _OWORD v47[2]; // [xsp+50h] [xbp-280h] BYREF
  __int128 v48; // [xsp+70h] [xbp-260h] BYREF
  __int128 v49; // [xsp+80h] [xbp-250h]
  __int128 v50; // [xsp+90h] [xbp-240h]
  __int128 v51; // [xsp+A0h] [xbp-230h]
  _OWORD v52[2]; // [xsp+B0h] [xbp-220h] BYREF
  _OWORD v53[2]; // [xsp+D0h] [xbp-200h] BYREF
  audit_token_t atoken; // [xsp+F0h] [xbp-1E0h] BYREF
  AUCrashHandlerService **v55; // [xsp+110h] [xbp-1C0h] BYREF
  AUCrashHandlerService *v56; // [xsp+118h] [xbp-1B8h] BYREF
  __int128 v57; // [xsp+120h] [xbp-1B0h]
  __int128 v58; // [xsp+130h] [xbp-1A0h]
  __int128 v59; // [xsp+140h] [xbp-190h]
  __int128 v60; // [xsp+150h] [xbp-180h]
  __int128 v61; // [xsp+160h] [xbp-170h]
  __int128 v62; // [xsp+170h] [xbp-160h]
  _BYTE v63[128]; // [xsp+180h] [xbp-150h] BYREF
  __int128 v64; // [xsp+200h] [xbp-D0h]
  __int128 v65; // [xsp+210h] [xbp-C0h]
  __int128 v66; // [xsp+220h] [xbp-B0h]
  __int128 v67; // [xsp+230h] [xbp-A0h]
  _BYTE buf[32]; // [xsp+240h] [xbp-90h] BYREF

  v56 = self;
  v5 = objc_retain(a5);
  v55 = &v56;
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("pid")));
  v7 = v6;
  if ( !v6 )
  {
    sub_100003198();
    v27 = (os_log_s *)objc_retainAutorelease((id)qword_10000D080);
    if ( os_log_type_enabled(v27, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315394;
      *(_QWORD *)&buf[4] = "AUCrashHandlerService.mm";
      *(_WORD *)&buf[12] = 1024;
      *(_DWORD *)&buf[14] = 169;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v27,
        OS_LOG_TYPE_ERROR,
        "%25s:%-5d Didn't find needed information in the crash callback: pid",
        buf,
        0x12u);
    }
    goto LABEL_50;
  }
  v8 = (unsigned int)objc_msgSend(v6, "intValue");
  v9 = *(_OWORD *)&v56->_watchedAuditToken.val[4];
  *(_OWORD *)atoken.val = *(_OWORD *)v56->_watchedAuditToken.val;
  *(_OWORD *)&atoken.val[4] = v9;
  if ( v8 != audit_token_to_pid(&atoken) )
    goto LABEL_50;
  if ( !v56->_appleSignedReq )
  {
    sub_100003198();
    v28 = (os_log_s *)objc_retainAutorelease((id)qword_10000D080);
    if ( os_log_type_enabled(v28, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315394;
      *(_QWORD *)&buf[4] = "AUCrashHandlerService.mm";
      *(_WORD *)&buf[12] = 1024;
      *(_DWORD *)&buf[14] = 180;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v28,
        OS_LOG_TYPE_INFO,
        "%25s:%-5d Don't have a valid code requirement, notifying without crash information.",
        buf,
        0x12u);
    }
    v29 = *(_OWORD *)&v56->_watchedAuditToken.val[4];
    v53[0] = *(_OWORD *)v56->_watchedAuditToken.val;
    v53[1] = v29;
    -[AUCrashHandlerService notifyCrash:withCrashInfo:](v56, "notifyCrash:withCrashInfo:", v53, 0LL);
    goto LABEL_50;
  }
  obj = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKey:", CFSTR("frames")));
  v44 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKey:", CFSTR("images")));
  if ( !obj || !v44 )
  {
    v30 = *(_OWORD *)&v56->_watchedAuditToken.val[4];
    v66 = *(_OWORD *)v56->_watchedAuditToken.val;
    v67 = v30;
    sub_100003198();
    v31 = (os_log_s *)objc_retainAutorelease((id)qword_10000D080);
    if ( os_log_type_enabled(v31, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315650;
      *(_QWORD *)&buf[4] = "AUCrashHandlerService.mm";
      *(_WORD *)&buf[12] = 1024;
      *(_DWORD *)&buf[14] = 162;
      *(_WORD *)&buf[18] = 2080;
      *(_QWORD *)&buf[20] = "frames, images";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v31,
        OS_LOG_TYPE_ERROR,
        "%25s:%-5d Didn't find needed information in the crash callback: %s",
        buf,
        0x1Cu);
    }
    *(_OWORD *)buf = v66;
    *(_OWORD *)&buf[16] = v67;
    -[AUCrashHandlerService notifyCrash:withCrashInfo:](v56, "notifyCrash:withCrashInfo:", buf, 0LL);
    goto LABEL_49;
  }
  v10 = objc_opt_class(&OBJC_CLASS___NSDictionary);
  if ( (objc_opt_isKindOfClass(obj, v10) & 1) != 0 )
  {
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(obj, "objectForKey:", CFSTR("frames")));
    objc_release(obj);
    obj = v11;
    if ( !v11 )
    {
      v34 = *(_OWORD *)&v56->_watchedAuditToken.val[4];
      v52[0] = *(_OWORD *)v56->_watchedAuditToken.val;
      v52[1] = v34;
      obj = 0LL;
      sub_100003CE4(&v55, v52);
      goto LABEL_49;
    }
  }
  v12 = objc_opt_class(&OBJC_CLASS___NSArray);
  if ( (objc_opt_isKindOfClass(obj, v12) & 1) == 0 )
  {
    v32 = *(_OWORD *)&v56->_watchedAuditToken.val[4];
    v64 = *(_OWORD *)v56->_watchedAuditToken.val;
    v65 = v32;
    sub_100003198();
    v33 = (os_log_s *)objc_retainAutorelease((id)qword_10000D080);
    if ( os_log_type_enabled(v33, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315650;
      *(_QWORD *)&buf[4] = "AUCrashHandlerService.mm";
      *(_WORD *)&buf[12] = 1024;
      *(_DWORD *)&buf[14] = 162;
      *(_WORD *)&buf[18] = 2080;
      *(_QWORD *)&buf[20] = "frames array";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v33,
        OS_LOG_TYPE_ERROR,
        "%25s:%-5d Didn't find needed information in the crash callback: %s",
        buf,
        0x1Cu);
    }
    *(_OWORD *)buf = v64;
    *(_OWORD *)&buf[16] = v65;
    -[AUCrashHandlerService notifyCrash:withCrashInfo:](v56, "notifyCrash:withCrashInfo:", buf, 0LL);
    goto LABEL_49;
  }
  v50 = 0u;
  v51 = 0u;
  v48 = 0u;
  v49 = 0u;
  obj = objc_retain(obj);
  v13 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v48, v63, 16LL);
  if ( !v13 )
    goto LABEL_24;
  v43 = *(_QWORD *)v49;
  *(_QWORD *)&v14 = 136315650LL;
  v42 = v14;
  while ( 2 )
  {
    for ( i = 0LL; i != v13; i = (char *)i + 1 )
    {
      if ( *(_QWORD *)v49 != v43 )
        objc_enumerationMutation(obj);
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v48 + 1) + 8LL * (_QWORD)i), "valueForKey:", CFSTR("imageIndex"), v42));
      v17 = v16;
      if ( !v16 )
      {
        v35 = *(_OWORD *)&v56->_watchedAuditToken.val[4];
        v61 = *(_OWORD *)v56->_watchedAuditToken.val;
        v62 = v35;
        sub_100003198();
        v36 = (os_log_s *)objc_retainAutorelease((id)qword_10000D080);
        if ( os_log_type_enabled(v36, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = v42;
          *(_QWORD *)&buf[4] = "AUCrashHandlerService.mm";
          *(_WORD *)&buf[12] = 1024;
          *(_DWORD *)&buf[14] = 162;
          *(_WORD *)&buf[18] = 2080;
          *(_QWORD *)&buf[20] = "imageIndex";
          _os_log_impl(
            (void *)&_mh_execute_header,
            v36,
            OS_LOG_TYPE_ERROR,
            "%25s:%-5d Didn't find needed information in the crash callback: %s",
            buf,
            0x1Cu);
        }
        *(_OWORD *)buf = v61;
        *(_OWORD *)&buf[16] = v62;
        -[AUCrashHandlerService notifyCrash:withCrashInfo:](v56, "notifyCrash:withCrashInfo:", buf, 0LL);
        goto LABEL_48;
      }
      v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v44, "objectAtIndex:", (int)objc_msgSend(v16, "intValue")));
      v19 = v18;
      if ( !v18 )
      {
        v37 = *(_OWORD *)&v56->_watchedAuditToken.val[4];
        v59 = *(_OWORD *)v56->_watchedAuditToken.val;
        v60 = v37;
        sub_100003198();
        v38 = (os_log_s *)objc_retainAutorelease((id)qword_10000D080);
        if ( os_log_type_enabled(v38, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = v42;
          *(_QWORD *)&buf[4] = "AUCrashHandlerService.mm";
          *(_WORD *)&buf[12] = 1024;
          *(_DWORD *)&buf[14] = 162;
          *(_WORD *)&buf[18] = 2080;
          *(_QWORD *)&buf[20] = "image";
          _os_log_impl(
            (void *)&_mh_execute_header,
            v38,
            OS_LOG_TYPE_ERROR,
            "%25s:%-5d Didn't find needed information in the crash callback: %s",
            buf,
            0x1Cu);
        }
        *(_OWORD *)buf = v59;
        *(_OWORD *)&buf[16] = v60;
        -[AUCrashHandlerService notifyCrash:withCrashInfo:](v56, "notifyCrash:withCrashInfo:", buf, 0LL);
        objc_release(v17);
        goto LABEL_48;
      }
      v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "objectForKey:", CFSTR("path")));
      v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "objectForKey:", CFSTR("name")));
      if ( v20 )
      {
        v22 = objc_retainAutoreleasedReturnValue(
                +[AUCrashHandlerService _deanonymizeUserHomePath:](
                  &OBJC_CLASS___AUCrashHandlerService,
                  "_deanonymizeUserHomePath:",
                  v20));
        if ( !-[AUCrashHandlerService _isUserCode:](v56, "_isUserCode:", v22) )
        {
          objc_release(v22);
          objc_release(v21);
          v21 = v20;
          goto LABEL_22;
        }
        v39 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
        objc_msgSend(v39, "setObject:forKey:", v21, CFSTR("Name"));
        objc_msgSend(v39, "setObject:forKey:", v22, CFSTR("Path"));
        v40 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "objectForKey:", CFSTR("arch")));
        if ( v40 )
          objc_msgSend(v39, "setObject:forKey:", v40, CFSTR("Arch"));
        v41 = *(_OWORD *)&v56->_watchedAuditToken.val[4];
        v47[0] = *(_OWORD *)v56->_watchedAuditToken.val;
        v47[1] = v41;
        -[AUCrashHandlerService notifyCrash:withCrashInfo:](v56, "notifyCrash:withCrashInfo:", v47, v39);
        objc_release(v40);
        objc_release(v39);
        objc_release(v22);
        objc_release(v21);
        objc_release(v20);
        objc_release(v19);
        objc_release(v17);
LABEL_48:
        objc_release(obj);
        goto LABEL_49;
      }
      v23 = *(_OWORD *)&v56->_watchedAuditToken.val[4];
      v57 = *(_OWORD *)v56->_watchedAuditToken.val;
      v58 = v23;
      sub_100003198();
      v24 = (os_log_s *)objc_retainAutorelease((id)qword_10000D080);
      if ( os_log_type_enabled(v24, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = v42;
        *(_QWORD *)&buf[4] = "AUCrashHandlerService.mm";
        *(_WORD *)&buf[12] = 1024;
        *(_DWORD *)&buf[14] = 162;
        *(_WORD *)&buf[18] = 2080;
        *(_QWORD *)&buf[20] = "path, name";
        _os_log_impl(
          (void *)&_mh_execute_header,
          v24,
          OS_LOG_TYPE_ERROR,
          "%25s:%-5d Didn't find needed information in the crash callback: %s",
          buf,
          0x1Cu);
      }
      *(_OWORD *)buf = v57;
      *(_OWORD *)&buf[16] = v58;
      -[AUCrashHandlerService notifyCrash:withCrashInfo:](v56, "notifyCrash:withCrashInfo:", buf, 0LL);
LABEL_22:
      objc_release(v21);
      objc_release(v19);
      objc_release(v17);
    }
    v13 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v48, v63, 16LL);
    if ( v13 )
      continue;
    break;
  }
LABEL_24:
  objc_release(obj);
  sub_100003198();
  v25 = (os_log_s *)objc_retainAutorelease((id)qword_10000D080);
  if ( os_log_type_enabled(v25, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 136315394;
    *(_QWORD *)&buf[4] = "AUCrashHandlerService.mm";
    *(_WORD *)&buf[12] = 1024;
    *(_DWORD *)&buf[14] = 245;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v25,
      OS_LOG_TYPE_ERROR,
      "%25s:%-5d Watched process crashed, but couldn't find the crashing image",
      buf,
      0x12u);
  }
  v26 = *(_OWORD *)&v56->_watchedAuditToken.val[4];
  v46[0] = *(_OWORD *)v56->_watchedAuditToken.val;
  v46[1] = v26;
  -[AUCrashHandlerService notifyCrash:withCrashInfo:](v56, "notifyCrash:withCrashInfo:", v46, 0LL);
LABEL_49:
  objc_release(v44);
  objc_release(obj);
LABEL_50:
  objc_release(v7);
  objc_release(v5);
}