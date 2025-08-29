_UARPStringSysdiagnoseDirectoryFilePath
id UARPStringSysdiagnoseDirectoryFilePath()
{
  void *v0; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_100041EA8 != -1 )
    dispatch_once(&qword_100041EA8, &stru_100031208);
  v0 = (void *)qword_100041EA0;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v0);
}