-[SiriNCAlertViewController didBreakOutOfNotificationCenter]
void __cdecl -[SiriNCAlertViewController didBreakOutOfNotificationCenter](SiriNCAlertViewController *self, SEL a2)
{
  AFUISiriViewController *v2; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  self->_ncBreakOutState = 2LL;
  v2 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  -[AFUISiriViewController didBreakOutOfNotificationCenter](v2, "didBreakOutOfNotificationCenter");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}