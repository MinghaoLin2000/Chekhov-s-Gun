-[MXMSysmonRequest execute]
void __cdecl -[MXMSysmonRequest execute](MXMSysmonRequest *self, SEL a2)
{
  dispatch_semaphore_t v3; // x20
  OS_sysmon_request *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = dispatch_semaphore_create(0LL);
  -[MXMSysmonRequest setWait_sema:](self, "setWait_sema:", v3);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[MXMSysmonRequest request](self, "request"));
  sysmon_request_execute();
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}