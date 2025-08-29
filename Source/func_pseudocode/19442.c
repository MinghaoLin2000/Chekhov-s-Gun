-[MDRemoteServiceSupport validateProjectVersion:crashInvalidService:withReply:]
void __cdecl -[MDRemoteServiceSupport validateProjectVersion:crashInvalidService:withReply:](
        MDRemoteServiceSupport *self,
        SEL a2,
        id a3,
        bool a4,
        id a5)
{
  id v6; // x19
  void (__fastcall **v7)(id, __int64, const __CFString *); // x20
  __int64 v8; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, __int64, const __CFString *))objc_retain(a5);
  if ( !v6 )
  {
    _os_log_internal((void *)&_mh_execute_header, (os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR, "Invalid argument.");
LABEL_10:
    v8 = 0LL;
    goto LABEL_11;
  }
  if ( !objc_msgSend(CFSTR("1759.60.7"), "length") )
  {
    v8 = 1LL;
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Skipping version check because XPC service version is empty.");
    goto LABEL_11;
  }
  if ( objc_msgSend(CFSTR("1759.60.7"), "compare:options:", v6, 64LL) == (void *)-1LL )
  {
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "XPC service version (%{public}@) is OLDER than framework version (%{public}@). Some MobileDevice calls may fail if"
      " they rely on unimplemented APIs.",
      CFSTR("1759.60.7"),
      v6);
    goto LABEL_10;
  }
  if ( ((unsigned int)objc_msgSend(CFSTR("1759.60.7"), "isEqual:", v6) & 1) == 0 )
    _os_log_internal(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "XPC service version (%{public}@) mismatches framework version (%{public}@). Not fatal.",
      CFSTR("1759.60.7"),
      v6);
  v8 = 1LL;
LABEL_11:
  if ( v7 )
    v7[2](v7, v8, CFSTR("1759.60.7"));
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}