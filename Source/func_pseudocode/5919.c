-[LoginUserService authAuthorityContainsBasic:onNode:withReply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[LoginUserService authAuthorityContainsBasic:onNode:withReply:](
        LoginUserService *self,
        SEL a2,
        unsigned int a3,
        id a4,
        id a5)
{
  __int64 v6; // x20
  void (__fastcall **v8)(id, _BOOL8); // x19
  id v9; // x22
  os_log_s *v10; // x23
  id v11; // x20
  _BOOL8 v12; // x21
  os_log_s *v13; // x22
  const __CFString *v14; // x8
  int v15; // [xsp+0h] [xbp-50h] BYREF
  const char *v16; // [xsp+4h] [xbp-4Ch]
  __int16 v17; // [xsp+Ch] [xbp-44h]
  const __CFString *v18; // [xsp+Eh] [xbp-42h]

  v6 = *(_QWORD *)&a3;
  v8 = (void (__fastcall **)(id, _BOOL8))objc_retain(a5);
  v9 = objc_retain(a4);
  v10 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100002134());
  if ( os_log_type_enabled(v10, OS_LOG_TYPE_DEFAULT) )
  {
    v15 = 136315138;
    v16 = "-[LoginUserService authAuthorityContainsBasic:onNode:withReply:]";
    _os_log_impl((void *)&_mh_execute_header, v10, OS_LOG_TYPE_DEFAULT, "%s: enter", (uint8_t *)&v15, 0xCu);
  }
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(
          -[LoginUserService _authenticationAuthorityForUserWithUID:onNode:](
            self,
            "_authenticationAuthorityForUserWithUID:onNode:",
            v6,
            v9));
  objc_release(v9);
  if ( v11 )
    v12 = -[LoginUserService _authenticationAuthority:contaians:](
            self,
            "_authenticationAuthority:contaians:",
            v11,
            CFSTR("Basic"));
  else
    v12 = 0LL;
  v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100002134());
  if ( os_log_type_enabled(v13, OS_LOG_TYPE_DEFAULT) )
  {
    v14 = CFSTR("NO");
    if ( v12 )
      v14 = CFSTR("YES");
    v15 = 136315394;
    v16 = "-[LoginUserService authAuthorityContainsBasic:onNode:withReply:]";
    v17 = 2112;
    v18 = v14;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v13,
      OS_LOG_TYPE_DEFAULT,
      "%s:     containsBasic %@",
      (uint8_t *)&v15,
      0x16u);
  }
  objc_release(v13);
  v8[2](v8, v12);
  objc_release(v8);
  objc_release(v11);
}