_CopyNVRAMKeys
CFMutableDictionaryRef CopyNVRAMKeys()
{
  io_registry_entry_t v0; // w0
  io_object_t v1; // w19
  os_log_s *v2; // x20
  uint8_t v4[8]; // [xsp+0h] [xbp-20h] BYREF
  CFMutableDictionaryRef properties; // [xsp+8h] [xbp-18h] BYREF

  properties = 0LL;
  v0 = sub_10000420C();
  if ( !v0 )
    return 0LL;
  v1 = v0;
  if ( IORegistryEntryCreateCFProperties(v0, &properties, kCFAllocatorDefault, 0) )
  {
    v2 = (os_log_s *)LogCategory_Unspecified();
    if ( os_log_type_enabled(v2, OS_LOG_TYPE_DEFAULT) )
    {
      *(_WORD *)v4 = 0;
      _os_log_impl((void *)&_mh_execute_header, v2, OS_LOG_TYPE_DEFAULT, "Unable to Find any NVRAM Keys", v4, 2u);
    }
  }
  IOObjectRelease(v1);
  return properties;
}