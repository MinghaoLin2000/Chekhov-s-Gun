__Z29getPrintdRPCProtocolInterfacev
id getPrintdRPCProtocolInterface(void)
{
  void *v0; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_1000C3F98 != -1 )
    dispatch_once(&qword_1000C3F98, &stru_10009F308);
  v0 = (void *)qword_1000C3F90;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v0);
}