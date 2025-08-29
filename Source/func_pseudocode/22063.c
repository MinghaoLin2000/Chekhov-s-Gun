_CopyPropertyAsData
__int64 __fastcall CopyPropertyAsData(const __CFString *a1, CFDataRef *a2)
{
  io_registry_entry_t v4; // w0
  io_object_t v5; // w19
  const __CFData *CFProperty; // x0
  const __CFData *v7; // x22
  CFTypeID v8; // x23
  __int64 v9; // x20
  os_log_s *v10; // x19

  if ( a1 && a2 )
  {
    v4 = sub_10000420C();
    if ( v4 )
    {
      v5 = v4;
      CFProperty = (const __CFData *)IORegistryEntryCreateCFProperty(v4, a1, kCFAllocatorDefault, 0);
      if ( CFProperty )
      {
        v7 = CFProperty;
        v8 = CFGetTypeID(CFProperty);
        if ( v8 == CFDataGetTypeID() )
          *a2 = CFDataCreateCopy(kCFAllocatorDefault, v7);
        CFRelease(v7);
        v9 = 0LL;
      }
      else
      {
        v9 = 4294967294LL;
      }
      IOObjectRelease(v5);
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v10 = (os_log_s *)LogCategory_Unspecified();
    if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
      sub_100006634(v10);
    return 4LL;
  }
  return v9;
}