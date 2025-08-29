+[UARPDFUUpdater matchingDictionaryForIdentifier:serialNumber:]
id __cdecl +[UARPDFUUpdater matchingDictionaryForIdentifier:serialNumber:](id a1, SEL a2, id a3, id a4)
{
  id v4; // x19
  void *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(
         +[UARPUSBDFUAccessory matchingDictionaryForIdentifier:serialNumber:](
           &OBJC_CLASS___UARPUSBDFUAccessory,
           "matchingDictionaryForIdentifier:serialNumber:",
           a3,
           a4));
  v5 = objc_msgSend(v4, "mutableCopy");
  objc_release(v4);
  objc_msgSend(v5, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, CFSTR("IOMatchLaunchStream"));
  objc_msgSend(v5, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, CFSTR("IOMatchAll"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}