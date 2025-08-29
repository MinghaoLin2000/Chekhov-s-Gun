-[SiriNCService _updateAndSignpostAlertStateChange:]
void __cdecl -[SiriNCService _updateAndSignpostAlertStateChange:](SiriNCService *self, SEL a2, signed __int64 a3)
{
  const __CFString *v5; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (unsigned __int64)a3 > 3 )
    v5 = CFSTR("SiriAlertStateIsPresenting");
  else
    v5 = *(&off_100020B10 + a3);
  +[SRFSignpostLog SRFAlertStateDidChange:](&OBJC_CLASS___SRFSignpostLog, "SRFAlertStateDidChange:", v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[SiriNCService setAlertState:](self, "setAlertState:", a3);
}