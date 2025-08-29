-[GCSettingsMediator setProfiles:]
void __cdecl -[GCSettingsMediator setProfiles:](GCSettingsMediator *self, SEL a2, id a3)
{
  id v3; // x19
  __int64 v4; // x1
  os_log_s *v5; // x20
  id v6; // x19
  void *v7; // x0
  __int64 v8; // x1
  void *v9; // x20
  __int64 v10; // x25
  void *v11; // x26
  void *v12; // x27
  os_log_s *v13; // x23
  id v14; // x20
  __int128 v15; // [xsp+10h] [xbp-130h] BYREF
  __int128 v16; // [xsp+20h] [xbp-120h]
  __int128 v17; // [xsp+30h] [xbp-110h]
  __int128 v18; // [xsp+40h] [xbp-100h]
  uint8_t v19[128]; // [xsp+50h] [xbp-F0h] BYREF
  uint8_t buf[4]; // [xsp+D0h] [xbp-70h] BYREF
  id v21; // [xsp+D4h] [xbp-6Ch]

  v3 = objc_retain(a3);
  v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(v3, v4));
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 138412290;
    v21 = v3;
    _os_log_impl((void *)&_mh_execute_header, v5, OS_LOG_TYPE_INFO, "GCSettingsMediator::setProfiles %@", buf, 0xCu);
  }
  objc_release(v5);
  v17 = 0u;
  v18 = 0u;
  v15 = 0u;
  v16 = 0u;
  v6 = objc_retain(v3);
  v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v15, v19, 16LL);
  if ( v7 )
  {
    v9 = v7;
    v10 = *(_QWORD *)v16;
    do
    {
      v11 = 0LL;
      do
      {
        if ( *(_QWORD *)v16 != v10 )
          objc_enumerationMutation(v6);
        v12 = *(void **)(*((_QWORD *)&v15 + 1) + 8LL * (_QWORD)v11);
        v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(v7, v8));
        if ( os_log_type_enabled(v13, OS_LOG_TYPE_INFO) )
        {
          *(_DWORD *)buf = 138412290;
          v21 = v12;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v13,
            OS_LOG_TYPE_INFO,
            "GCSettingsMediator::setProfiles - element %@",
            buf,
            0xCu);
        }
        objc_release(v13);
        v11 = (char *)v11 + 1;
      }
      while ( v9 != v11 );
      v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v15, v19, 16LL);
      v9 = v7;
    }
    while ( v7 );
  }
  objc_release(v6);
  v14 = objc_retainAutoreleasedReturnValue((id)sub_100003C08());
  objc_msgSend(v14, "setObject:forKey:", v6, CFSTR("profiles"));
  objc_release(v14);
  objc_release(v6);
}