-[SiriNCAlertViewController siriViewController:didEndSession:]
void __cdecl -[SiriNCAlertViewController siriViewController:didEndSession:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  +[SiriUIMediaPauser setFanDuckingEnabled:](&OBJC_CLASS___SiriUIMediaPauser, "setFanDuckingEnabled:", 0LL, a4);
}