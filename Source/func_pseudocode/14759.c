-[UINSSystemPreferencesServiceViewController tableViewSelectionDidChange:]
void __cdecl -[UINSSystemPreferencesServiceViewController tableViewSelectionDidChange:](
        UINSSystemPreferencesServiceViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  id v5; // x0
  void *v6; // x20
  __CFString *v7; // x22
  __CFString *v8; // x0
  __CFString *v9; // x23
  NSTextField *v10; // x24
  NSTextField *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // [xsp+18h] [xbp-A8h] BYREF
  int v15; // [xsp+20h] [xbp-A0h] BYREF
  __int64 v16; // [xsp+24h] [xbp-9Ch]
  _OWORD v17[5]; // [xsp+30h] [xbp-90h] BYREF
  __int64 vars8; // [xsp+C8h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[UINSSystemPreferencesServiceViewController _selectedSetting](self, "_selectedSetting"));
  if ( !v5 )
  {
    v14 = 0LL;
    memset(v17, 0, sizeof(v17));
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      v12 = 3LL;
    else
      v12 = 2LL;
    v15 = 134217984;
    v16 = 0LL;
    v13 = _os_log_send_and_compose_impl(
            v12,
            &v14,
            v17,
            80LL,
            &_mh_execute_header,
            &_os_log_default,
            16LL,
            "assertion failure: \"setting != ((void *)0)\" -> %lld",
            &v15);
    _os_crash_msg(v14, v13);
    __break(1u);
  }
  v6 = v5;
  v7 = (__CFString *)objc_retainAutoreleasedReturnValue(-[UINSSystemPreferencesServiceViewController _usageForSetting:](self, "_usageForSetting:", v5));
  v8 = (__CFString *)objc_retainAutoreleasedReturnValue(
                       -[UINSSystemPreferencesServiceViewController _instructionsForSetting:](
                         self,
                         "_instructionsForSetting:",
                         v6));
  if ( v7 )
  {
    v9 = v8;
  }
  else
  {
    v7 = v8;
    v9 = &stru_10000D4E0;
  }
  v10 = objc_retainAutoreleasedReturnValue(-[UINSSystemPreferencesServiceViewController usageLabel](self, "usageLabel"));
  -[NSTextField setStringValue:](v10, "setStringValue:", v7);
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(-[UINSSystemPreferencesServiceViewController instructionsLabel](self, "instructionsLabel"));
  -[NSTextField setStringValue:](v11, "setStringValue:", v9);
  objc_release(v11);
  objc_release(v9);
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}