-[MDRemoteServiceSupport _copyReplyFromRestoreServiceCommand:toRemoteDeviceWithUUID:type:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[MDRemoteServiceSupport _copyReplyFromRestoreServiceCommand:toRemoteDeviceWithUUID:type:](
        MDRemoteServiceSupport *self,
        SEL a2,
        const char *a3,
        id a4,
        unsigned int a5)
{
  __int64 v5; // x20
  id v8; // x19
  id v9; // x20
  dispatch_queue_t v10; // x22
  __int64 failsafe_version_flags; // x0
  void *v12; // x23
  xpc_object_t v13; // x25
  void *v14; // x24

  v5 = *(_QWORD *)&a5;
  v8 = objc_retain(a4);
  _os_log_internal(
    (void *)&_mh_execute_header,
    (os_log_t)&_os_log_default,
    OS_LOG_TYPE_DEFAULT,
    "[RestoreService] Attempting to issue '%{public}s' command to device with UUID: '%{public}@'",
    a3,
    v8);
  if ( v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[MDRemoteServiceSupport _get_remote_service:type:](self, "_get_remote_service:type:", v8, v5));
    v10 = dispatch_queue_create("remote_services_command_queue", 0LL);
    failsafe_version_flags = xpc_remote_connection_get_failsafe_version_flags();
    v12 = (void *)xpc_remote_connection_create_with_remote_service(v9, v10, failsafe_version_flags);
    xpc_remote_connection_set_event_handler(v12, &stru_100008370);
    xpc_remote_connection_activate(v12);
    v13 = xpc_dictionary_create(0LL, 0LL, 0LL);
    xpc_dictionary_set_string(v13, "command", a3);
    v14 = (void *)xpc_remote_connection_send_message_with_reply_sync(v12, v13);
    if ( xpc_get_type(v14) == (xpc_type_t)&_xpc_type_error )
    {
      _os_log_internal(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "[RestoreService] Failed to issue '%{public}s' command to device with uuid '%{public}@'",
        a3,
        v8);
      objc_release(v14);
      v14 = 0LL;
    }
    xpc_remote_connection_cancel(v12);
    objc_release(v13);
    objc_release(v12);
    objc_release(v10);
    objc_release(v9);
  }
  else
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "[RestoreService] No uuid string provided, unable to issue command");
    v14 = 0LL;
  }
  objc_release(v8);
  return v14;
}