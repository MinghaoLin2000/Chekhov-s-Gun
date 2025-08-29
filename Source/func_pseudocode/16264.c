_UARPStringCrashAnalyticsDirectoryFilePath
id UARPStringCrashAnalyticsDirectoryFilePath()
{
  void *v0; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_100041E78 != -1 )
    dispatch_once(&qword_100041E78, &stru_1000310D8);
  v0 = (void *)qword_100041E70;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v0);
}