-[MXMSysmonRequest wait_sema]
OS_dispatch_semaphore *__cdecl -[MXMSysmonRequest wait_sema](MXMSysmonRequest *self, SEL a2)
{
  return self->_wait_sema;
}