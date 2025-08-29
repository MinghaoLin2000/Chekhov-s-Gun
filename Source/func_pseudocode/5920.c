-[LoginUserService userCanLoginWithAuthAuthority:onNode:withReply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[LoginUserService userCanLoginWithAuthAuthority:onNode:withReply:](
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
  id v12; // x22
  unsigned int v13; // w23
  _BOOL8 v14; // x21
  void *v15; // x0
  void *v16; // x21
  os_log_s *v17; // x22
  const __CFString *v18; // x8
  __int64 v19; // [xsp+8h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-50h] BYREF
  const char *v21; // [xsp+14h] [xbp-4Ch]
  __int16 v22; // [xsp+1Ch] [xbp-44h]
  const __CFString *v23; // [xsp+1Eh] [xbp-42h]

  v6 = *(_QWORD *)&a3;
  v8 = (void (__fastcall **)(id, _BOOL8))objc_retain(a5);
  v9 = objc_retain(a4);
  v10 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100002134());
  if ( os_log_type_enabled(v10, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315138;
    v21 = "-[LoginUserService userCanLoginWithAuthAuthority:onNode:withReply:]";
    _os_log_impl((void *)&_mh_execute_header, v10, OS_LOG_TYPE_DEFAULT, "%s: enter", buf, 0xCu);
  }
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(-[LoginUserService _userRecordForUserWithUID:onNode:](self, "_userRecordForUserWithUID:onNode:", v6, v9));
  objc_release(v9);
  if ( !v11 )
  {
    v14 = 1LL;
    goto LABEL_15;
  }
  v12 = objc_retainAutoreleasedReturnValue(
          -[LoginUserService _authenticationAuthorityForUserRecord:](
            self,
            "_authenticationAuthorityForUserRecord:",
            v11));
  if ( !v12 )
    goto LABEL_9;
  if ( !-[LoginUserService _authenticationAuthority:contaians:](
          self,
          "_authenticationAuthority:contaians:",
          v12,
          CFSTR("DisabledUser")) )
  {
    if ( !-[LoginUserService _authenticationAuthority:contaians:](
            self,
            "_authenticationAuthority:contaians:",
            v12,
            CFSTR("Basic")) )
    {
      v13 = 1;
      goto LABEL_14;
    }
LABEL_9:
    v19 = 0LL;
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "valuesForAttribute:error:", kODAttributeTypePassword, &v19));
    v16 = v15;
    if ( v15 )
      v13 = (unsigned int)objc_msgSend(v15, "containsObject:", CFSTR("*")) ^ 1;
    else
      v13 = 1;
    objc_release(v16);
    goto LABEL_14;
  }
  v13 = 0;
LABEL_14:
  objc_release(v12);
  v14 = v13 != 0;
LABEL_15:
  v17 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100002134());
  if ( os_log_type_enabled(v17, OS_LOG_TYPE_DEFAULT) )
  {
    v18 = CFSTR("NO");
    if ( v14 )
      v18 = CFSTR("YES");
    *(_DWORD *)buf = 136315394;
    v21 = "-[LoginUserService userCanLoginWithAuthAuthority:onNode:withReply:]";
    v22 = 2112;
    v23 = v18;
    _os_log_impl((void *)&_mh_execute_header, v17, OS_LOG_TYPE_DEFAULT, "%s:     canLogin %@", buf, 0x16u);
  }
  objc_release(v17);
  v8[2](v8, v14);
  objc_release(v8);
  objc_release(v11);
}