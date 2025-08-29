__Z34liteUpdateiCloudPrinterDisplayNameP12NSDictionaryP8NSString
id __fastcall liteUpdateiCloudPrinterDisplayName(NSDictionary *a1, NSString *a2)
{
  return objc_msgSend((id)iCloudDataController, "updateiCloudPrinter:newDisplayName:", a1, a2);
}