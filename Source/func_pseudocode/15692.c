-[UARPDFUUpdater getAccessoriesForIdentifier:]
id __cdecl -[UARPDFUUpdater getAccessoriesForIdentifier:](UARPDFUUpdater *self, SEL a2, id a3)
{
  const char *v4; // x19
  id v5; // x22
  __int64 v6; // x0
  __int64 v7; // x25
  OS_os_log *log; // x26
  id v9; // x26
  OS_os_log *v10; // x23
  id v11; // x22
  void *v12; // x0
  void *v13; // x23
  __int64 v14; // x21
  void *i; // x19
  void *v16; // x26
  OS_os_log *v17; // x27
  NSArray *v18; // x20
  const __CFDictionary *v20; // [xsp+0h] [xbp-170h]
  char *v21; // [xsp+8h] [xbp-168h]
  __int128 v22; // [xsp+20h] [xbp-150h] BYREF
  __int128 v23; // [xsp+30h] [xbp-140h]
  __int128 v24; // [xsp+40h] [xbp-130h]
  __int128 v25; // [xsp+50h] [xbp-120h]
  io_iterator_t existing; // [xsp+6Ch] [xbp-104h] BYREF
  uint8_t v27[128]; // [xsp+70h] [xbp-100h] BYREF
  uint8_t buf[4]; // [xsp+F0h] [xbp-80h] BYREF
  const char *v29; // [xsp+F4h] [xbp-7Ch]
  __int16 v30; // [xsp+FCh] [xbp-74h]
  id v31; // [xsp+FEh] [xbp-72h]
  __int64 vars8; // [xsp+178h] [xbp+8h]

  v4 = (const char *)objc_retain(a3);
  v5 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
  existing = 0;
  v20 = (const __CFDictionary *)objc_retain(
                                  objc_retainAutoreleasedReturnValue(
                                    +[UARPUSBDFUAccessory matchingDictionaryForIdentifier:serialNumber:](
                                      &OBJC_CLASS___UARPUSBDFUAccessory,
                                      "matchingDictionaryForIdentifier:serialNumber:",
                                      v4,
                                      0LL)));
  if ( !IOServiceGetMatchingServices(kIOMainPortDefault, v20, &existing) )
  {
    v6 = IOIteratorNext(existing);
    if ( (_DWORD)v6 )
    {
      v7 = v6;
      do
      {
        log = self->_log;
        if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
        {
          *(_DWORD *)buf = 138412290;
          v29 = v4;
          _os_log_impl(
            (void *)&_mh_execute_header,
            log,
            OS_LOG_TYPE_INFO,
            "Instantiating accessory found %@",
            buf,
            0xCu);
        }
        v9 = objc_retainAutoreleasedReturnValue(
               -[UARPDFUUpdater createAccessoryFromService:identifier:](
                 self,
                 "createAccessoryFromService:identifier:",
                 v7,
                 v4,
                 v20));
        if ( v9 )
          objc_msgSend(v5, "addObject:", v9);
        IOObjectRelease(v7);
        objc_release(v9);
        v7 = IOIteratorNext(existing);
      }
      while ( (_DWORD)v7 );
    }
    IOObjectRelease(existing);
  }
  v10 = self->_log;
  if ( os_log_type_enabled(v10, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 138412546;
    v29 = v4;
    v30 = 2112;
    v31 = v5;
    _os_log_impl((void *)&_mh_execute_header, v10, OS_LOG_TYPE_INFO, "%@ accessories found  %@", buf, 0x16u);
  }
  v21 = (char *)v4;
  v24 = 0u;
  v25 = 0u;
  v22 = 0u;
  v23 = 0u;
  v11 = objc_retain(v5);
  v12 = objc_msgSend(v11, "countByEnumeratingWithState:objects:count:", &v22, v27, 16LL);
  if ( v12 )
  {
    v13 = v12;
    v14 = *(_QWORD *)v23;
    do
    {
      for ( i = 0LL; i != v13; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v23 != v14 )
          objc_enumerationMutation(v11);
        v16 = *(void **)(*((_QWORD *)&v22 + 1) + 8LL * (_QWORD)i);
        if ( -[UARPDFUUpdater connectUARPForUARPAccessory:](self, "connectUARPForUARPAccessory:", v16, v20, v21) )
        {
          -[UARPDFUUpdater addAccessory:enableNotification:](self, "addAccessory:enableNotification:", v16, 0LL);
        }
        else
        {
          v17 = self->_log;
          if ( os_log_type_enabled(v17, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)buf = 136315394;
            v29 = "-[UARPDFUUpdater getAccessoriesForIdentifier:]";
            v30 = 2112;
            v31 = v16;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              v17,
              OS_LOG_TYPE_ERROR,
              "%s: Failed to initialize UARP layer for accessory (%@)",
              buf,
              0x16u);
          }
        }
      }
      v13 = objc_msgSend(v11, "countByEnumeratingWithState:objects:count:", &v22, v27, 16LL);
    }
    while ( v13 );
  }
  objc_release(v11);
  v18 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithArray:](&OBJC_CLASS___NSArray, "arrayWithArray:", v11));
  objc_release(v20);
  objc_release(v11);
  objc_release(v21);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v18);
}