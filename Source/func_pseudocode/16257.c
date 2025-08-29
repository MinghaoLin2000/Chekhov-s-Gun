_UARPStringTempFilesFilepath
id UARPStringTempFilesFilepath()
{
  void *v0; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_100041E18 != -1 )
    dispatch_once(&qword_100041E18, &stru_100030EA0);
  v0 = (void *)qword_100041E10;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v0);
}