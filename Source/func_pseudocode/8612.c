-[MXMSysmonRequest logTopUsageProcesses:]
void __cdecl -[MXMSysmonRequest logTopUsageProcesses:](MXMSysmonRequest *self, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  __int64 v5; // x3
  void *v6; // x21
  void *v7; // x20
  id v8; // x21
  void *v9; // x0
  void *v10; // x22
  __int64 v11; // x25
  void *i; // x26
  __int64 v13; // x23
  void *v14; // x24
  os_log_s *v15; // x22
  __int128 v16; // [xsp+0h] [xbp-130h] BYREF
  __int128 v17; // [xsp+10h] [xbp-120h]
  __int128 v18; // [xsp+20h] [xbp-110h]
  __int128 v19; // [xsp+30h] [xbp-100h]
  uint8_t buf[4]; // [xsp+40h] [xbp-F0h] BYREF
  void *v21; // [xsp+44h] [xbp-ECh]
  _BYTE v22[128]; // [xsp+58h] [xbp-D8h] BYREF

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "keysSortedByValueUsingComparator:", &stru_10000C528));
  if ( (unsigned __int64)objc_msgSend(v4, "count") > 4 )
    v5 = 5LL;
  else
    v5 = (__int64)objc_msgSend(v4, "count");
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "subarrayWithRange:", 0LL, v5));
  objc_release(v4);
  v7 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  v19 = 0u;
  v8 = objc_retain(v6);
  v9 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v16, v22, 16LL);
  if ( v9 )
  {
    v10 = v9;
    v11 = *(_QWORD *)v17;
    do
    {
      for ( i = 0LL; i != v10; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v17 != v11 )
          objc_enumerationMutation(v8);
        v13 = *(_QWORD *)(*((_QWORD *)&v16 + 1) + 8LL * (_QWORD)i);
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", v13, (_QWORD)v16));
        objc_msgSend(v7, "setValue:forKey:", v14, v13);
        objc_release(v14);
      }
      v10 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v16, v22, 16LL);
    }
    while ( v10 );
  }
  objc_release(v8);
  v15 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
  if ( os_log_type_enabled(v15, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 138412290;
    v21 = v7;
    _os_log_impl((void *)&_mh_execute_header, v15, OS_LOG_TYPE_INFO, "Top five processes: %@", buf, 0xCu);
  }
  objc_release(v15);
  objc_release(v7);
  objc_release(v8);
  objc_release(v3);
}