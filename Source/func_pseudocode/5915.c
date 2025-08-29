-[LoginUserService _authenticationAuthorityForUserRecord:]
id __cdecl -[LoginUserService _authenticationAuthorityForUserRecord:](LoginUserService *self, SEL a2, id a3)
{
  void *v3; // x19
  id v4; // x0
  void *v5; // x20
  bool v6; // zf
  os_log_s *v7; // x21
  id v9; // [xsp+8h] [xbp-48h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-40h] BYREF
  void *v11; // [xsp+14h] [xbp-3Ch]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v9 = 0LL;
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "valuesForAttribute:error:", kODAttributeTypeAuthenticationAuthority, &v9));
  v4 = objc_retain(v9);
  v5 = v4;
  if ( v3 )
    v6 = 1;
  else
    v6 = v4 == 0LL;
  if ( !v6 )
  {
    v7 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100002134());
    if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 138412290;
      v11 = v5;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v7,
        OS_LOG_TYPE_DEFAULT,
        "Unable to get the AuthAuthority, error %@",
        buf,
        0xCu);
    }
    objc_release(v7);
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}