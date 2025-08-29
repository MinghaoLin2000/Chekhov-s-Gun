_GetPropertyAsInteger
__int64 __fastcall GetPropertyAsInteger(const __CFString *a1, UInt8 *a2)
{
  __int64 result; // x0
  io_object_t v5; // w19
  const __CFData *CFProperty; // x0
  const __CFData *v7; // x21
  CFTypeID v8; // x22
  os_log_s *v9; // x22
  int v10; // w8
  os_log_s *v11; // x19
  os_log_s *v12; // x20
  os_log_s *v13; // x22
  int v14; // [xsp+0h] [xbp-40h] BYREF
  const char *v15; // [xsp+4h] [xbp-3Ch]
  __int16 v16; // [xsp+Ch] [xbp-34h]
  int v17; // [xsp+Eh] [xbp-32h]
  CFRange v18; // 0:x1.16

  if ( a1 && a2 )
  {
    result = sub_10000420C();
    if ( (_DWORD)result )
    {
      v5 = result;
      CFProperty = (const __CFData *)IORegistryEntryCreateCFProperty(result, a1, kCFAllocatorDefault, 0);
      if ( CFProperty )
      {
        v7 = CFProperty;
        v8 = CFGetTypeID(CFProperty);
        if ( v8 == CFDataGetTypeID() )
        {
          v18.location = 0LL;
          v18.length = 4LL;
          CFDataGetBytes(v7, v18, a2);
          v9 = (os_log_s *)LogCategory_Unspecified();
          if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
          {
            v10 = *(_DWORD *)a2;
            v14 = 67109120;
            LODWORD(v15) = v10;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v9,
              OS_LOG_TYPE_DEFAULT,
              "found a value, setting return to :%d",
              (uint8_t *)&v14,
              8u);
          }
        }
        else
        {
          v13 = (os_log_s *)LogCategory_Unspecified();
          if ( os_log_type_enabled(v13, OS_LOG_TYPE_DEFAULT) )
          {
            v14 = 136315394;
            v15 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/So"
                  "urces/FindMyMac_Executables/Sources/Common/utilities.c";
            v16 = 1024;
            v17 = 453;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v13,
              OS_LOG_TYPE_DEFAULT,
              "%s:%d property exists but is NOT a CFData type, returning 0",
              (uint8_t *)&v14,
              0x12u);
          }
          *(_DWORD *)a2 = 0;
        }
        CFRelease(v7);
      }
      else
      {
        *(_DWORD *)a2 = 0;
        v12 = (os_log_s *)LogCategory_Unspecified();
        if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEFAULT) )
        {
          LOWORD(v14) = 0;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v12,
            OS_LOG_TYPE_DEFAULT,
            "typeRef == NULL, so no value found in NVRAM return 0",
            (uint8_t *)&v14,
            2u);
        }
      }
      IOObjectRelease(v5);
      return 0LL;
    }
  }
  else
  {
    v11 = (os_log_s *)LogCategory_Unspecified();
    if ( os_log_type_enabled(v11, OS_LOG_TYPE_ERROR) )
      sub_100006634(v11);
    return 4LL;
  }
  return result;
}