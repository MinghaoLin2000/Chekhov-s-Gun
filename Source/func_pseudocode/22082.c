_GetVariableAsUInt64
__int64 __fastcall GetVariableAsUInt64(const char *a1, UInt8 *a2)
{
  __int64 v4; // x23
  io_registry_entry_t v6; // w0
  io_registry_entry_t v7; // w19
  const __CFString *v8; // x0
  const __CFString *v9; // x20
  const __CFData *CFProperty; // x0
  const __CFData *v11; // x21
  CFTypeID v12; // x23
  os_log_s *v13; // x22
  uint8_t v14[12]; // [xsp+0h] [xbp-40h] BYREF
  mach_port_t mainPort; // [xsp+Ch] [xbp-34h] BYREF
  CFRange v16; // 0:x1.16

  mainPort = 0;
  v4 = IOMasterPort(bootstrap_port, &mainPort);
  if ( !(_DWORD)v4 )
  {
    v6 = IORegistryEntryFromPath(mainPort, "IODeviceTree:/options");
    if ( v6 )
    {
      v7 = v6;
      v8 = CFStringCreateWithCString(kCFAllocatorDefault, a1, 0);
      if ( v8 )
      {
        v9 = v8;
        CFProperty = (const __CFData *)IORegistryEntryCreateCFProperty(v7, v8, kCFAllocatorDefault, 0);
        if ( CFProperty )
        {
          v11 = CFProperty;
          v12 = CFGetTypeID(CFProperty);
          if ( v12 == CFDataGetTypeID() )
          {
            if ( (unsigned int)CFDataGetLength(v11) )
            {
              v16.length = CFDataGetLength(v11);
              v16.location = 0LL;
              CFDataGetBytes(v11, v16, a2);
            }
            else
            {
              v13 = (os_log_s *)LogCategory_Unspecified();
              if ( os_log_type_enabled(v13, OS_LOG_TYPE_DEFAULT) )
              {
                *(_WORD *)v14 = 0;
                _os_log_impl((void *)&_mh_execute_header, v13, OS_LOG_TYPE_DEFAULT, "But there's no data!", v14, 2u);
              }
            }
          }
          else
          {
            CFNumberGetValue(v11, kCFNumberLongType, a2);
          }
          CFRelease(v9);
          v4 = 0LL;
        }
        else
        {
          v4 = 4294967294LL;
          v11 = (const __CFData *)v9;
        }
        CFRelease(v11);
        IOObjectRelease(v7);
      }
      else
      {
        return 0xFFFFFFFFLL;
      }
    }
    else
    {
      return 0LL;
    }
  }
  return v4;
}