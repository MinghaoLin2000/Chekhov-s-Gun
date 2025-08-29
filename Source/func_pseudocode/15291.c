-[DisplayUSBDrives unmountDownstreamUSBDrives]
bool __cdecl -[DisplayUSBDrives unmountDownstreamUSBDrives](DisplayUSBDrives *self, SEL a2)
{
  SKUnmount *v3; // x20
  NSNumber *v4; // x19
  NSDictionary *v5; // x23
  id v6; // x23
  OS_os_log *log; // x19
  void *v8; // x24
  void *v9; // x25
  __int64 v10; // x21
  void *i; // x26
  void *v12; // x19
  void *v13; // x20
  bool v14; // w28
  id v15; // x0
  _BOOL4 v16; // w28
  OS_os_log *v17; // x0
  os_log_s *v18; // x20
  void *v19; // x28
  dispatch_semaphore_t v20; // x0
  dispatch_time_t v21; // x0
  OS_os_log *v22; // x28
  void *v23; // x19
  void *v24; // x19
  OS_os_log *v25; // x19
  bool v26; // w19
  OS_os_log *v27; // x22
  void *v29; // x19
  SKUnmount *v30; // [xsp+0h] [xbp-1F0h]
  id v31; // [xsp+8h] [xbp-1E8h]
  NSMutableDictionary *v32; // [xsp+18h] [xbp-1D8h]
  _QWORD v33[6]; // [xsp+30h] [xbp-1C0h] BYREF
  id v34; // [xsp+60h] [xbp-190h]
  __int64 *v35; // [xsp+68h] [xbp-188h]
  __int128 v36; // [xsp+70h] [xbp-180h] BYREF
  __int128 v37; // [xsp+80h] [xbp-170h]
  __int128 v38; // [xsp+90h] [xbp-160h]
  __int128 v39; // [xsp+A0h] [xbp-150h]
  __int64 v40; // [xsp+B0h] [xbp-140h] BYREF
  __int64 *v41; // [xsp+B8h] [xbp-138h]
  __int64 v42; // [xsp+C0h] [xbp-130h]
  char v43; // [xsp+C8h] [xbp-128h]
  uint8_t v44[128]; // [xsp+D0h] [xbp-120h] BYREF
  uint8_t buf[4]; // [xsp+150h] [xbp-A0h] BYREF
  const char *v46; // [xsp+154h] [xbp-9Ch]
  __int16 v47; // [xsp+15Ch] [xbp-94h]
  id v48; // [xsp+15Eh] [xbp-92h]
  __int64 v49; // [xsp+168h] [xbp-88h] BYREF
  NSNumber *v50; // [xsp+170h] [xbp-80h] BYREF

  v31 = objc_retainAutoreleasedReturnValue(+[SKManager sharedManager](&OBJC_CLASS___SKManager, "sharedManager"));
  v3 = objc_alloc_init(&OBJC_CLASS___SKUnmount);
  if ( -[SKUnmount waitForPopulateComplete](v3, "waitForPopulateComplete") )
  {
    v30 = v3;
    v49 = kSKAPFSDiskUnmountForce;
    v4 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", 1LL));
    v50 = v4;
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSDictionary dictionaryWithObjects:forKeys:count:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithObjects:forKeys:count:",
             &v50,
             &v49,
             1LL));
    v32 = objc_retainAutoreleasedReturnValue(
            +[NSMutableDictionary dictionaryWithDictionary:](
              &OBJC_CLASS___NSMutableDictionary,
              "dictionaryWithDictionary:",
              v5));
    objc_release(v5);
    objc_release(v4);
    v40 = 0LL;
    v41 = &v40;
    v42 = 0x2020000000LL;
    v43 = 1;
    v6 = objc_retainAutoreleasedReturnValue(-[DisplayUSBDrives findDownstreamUSBDrives:](self, "findDownstreamUSBDrives:", self->_usbContainerID));
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315394;
      v46 = "-[DisplayUSBDrives unmountDownstreamUSBDrives]";
      v47 = 2112;
      v48 = v6;
      _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_INFO, "%s: Downstream drives %@", buf, 0x16u);
    }
    v38 = 0u;
    v39 = 0u;
    v36 = 0u;
    v37 = 0u;
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v31, "allDisks"));
    v9 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v36, v44, 16LL);
    if ( v9 )
    {
      v10 = *(_QWORD *)v37;
      while ( 2 )
      {
        for ( i = 0LL; i != v9; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v37 != v10 )
            objc_enumerationMutation(v8);
          v12 = *(void **)(*((_QWORD *)&v36 + 1) + 8LL * (_QWORD)i);
          v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "diskIdentifier"));
          v14 = objc_msgSend(v6, "indexOfObject:", v13) == (void *)0x7FFFFFFFFFFFFFFFLL;
          objc_release(v13);
          if ( !v14 )
          {
            v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "mountPoint"));
            v16 = v15 == 0LL;
            objc_release(v15);
            v17 = objc_retain(self->_log);
            v18 = v17;
            if ( v16 )
            {
              if ( os_log_type_enabled(v17, OS_LOG_TYPE_INFO) )
              {
                v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "diskIdentifier"));
                *(_DWORD *)buf = 136315394;
                v46 = "-[DisplayUSBDrives unmountDownstreamUSBDrives]";
                v47 = 2112;
                v48 = v24;
                _os_log_impl(
                  (void *)&_mh_execute_header,
                  v18,
                  OS_LOG_TYPE_INFO,
                  "%s: Disk %@ does not have mount point",
                  buf,
                  0x16u);
                objc_release(v24);
              }
            }
            else
            {
              if ( os_log_type_enabled(v17, OS_LOG_TYPE_DEFAULT) )
              {
                v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "diskIdentifier"));
                *(_DWORD *)buf = 136315394;
                v46 = "-[DisplayUSBDrives unmountDownstreamUSBDrives]";
                v47 = 2112;
                v48 = v19;
                _os_log_impl(
                  (void *)&_mh_execute_header,
                  v18,
                  OS_LOG_TYPE_DEFAULT,
                  "%s: Unmounting disk %@",
                  buf,
                  0x16u);
                objc_release(v19);
              }
              objc_release(v18);
              v20 = dispatch_semaphore_create(0LL);
              v33[0] = _NSConcreteStackBlock;
              v33[1] = 3254779904LL;
              v33[2] = sub_100003FA0;
              v33[3] = &unk_1000205C0;
              v33[4] = self;
              v33[5] = v12;
              v35 = &v40;
              v18 = objc_retain(v20);
              v34 = v18;
              objc_msgSend(v12, "unmountWithOptions:completionBlock:", v32, v33);
              v21 = dispatch_time(0LL, 120000000000LL);
              if ( dispatch_semaphore_wait((dispatch_semaphore_t)v18, v21) )
              {
                v27 = objc_retain(self->_log);
                if ( os_log_type_enabled(v27, OS_LOG_TYPE_ERROR) )
                {
                  v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "diskIdentifier"));
                  *(_DWORD *)buf = 136315394;
                  v46 = "-[DisplayUSBDrives unmountDownstreamUSBDrives]";
                  v47 = 2112;
                  v48 = v29;
                  _os_log_error_impl(
                    (void *)&_mh_execute_header,
                    v27,
                    OS_LOG_TYPE_ERROR,
                    "%s: Timed out trying to unmount disk %@.",
                    buf,
                    0x16u);
                  objc_release(v29);
                }
                objc_release(v27);
                *((_BYTE *)v41 + 24) = 0;
LABEL_30:
                objc_release(v34);
                objc_release(v18);
                goto LABEL_31;
              }
              if ( !*((_BYTE *)v41 + 24) )
                goto LABEL_30;
              v22 = objc_retain(self->_log);
              if ( os_log_type_enabled(v22, OS_LOG_TYPE_DEFAULT) )
              {
                v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "diskIdentifier"));
                *(_DWORD *)buf = 136315394;
                v46 = "-[DisplayUSBDrives unmountDownstreamUSBDrives]";
                v47 = 2112;
                v48 = v23;
                _os_log_impl(
                  (void *)&_mh_execute_header,
                  v22,
                  OS_LOG_TYPE_DEFAULT,
                  "%s: Successfully unmounted disk %@",
                  buf,
                  0x16u);
                objc_release(v23);
              }
              objc_release(v22);
              objc_release(v34);
            }
            objc_release(v18);
          }
        }
        v9 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v36, v44, 16LL);
        if ( v9 )
          continue;
        break;
      }
    }
LABEL_31:
    objc_release(v8);
    v26 = *((_BYTE *)v41 + 24) != 0;
    objc_release(v6);
    _Block_object_dispose(&v40, 8);
    objc_release(v32);
    v3 = v30;
  }
  else
  {
    v25 = self->_log;
    if ( os_log_type_enabled(v25, OS_LOG_TYPE_ERROR) )
      sub_100013120(v25);
    v26 = 0;
  }
  objc_release(v3);
  objc_release(v31);
  return v26;
}