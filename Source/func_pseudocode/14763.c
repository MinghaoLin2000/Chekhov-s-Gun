-[UINSSystemPreferencesServiceViewController revealSettingInSystemPreferences:]
void __cdecl -[UINSSystemPreferencesServiceViewController revealSettingInSystemPreferences:](
        UINSSystemPreferencesServiceViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  id v5; // x0
  void *v6; // x20
  void *v7; // x22
  void *v8; // x23
  id v9; // x24
  void *v10; // x25
  NSWorkspace *v11; // x26
  NSWorkspaceOpenConfiguration *v12; // x27
  __int64 v13; // x0
  __int64 v14; // x0
  _QWORD v15[5]; // [xsp+10h] [xbp-F0h] BYREF
  __int64 v16; // [xsp+38h] [xbp-C8h] BYREF
  int v17; // [xsp+40h] [xbp-C0h] BYREF
  __int64 v18; // [xsp+44h] [xbp-BCh]
  _OWORD v19[5]; // [xsp+50h] [xbp-B0h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retain(objc_retainAutoreleasedReturnValue(-[UINSSystemPreferencesServiceViewController _selectedSetting](self, "_selectedSetting")));
  if ( !v5 )
  {
    v16 = 0LL;
    memset(v19, 0, sizeof(v19));
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      v13 = 3LL;
    else
      v13 = 2LL;
    v17 = 134217984;
    v18 = 0LL;
    v14 = _os_log_send_and_compose_impl(
            v13,
            &v16,
            v19,
            80LL,
            &_mh_execute_header,
            &_os_log_default,
            16LL,
            "assertion failure: \"setting\" -> %lld",
            &v17);
    _os_crash_msg(v16, v14);
    __break(1u);
  }
  v6 = v5;
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "preferencePaneIdentifier"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "preferencePaneRevealKey"));
  v9 = objc_alloc_init((Class)&OBJC_CLASS___NSURLComponents);
  objc_msgSend(v9, "setScheme:", CFSTR("x-apple.systempreferences"));
  objc_msgSend(v9, "setPath:", v7);
  if ( v8 )
    objc_msgSend(v9, "setQuery:", v8);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "URL"));
  v11 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
  v12 = objc_retainAutoreleasedReturnValue(+[NSWorkspaceOpenConfiguration configuration](&OBJC_CLASS___NSWorkspaceOpenConfiguration, "configuration"));
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 3254779904LL;
  v15[2] = sub_100007150;
  v15[3] = &unk_10000C390;
  v15[4] = self;
  -[NSWorkspace openURL:configuration:completionHandler:](
    v11,
    "openURL:configuration:completionHandler:",
    v10,
    v12,
    v15);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v4);
}