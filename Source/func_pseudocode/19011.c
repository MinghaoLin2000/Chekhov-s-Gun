-[SiriNCAlertViewController siriViewController:willStartRequestWithOptions:]
id __cdecl -[SiriNCAlertViewController siriViewController:willStartRequestWithOptions:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v4 = objc_retain(a4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}