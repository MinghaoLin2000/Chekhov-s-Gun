-[LoginUserService userHasAuthAuthority:onNode:withReply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[LoginUserService userHasAuthAuthority:onNode:withReply:](
        LoginUserService *self,
        SEL a2,
        unsigned int a3,
        id a4,
        id a5)
{
  __int64 v6; // x20
  void (__fastcall **v8)(id, bool); // x19
  id v9; // x22
  os_log_s *v10; // x23
  id v11; // x20
  os_log_s *v12; // x21
  const __CFString *v13; // x8
  int v14; // [xsp+0h] [xbp-50h] BYREF
  const char *v15; // [xsp+4h] [xbp-4Ch]
  __int16 v16; // [xsp+Ch] [xbp-44h]
  const __CFString *v17; // [xsp+Eh] [xbp-42h]

  v6 = *(_QWORD *)&a3;
  v8 = (void (__fastcall **)(id, bool))objc_retain(a5);
  v9 = objc_retain(a4);
  v10 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100002134());
  if ( os_log_type_enabled(v10, OS_LOG_TYPE_DEFAULT) )
  {
    v14 = 136315138;
    v15 = "-[LoginUserService userHasAuthAuthority:onNode:withReply:]";
    _os_log_impl((void *)&_mh_execute_header, v10, OS_LOG_TYPE_DEFAULT, "%s: enter", (uint8_t *)&v14, 0xCu);
  }
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(
          -[LoginUserService _authenticationAuthorityForUserWithUID:onNode:](
            self,
            "_authenticationAuthorityForUserWithUID:onNode:",
            v6,
            v9));
  objc_release(v9);
  objc_release(v11);
  v12 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100002134());
  if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEFAULT) )
  {
    v13 = CFSTR("NO");
    if ( v11 )
      v13 = CFSTR("YES");
    v14 = 136315394;
    v15 = "-[LoginUserService userHasAuthAuthority:onNode:withReply:]";
    v16 = 2112;
    v17 = v13;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v12,
      OS_LOG_TYPE_DEFAULT,
      "%s:     hasAuthAuthority %@",
      (uint8_t *)&v14,
      0x16u);
  }
  objc_release(v12);
  v8[2](v8, v11 != 0LL);
  objc_release(v8);
}