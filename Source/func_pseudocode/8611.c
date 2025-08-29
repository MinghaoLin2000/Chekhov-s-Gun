-[MXMSysmonRequest convertToPercent:ncpus:]
double __cdecl -[MXMSysmonRequest convertToPercent:ncpus:](MXMSysmonRequest *self, SEL a2, double a3, int a4)
{
  return a3 / (double)(100 * a4) * 100.0;
}