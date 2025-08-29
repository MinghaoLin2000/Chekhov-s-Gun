_SaveDataProperty
__int64 __fastcall SaveDataProperty(const __CFString *a1, const void *a2)
{
  io_registry_entry_t v4; // w0
  io_object_t v5; // w20
  __int64 v6; // x19
  os_log_s *v7; // x21
  os_log_s *v8; // x19
  os_log_s *v9; // x19
  _DWORD v11[2]; // [xsp+0h] [xbp-30h] BYREF

  if ( a1 && a2 )
  {
    v4 = sub_10000420C();
    if ( v4 )
    {
      v5 = v4;
      v6 = IORegistryEntrySetCFProperty(v4, a1, a2);
      v7 = (os_log_s *)LogCategory_Unspecified();
      if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
      {
        v11[0] = 67109120;
        v11[1] = v6;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v7,
          OS_LOG_TYPE_DEFAULT,
          "IORegistryEntrySetCFProperty returned:%d",
          (uint8_t *)v11,
          8u);
      }
      IOObjectRelease(v5);
    }
    else
    {
      v9 = (os_log_s *)LogCategory_Unspecified();
      if ( os_log_type_enabled(v9, OS_LOG_TYPE_ERROR) )
        sub_100006598(v9);
      return 0LL;
    }
  }
  else
  {
    v8 = (os_log_s *)LogCategory_Unspecified();
    if ( os_log_type_enabled(v8, OS_LOG_TYPE_ERROR) )
      sub_100006564(v8);
    return 4LL;
  }
  return v6;
}