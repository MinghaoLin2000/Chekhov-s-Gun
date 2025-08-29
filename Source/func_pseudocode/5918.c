-[LoginUserService _userRecordForUserWithUID:onNode:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[LoginUserService _userRecordForUserWithUID:onNode:](
        LoginUserService *self,
        SEL a2,
        unsigned int a3,
        id a4)
{
  __int64 v4; // x22
  id v5; // x21
  ODSession *v6; // x20
  ODNode *v7; // x19
  id v8; // x21
  NSArray *v9; // x20
  NSString *v10; // x26
  ODQuery *v11; // x22
  id v12; // x25
  NSArray *v13; // x23
  id v14; // x24
  os_log_s *v15; // x24
  id v17; // [xsp+18h] [xbp-88h] BYREF
  id v18; // [xsp+20h] [xbp-80h] BYREF
  id v19; // [xsp+28h] [xbp-78h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-70h] BYREF
  id v21; // [xsp+34h] [xbp-6Ch]
  _QWORD v22[3]; // [xsp+40h] [xbp-60h] BYREF
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v4 = *(_QWORD *)&a3;
  v5 = objc_retain(a4);
  v6 = objc_retainAutoreleasedReturnValue(+[ODSession defaultSession](&OBJC_CLASS___ODSession, "defaultSession"));
  v19 = 0LL;
  v7 = objc_retainAutoreleasedReturnValue(+[ODNode nodeWithSession:name:error:](&OBJC_CLASS___ODNode, "nodeWithSession:name:error:", v6, v5, &v19));
  objc_release(v5);
  v8 = objc_retain(v19);
  objc_release(v6);
  if ( v7 )
  {
    v22[0] = kODAttributeTypeAuthenticationAuthority;
    v22[1] = kODAttributeTypePassword;
    v22[2] = kODAttributeTypeUniqueID;
    v9 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v22, 3LL));
    v10 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%d"), v4));
    v18 = v8;
    v11 = objc_retainAutoreleasedReturnValue(
            +[ODQuery queryWithNode:forRecordTypes:attribute:matchType:queryValues:returnAttributes:maximumResults:error:](
              &OBJC_CLASS___ODQuery,
              "queryWithNode:forRecordTypes:attribute:matchType:queryValues:returnAttributes:maximumResults:error:",
              v7,
              kODRecordTypeUsers,
              kODAttributeTypeUniqueID,
              8193LL,
              v10,
              v9,
              1LL,
              &v18));
    v12 = objc_retain(v18);
    objc_release(v8);
    objc_release(v10);
    if ( v11 )
    {
      v17 = v12;
      v13 = objc_retainAutoreleasedReturnValue(-[ODQuery resultsAllowingPartial:error:](v11, "resultsAllowingPartial:error:", 0LL, &v17));
      v8 = objc_retain(v17);
      objc_release(v12);
      if ( v13 )
      {
        v14 = objc_retainAutoreleasedReturnValue(-[NSArray firstObject](v13, "firstObject"));
      }
      else
      {
        if ( v8 )
        {
          v15 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100002134());
          if ( os_log_type_enabled(v15, OS_LOG_TYPE_DEFAULT) )
          {
            *(_DWORD *)buf = 138412290;
            v21 = v8;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v15,
              OS_LOG_TYPE_DEFAULT,
              "Unable to get the user record, error %@",
              buf,
              0xCu);
          }
          objc_release(v15);
        }
        v14 = 0LL;
      }
    }
    else
    {
      if ( !v12 )
      {
        v8 = 0LL;
        v14 = 0LL;
        goto LABEL_19;
      }
      v13 = (NSArray *)objc_retainAutoreleasedReturnValue((id)sub_100002134());
      if ( os_log_type_enabled((os_log_t)v13, OS_LOG_TYPE_DEFAULT) )
      {
        *(_DWORD *)buf = 138412290;
        v21 = v12;
        _os_log_impl(
          (void *)&_mh_execute_header,
          (os_log_t)v13,
          OS_LOG_TYPE_DEFAULT,
          "Unable to get create the query, error %@",
          buf,
          0xCu);
      }
      v14 = 0LL;
      v8 = v12;
    }
    objc_release(v13);
LABEL_19:
    objc_release(v11);
LABEL_20:
    objc_release(v9);
    goto LABEL_21;
  }
  if ( v8 )
  {
    v9 = (NSArray *)objc_retainAutoreleasedReturnValue((id)sub_100002134());
    if ( os_log_type_enabled((os_log_t)v9, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 138412290;
      v21 = v8;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v9,
        OS_LOG_TYPE_DEFAULT,
        "Unable to get the local node, error %@",
        buf,
        0xCu);
    }
    v14 = 0LL;
    goto LABEL_20;
  }
  v14 = 0LL;
LABEL_21:
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}