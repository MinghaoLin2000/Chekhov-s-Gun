-[MXMSysmonRequest cancel]
void __cdecl -[MXMSysmonRequest cancel](MXMSysmonRequest *self, SEL a2)
{
  OS_sysmon_request *v3; // x20
  OS_dispatch_semaphore *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[MXMSysmonRequest request](self, "request"));
  sysmon_request_cancel();
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[MXMSysmonRequest wait_sema](self, "wait_sema"));
  dispatch_semaphore_signal((dispatch_semaphore_t)v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}