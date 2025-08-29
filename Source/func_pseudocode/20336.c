-[PKiCloudDataController getiCloudPrintersList]
id __cdecl -[PKiCloudDataController getiCloudPrintersList](PKiCloudDataController *self, SEL a2)
{
  NSUbiquitousKeyValueStore *v2; // x19
  id v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[PKiCloudDataController ubiquitousKeyValueStore](self, "ubiquitousKeyValueStore"));
  v3 = objc_retainAutoreleasedReturnValue(-[NSUbiquitousKeyValueStore objectForKey:](v2, "objectForKey:", CFSTR("com.apple.printing.iCloudPrinters")));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}