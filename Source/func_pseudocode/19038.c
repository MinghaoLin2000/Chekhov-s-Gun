-[SiriNCAlertViewController _wasDismissed]
void __cdecl -[SiriNCAlertViewController _wasDismissed](SiriNCAlertViewController *self, SEL a2)
{
  AFUISiriViewController *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  -[AFUISiriViewController siriDidDeactivate](v3, "siriDidDeactivate");
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[SiriNCAlertViewController setStatusViewHidden:](self, "setStatusViewHidden:", 0LL);
}