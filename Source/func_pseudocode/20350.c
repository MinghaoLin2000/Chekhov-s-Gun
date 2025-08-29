__Z17liteSetupDefaultsv
__int64 liteSetupDefaults(void)
{
  PKiCloudDataController *v0; // x0
  void *v1; // x8
  __int64 v2; // x8
  __int64 v3; // x1
  size_t v5; // [xsp+0h] [xbp-20h] BYREF
  unsigned int v6; // [xsp+8h] [xbp-18h] BYREF
  Boolean keyExistsAndHasValidFormat; // [xsp+Fh] [xbp-11h] BYREF
  int v8[2]; // [xsp+10h] [xbp-10h] BYREF

  keyExistsAndHasValidFormat = 0;
  *(_QWORD *)v8 = 0x500000006LL;
  v6 = 0;
  v5 = 4LL;
  if ( CFPreferencesGetAppBooleanValue(
         CFSTR("PrintKitPreserveJobFiles"),
         CFSTR(".GlobalPreferences"),
         &keyExistsAndHasValidFormat) )
  {
    PreserveJobFiles = 1;
  }
  if ( CFPreferencesGetAppBooleanValue(
         CFSTR("PrintKitPreserveControlFiles"),
         CFSTR(".GlobalPreferences"),
         &keyExistsAndHasValidFormat) )
  {
    PreserveControlFiles = 1;
  }
  v0 = objc_alloc_init(&OBJC_CLASS___PKiCloudDataController);
  v1 = (void *)iCloudDataController;
  iCloudDataController = (__int64)v0;
  objc_release(v1);
  if ( sysctl(v8, 2u, &v6, &v5, 0LL, 0LL) )
  {
    v6 = 0x7FFFFFFF;
    LODWORD(v2) = 429496729;
  }
  else
  {
    LODWORD(v2) = v6 / 5;
  }
  if ( (unsigned int)v2 >= 0x8000000 )
    v2 = 0x8000000LL;
  else
    v2 = (unsigned int)v2;
  MaxImageMemory = v2;
  MaxRenderMemory = 37748736LL;
  MaxProcessingJobs = 1;
  liteNotifyRunning(1);
  return quantized_notify_post(2LL, v3);
}