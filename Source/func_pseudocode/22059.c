_SaveStringPropertyAsData
__int64 __fastcall SaveStringPropertyAsData(const __CFString *a1, CFStringRef theString)
{
  os_log_s *v4; // x21
  CFDataRef ExternalRepresentation; // x0
  CFDataRef v6; // x20
  io_registry_entry_t v7; // w0
  io_object_t v8; // w21
  __int64 v9; // x19

  if ( !a1 || !theString )
  {
    v4 = (os_log_s *)LogCategory_Unspecified();
    if ( os_log_type_enabled(v4, OS_LOG_TYPE_ERROR) )
      sub_1000064FC(v4);
  }
  ExternalRepresentation = CFStringCreateExternalRepresentation(kCFAllocatorDefault, theString, 0x8000100u, 0);
  if ( !ExternalRepresentation )
    return 0LL;
  v6 = ExternalRepresentation;
  v7 = sub_10000420C();
  if ( v7 )
  {
    v8 = v7;
    v9 = IORegistryEntrySetCFProperty(v7, a1, v6);
    IOObjectRelease(v8);
  }
  else
  {
    v9 = 0LL;
  }
  CFRelease(v6);
  return v9;
}