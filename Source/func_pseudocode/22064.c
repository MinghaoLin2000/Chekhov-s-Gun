_CopyPropertyAsCFString
__int64 __fastcall CopyPropertyAsCFString(const __CFString *a1, CFStringRef *a2)
{
  io_registry_entry_t v4; // w0
  io_object_t v5; // w19
  const __CFData *CFProperty; // x0
  const __CFData *v7; // x21
  CFTypeID v8; // x23
  os_log_s *v9; // x23
  CFStringRef v10; // x0
  os_log_s *v11; // x22
  const UInt8 *BytePtr; // x22
  CFIndex Length; // x0
  CFStringRef Copy; // x0
  os_log_s *v15; // x19
  __int64 v16; // x20
  CFTypeID v17; // x24
  CFTypeID TypeID; // x25
  os_log_s *v19; // x0
  os_log_s *v20; // x23
  uint8_t v22[16]; // [xsp+0h] [xbp-70h] BYREF
  uint8_t v23[16]; // [xsp+10h] [xbp-60h] BYREF
  uint8_t buf[16]; // [xsp+20h] [xbp-50h] BYREF

  if ( a1 && a2 )
  {
    v4 = sub_10000420C();
    if ( v4 )
    {
      v5 = v4;
      CFProperty = (const __CFData *)IORegistryEntryCreateCFProperty(v4, a1, kCFAllocatorDefault, 0);
      if ( !CFProperty )
      {
        v16 = 4294967294LL;
LABEL_25:
        IOObjectRelease(v5);
        return v16;
      }
      v7 = CFProperty;
      v8 = CFGetTypeID(CFProperty);
      if ( v8 == CFDataGetTypeID() )
      {
        v9 = (os_log_s *)LogCategory_Unspecified();
        if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
        {
          *(_WORD *)buf = 0;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v9,
            OS_LOG_TYPE_DEFAULT,
            "    incomming value was a CFData type, calling CFStringCreateFromExternalRepresentation",
            buf,
            2u);
        }
        v10 = CFStringCreateFromExternalRepresentation(kCFAllocatorDefault, v7, 0x8000100u);
        *a2 = v10;
        if ( v10 )
          goto LABEL_24;
        v11 = (os_log_s *)LogCategory_Unspecified();
        if ( os_log_type_enabled(v11, OS_LOG_TYPE_DEFAULT) )
        {
          *(_WORD *)v23 = 0;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v11,
            OS_LOG_TYPE_DEFAULT,
            "    CFStringCreateFromExternalRepresentation returned NULL, trying to create with CFStringCreateWithBytes",
            v23,
            2u);
        }
        BytePtr = CFDataGetBytePtr(v7);
        Length = CFDataGetLength(v7);
        Copy = CFStringCreateWithBytes(0LL, BytePtr, Length, 0, 0);
      }
      else
      {
        v17 = CFGetTypeID(v7);
        TypeID = CFStringGetTypeID();
        v19 = (os_log_s *)LogCategory_Unspecified();
        v20 = v19;
        if ( v17 != TypeID )
        {
          if ( os_log_type_enabled(v19, OS_LOG_TYPE_ERROR) )
            sub_100006668(v20);
          goto LABEL_24;
        }
        if ( os_log_type_enabled(v19, OS_LOG_TYPE_DEFAULT) )
        {
          *(_WORD *)v22 = 0;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v20,
            OS_LOG_TYPE_DEFAULT,
            "    incomming value was a CFString type, calling CFStringCreateCopy",
            v22,
            2u);
        }
        Copy = CFStringCreateCopy(kCFAllocatorDefault, (CFStringRef)v7);
      }
      *a2 = Copy;
LABEL_24:
      CFRelease(v7);
      v16 = 0LL;
      goto LABEL_25;
    }
    return 0LL;
  }
  else
  {
    v15 = (os_log_s *)LogCategory_Unspecified();
    if ( os_log_type_enabled(v15, OS_LOG_TYPE_ERROR) )
      sub_100006634(v15);
    return 4LL;
  }
}