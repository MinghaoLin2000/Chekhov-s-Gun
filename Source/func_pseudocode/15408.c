-[UARPUpdaterDisplayControllerDelegate restoreProgressHandler:info:]
void __cdecl -[UARPUpdaterDisplayControllerDelegate restoreProgressHandler:info:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        __AMRestorableDevice *a3,
        id a4)
{
  id v6; // x19
  __int64 v7; // x1
  __int64 ECID; // x0
  __int64 v9; // x23
  NSNumber *v10; // x20
  void *v11; // x21
  void *v12; // x26
  void *v13; // x25
  void *v14; // x24
  char *v15; // x0
  char *v16; // x28
  OS_os_log *v17; // x22
  NSString *v18; // x22
  void *v19; // x0
  void *v20; // x26
  void *v21; // x8
  OS_os_log *log; // x22
  OS_os_log *v23; // x26
  os_log_s *v24; // x26
  unsigned int v25; // w0
  OS_os_log *v26; // x27
  OS_os_log *v27; // x26
  OS_os_log *v28; // x27
  dispatch_semaphore_s *v29; // x23
  os_log_s *v30; // [xsp+8h] [xbp-98h]
  NSString *v31; // [xsp+8h] [xbp-98h]
  id v32; // [xsp+8h] [xbp-98h]
  id v33; // [xsp+8h] [xbp-98h]
  void *v34; // [xsp+10h] [xbp-90h]
  id v35; // [xsp+18h] [xbp-88h]
  uint8_t buf[4]; // [xsp+20h] [xbp-80h] BYREF
  const char *v37; // [xsp+24h] [xbp-7Ch]
  __int16 v38; // [xsp+2Ch] [xbp-74h]
  _BYTE v39[24]; // [xsp+2Eh] [xbp-72h]

  v6 = objc_retain(a4);
  ECID = AMRestorableDeviceGetECID(a3, v7);
  if ( ECID )
  {
    v9 = ECID;
    v10 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedLongLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLongLong:", ECID));
    v11 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_restoreInfo, "objectForKeyedSubscript:", v10));
    if ( !v11 )
    {
      log = self->_log;
      if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
        sub_10001582C(v9, log);
      goto LABEL_37;
    }
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKey:", CFSTR("Progress")));
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKey:", CFSTR("Status")));
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKey:", CFSTR("Operation")));
    v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKey:", CFSTR("LogData")));
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKey:", CFSTR("LogDataType")));
    v16 = v15;
    if ( v15 )
    {
      if ( (unsigned int)objc_msgSend(v15, "isEqualToString:", CFSTR("HostLogType")) )
      {
        v17 = self->_log;
        if ( os_log_type_enabled(v17, OS_LOG_TYPE_DEFAULT) )
        {
          v30 = objc_retain(v17);
          *(_DWORD *)buf = 138412802;
          v37 = v16;
          v38 = 1040;
          *(_DWORD *)v39 = (unsigned int)objc_msgSend(v35, "length");
          *(_WORD *)&v39[4] = 2080;
          *(_QWORD *)&v39[6] = objc_msgSend(objc_retainAutorelease(v35), "bytes");
          _os_log_impl((void *)&_mh_execute_header, v30, OS_LOG_TYPE_DEFAULT, "%@: %.*s", buf, 0x1Cu);
          objc_release(v30);
        }
      }
    }
    if ( v14 && (unsigned int)objc_msgSend(v14, "intValue") )
    {
      v18 = (NSString *)AMRLocalizedCopyStringForAMROperation(objc_msgSend(v14, "intValue"));
      if ( v18 )
      {
        -[UARPUpdaterDisplayControllerDelegate updateRestoreProgress:operation:](
          self,
          "updateRestoreProgress:operation:",
          v10,
          101LL);
        v34 = v12;
        if ( (unsigned int)objc_msgSend(v14, "intValue") == 208
          && (v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKey:", CFSTR("QueuePosition")))) != 0LL )
        {
          v20 = v19;
          v31 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithFormat:](
                    &OBJC_CLASS___NSString,
                    "stringWithFormat:",
                    v18,
                    objc_msgSend(v19, "intValue")));
          objc_release(v18);
          v21 = v20;
          v18 = v31;
          v12 = v34;
        }
        else
        {
          v21 = 0LL;
        }
        v32 = v21;
        if ( !v12 || (unsigned int)objc_msgSend(v12, "intValue") == -1 )
        {
          v27 = self->_log;
          if ( os_log_type_enabled(v27, OS_LOG_TYPE_DEFAULT) )
          {
            *(_DWORD *)buf = 136315650;
            v37 = "-[UARPUpdaterDisplayControllerDelegate restoreProgressHandler:info:]";
            v38 = 2112;
            *(_QWORD *)v39 = v18;
            *(_WORD *)&v39[8] = 2048;
            *(_QWORD *)&v39[10] = v9;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v27,
              OS_LOG_TYPE_DEFAULT,
              "%s: operation:%@ for device with ecid 0x%llx",
              buf,
              0x20u);
          }
        }
        else
        {
          v23 = self->_log;
          if ( os_log_type_enabled(v23, OS_LOG_TYPE_DEFAULT) )
          {
            v24 = objc_retain(v23);
            v25 = (unsigned int)objc_msgSend(v34, "intValue");
            *(_DWORD *)buf = 136315906;
            v37 = "-[UARPUpdaterDisplayControllerDelegate restoreProgressHandler:info:]";
            v38 = 2112;
            *(_QWORD *)v39 = v18;
            *(_WORD *)&v39[8] = 1024;
            *(_DWORD *)&v39[10] = v25;
            *(_WORD *)&v39[14] = 2048;
            *(_QWORD *)&v39[16] = v9;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v24,
              OS_LOG_TYPE_DEFAULT,
              "%s: operation:%@ (%d%% complete) for device with ecid 0x%llx",
              buf,
              0x26u);
            objc_release(v24);
          }
        }
        objc_release(v32);
        v12 = v34;
        if ( !v13 )
          goto LABEL_36;
        goto LABEL_15;
      }
    }
    else
    {
      v18 = 0LL;
    }
    if ( !v13 )
    {
LABEL_36:
      objc_release(v16);
      objc_release(v35);
      objc_release(v13);
      objc_release(v12);
      objc_release(v14);
      objc_release(v18);
LABEL_37:
      objc_release(v11);
      objc_release(v10);
      goto LABEL_38;
    }
LABEL_15:
    if ( ((unsigned int)objc_msgSend(v13, "isEqualToString:", CFSTR("Restoring")) & 1) == 0 )
    {
      if ( (unsigned int)objc_msgSend(v13, "isEqualToString:", CFSTR("Successful")) )
      {
        objc_msgSend(v11, "setRestoreWasSuccessful:", 1LL);
      }
      else if ( (unsigned int)objc_msgSend(v13, "isEqualToString:", CFSTR("Failed")) )
      {
        v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKey:", CFSTR("Error")));
        v26 = self->_log;
        if ( os_log_type_enabled(v26, OS_LOG_TYPE_ERROR) )
          sub_1000158A0(v33, v9, v26);
        objc_release(v33);
      }
      else
      {
        v28 = self->_log;
        if ( os_log_type_enabled(v28, OS_LOG_TYPE_ERROR) )
          sub_10001592C(v13, v9, v28);
      }
      v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "restoreMutex"));
      dispatch_semaphore_signal(v29);
      objc_release(v29);
    }
    goto LABEL_36;
  }
LABEL_38:
  objc_release(v6);
}