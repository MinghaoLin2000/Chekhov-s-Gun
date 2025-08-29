-[UARPUpdaterServiceAFU getMatchingServicesListWithReply:]
void __cdecl -[UARPUpdaterServiceAFU getMatchingServicesListWithReply:](UARPUpdaterServiceAFU *self, SEL a2, id a3)
{
  NSMutableArray *v3; // x20
  NSBundle *v4; // x22
  NSDictionary *v5; // x23
  id v6; // x24
  void *v7; // x0
  void *v8; // x24
  __int64 v9; // x22
  void *i; // x23
  void *v11; // x27
  id v12; // x28
  void *v13; // x21
  void *v14; // x19
  void *v15; // x27
  void *v16; // x28
  OS_os_log *log; // x21
  void (__fastcall **v19)(id, NSMutableArray *); // [xsp+10h] [xbp-150h]
  id obj; // [xsp+18h] [xbp-148h]
  __int128 v21; // [xsp+20h] [xbp-140h] BYREF
  __int128 v22; // [xsp+30h] [xbp-130h]
  __int128 v23; // [xsp+40h] [xbp-120h]
  __int128 v24; // [xsp+50h] [xbp-110h]
  uint8_t buf[4]; // [xsp+60h] [xbp-100h] BYREF
  const char *v26; // [xsp+64h] [xbp-FCh]
  __int16 v27; // [xsp+6Ch] [xbp-F4h]
  NSMutableArray *v28; // [xsp+6Eh] [xbp-F2h]
  _BYTE v29[128]; // [xsp+80h] [xbp-E0h] BYREF

  v19 = (void (__fastcall **)(id, NSMutableArray *))objc_retain(a3);
  v3 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
  v4 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v5 = objc_retainAutoreleasedReturnValue(-[NSBundle infoDictionary](v4, "infoDictionary"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v5, "objectForKeyedSubscript:", CFSTR("MatchingDevices")));
  objc_release(v5);
  objc_release(v4);
  v23 = 0u;
  v24 = 0u;
  v21 = 0u;
  v22 = 0u;
  obj = objc_retain(v6);
  v7 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v21, v29, 16LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_QWORD *)v22;
    do
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v22 != v9 )
          objc_enumerationMutation(obj);
        v11 = *(void **)(*((_QWORD *)&v21 + 1) + 8LL * (_QWORD)i);
        v12 = objc_alloc((Class)&OBJC_CLASS___UARPServiceUpdaterAccessoryMatchingRule);
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "objectForKeyedSubscript:", CFSTR("Identifier")));
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "objectForKeyedSubscript:", CFSTR("MatchingType")));
        v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "objectForKeyedSubscript:", CFSTR("MatchingDictionary")));
        v16 = objc_msgSend(v12, "initWithIdentifier:xpcEventStream:matchingDictionary:", v13, v14, v15);
        objc_release(v15);
        objc_release(v14);
        objc_release(v13);
        -[NSMutableArray addObject:](v3, "addObject:", v16);
        objc_release(v16);
      }
      v8 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v21, v29, 16LL);
    }
    while ( v8 );
  }
  objc_release(obj);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315394;
    v26 = "-[UARPUpdaterServiceAFU getMatchingServicesListWithReply:]";
    v27 = 2112;
    v28 = v3;
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_INFO, "%s: replied %@ ", buf, 0x16u);
  }
  v19[2](v19, v3);
  objc_release(obj);
  objc_release(v3);
  objc_release(v19);
}