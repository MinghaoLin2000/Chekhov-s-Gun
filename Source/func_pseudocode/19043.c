-[SiriNCAlertViewController heaterSuggestsDefrosting:]
void __cdecl -[SiriNCAlertViewController heaterSuggestsDefrosting:](SiriNCAlertViewController *self, SEL a2, id a3)
{
  __int64 vars8; // [xsp+8h] [xbp+8h]

  kdebug_trace(722468876LL, 0LL, 0LL, 0LL, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  +[AFConnection defrost](&OBJC_CLASS___AFConnection, "defrost");
}