_SaveDataToNvram
__int64 __fastcall SaveDataToNvram(const __CFString *a1, const void *a2)
{
  __int64 v4; // x0
  __int64 v5; // x19
  os_log_s *v6; // x20
  io_registry_entry_t v7; // w0
  io_object_t v8; // w22
  os_log_s *v9; // x19
  mach_port_t mainPort; // [xsp+Ch] [xbp-24h] BYREF

  mainPort = 0;
  v4 = IOMasterPort(bootstrap_port, &mainPort);
  if ( (_DWORD)v4 )
  {
    v5 = v4;
    v6 = (os_log_s *)LogCategory_Unspecified();
    if ( os_log_type_enabled(v6, OS_LOG_TYPE_ERROR) )
      sub_100006888(v5, v6);
  }
  else
  {
    v7 = IORegistryEntryFromPath(mainPort, "IODeviceTree:/options");
    if ( v7 )
    {
      v8 = v7;
      v5 = IORegistryEntrySetCFProperty(v7, a1, a2);
      IOObjectRelease(v8);
    }
    else
    {
      v9 = (os_log_s *)LogCategory_Unspecified();
      if ( os_log_type_enabled(v9, OS_LOG_TYPE_ERROR) )
        sub_100006844(v9);
      return 0LL;
    }
  }
  return v5;
}