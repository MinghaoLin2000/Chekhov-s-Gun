-[SiriNCAlertViewController contextAppInfosForSiriViewController:]
id __cdecl -[SiriNCAlertViewController contextAppInfosForSiriViewController:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3)
{
  id v3; // x19
  void *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_alloc_init((Class)&OBJC_CLASS___SiriUIAppInfoRepository);
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "frontmostAppsThatAreNotSiri"));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}