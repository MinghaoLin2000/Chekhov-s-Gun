__Z21liteGetiCloudPrintersv
void *liteGetiCloudPrinters(void)
{
  return objc_msgSend((id)iCloudDataController, "getiCloudPrintersList");
}