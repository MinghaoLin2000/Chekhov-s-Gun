_connect_with_timeout_sync
__int64 __fastcall connect_with_timeout_sync(void *a1, unsigned int a2)
{
  id v3; // x0
  void *v4; // x19
  dispatch_semaphore_t v5; // x20
  dispatch_semaphore_t v6; // x21
  id v7; // x24
  dispatch_time_t v8; // x0
  id v9; // x25
  dispatch_time_t v10; // x0
  __int64 v11; // x22
  _QWORD v13[4]; // [xsp+18h] [xbp-C8h] BYREF
  id v14; // [xsp+38h] [xbp-A8h]
  __int64 *v15; // [xsp+40h] [xbp-A0h]
  _QWORD v16[4]; // [xsp+48h] [xbp-98h] BYREF
  id v17; // [xsp+68h] [xbp-78h]
  __int64 v18; // [xsp+70h] [xbp-70h] BYREF
  __int64 *v19; // [xsp+78h] [xbp-68h]
  __int64 v20; // [xsp+80h] [xbp-60h]
  char v21; // [xsp+88h] [xbp-58h]

  v3 = objc_retain(a1);
  v4 = v3;
  v18 = 0LL;
  v19 = &v18;
  v20 = 0x2020000000LL;
  v21 = 0;
  if ( v3 )
  {
    remote_device_get_name(v3);
    v5 = dispatch_semaphore_create(0LL);
    if ( v5 )
    {
      v6 = dispatch_semaphore_create(0LL);
      if ( v6 )
      {
        v7 = objc_retainAutoreleasedReturnValue((id)sub_100004C14());
        v16[0] = _NSConcreteStackBlock;
        v16[1] = 3254779904LL;
        v16[2] = sub_100004C68;
        v16[3] = &unk_1000083F0;
        v5 = objc_retain(v5);
        v17 = v5;
        remote_device_set_connected_callback(v4, v7, v16);
        objc_release(v7);
        objc_release(v17);
        v8 = dispatch_time(0LL, 1000000000LL * a2);
        if ( dispatch_semaphore_wait(v5, v8) )
        {
          _os_log_internal(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_DEFAULT,
            "Timed out waiting for remote device '%s' to become connected for %d seconds.");
        }
        else
        {
          v9 = objc_retainAutoreleasedReturnValue((id)sub_100004C14());
          v13[0] = _NSConcreteStackBlock;
          v13[1] = 3254779904LL;
          v13[2] = sub_100004C80;
          v13[3] = &unk_100008420;
          v15 = &v18;
          v6 = objc_retain(v6);
          v14 = v6;
          remote_device_heartbeat(v4, v9, v13);
          objc_release(v9);
          objc_release(v14);
          v10 = dispatch_time(0LL, 1000000000LL * a2);
          if ( dispatch_semaphore_wait(v6, v10) )
          {
            _os_log_internal(
              (void *)&_mh_execute_header,
              (os_log_t)&_os_log_default,
              OS_LOG_TYPE_DEFAULT,
              "Timed out waiting for remote device '%s' heartbeat for %d seconds.");
          }
          else
          {
            if ( *((_BYTE *)v19 + 24) )
            {
              v11 = 1LL;
              goto LABEL_12;
            }
            _os_log_internal(
              (void *)&_mh_execute_header,
              (os_log_t)&_os_log_default,
              OS_LOG_TYPE_DEFAULT,
              "Remote device '%s' heartbeat failed.");
          }
        }
      }
      else
      {
        _os_log_internal(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_DEFAULT,
          "Failed to create semaphore");
      }
    }
    else
    {
      _os_log_internal(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "Failed to create semaphore");
      v6 = 0LL;
    }
  }
  else
  {
    _os_log_internal((void *)&_mh_execute_header, (os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT, "Invalid argument.");
    v6 = 0LL;
    v5 = 0LL;
  }
  v11 = 0LL;
LABEL_12:
  objc_release(v6);
  objc_release(v5);
  _Block_object_dispose(&v18, 8);
  objc_release(v4);
  return v11;
}