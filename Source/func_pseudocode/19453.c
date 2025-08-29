-[MDRemoteServiceSupport retrieveNameForUUID:type:withReply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[MDRemoteServiceSupport retrieveNameForUUID:type:withReply:](
        MDRemoteServiceSupport *self,
        SEL a2,
        id a3,
        unsigned int a4,
        id a5)
{
  __int64 v6; // x21
  id v7; // x19
  void (__fastcall **v8)(id, NSString *); // x20
  id v9; // x0
  void *v10; // x21
  NSString *v11; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = *(_QWORD *)&a4;
  v7 = objc_retain(a3);
  v8 = (void (__fastcall **)(id, NSString *))objc_retain(a5);
  if ( !v7 )
  {
    _os_log_internal((void *)&_mh_execute_header, (os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT, "Invalid argument.");
    v11 = 0LL;
    v10 = 0LL;
    if ( !v8 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v9 = objc_retainAutoreleasedReturnValue((id)sub_100002CEC(v7, v6));
  v10 = v9;
  if ( v9 )
  {
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              remote_device_get_name(v9)));
    if ( !v8 )
      goto LABEL_7;
LABEL_6:
    v8[2](v8, v11);
    goto LABEL_7;
  }
  v11 = 0LL;
  if ( v8 )
    goto LABEL_6;
LABEL_7:
  objc_release(v10);
  objc_release(v11);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}