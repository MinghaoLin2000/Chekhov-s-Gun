-[SiriNCAlertViewController endMyriadAdvertising]
void __cdecl -[SiriNCAlertViewController endMyriadAdvertising](SiriNCAlertViewController *self, SEL a2)
{
  SiriNCService *v2; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController service](self, "service"));
  -[SiriNCService endMyriadAdvertising](v2, "endMyriadAdvertising");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}