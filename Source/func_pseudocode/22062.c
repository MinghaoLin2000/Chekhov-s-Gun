_SaveIntegerProperty
__int64 __fastcall SaveIntegerProperty(const __CFString *a1, int a2)
{
  io_object_t v3; // w0
  io_object_t v4; // w19
  CFDataRef v5; // x0
  CFDataRef v6; // x21
  __int64 v7; // x20
  os_log_s *v8; // x19
  os_log_s *v9; // x19
  os_log_s *v10; // x20
  os_log_s *v11; // x21
  UInt8 bytes[4]; // [xsp+Ch] [xbp-34h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-30h] BYREF
  int v15; // [xsp+14h] [xbp-2Ch]

  *(_DWORD *)bytes = a2;
  if ( a1 )
  {
    v3 = sub_10000420C();
    if ( v3 )
    {
      v4 = v3;
      v5 = CFDataCreate(kCFAllocatorDefault, bytes, 4LL);
      if ( v5 )
      {
        v6 = v5;
        v7 = SaveDataProperty(a1, v5);
        CFRelease(v6);
      }
      else
      {
        v10 = (os_log_s *)LogCategory_Unspecified();
        if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
          sub_100006600(v10);
        v7 = 0LL;
      }
      v11 = (os_log_s *)LogCategory_Unspecified();
      if ( os_log_type_enabled(v11, OS_LOG_TYPE_DEFAULT) )
      {
        *(_DWORD *)buf = 67109120;
        v15 = v7;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v11,
          OS_LOG_TYPE_DEFAULT,
          "IORegistryEntrySetCFProperty returned:%d",
          buf,
          8u);
      }
      IOObjectRelease(v4);
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
      sub_1000065CC(v8);
    return 4LL;
  }
  return v7;
}