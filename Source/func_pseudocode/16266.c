_UARPStringCmapDatabaseFilePath
id UARPStringCmapDatabaseFilePath()
{
  void *v0; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_100041E98 != -1 )
    dispatch_once(&qword_100041E98, &stru_1000311D8);
  v0 = (void *)qword_100041E90;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v0);
}