__Z31liteUpdateiCloudPrinterLocationP12NSDictionaryP8NSString
id __fastcall liteUpdateiCloudPrinterLocation(NSDictionary *a1, NSString *a2)
{
  return objc_msgSend((id)iCloudDataController, "updateiCloudPrinter:newLocation:", a1, a2);
}