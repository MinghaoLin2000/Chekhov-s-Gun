_GetVariableAsCFMutableData
__int64 __fastcall GetVariableAsCFMutableData(const char *a1, CFMutableDataRef *a2)
{
  __int64 v4; // x23
  io_registry_entry_t v6; // w0
  io_registry_entry_t v7; // w19
  const __CFString *v8; // x0
  const __CFString *v9; // x21
  const __CFString *CFProperty; // x0
  const __CFString *v11; // x22
  CFTypeID v12; // x24
  CFIndex Length; // x0
  CFTypeID v14; // x24
  const __CFData *ExternalRepresentation; // x0
  const __CFData *v16; // x24
  CFIndex v17; // x0
  mach_port_t mainPort; // [xsp+Ch] [xbp-34h] BYREF

  mainPort = 0;
  v4 = IOMasterPort(bootstrap_port, &mainPort);
  if ( !(_DWORD)v4 )
  {
    v6 = IORegistryEntryFromPath(mainPort, "IODeviceTree:/options");
    if ( !v6 )
      return 0LL;
    v7 = v6;
    v8 = CFStringCreateWithCString(kCFAllocatorDefault, a1, 0);
    if ( !v8 )
      return 0xFFFFFFFFLL;
    v9 = v8;
    CFProperty = (const __CFString *)IORegistryEntryCreateCFProperty(v7, v8, kCFAllocatorDefault, 0);
    if ( !CFProperty )
    {
      v4 = 4294967294LL;
      v11 = v9;
LABEL_17:
      CFRelease(v11);
      IOObjectRelease(v7);
      return v4;
    }
    v11 = CFProperty;
    v12 = CFGetTypeID(CFProperty);
    if ( v12 == CFDataGetTypeID() )
    {
      Length = CFDataGetLength((CFDataRef)v11);
      v4 = 0LL;
      *a2 = CFDataCreateMutableCopy(kCFAllocatorDefault, Length, (CFDataRef)v11);
    }
    else
    {
      v14 = CFGetTypeID(v11);
      if ( v14 == CFStringGetTypeID() )
      {
        ExternalRepresentation = CFStringCreateExternalRepresentation(kCFAllocatorDefault, v11, 0, 0);
        if ( !ExternalRepresentation )
        {
          v4 = 0xFFFFFFFFLL;
          goto LABEL_16;
        }
        v16 = ExternalRepresentation;
        v17 = CFDataGetLength(ExternalRepresentation);
        *a2 = CFDataCreateMutableCopy(kCFAllocatorDefault, v17, v16);
        CFRelease(v16);
      }
      v4 = 0LL;
    }
LABEL_16:
    CFRelease(v9);
    goto LABEL_17;
  }
  return v4;
}