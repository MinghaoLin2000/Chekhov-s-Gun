-[MDRemoteServiceSupport retrieveProperty:forUUID:type:withReply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[MDRemoteServiceSupport retrieveProperty:forUUID:type:withReply:](
        MDRemoteServiceSupport *self,
        SEL a2,
        char *a3,
        id a4,
        unsigned int a5,
        id a6)
{
  __int64 v7; // x23
  id v9; // x19
  void (__fastcall **v10)(id, id); // x20
  id v11; // x0
  void *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x0
  void *v15; // x23
  id v16; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v7 = *(_QWORD *)&a5;
  v9 = objc_retain(a4);
  v10 = (void (__fastcall **)(id, id))objc_retain(a6);
  if ( !a3 || !v9 )
  {
    _os_log_internal((void *)&_mh_execute_header, (os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT, "Invalid argument.");
    v16 = 0LL;
    v12 = 0LL;
    goto LABEL_12;
  }
  v11 = objc_retainAutoreleasedReturnValue((id)sub_100002CEC(v9, v7));
  v12 = v11;
  if ( !v11 )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Failed to copy device handle for UUID: %{public}@ and type: %d",
      v9,
      v7);
LABEL_11:
    v16 = 0LL;
LABEL_12:
    v15 = 0LL;
    if ( !v10 )
      goto LABEL_14;
    goto LABEL_13;
  }
  v13 = connect_timeout_for_device(v11);
  if ( (connect_with_timeout_sync(v12, v13) & 1) == 0 )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Timeout while waiting for remote device.");
    goto LABEL_11;
  }
  v14 = remote_device_copy_property(v12, a3);
  v15 = (void *)v14;
  if ( v14 )
  {
    v16 = objc_retainAutoreleasedReturnValue((id)sub_100003910(v14));
    if ( !v10 )
      goto LABEL_14;
LABEL_13:
    v10[2](v10, v16);
    goto LABEL_14;
  }
  v16 = 0LL;
  if ( v10 )
    goto LABEL_13;
LABEL_14:
  objc_release(v15);
  objc_release(v12);
  objc_release(v16);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}