-[DisplayUSBDrives findDownstreamUSBDrives:]
id __cdecl -[DisplayUSBDrives findDownstreamUSBDrives:](DisplayUSBDrives *self, SEL a2, id a3)
{
  id v3; // x20
  __int128 v4; // q0
  void *i; // x22
  __int64 v6; // x19
  void *v7; // x24
  CFMutableDictionaryRef v8; // x19
  kern_return_t MatchingServices; // w0
  kern_return_t v10; // w21
  OS_os_log *log; // x19
  io_object_t v12; // w0
  io_registry_entry_t v13; // w21
  CFTypeRef CFProperty; // x0
  void *v15; // x27
  io_registry_entry_t v16; // w0
  io_object_t v17; // w19
  __int128 v19; // [xsp+0h] [xbp-190h]
  __int64 v21; // [xsp+28h] [xbp-168h]
  id v22; // [xsp+30h] [xbp-160h]
  void *v23; // [xsp+38h] [xbp-158h]
  __int128 v24; // [xsp+40h] [xbp-150h] BYREF
  __int128 v25; // [xsp+50h] [xbp-140h]
  __int128 v26; // [xsp+60h] [xbp-130h]
  __int128 v27; // [xsp+70h] [xbp-120h]
  io_iterator_t existing[2]; // [xsp+88h] [xbp-108h] BYREF
  uint8_t buf[4]; // [xsp+90h] [xbp-100h] BYREF
  const char *v30; // [xsp+94h] [xbp-FCh]
  __int16 v31; // [xsp+9Ch] [xbp-F4h]
  kern_return_t v32; // [xsp+9Eh] [xbp-F2h]
  _BYTE v33[128]; // [xsp+B0h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+198h] [xbp+8h]

  v22 = objc_retain(a3);
  v3 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
  *(_QWORD *)existing = 0LL;
  v24 = 0u;
  v25 = 0u;
  v26 = 0u;
  v27 = 0u;
  v23 = objc_msgSend(&off_100021838, "countByEnumeratingWithState:objects:count:", &v24, v33, 16LL);
  if ( v23 )
  {
    v21 = *(_QWORD *)v25;
    *(_QWORD *)&v4 = 136315394LL;
    v19 = v4;
    do
    {
      for ( i = 0LL; i != v23; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v25 != v21 )
          objc_enumerationMutation(&off_100021838);
        v6 = *(_QWORD *)(*((_QWORD *)&v24 + 1) + 8LL * (_QWORD)i);
        v7 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary", v19));
        objc_msgSend(v7, "setObject:forKeyedSubscript:", &off_100021760, CFSTR("idVendor"));
        objc_msgSend(v7, "setObject:forKeyedSubscript:", v6, CFSTR("idProduct"));
        objc_msgSend(v7, "setObject:forKeyedSubscript:", v22, CFSTR("kUSBContainerID"));
        v8 = IOServiceMatching("IOUSBHostDevice");
        -[__CFDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v7, CFSTR("IOPropertyMatch"));
        MatchingServices = IOServiceGetMatchingServices(kIOMainPortDefault, v8, &existing[1]);
        if ( MatchingServices )
        {
          v10 = MatchingServices;
          log = self->_log;
          if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)buf = v19;
            v30 = "-[DisplayUSBDrives findDownstreamUSBDrives:]";
            v31 = 1024;
            v32 = v10;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              log,
              OS_LOG_TYPE_ERROR,
              "%s: IOServiceGetMatchingServices returned error code %d",
              buf,
              0x12u);
          }
        }
        else
        {
          while ( 1 )
          {
            v16 = IOIteratorNext(existing[1]);
            v17 = v16;
            if ( !v16 )
              break;
            if ( !IORegistryEntryCreateIterator(v16, "IOService", 1u, existing) )
            {
              v12 = IOIteratorNext(existing[0]);
              if ( v12 )
              {
                v13 = v12;
                do
                {
                  if ( IOObjectConformsTo(v13, "IOMedia") )
                  {
                    CFProperty = IORegistryEntryCreateCFProperty(v13, CFSTR("BSD Name"), kCFAllocatorDefault, 0);
                    if ( CFProperty )
                    {
                      v15 = (void *)CFProperty;
                      objc_msgSend(v3, "addObject:", CFProperty);
                      objc_release(v15);
                    }
                  }
                  IOObjectRelease(v13);
                  v13 = IOIteratorNext(existing[0]);
                }
                while ( v13 );
              }
              IOObjectRelease(existing[0]);
            }
            IOObjectRelease(v17);
          }
          IOObjectRelease(existing[1]);
        }
        objc_release(v7);
      }
      v23 = objc_msgSend(&off_100021838, "countByEnumeratingWithState:objects:count:", &v24, v33, 16LL);
    }
    while ( v23 );
  }
  objc_release(v22);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}