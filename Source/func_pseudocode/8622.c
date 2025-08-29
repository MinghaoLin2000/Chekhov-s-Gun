-[MXMSysmonRequest setWait_sema:]
void __cdecl -[MXMSysmonRequest setWait_sema:](MXMSysmonRequest *self, SEL a2, id a3)
{
  objc_storeStrong((id *)&self->_wait_sema, a3);
}