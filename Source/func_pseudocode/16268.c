_UARPStringPifMetricsFilePath
id UARPStringPifMetricsFilePath()
{
  void *v0; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_100041EB8 != -1 )
    dispatch_once(&qword_100041EB8, &stru_100031230);
  v0 = (void *)qword_100041EB0;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v0);
}