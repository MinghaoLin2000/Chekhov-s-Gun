+[DeviceServiceSideConnection sharedConnection]
id __cdecl +[DeviceServiceSideConnection sharedConnection](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_1000DA9D0 != -1 )
    dispatch_once(&qword_1000DA9D0, &stru_1000B9698);
  v2 = (void *)qword_1000DA9D8;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v2);
}