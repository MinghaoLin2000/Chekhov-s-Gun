-[MXMSysmonRequest request]
OS_sysmon_request *__cdecl -[MXMSysmonRequest request](MXMSysmonRequest *self, SEL a2)
{
  return (OS_sysmon_request *)objc_getProperty(self, a2, 16LL, 1);
}