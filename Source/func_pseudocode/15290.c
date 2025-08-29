-[DisplayUSBDrives isBootedFromUSBDrive]
bool __cdecl -[DisplayUSBDrives isBootedFromUSBDrive](DisplayUSBDrives *self, SEL a2)
{
  OS_os_log *log; // x19
  bool v4; // w19
  NSString *v5; // x20
  id v6; // x21
  void *v7; // x0
  void *v8; // x23
  __int64 v9; // x26
  void *i; // x27
  NSString *v11; // x24
  OS_os_log *v12; // x19
  __int128 v14; // [xsp+10h] [xbp-9A0h] BYREF
  __int128 v15; // [xsp+20h] [xbp-990h]
  __int128 v16; // [xsp+30h] [xbp-980h]
  __int128 v17; // [xsp+40h] [xbp-970h]
  uint8_t buf[4]; // [xsp+50h] [xbp-960h] BYREF
  const char *v19; // [xsp+54h] [xbp-95Ch]
  _BYTE v20[128]; // [xsp+60h] [xbp-950h] BYREF
  statfs v21; // [xsp+E0h] [xbp-8D0h] BYREF

  memset(&v21, 0, 512);
  if ( statfs("/", &v21) )
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_100013058(log);
    return 1;
  }
  else
  {
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithCString:encoding:](
             &OBJC_CLASS___NSString,
             "stringWithCString:encoding:",
             v21.f_mntfromname,
             1LL));
    v14 = 0u;
    v15 = 0u;
    v16 = 0u;
    v17 = 0u;
    v6 = objc_retainAutoreleasedReturnValue(-[DisplayUSBDrives findDownstreamUSBDrives:](self, "findDownstreamUSBDrives:", self->_usbContainerID));
    v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v14, v20, 16LL);
    if ( v7 )
    {
      v8 = v7;
      v9 = *(_QWORD *)v15;
      while ( 2 )
      {
        for ( i = 0LL; i != v8; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v15 != v9 )
            objc_enumerationMutation(v6);
          v11 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithFormat:](
                    &OBJC_CLASS___NSString,
                    "stringWithFormat:",
                    CFSTR("/dev/%@"),
                    *(_QWORD *)(*((_QWORD *)&v14 + 1) + 8LL * (_QWORD)i)));
          if ( -[NSString isEqualToString:](v11, "isEqualToString:", v5) )
          {
            v12 = self->_log;
            if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEFAULT) )
            {
              *(_DWORD *)buf = 136315138;
              v19 = "-[DisplayUSBDrives isBootedFromUSBDrive]";
              _os_log_impl(
                (void *)&_mh_execute_header,
                v12,
                OS_LOG_TYPE_DEFAULT,
                "%s: Device is booted from USB drive",
                buf,
                0xCu);
            }
            objc_release(v11);
            v4 = 1;
            goto LABEL_17;
          }
          objc_release(v11);
        }
        v8 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v14, v20, 16LL);
        if ( v8 )
          continue;
        break;
      }
    }
    v4 = 0;
LABEL_17:
    objc_release(v6);
    objc_release(v5);
  }
  return v4;
}