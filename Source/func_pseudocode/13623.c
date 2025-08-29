_TSUSetCrashReporterInfo
void TSUSetCrashReporterInfo(const char *a1, ...)
{
  va_list va; // [xsp+20h] [xbp+10h] BYREF

  va_start(va, a1);
  TSUSetCrashReporterInfov((__int64)a1, va);
}