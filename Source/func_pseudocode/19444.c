-[MDRemoteServiceSupport listServicesForUUID:type:withReply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[MDRemoteServiceSupport listServicesForUUID:type:withReply:](
        MDRemoteServiceSupport *self,
        SEL a2,
        id a3,
        unsigned int a4,
        id a5)
{
  __int64 v6; // x22
  id v7; // x19
  void (__fastcall **v8)(id, void *); // x20
  id v9; // x21
  void *v10; // x22
  __int64 v11; // x0
  void *v12; // x0
  void *v13; // x23
  size_t v14; // x24
  NSString *v15; // x25
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v6 = *(_QWORD *)&a4;
  v7 = objc_retain(a3);
  v8 = (void (__fastcall **)(id, void *))objc_retain(a5);
  if ( !v7 )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Invalid argument(s).");
    v9 = 0LL;
    goto LABEL_12;
  }
  v9 = objc_retainAutoreleasedReturnValue((id)sub_100002CEC(v7, v6));
  if ( !v9 )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Failed to copy device handle for UUID: %{public}@ and type: %d",
      v7,
      v6);
LABEL_12:
    v10 = 0LL;
    v13 = 0LL;
    if ( !v8 )
      goto LABEL_19;
LABEL_18:
    v8[2](v8, v10);
    goto LABEL_19;
  }
  v10 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableArray), "init");
  if ( !v10 )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Failed to allocate array.");
LABEL_16:
    v13 = 0LL;
    goto LABEL_17;
  }
  v11 = connect_timeout_for_device(v9);
  if ( (connect_with_timeout_sync(v9, v11) & 1) == 0 )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Timeout while connecting to remote device.");
    goto LABEL_16;
  }
  v12 = (void *)remote_device_copy_service_names(v9);
  v13 = v12;
  if ( v12 )
  {
    if ( xpc_array_get_count(v12) )
    {
      v14 = 0LL;
      do
      {
        v15 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  xpc_array_get_string(v13, v14)));
        objc_msgSend(v10, "addObject:", v15);
        objc_release(v15);
        ++v14;
      }
      while ( xpc_array_get_count(v13) > v14 );
    }
LABEL_17:
    if ( !v8 )
      goto LABEL_19;
    goto LABEL_18;
  }
  _os_log_internal(
    (void *)&_mh_execute_header,
    (os_log_t)&_os_log_default,
    OS_LOG_TYPE_DEFAULT,
    "Failed to copy services.");
  if ( v8 )
    goto LABEL_18;
LABEL_19:
  objc_release(v13);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}