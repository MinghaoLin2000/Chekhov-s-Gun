-[MDRemoteServiceSupport _get_remote_service:type:]
id __cdecl -[MDRemoteServiceSupport _get_remote_service:type:](
        MDRemoteServiceSupport *self,
        SEL a2,
        id a3,
        unsigned int a4)
{
  id v4; // x19
  void *v5; // x20
  __int64 v6; // x0
  void *v7; // x21
  __int64 v8; // x0
  void *v9; // x22
  __int64 v11; // [xsp+8h] [xbp-38h] BYREF
  __int64 v12; // [xsp+10h] [xbp-30h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v11 = 0LL;
  v12 = 0LL;
  v5 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSUUID), "initWithUUIDString:", v4);
  objc_msgSend(v5, "getUUIDBytes:", &v11);
  v6 = remote_device_copy_device_with_uuid(&v11);
  v7 = (void *)v6;
  if ( v6 )
  {
    v8 = connect_timeout_for_device(v6);
    if ( (connect_with_timeout_sync(v7, v8) & 1) != 0 )
    {
      v9 = (void *)remote_device_copy_service(v7, "com.apple.RestoreRemoteServices.restoreserviced");
      if ( v9 )
        goto LABEL_9;
    }
    else
    {
      _os_log_internal(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "Timeout while waiting for remote device.");
    }
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "[RestoreService] Failed to get remote device service 'com.apple.RestoreRemoteServices.restoreserviced' for device "
      "with uuid '%{public}@'",
      v4,
      v11,
      v12);
  }
  else
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "[RestoreService] Failed to get remote device with uuid '%{public}@'",
      v4,
      v11,
      v12);
  }
  v9 = 0LL;
LABEL_9:
  objc_release(v7);
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}