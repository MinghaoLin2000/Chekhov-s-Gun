-[PKiCloudDataController resetiCloudData]
void __cdecl -[PKiCloudDataController resetiCloudData](PKiCloudDataController *self, SEL a2)
{
  NSUbiquitousKeyValueStore *v3; // x20
  __CFNotificationCenter *DarwinNotifyCenter; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[PKiCloudDataController ubiquitousKeyValueStore](self, "ubiquitousKeyValueStore"));
  -[NSUbiquitousKeyValueStore removeObjectForKey:](
    v3,
    "removeObjectForKey:",
    CFSTR("com.apple.printing.iCloudPrinters"));
  objc_release(v3);
  -[PKiCloudDataController synchronizeiCloudData](self, "synchronizeiCloudData");
  DarwinNotifyCenter = CFNotificationCenterGetDarwinNotifyCenter();
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  CFNotificationCenterPostNotification(
    DarwinNotifyCenter,
    CFSTR("com.apple.printerTool.iCloud-printers-changed"),
    0LL,
    0LL,
    1u);
}