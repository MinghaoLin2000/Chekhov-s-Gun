-[MXMSysmonRequest addAttributes:]
void __cdecl -[MXMSysmonRequest addAttributes:](MXMSysmonRequest *self, SEL a2, unsigned int a3)
{
  OS_sysmon_request *v4; // x21
  __int64 *v5; // x8
  __int64 *v6; // [xsp+8h] [xbp-28h]
  __int64 v7; // [xsp+40h] [xbp+10h] BYREF

  v6 = &v7;
  if ( a3 )
  {
    do
    {
      v4 = objc_retainAutoreleasedReturnValue(-[MXMSysmonRequest request](self, "request"));
      sysmon_request_add_attribute();
      objc_release(v4);
      v5 = v6++;
    }
    while ( *(_DWORD *)v5 );
  }
}