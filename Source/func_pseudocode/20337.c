-[PKiCloudDataController setiCloudPrintersList:]
void __cdecl -[PKiCloudDataController setiCloudPrintersList:](PKiCloudDataController *self, SEL a2, id a3)
{
  id v4; // x19
  NSUbiquitousKeyValueStore *v5; // x21
  __CFNotificationCenter *DarwinNotifyCenter; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[PKiCloudDataController ubiquitousKeyValueStore](self, "ubiquitousKeyValueStore"));
  -[NSUbiquitousKeyValueStore setArray:forKey:](v5, "setArray:forKey:", v4, CFSTR("com.apple.printing.iCloudPrinters"));
  objc_release(v5);
  -[PKiCloudDataController synchronizeiCloudData](self, "synchronizeiCloudData");
  DarwinNotifyCenter = CFNotificationCenterGetDarwinNotifyCenter();
  CFNotificationCenterPostNotification(
    DarwinNotifyCenter,
    CFSTR("com.apple.printerTool.iCloud-printers-changed"),
    0LL,
    0LL,
    1u);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}