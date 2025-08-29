_GetVariableAsString
__int64 __fastcall GetVariableAsString(const char *a1, CFStringRef *a2)
{
  __int64 v4; // x22
  io_registry_entry_t v6; // w0
  io_registry_entry_t v7; // w19
  const __CFString *v8; // x0
  const void *v9; // x21
  const __CFData *CFProperty; // x0
  const __CFData *v11; // x23
  CFTypeID v12; // x24
  const UInt8 *BytePtr; // x24
  CFIndex Length; // x0
  CFStringRef v15; // x24
  __int64 v16; // x20
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
    CFProperty = (const __CFData *)IORegistryEntryCreateCFProperty(v7, v8, kCFAllocatorDefault, 0);
    if ( CFProperty )
    {
      v11 = CFProperty;
      v12 = CFGetTypeID(CFProperty);
      if ( v12 == CFDataGetTypeID() )
      {
        BytePtr = CFDataGetBytePtr(v11);
        Length = CFDataGetLength(v11);
        v15 = CFStringCreateWithBytes(0LL, BytePtr, Length, 0, 0);
        CFRelease(v11);
        v11 = (const __CFData *)v15;
      }
      *a2 = CFStringCreateCopy(kCFAllocatorDefault, (CFStringRef)v11);
      CFRelease(v9);
      v16 = 0LL;
      v4 = 0LL;
      v9 = v11;
      if ( !v11 )
        goto LABEL_14;
    }
    else
    {
      v16 = 4294967294LL;
    }
    CFRelease(v9);
    v4 = v16;
LABEL_14:
    IOObjectRelease(v7);
  }
  return v4;
}