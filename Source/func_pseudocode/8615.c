-[MXMSysmonRequest wait]
void __cdecl -[MXMSysmonRequest wait](MXMSysmonRequest *self, SEL a2)
{
  OS_dispatch_semaphore *v2; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[MXMSysmonRequest wait_sema](self, "wait_sema"));
  dispatch_semaphore_wait((dispatch_semaphore_t)v2, 0xFFFFFFFFFFFFFFFFLL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}