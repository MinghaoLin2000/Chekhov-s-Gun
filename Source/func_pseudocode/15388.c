-[UARPUpdaterDisplayControllerDelegate findApplicableDevices]
id __cdecl -[UARPUpdaterDisplayControllerDelegate findApplicableDevices](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2)
{
  id v3; // x20
  __CFDictionary *v4; // x22
  CFNumberRef v5; // x24
  CFNumberRef v6; // x23
  io_object_t v7; // w0
  io_registry_entry_t v8; // w27
  void *CFProperty; // x26
  unsigned __int64 v10; // x0
  NSNumber *v11; // x22
  void *v12; // x23
  OS_os_log *log; // x27
  OS_os_log *v14; // x22
  OS_os_log *v15; // x22
  OS_os_log *v16; // x27
  NSNumber *v17; // x24
  NSDictionary *v18; // x21
  id v20; // [xsp+48h] [xbp-C8h]
  io_iterator_t existing; // [xsp+54h] [xbp-BCh] BYREF
  int v22; // [xsp+58h] [xbp-B8h] BYREF
  int valuePtr; // [xsp+5Ch] [xbp-B4h] BYREF
  _BYTE v24[4]; // [xsp+60h] [xbp-B0h] BYREF
  int v25; // [xsp+64h] [xbp-ACh] BYREF
  _BYTE v26[4]; // [xsp+70h] [xbp-A0h] BYREF
  int v27; // [xsp+74h] [xbp-9Ch] BYREF
  _BYTE entryID[12]; // [xsp+80h] [xbp-90h] BYREF
  __int16 v29; // [xsp+8Ch] [xbp-84h]
  void *v30; // [xsp+8Eh] [xbp-82h]
  _BYTE v31[4]; // [xsp+A0h] [xbp-70h] BYREF
  int v32; // [xsp+A4h] [xbp-6Ch] BYREF
  __int64 vars8; // [xsp+118h] [xbp+8h]

  v22 = 4372;
  valuePtr = 1452;
  v20 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
  v3 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
  v4 = IOServiceMatching("IOUSBHostDevice");
  v5 = CFNumberCreate(kCFAllocatorDefault, kCFNumberSInt32Type, &valuePtr);
  CFDictionaryAddValue(v4, CFSTR("idVendor"), v5);
  CFRelease(v5);
  v6 = CFNumberCreate(kCFAllocatorDefault, kCFNumberSInt32Type, &v22);
  CFDictionaryAddValue(v4, CFSTR("idProduct"), v6);
  CFRelease(v6);
  existing = 0;
  IOServiceGetMatchingServices(kIOMainPortDefault, v4, &existing);
  v7 = IOIteratorNext(existing);
  if ( v7 )
  {
    v8 = v7;
    do
    {
      CFProperty = (void *)IORegistryEntryCreateCFProperty(v8, CFSTR("kUSBSerialNumberString"), 0LL, 0);
      if ( CFProperty )
      {
        v10 = -[UARPUpdaterDisplayControllerDelegate extractECID:](self, "extractECID:", CFProperty);
        if ( v10 )
        {
          v11 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedLongLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLongLong:", v10));
          v12 = (void *)IORegistryEntryCreateCFProperty(v8, CFSTR("kUSBContainerID"), 0LL, 0);
          if ( v12 )
          {
            *(_QWORD *)entryID = 0LL;
            if ( IORegistryEntryGetRegistryEntryID(v8, (uint64_t *)entryID) )
            {
              log = self->_log;
              if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
                sub_1000145A0(v24, &v25, log);
            }
            else
            {
              objc_msgSend(v20, "setObject:forKeyedSubscript:", v12, v11);
              v17 = objc_retainAutoreleasedReturnValue(
                      +[NSNumber numberWithUnsignedLongLong:](
                        &OBJC_CLASS___NSNumber,
                        "numberWithUnsignedLongLong:",
                        *(_QWORD *)entryID));
              objc_msgSend(v3, "setObject:forKeyedSubscript:", v17, v11);
              objc_release(v17);
              IOObjectRelease(v8);
            }
          }
          else
          {
            v16 = self->_log;
            if ( os_log_type_enabled(v16, OS_LOG_TYPE_ERROR) )
              sub_100014558(v26, &v27, v16);
          }
          objc_release(v12);
          objc_release(v11);
        }
        else
        {
          v15 = self->_log;
          if ( os_log_type_enabled(v15, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)entryID = 136315394;
            *(_QWORD *)&entryID[4] = "-[UARPUpdaterDisplayControllerDelegate findApplicableDevices]";
            v29 = 2112;
            v30 = CFProperty;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              v15,
              OS_LOG_TYPE_ERROR,
              "%s: ECID could not be extracted from string: %@",
              entryID,
              0x16u);
          }
        }
      }
      else
      {
        v14 = self->_log;
        if ( os_log_type_enabled(v14, OS_LOG_TYPE_ERROR) )
          sub_100014510(v31, &v32, v14);
      }
      objc_release(CFProperty);
      v8 = IOIteratorNext(existing);
    }
    while ( v8 );
  }
  IOObjectRelease(existing);
  v18 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjectsAndKeys:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjectsAndKeys:",
            v20,
            CFSTR("ContainerIDs"),
            v3,
            CFSTR("RegistryEntryIDs"),
            0LL));
  objc_release(v3);
  objc_release(v20);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v18);
}