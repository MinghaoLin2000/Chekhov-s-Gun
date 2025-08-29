-[SiriNCAlertViewController heaterSuggestsPreheating:]
void __cdecl -[SiriNCAlertViewController heaterSuggestsPreheating:](SiriNCAlertViewController *self, SEL a2, id a3)
{
  AFUISiriViewController *v4; // x19
  void *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  kdebug_trace(722468880LL, 0LL, 0LL, 0LL, 0LL);
  v4 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  v5 = objc_retainAutoreleasedReturnValue(-[AFUISiriViewController underlyingConnection](v4, "underlyingConnection"));
  objc_msgSend(v5, "preheatWithStyle:", 1LL);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}