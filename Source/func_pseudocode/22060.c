_SaveBooleanProperty
__int64 __fastcall SaveBooleanProperty(const __CFString *a1, int a2)
{
  os_log_s *v4; // x21
  io_registry_entry_t v5; // w0
  io_object_t v6; // w21
  const __CFString *v7; // x2
  __int64 v8; // x19

  if ( !a1 )
  {
    v4 = (os_log_s *)LogCategory_Unspecified();
    if ( os_log_type_enabled(v4, OS_LOG_TYPE_ERROR) )
      sub_100006530(v4);
  }
  v5 = sub_10000420C();
  if ( !v5 )
    return 0LL;
  v6 = v5;
  if ( a2 == 1 )
    v7 = CFSTR("1");
  else
    v7 = CFSTR("0");
  v8 = IORegistryEntrySetCFProperty(v5, a1, v7);
  IOObjectRelease(v6);
  return v8;
}