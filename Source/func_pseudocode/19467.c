-[MDRemoteServiceSupport _sendRestoreServiceCommand:toRemoteDeviceWithUUID:type:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[MDRemoteServiceSupport _sendRestoreServiceCommand:toRemoteDeviceWithUUID:type:](
        MDRemoteServiceSupport *self,
        SEL a2,
        const char *a3,
        id a4,
        unsigned int a5)
{
  id v6; // x0
  void *v7; // x19
  const char *string; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = -[MDRemoteServiceSupport _copyReplyFromRestoreServiceCommand:toRemoteDeviceWithUUID:type:](
         self,
         "_copyReplyFromRestoreServiceCommand:toRemoteDeviceWithUUID:type:",
         a3,
         a4,
         *(_QWORD *)&a5);
  v7 = v6;
  if ( v6 )
  {
    string = xpc_dictionary_get_string(v6, "result");
    if ( !strcmp(string, "success") )
      _os_log_internal(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "[RestoreService] Command for '%{public}s' succeeded! Waiting for device to disconnect...",
        a3);
    else
      _os_log_internal(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "[RestoreService] Command for '%{public}s' returned an error",
        a3);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}