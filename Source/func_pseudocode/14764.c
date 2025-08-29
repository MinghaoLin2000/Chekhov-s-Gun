-[UINSSystemPreferencesServiceViewController showHelp:]
void __cdecl -[UINSSystemPreferencesServiceViewController showHelp:](
        UINSSystemPreferencesServiceViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  id v5; // x0
  void *v6; // x20
  void *v7; // x21
  void *v8; // x22
  id v9; // x0
  void *v10; // x21
  NSHelpManager *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // [xsp+18h] [xbp-98h] BYREF
  int v17; // [xsp+20h] [xbp-90h] BYREF
  __int64 v18; // [xsp+24h] [xbp-8Ch]
  __int128 v19; // [xsp+30h] [xbp-80h] BYREF
  __int128 v20; // [xsp+40h] [xbp-70h]
  __int128 v21; // [xsp+50h] [xbp-60h]
  __int128 v22; // [xsp+60h] [xbp-50h]
  __int128 v23; // [xsp+70h] [xbp-40h]
  __int64 vars8; // [xsp+B8h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retain(objc_retainAutoreleasedReturnValue(-[UINSSystemPreferencesServiceViewController _selectedSetting](self, "_selectedSetting")));
  if ( !v5 )
  {
    v16 = 0LL;
    v22 = 0u;
    v23 = 0u;
    v20 = 0u;
    v21 = 0u;
    v19 = 0u;
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      v12 = 3LL;
    else
      v12 = 2LL;
    v17 = 134217984;
    v18 = 0LL;
    v13 = _os_log_send_and_compose_impl(
            v12,
            &v16,
            &v19,
            80LL,
            &_mh_execute_header,
            &_os_log_default,
            16LL,
            "assertion failure: \"setting\" -> %lld",
            &v17);
    _os_crash_msg(v16, v13);
    __break(1u);
LABEL_10:
    v16 = 0LL;
    v22 = 0u;
    v23 = 0u;
    v20 = 0u;
    v21 = 0u;
    v19 = 0u;
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      v14 = 3LL;
    else
      v14 = 2LL;
    v17 = 134217984;
    v18 = 0LL;
    v15 = _os_log_send_and_compose_impl(
            v14,
            &v16,
            &v19,
            80LL,
            &_mh_execute_header,
            &_os_log_default,
            16LL,
            "assertion failure: \"helpAnchor\" -> %lld",
            &v17);
    _os_crash_msg(v16, v15);
    __break(1u);
  }
  v6 = v5;
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "preferencePaneIdentifier"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(&off_10000D7E8, "objectForKeyedSubscript:", v7));
  objc_release(v7);
  v9 = objc_retain(v8);
  if ( !v9 )
    goto LABEL_10;
  v10 = v9;
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(+[NSHelpManager sharedHelpManager](&OBJC_CLASS___NSHelpManager, "sharedHelpManager"));
  -[NSHelpManager openHelpAnchor:inBook:](v11, "openHelpAnchor:inBook:", v10, NSHelpManagerSystemBook);
  objc_release(v11);
  objc_release(v10);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}