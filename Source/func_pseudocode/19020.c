-[SiriNCAlertViewController siriViewController:didChangeDialogPhase:]
void __cdecl -[SiriNCAlertViewController siriViewController:didChangeDialogPhase:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  -[SiriNCAlertViewController setLastDialogPhase:](self, "setLastDialogPhase:", a4);
}