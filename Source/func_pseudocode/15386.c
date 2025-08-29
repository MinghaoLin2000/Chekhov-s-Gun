-[UARPUpdaterDisplayControllerDelegate extractECID:]
unsigned __int64 __cdecl -[UARPUpdaterDisplayControllerDelegate extractECID:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  OS_os_log *log; // x20
  void *v6; // x20
  void *v7; // x0
  void *v8; // x22
  __int64 v9; // x24
  void *i; // x25
  void *v11; // x23
  id v12; // x21
  void *v13; // x21
  NSScanner *v14; // x22
  unsigned __int64 v15; // x20
  __int128 v17; // [xsp+0h] [xbp-120h] BYREF
  __int128 v18; // [xsp+10h] [xbp-110h]
  __int128 v19; // [xsp+20h] [xbp-100h]
  __int128 v20; // [xsp+30h] [xbp-F0h]
  _BYTE v21[128]; // [xsp+40h] [xbp-E0h] BYREF
  _BYTE buf[12]; // [xsp+C0h] [xbp-60h] BYREF
  __int16 v23; // [xsp+CCh] [xbp-54h]
  id v24; // [xsp+CEh] [xbp-52h]

  v4 = objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315394;
    *(_QWORD *)&buf[4] = "-[UARPUpdaterDisplayControllerDelegate extractECID:]";
    v23 = 2112;
    v24 = v4;
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_INFO, "%s: Extracting ECID from string: %@", buf, 0x16u);
  }
  if ( (unsigned int)objc_msgSend(v4, "containsString:", CFSTR("ECID:")) )
  {
    v17 = 0u;
    v18 = 0u;
    v19 = 0u;
    v20 = 0u;
    v6 = objc_retain(objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "componentsSeparatedByString:", CFSTR(" "))));
    v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v17, v21, 16LL);
    if ( v7 )
    {
      v8 = v7;
      v9 = *(_QWORD *)v18;
      while ( 2 )
      {
        for ( i = 0LL; i != v8; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v18 != v9 )
            objc_enumerationMutation(v6);
          v11 = *(void **)(*((_QWORD *)&v17 + 1) + 8LL * (_QWORD)i);
          if ( (unsigned int)objc_msgSend(v11, "containsString:", CFSTR("ECID:"), (_QWORD)v17) )
          {
            v12 = objc_retain(v11);
            objc_release(v4);
            v4 = v12;
            goto LABEL_14;
          }
        }
        v8 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v17, v21, 16LL);
        if ( v8 )
          continue;
        break;
      }
    }
LABEL_14:
    objc_release(v6);
    objc_release(v6);
  }
  if ( (unsigned __int64)objc_msgSend(v4, "length", (_QWORD)v17) < 0x10 )
  {
    v15 = 0LL;
  }
  else
  {
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "substringFromIndex:", (char *)objc_msgSend(v4, "length") - 16));
    v14 = objc_retainAutoreleasedReturnValue(+[NSScanner scannerWithString:](&OBJC_CLASS___NSScanner, "scannerWithString:", v13));
    *(_QWORD *)buf = 0LL;
    -[NSScanner scanHexLongLong:](v14, "scanHexLongLong:", buf);
    v15 = *(_QWORD *)buf;
    objc_release(v14);
    objc_release(v13);
  }
  objc_release(v4);
  return v15;
}