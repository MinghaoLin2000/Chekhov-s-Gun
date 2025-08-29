+[USBDFUUpdater matchingDictionaryForVendorID:productId:serialNumber:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[USBDFUUpdater matchingDictionaryForVendorID:productId:serialNumber:](
        id a1,
        SEL a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        id a5)
{
  __int64 v5; // x22
  __int64 v6; // x23
  id v7; // x19
  CFMutableDictionaryRef v8; // x20
  id v9; // x21
  NSNumber *v10; // x23
  NSNumber *v11; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = a4;
  v6 = a3;
  v7 = objc_retain(a5);
  v8 = IOServiceMatching("IOUSBDevice");
  v9 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
  v10 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedShort:](&OBJC_CLASS___NSNumber, "numberWithUnsignedShort:", v6));
  objc_msgSend(v9, "setObject:forKeyedSubscript:", v10, CFSTR("idVendor"));
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedShort:](&OBJC_CLASS___NSNumber, "numberWithUnsignedShort:", v5));
  objc_msgSend(v9, "setObject:forKeyedSubscript:", v11, CFSTR("idProduct"));
  objc_release(v11);
  if ( v7 )
    objc_msgSend(v9, "setObject:forKeyedSubscript:", v7, CFSTR("kUSBSerialNumberString"));
  -[__CFDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v9, CFSTR("IOPropertyMatch"));
  objc_release(v9);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}