-[UARPDFUUpdater createAccessoryFromService:identifier:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[UARPDFUUpdater createAccessoryFromService:identifier:](
        UARPDFUUpdater *self,
        SEL a2,
        unsigned int a3,
        id a4)
{
  __int64 v4; // x20
  id v6; // x19
  void *v7; // x20
  __int64 v8; // x0
  void *v9; // x21
  __int64 v10; // x0
  void *v11; // x22
  __int64 v12; // x0
  char isKindOfClass; // w23
  UARPUSBDFUAccessory *v14; // x23
  OS_os_log *log; // x21
  _DWORD v17[3]; // [xsp+8h] [xbp-48h] BYREF
  int v18; // [xsp+14h] [xbp-3Ch]
  CFMutableDictionaryRef properties; // [xsp+18h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = *(_QWORD *)&a3;
  v6 = objc_retain(a4);
  properties = 0LL;
  IORegistryEntryCreateCFProperties(v4, &properties, kCFAllocatorDefault, 0);
  if ( properties )
  {
    v7 = objc_retainAutoreleasedReturnValue((id)CFDictionaryGetValue(properties, CFSTR("kUSBProductString")));
    v8 = objc_opt_class(&OBJC_CLASS___NSString);
    if ( (objc_opt_isKindOfClass(v7, v8) & 1) != 0 )
    {
      v9 = objc_retainAutoreleasedReturnValue((id)CFDictionaryGetValue(properties, CFSTR("kUSBSerialNumberString")));
      v10 = objc_opt_class(&OBJC_CLASS___NSString);
      if ( (objc_opt_isKindOfClass(v9, v10) & 1) != 0 )
      {
        v11 = objc_retainAutoreleasedReturnValue((id)CFDictionaryGetValue(properties, CFSTR("bcdDevice")));
        v12 = objc_opt_class(&OBJC_CLASS___NSValue);
        isKindOfClass = objc_opt_isKindOfClass(v11, v12);
        CFRelease(properties);
        if ( (isKindOfClass & 1) != 0 )
        {
          v17[0] = (unsigned __int16)objc_msgSend(v11, "unsignedIntValue") >> 12;
          v17[1] = ((unsigned int)objc_msgSend(v11, "unsignedIntValue") >> 8) & 0xF;
          v17[2] = (unsigned __int8)objc_msgSend(v11, "unsignedIntValue") >> 4;
          LOBYTE(v18) = (unsigned __int8)objc_msgSend(v11, "unsignedIntValue") & 0xF;
          v18 = (unsigned __int8)v18;
          v14 = -[UARPUSBDFUAccessory initWithIdentifier:serialNumber:fwVersion:](
                  objc_alloc(&OBJC_CLASS___UARPUSBDFUAccessory),
                  "initWithIdentifier:serialNumber:fwVersion:",
                  v6,
                  v9,
                  v17);
        }
        else
        {
          v14 = 0LL;
        }
        objc_release(v11);
      }
      else
      {
        CFRelease(properties);
        v14 = 0LL;
      }
      objc_release(v9);
    }
    else
    {
      CFRelease(properties);
      v14 = 0LL;
    }
    objc_release(v7);
  }
  else
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_100018604(v6, v4, log);
    v14 = 0LL;
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}