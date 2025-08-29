__Z20liteResetPKCloudDatav
id liteResetPKCloudData(void)
{
  return objc_msgSend((id)iCloudDataController, "resetiCloudData");
}