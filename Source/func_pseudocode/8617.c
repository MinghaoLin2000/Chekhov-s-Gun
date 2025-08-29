-[MXMSysmonRequest setInterval:]
void __cdecl -[MXMSysmonRequest setInterval:](MXMSysmonRequest *self, SEL a2, double a3)
{
  OS_sysmon_request *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  self->_interval = round(a3 + a3) * 0.5;
  v3 = objc_retainAutoreleasedReturnValue(-[MXMSysmonRequest request](self, "request"));
  sysmon_request_set_interval();
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}