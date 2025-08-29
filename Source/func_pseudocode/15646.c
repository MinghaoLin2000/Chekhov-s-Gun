+[USBDFUUpdater matchingDictionaryHIDForVendorID:productId:serialNumber:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[USBDFUUpdater matchingDictionaryHIDForVendorID:productId:serialNumber:](
        id a1,
        SEL a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        id a5)
{
  __int64 v5; // x21
  __int64 v6; // x24
  id v7; // x19
  id v8; // x20
  NSArray *v9; // x23
  CFMutableDictionaryRef v10; // x22
  NSNumber *v11; // x24
  NSNumber *v12; // x21
  id v14; // [xsp+0h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v5 = a4;
  v6 = a3;
  v7 = objc_retain(a5);
  v8 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
  objc_msgSend(v8, "setObject:forKeyedSubscript:", &off_100024B90, CFSTR("DeviceUsagePage"));
  objc_msgSend(v8, "setObject:forKeyedSubscript:", &off_100024BA8, CFSTR("DeviceUsage"));
  v14 = v8;
  v9 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v14, 1LL));
  v10 = IOServiceMatching("IOHIDDevice");
  -[__CFDictionary setObject:forKeyedSubscript:](v10, "setObject:forKeyedSubscript:", v9, CFSTR("DeviceUsagePairs"));
  v11 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedShort:](&OBJC_CLASS___NSNumber, "numberWithUnsignedShort:", v6));
  -[__CFDictionary setObject:forKeyedSubscript:](v10, "setObject:forKeyedSubscript:", v11, CFSTR("VendorID"));
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedShort:](&OBJC_CLASS___NSNumber, "numberWithUnsignedShort:", v5));
  -[__CFDictionary setObject:forKeyedSubscript:](v10, "setObject:forKeyedSubscript:", v12, CFSTR("ProductID"));
  objc_release(v12);
  if ( v7 )
    -[__CFDictionary setObject:forKeyedSubscript:](
      v10,
      "setObject:forKeyedSubscript:",
      v7,
      CFSTR("kUSBSerialNumberString"));
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}