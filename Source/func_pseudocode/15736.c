+[UARPUSBDFUAccessory matchingDictionaryForIdentifier:serialNumber:]
id __cdecl +[UARPUSBDFUAccessory matchingDictionaryForIdentifier:serialNumber:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  void *v7; // x21
  void *v8; // x22
  __int64 v9; // x0
  char isKindOfClass; // w23
  void *v11; // x23
  id v12; // x22
  os_log_s *v13; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(
         +[UARPSupportedAccessory findByAppleModelNumber:](
           &OBJC_CLASS___UARPSupportedAccessory,
           "findByAppleModelNumber:",
           v5));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "hardwareID"));
  v9 = objc_opt_class(&OBJC_CLASS___UARPAccessoryHardwareUSB);
  isKindOfClass = objc_opt_isKindOfClass(v8, v9);
  objc_release(v8);
  if ( (isKindOfClass & 1) != 0 )
  {
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "hardwareID"));
    v12 = objc_retainAutoreleasedReturnValue(
            +[USBDFUUpdater matchingDictionaryForVendorID:productId:serialNumber:](
              &OBJC_CLASS___USBDFUUpdater,
              "matchingDictionaryForVendorID:productId:serialNumber:",
              objc_msgSend(v11, "vendorID"),
              objc_msgSend(v11, "productID"),
              v6));
    objc_release(v11);
  }
  else
  {
    v13 = os_log_create("com.apple.accessoryupdater.uarp", "dfuUpdater");
    if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
      sub_100018DD8(v5, v13);
    objc_release(v13);
    v12 = 0LL;
  }
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}