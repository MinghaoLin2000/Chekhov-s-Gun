-[MDRemoteServiceSupport startService:forUUID:type:withReply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[MDRemoteServiceSupport startService:forUUID:type:withReply:](
        MDRemoteServiceSupport *self,
        SEL a2,
        id a3,
        id a4,
        unsigned int a5,
        id a6)
{
  __int64 v7; // x23
  id v10; // x19
  id v11; // x20
  void (__fastcall **v12)(id, void *); // x21
  id v13; // x0
  void *v14; // x22
  __int64 v15; // x0
  dispatch_group_s *v16; // x23
  dispatch_queue_s *v17; // x24
  id v18; // x26
  id v19; // x25
  dispatch_time_t v20; // x0
  __int64 v21; // x27
  int *v22; // x0
  char *v23; // x0
  void *v24; // x26
  id v25; // x0
  __int64 v26; // x27
  int *v27; // x0
  char *v28; // [xsp+10h] [xbp-F0h]
  _QWORD v29[5]; // [xsp+20h] [xbp-E0h] BYREF
  _QWORD block[4]; // [xsp+48h] [xbp-B8h] BYREF
  id v31; // [xsp+68h] [xbp-98h]
  id v32; // [xsp+70h] [xbp-90h]
  __int64 *v33; // [xsp+78h] [xbp-88h]
  __int64 v34; // [xsp+80h] [xbp-80h] BYREF
  __int64 *v35; // [xsp+88h] [xbp-78h]
  __int64 v36; // [xsp+90h] [xbp-70h]
  int v37; // [xsp+98h] [xbp-68h]

  v7 = *(_QWORD *)&a5;
  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = (void (__fastcall **)(id, void *))objc_retain(a6);
  v34 = 0LL;
  v35 = &v34;
  v36 = 0x2020000000LL;
  v37 = -1;
  if ( !v10 || !v11 )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Invalid argument(s).");
LABEL_14:
    v24 = 0LL;
    v17 = 0LL;
    v16 = 0LL;
    v19 = 0LL;
    v14 = 0LL;
    goto LABEL_22;
  }
  if ( !-[MDRemoteServiceSupport allowedToStartService:](self, "allowedToStartService:", v10) )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "Not allowed to start service: %{public}@",
      v10);
    goto LABEL_14;
  }
  v13 = objc_retainAutoreleasedReturnValue((id)sub_100002CEC(v11, v7));
  v14 = v13;
  if ( !v13 )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Failed to copy device handle for UUID: %{public}@ and type: %d",
      v11,
      v7);
LABEL_17:
    v24 = 0LL;
    v17 = 0LL;
    v16 = 0LL;
LABEL_21:
    v19 = 0LL;
    goto LABEL_22;
  }
  v15 = connect_timeout_for_device(v13);
  if ( (connect_with_timeout_sync(v14, v15) & 1) == 0 )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Timeout while connecting to remote device.");
    goto LABEL_17;
  }
  v16 = dispatch_group_create();
  if ( !v16 )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Failed to create dispatch group");
LABEL_20:
    v24 = 0LL;
    v17 = 0LL;
    goto LABEL_21;
  }
  if ( !(unsigned int)sub_100004FC0(1LL, 10LL, 13LL, 0LL) )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Unsupported host OS.");
    goto LABEL_20;
  }
  v17 = dispatch_queue_create("com.apple.MDRemoteServiceSupport.connectService", 0LL);
  if ( !v17 )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Failed to create queue.");
    v24 = 0LL;
    goto LABEL_21;
  }
  v18 = objc_retainAutorelease(v10);
  v19 = (id)remote_device_copy_service(v14, objc_msgSend(v18, "UTF8String"));
  if ( !v19 )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Failed to copy service handle.");
    goto LABEL_27;
  }
  dispatch_group_enter(v16);
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_10000357C;
  block[3] = &unk_1000082F0;
  v33 = &v34;
  v19 = objc_retain(v19);
  v31 = v19;
  v16 = objc_retain(v16);
  v32 = v16;
  dispatch_async(v17, block);
  objc_release(v32);
  objc_release(v31);
  v20 = dispatch_time(0LL, 10000000000LL);
  if ( dispatch_group_wait(v16, v20) )
  {
    v21 = (unsigned int)*__error();
    v22 = __error();
    v23 = strerror(*v22);
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Timed out connecting socket for service %{public}@: %d (%{public}s)",
      v18,
      v21,
      v23);
    v29[0] = _NSConcreteStackBlock;
    v29[1] = 3254779904LL;
    v29[2] = sub_10000365C;
    v29[3] = &unk_100008320;
    v29[4] = &v34;
    dispatch_async(v17, v29);
LABEL_27:
    v24 = 0LL;
    goto LABEL_22;
  }
  if ( *((_DWORD *)v35 + 6) == -1 )
  {
    v26 = (unsigned int)*__error();
    v27 = __error();
    v28 = strerror(*v27);
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Failed to create socket for service %{public}@: %d (%{public}s)",
      v18,
      v26,
      v28);
    goto LABEL_27;
  }
  v25 = objc_alloc((Class)&OBJC_CLASS___NSFileHandle);
  v24 = objc_msgSend(v25, "initWithFileDescriptor:closeOnDealloc:", *((unsigned int *)v35 + 6), 1LL);
  if ( !v24 )
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Failed to allocate file handle.");
LABEL_22:
  if ( v12 )
    v12[2](v12, v24);
  objc_release(v16);
  objc_release(v17);
  objc_release(v24);
  objc_release(v19);
  objc_release(v14);
  _Block_object_dispose(&v34, 8);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
}