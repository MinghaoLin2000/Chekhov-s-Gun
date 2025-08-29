_SaveStringProperty
__int64 __fastcall SaveStringProperty(const __CFString *a1, const void *a2)
{
  os_log_s *v4; // x21
  io_registry_entry_t v5; // w0
  io_object_t v6; // w21
  __int64 v7; // x19

  if ( !a1 || !a2 )
  {
    v4 = (os_log_s *)LogCategory_Unspecified();
    if ( os_log_type_enabled(v4, OS_LOG_TYPE_ERROR) )
      sub_1000064C8(v4);
  }
  v5 = sub_10000420C();
  if ( !v5 )
    return 0LL;
  v6 = v5;
  v7 = IORegistryEntrySetCFProperty(v5, a1, a2);
  IOObjectRelease(v6);
  return v7;
}