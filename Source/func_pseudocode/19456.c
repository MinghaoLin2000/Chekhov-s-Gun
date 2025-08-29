-[MDRemoteServiceSupport retrievePropertiesForRemoteDevice:withReply:]
void __cdecl -[MDRemoteServiceSupport retrievePropertiesForRemoteDevice:withReply:](
        MDRemoteServiceSupport *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  void (__fastcall **v6)(id, id); // x20
  id v7; // x21
  __int64 v8; // x0
  id v9; // x23
  void *v10; // x22
  void *v11; // x24
  id v12; // x26
  NSMutableDictionary *v13; // x25
  NSMutableDictionary *v14; // x25
  _QWORD v15[5]; // [xsp+0h] [xbp-B0h] BYREF
  __int64 v16; // [xsp+28h] [xbp-88h] BYREF
  __int64 *v17; // [xsp+30h] [xbp-80h]
  __int64 v18; // [xsp+38h] [xbp-78h]
  __int64 (__fastcall *v19)(); // [xsp+40h] [xbp-70h]
  __int64 (__fastcall *v20)(); // [xsp+48h] [xbp-68h]
  id v21; // [xsp+50h] [xbp-60h]
  _QWORD v22[2]; // [xsp+58h] [xbp-58h] BYREF

  v5 = objc_retain(a3);
  v6 = (void (__fastcall **)(id, id))objc_retain(a4);
  if ( !v5 )
  {
    _os_log_internal((void *)&_mh_execute_header, (os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT, "Invalid argument.");
    v14 = 0LL;
    goto LABEL_10;
  }
  v7 = objc_retain(v5);
  v22[0] = 0LL;
  v22[1] = 0LL;
  v8 = connect_timeout_for_device(v7);
  if ( (connect_with_timeout_sync(v7, v8) & 1) == 0 )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Timeout while waiting for remote device.");
    v13 = 0LL;
    v9 = 0LL;
LABEL_8:
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    goto LABEL_9;
  }
  v9 = (id)remote_device_copy_properties(v7);
  if ( !v9 )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Failed to copy device properties.");
    v13 = 0LL;
    goto LABEL_8;
  }
  remote_device_copy_uuid(v7, v22);
  v10 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSUUID), "initWithUUIDBytes:", v22);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "UUIDString"));
  v9 = objc_retain(v9);
  v16 = 0LL;
  v17 = &v16;
  v18 = 0x3032000000LL;
  v19 = sub_1000046F4;
  v20 = sub_100004704;
  v21 = +[NSMutableDictionary new](&OBJC_CLASS___NSMutableDictionary, "new");
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 3254779904LL;
  v15[2] = sub_100004860;
  v15[3] = &unk_1000083C0;
  v15[4] = &v16;
  xpc_dictionary_apply(v9, v15);
  v12 = objc_retain((id)v17[5]);
  _Block_object_dispose(&v16, 8);
  objc_release(v21);
  objc_release(v9);
  v13 = objc_retainAutoreleasedReturnValue(
          +[NSMutableDictionary dictionaryWithDictionary:](
            &OBJC_CLASS___NSMutableDictionary,
            "dictionaryWithDictionary:",
            v12));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v13, "setObject:forKeyedSubscript:", v11, CFSTR("DeviceUUID"));
LABEL_9:
  v14 = objc_retain(v13);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  objc_release(v14);
  objc_release(v7);
LABEL_10:
  if ( v6 )
    v6[2](v6, v14);
  objc_release(v14);
  objc_release(v6);
  objc_release(v5);
}