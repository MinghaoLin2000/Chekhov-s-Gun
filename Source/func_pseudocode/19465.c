-[MDRemoteServiceSupport restoreServicesReachableForUUID:type:withResult:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[MDRemoteServiceSupport restoreServicesReachableForUUID:type:withResult:](
        MDRemoteServiceSupport *self,
        SEL a2,
        id a3,
        unsigned int a4,
        id a5)
{
  __int64 v5; // x20
  void (__fastcall **v8)(id, _BOOL8); // x19
  id v9; // x20
  _BOOL8 v10; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = *(_QWORD *)&a4;
  v8 = (void (__fastcall **)(id, _BOOL8))objc_retain(a5);
  if ( a3 )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[MDRemoteServiceSupport _get_remote_service:type:](self, "_get_remote_service:type:", a3, v5));
    objc_release(v9);
    v10 = v9 != 0LL;
  }
  else
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "[RestoreService] No uuid string provided, unable to issue command");
    v10 = 0LL;
  }
  v8[2](v8, v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}