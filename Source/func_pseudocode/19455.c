-[MDRemoteServiceSupport retrievePropertiesForUUID:type:withReply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[MDRemoteServiceSupport retrievePropertiesForUUID:type:withReply:](
        MDRemoteServiceSupport *self,
        SEL a2,
        id a3,
        unsigned int a4,
        id a5)
{
  __int64 v6; // x22
  id v8; // x19
  void (__fastcall **v9)(id, _QWORD); // x20
  id v10; // x0
  void *v11; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = *(_QWORD *)&a4;
  v8 = objc_retain(a3);
  v9 = (void (__fastcall **)(id, _QWORD))objc_retain(a5);
  if ( v8 )
  {
    v10 = objc_retainAutoreleasedReturnValue((id)sub_100002CEC(v8, v6));
    if ( v10 )
    {
      v11 = v10;
      -[MDRemoteServiceSupport retrievePropertiesForRemoteDevice:withReply:](
        self,
        "retrievePropertiesForRemoteDevice:withReply:",
        v10,
        v9);
      objc_release(v11);
      goto LABEL_8;
    }
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Failed to lookup remote device for UUID: %{public}@",
      v8);
  }
  else
  {
    _os_log_internal((void *)&_mh_execute_header, (os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT, "Invalid argument.");
  }
  if ( v9 )
    v9[2](v9, 0LL);
LABEL_8:
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}